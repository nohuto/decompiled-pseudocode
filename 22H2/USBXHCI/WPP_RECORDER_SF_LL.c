/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C00355EC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_ReportFatalError @ 0x1C0032BA0 (Controller_ReportFatalError.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0074878 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C00355EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00355EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00355EC: mov     [rsp+arg_0], rbx
 * 00000001C00355F1: mov     [rsp+arg_8], rbp
 * 00000001C00355F6: mov     [rsp+arg_10], rsi
 * 00000001C00355FB: push    rdi
 * 00000001C00355FC: push    r14
 * 00000001C00355FE: push    r15
 * 00000001C0035600: sub     rsp, 50h
 * 00000001C0035604: mov     r14d, r8d
 * 00000001C0035607: mov     r15, rcx
 * 00000001C003560A: mov     edi, r8d
 * 00000001C003560D: shr     rdi, 10h
 * 00000001C0035611: movzx   esi, dl
 * 00000001C0035614: lea     ebx, [r14-1]
 * 00000001C0035618: movzx   ebp, r9w
 * 00000001C003561C: mov     r10d, ebx
 * 00000001C003561F: and     ebx, 1Fh
 * 00000001C0035622: shr     r10, 5
 * 00000001C0035626: lea     rax, [rdi+rdi*4]
 * 00000001C003562A: and     r10d, 7FFh
 * 00000001C0035631: mov     edx, ebx
 * 00000001C0035633: mov     ebx, 4
 * 00000001C0035638: lea     r11, [r10+rax*4]
 * 00000001C003563C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0035643: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0035648: bt      eax, edx
 * 00000001C003564B: jnb     short loc_1C00356A5
 * 00000001C003564D: lea     rcx, [rdi+rdi*4]
 * 00000001C0035651: add     rcx, rcx
 * 00000001C0035654: cmp     [r10+rcx*8+29h], sil
 * 00000001C0035659: jb      short loc_1C00356A5
 * 00000001C003565B: and     [rsp+68h+var_28], 0
 * 00000001C0035661: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0035669: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035670: mov     r9d, ebp
 * 00000001C0035673: mov     r8, [rsp+68h+arg_20]
 * 00000001C003567B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0035680: mov     [rsp+68h+var_30], rbx
 * 00000001C0035685: mov     [rsp+68h+var_38], rdx
 * 00000001C003568A: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0035692: mov     [rsp+68h+var_40], rbx
 * 00000001C0035697: mov     [rsp+68h+var_48], rdx
 * 00000001C003569C: lea     edx, [rbx+27h]
 * 00000001C003569F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00356A5: and     [rsp+68h+var_20], 0
 * 00000001C00356AB: lea     rax, [rsp+68h+arg_30]
 * 00000001C00356B3: mov     r9, [rsp+68h+arg_20]
 * 00000001C00356BB: mov     r8d, r14d
 * 00000001C00356BE: mov     [rsp+68h+var_28], rbx
 * 00000001C00356C3: mov     edx, esi
 * 00000001C00356C5: mov     [rsp+68h+var_30], rax
 * 00000001C00356CA: mov     rcx, r15
 * 00000001C00356CD: lea     rax, [rsp+68h+arg_28]
 * 00000001C00356D5: mov     [rsp+68h+var_38], rbx
 * 00000001C00356DA: mov     [rsp+68h+var_40], rax
 * 00000001C00356DF: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00356E4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00356EB: nop     dword ptr [rax+rax+00h]
 * 00000001C00356F0: lea     r11, [rsp+68h+var_18]
 * 00000001C00356F5: mov     rbx, [r11+20h]
 * 00000001C00356F9: mov     rbp, [r11+28h]
 * 00000001C00356FD: mov     rsi, [r11+30h]
 * 00000001C0035701: mov     rsp, r11
 * 00000001C0035704: pop     r15
 * 00000001C0035706: pop     r14
 * 00000001C0035708: pop     rdi
 * 00000001C0035709: retn
 */
