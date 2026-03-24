/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0002A40
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000DB20 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DF80 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002ED0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0002A40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002A40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002A40: mov     [rsp+arg_0], rbx
 * 00000001C0002A45: mov     [rsp+arg_8], rbp
 * 00000001C0002A4A: mov     [rsp+arg_10], rsi
 * 00000001C0002A4F: mov     [rsp+arg_18], rdi
 * 00000001C0002A54: push    r12
 * 00000001C0002A56: push    r14
 * 00000001C0002A58: push    r15
 * 00000001C0002A5A: sub     rsp, 40h
 * 00000001C0002A5E: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C0002A65: lea     r12, aNull_0; "NULL"
 * 00000001C0002A6C: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0002A74: mov     rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0002A7B: movzx   r14d, r9w
 * 00000001C0002A7F: mov     r15, rcx
 * 00000001C0002A82: movzx   ebp, dl
 * 00000001C0002A85: mov     eax, [r8+2Ch]
 * 00000001C0002A89: lea     esi, [rbx+0Bh]
 * 00000001C0002A8C: test    al, 1
 * 00000001C0002A8E: jnz     loc_1C000382E
 * 00000001C0002A94: test    rdi, rdi
 * 00000001C0002A97: jz      short loc_1C0002B0B
 * 00000001C0002A99: nop     dword ptr [rax+00000000h]
 * 00000001C0002AA0: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0002AA6: lea     rbx, [rbx+1]
 * 00000001C0002AAA: jnz     short loc_1C0002AA0
 * 00000001C0002AAC: lea     rsi, ds:2[rbx*2]
 * 00000001C0002AB4: mov     [rsp+58h+var_20], 0
 * 00000001C0002ABD: lea     r9, WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids
 * 00000001C0002AC4: mov     [rsp+58h+var_28], rsi
 * 00000001C0002AC9: mov     r8d, 1
 * 00000001C0002ACF: mov     [rsp+58h+var_30], rdi
 * 00000001C0002AD4: mov     edx, ebp
 * 00000001C0002AD6: mov     rcx, r15
 * 00000001C0002AD9: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C0002ADF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002AE6: nop     dword ptr [rax+rax+00h]
 * 00000001C0002AEB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002AF0: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0002AF5: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0002AFA: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0002AFF: add     rsp, 40h
 * 00000001C0002B03: pop     r15
 * 00000001C0002B05: pop     r14
 * 00000001C0002B07: pop     r12
 * 00000001C0002B09: retn
 * 00000001C0002B0B: mov     rdi, r12
 * 00000001C0002B0E: jmp     short loc_1C0002AB4
 * 00000001C000382E: cmp     [r8+29h], bpl
 * 00000001C0003832: jb      loc_1C0002A94
 * 00000001C0003838: test    rdi, rdi
 * 00000001C000383B: jz      short loc_1C0003856
 * 00000001C000383D: mov     rax, rbx
 * 00000001C0003840: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C0003846: lea     rax, [rax+1]
 * 00000001C000384A: jnz     short loc_1C0003840
 * 00000001C000384C: lea     rdx, ds:2[rax*2]
 * 00000001C0003854: jmp     short loc_1C0003859
 * 00000001C0003856: mov     rdx, rsi
 * 00000001C0003859: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003860: lea     r8, WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids
 * 00000001C0003867: test    rdi, rdi
 * 00000001C000386A: mov     [rsp+58h+var_28], 0
 * 00000001C0003873: mov     [rsp+58h+var_30], rdx
 * 00000001C0003878: mov     rcx, rdi
 * 00000001C000387B: cmovz   rcx, r12
 * 00000001C000387F: mov     r9d, r14d
 * 00000001C0003882: mov     [rsp+58h+var_38], rcx
 * 00000001C0003887: mov     edx, 2Bh ; '+'
 * 00000001C000388C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0003893: mov     rcx, [rcx+18h]
 * 00000001C0003897: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000389D: nop
 * 00000001C000389E: jmp     loc_1C0002A94
 */
