NEW_INSTRUCTIONS(cmd_hlt , 0 , ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_HLT)
NEW_INSTRUCTIONS(dir_org , 1 , ASM_ORG            , DASM_VENOM          , PROC_VENOM)
NEW_INSTRUCTIONS(cmd_push, 2 , ASM_PUSH           , DASM_PUSH           , PROC_PUSH)
NEW_INSTRUCTIONS(cmd_pop , 3 , ASM_POP            , DASM_POP            , PROC_POP)
NEW_INSTRUCTIONS(cmd_in  , 4 , ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_IN)
NEW_INSTRUCTIONS(cmd_sqrt, 5 , ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_SQRT)
NEW_INSTRUCTIONS(cmd_sin , 6 , ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_SIN) 
NEW_INSTRUCTIONS(cmd_cos , 7 , ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_COS)
NEW_INSTRUCTIONS(cmd_add , 8 , ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_ADD)
NEW_INSTRUCTIONS(cmd_sub , 9 , ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_SUB)
NEW_INSTRUCTIONS(cmd_mul , 10, ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_MUL)
NEW_INSTRUCTIONS(cmd_div , 11, ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_DIV)
NEW_INSTRUCTIONS(cmd_jmp , 12, ASM_JMP_and_CALL   , DASM_JMP_and_CALL   , PROC_JMP)
NEW_INSTRUCTIONS(cmd_jb  , 13, ASM_JMP_and_CALL   , DASM_JMP_and_CALL   , PROC_JB)
NEW_INSTRUCTIONS(cmd_jbe , 14, ASM_JMP_and_CALL   , DASM_JMP_and_CALL   , PROC_JBE)
NEW_INSTRUCTIONS(cmd_ja  , 15, ASM_JMP_and_CALL   , DASM_JMP_and_CALL   , PROC_JA)
NEW_INSTRUCTIONS(cmd_jae , 16, ASM_JMP_and_CALL   , DASM_JMP_and_CALL   , PROC_JAE)
NEW_INSTRUCTIONS(cmd_je  , 17, ASM_JMP_and_CALL   , DASM_JMP_and_CALL   , PROC_JE)
NEW_INSTRUCTIONS(cmd_jne , 18, ASM_JMP_and_CALL   , DASM_JMP_and_CALL   , PROC_JNE)
NEW_INSTRUCTIONS(cmd_call, 19, ASM_JMP_and_CALL   , DASM_JMP_and_CALL   , PROC_CALL)
NEW_INSTRUCTIONS(cmd_ret , 20, ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_RET)
NEW_INSTRUCTIONS(cmd_out , 21, ASM_CMD_WITHOUT_PRM, DASM_CMD_WITHOUT_PRM, PROC_OUT)