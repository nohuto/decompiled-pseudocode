/*
 * XREFs of WPP_RECORDER_SF_qi @ 0x1C0174070
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0174C5C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C0175DAC (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qi @ 0x1C0174070
 * Reason: Hex-Rays returned no pseudocode for 0x1C0174070
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0174070: mov     r11, rsp
 * 00000001C0174073: mov     [r11+8], rbx
 * 00000001C0174077: mov     [r11+10h], rsi
 * 00000001C017407B: push    rdi
 * 00000001C017407C: sub     rsp, 50h
 * 00000001C0174080: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0174087: mov     esi, 8
 * 00000001C017408C: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0174093: movzx   ebx, r9w
 * 00000001C0174097: mov     eax, [rcx+2Ch]
 * 00000001C017409A: test    al, 1
 * 00000001C017409C: jz      short loc_1C01740DF
 * 00000001C017409E: cmp     byte ptr [rcx+29h], 4
 * 00000001C01740A2: jb      short loc_1C01740DF
 * 00000001C01740A4: and     qword ptr [r11-18h], 0
 * 00000001C01740A9: lea     rdx, [r11+38h]
 * 00000001C01740AD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01740B4: lea     r8, WPP_0d925eab253539aeb97635bf94432844_Traceguids
 * 00000001C01740BB: mov     rcx, [rcx+18h]
 * 00000001C01740BF: mov     r9d, ebx
 * 00000001C01740C2: mov     [r11-20h], rsi
 * 00000001C01740C6: mov     [r11-28h], rdx
 * 00000001C01740CA: lea     rdx, [r11+30h]
 * 00000001C01740CE: mov     [r11-30h], rsi
 * 00000001C01740D2: mov     [r11-38h], rdx
 * 00000001C01740D6: lea     edx, [rsi+23h]
 * 00000001C01740D9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01740DF: and     [rsp+58h+var_10], 0
 * 00000001C01740E5: lea     rax, [rsp+58h+arg_30]
 * 00000001C01740ED: mov     [rsp+58h+var_18], rsi
 * 00000001C01740F2: lea     r9, WPP_0d925eab253539aeb97635bf94432844_Traceguids
 * 00000001C01740F9: mov     [rsp+58h+var_20], rax
 * 00000001C01740FE: mov     edx, 4
 * 00000001C0174103: lea     rax, [rsp+58h+arg_28]
 * 00000001C017410B: mov     [rsp+58h+var_28], rsi
 * 00000001C0174110: mov     [rsp+58h+var_30], rax
 * 00000001C0174115: mov     rcx, rdi
 * 00000001C0174118: mov     [rsp+58h+var_38], bx
 * 00000001C017411D: lea     r8d, [rdx-3]
 * 00000001C0174121: call    cs:__imp_WppAutoLogTrace
 * 00000001C0174128: nop     dword ptr [rax+rax+00h]
 * 00000001C017412D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0174132: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0174137: add     rsp, 50h
 * 00000001C017413B: pop     rdi
 * 00000001C017413C: retn
 */
