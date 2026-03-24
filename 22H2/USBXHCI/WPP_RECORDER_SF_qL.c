/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C002F170
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     Controller_D0Exit @ 0x1C000B38C (Controller_D0Exit.c)
 *     Interrupter_D0ExitStopped @ 0x1C000B76C (Interrupter_D0ExitStopped.c)
 *     Interrupter_D0Entry @ 0x1C0014640 (Interrupter_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C002DDEC (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C002E080 (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E790 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C002F170
 * Reason: Hex-Rays returned no pseudocode for 0x1C002F170
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002F170: mov     [rsp+arg_0], rbx
 * 00000001C002F175: mov     [rsp+arg_8], rbp
 * 00000001C002F17A: mov     [rsp+arg_10], rsi
 * 00000001C002F17F: push    rdi
 * 00000001C002F180: push    r14
 * 00000001C002F182: push    r15
 * 00000001C002F184: sub     rsp, 50h
 * 00000001C002F188: mov     r14d, r8d
 * 00000001C002F18B: mov     r15, rcx
 * 00000001C002F18E: mov     edi, r8d
 * 00000001C002F191: shr     rdi, 10h
 * 00000001C002F195: movzx   esi, dl
 * 00000001C002F198: lea     ebx, [r14-1]
 * 00000001C002F19C: movzx   ebp, r9w
 * 00000001C002F1A0: mov     r10d, ebx
 * 00000001C002F1A3: and     ebx, 1Fh
 * 00000001C002F1A6: shr     r10, 5
 * 00000001C002F1AA: lea     rax, [rdi+rdi*4]
 * 00000001C002F1AE: and     r10d, 7FFh
 * 00000001C002F1B5: mov     edx, ebx
 * 00000001C002F1B7: mov     ebx, 4
 * 00000001C002F1BC: lea     r11, [r10+rax*4]
 * 00000001C002F1C0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C002F1C7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C002F1CC: bt      eax, edx
 * 00000001C002F1CF: jnb     short loc_1C002F22D
 * 00000001C002F1D1: lea     rcx, [rdi+rdi*4]
 * 00000001C002F1D5: add     rcx, rcx
 * 00000001C002F1D8: cmp     [r10+rcx*8+29h], sil
 * 00000001C002F1DD: jb      short loc_1C002F22D
 * 00000001C002F1DF: and     [rsp+68h+var_28], 0
 * 00000001C002F1E5: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002F1ED: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002F1F4: mov     r9d, ebp
 * 00000001C002F1F7: mov     r8, [rsp+68h+arg_20]
 * 00000001C002F1FF: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002F204: mov     [rsp+68h+var_30], rbx
 * 00000001C002F209: mov     [rsp+68h+var_38], rdx
 * 00000001C002F20E: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002F216: mov     [rsp+68h+var_40], 8
 * 00000001C002F21F: mov     [rsp+68h+var_48], rdx
 * 00000001C002F224: lea     edx, [rbx+27h]
 * 00000001C002F227: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F22D: and     [rsp+68h+var_20], 0
 * 00000001C002F233: lea     rax, [rsp+68h+arg_30]
 * 00000001C002F23B: mov     r9, [rsp+68h+arg_20]
 * 00000001C002F243: mov     r8d, r14d
 * 00000001C002F246: mov     [rsp+68h+var_28], rbx
 * 00000001C002F24B: mov     edx, esi
 * 00000001C002F24D: mov     [rsp+68h+var_30], rax
 * 00000001C002F252: mov     rcx, r15
 * 00000001C002F255: lea     rax, [rsp+68h+arg_28]
 * 00000001C002F25D: mov     [rsp+68h+var_38], 8
 * 00000001C002F266: mov     [rsp+68h+var_40], rax
 * 00000001C002F26B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C002F270: call    cs:__imp_WppAutoLogTrace
 * 00000001C002F277: nop     dword ptr [rax+rax+00h]
 * 00000001C002F27C: lea     r11, [rsp+68h+var_18]
 * 00000001C002F281: mov     rbx, [r11+20h]
 * 00000001C002F285: mov     rbp, [r11+28h]
 * 00000001C002F289: mov     rsi, [r11+30h]
 * 00000001C002F28D: mov     rsp, r11
 * 00000001C002F290: pop     r15
 * 00000001C002F292: pop     r14
 * 00000001C002F294: pop     rdi
 * 00000001C002F295: retn
 */
