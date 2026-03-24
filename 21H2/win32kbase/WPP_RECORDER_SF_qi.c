/*
 * XREFs of WPP_RECORDER_SF_qi @ 0x1C0174140
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0174D2C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C0175E7C (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qi @ 0x1C0174140
 * Reason: Hex-Rays returned no pseudocode for 0x1C0174140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0174140: mov     r11, rsp
 * 00000001C0174143: mov     [r11+8], rbx
 * 00000001C0174147: mov     [r11+10h], rsi
 * 00000001C017414B: push    rdi
 * 00000001C017414C: sub     rsp, 50h
 * 00000001C0174150: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0174157: mov     esi, 8
 * 00000001C017415C: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0174163: movzx   ebx, r9w
 * 00000001C0174167: mov     eax, [rcx+2Ch]
 * 00000001C017416A: test    al, 1
 * 00000001C017416C: jz      short loc_1C01741AF
 * 00000001C017416E: cmp     byte ptr [rcx+29h], 4
 * 00000001C0174172: jb      short loc_1C01741AF
 * 00000001C0174174: and     qword ptr [r11-18h], 0
 * 00000001C0174179: lea     rdx, [r11+38h]
 * 00000001C017417D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174184: lea     r8, WPP_0d925eab253539aeb97635bf94432844_Traceguids
 * 00000001C017418B: mov     rcx, [rcx+18h]
 * 00000001C017418F: mov     r9d, ebx
 * 00000001C0174192: mov     [r11-20h], rsi
 * 00000001C0174196: mov     [r11-28h], rdx
 * 00000001C017419A: lea     rdx, [r11+30h]
 * 00000001C017419E: mov     [r11-30h], rsi
 * 00000001C01741A2: mov     [r11-38h], rdx
 * 00000001C01741A6: lea     edx, [rsi+23h]
 * 00000001C01741A9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01741AF: and     [rsp+58h+var_10], 0
 * 00000001C01741B5: lea     rax, [rsp+58h+arg_30]
 * 00000001C01741BD: mov     [rsp+58h+var_18], rsi
 * 00000001C01741C2: lea     r9, WPP_0d925eab253539aeb97635bf94432844_Traceguids
 * 00000001C01741C9: mov     [rsp+58h+var_20], rax
 * 00000001C01741CE: mov     edx, 4
 * 00000001C01741D3: lea     rax, [rsp+58h+arg_28]
 * 00000001C01741DB: mov     [rsp+58h+var_28], rsi
 * 00000001C01741E0: mov     [rsp+58h+var_30], rax
 * 00000001C01741E5: mov     rcx, rdi
 * 00000001C01741E8: mov     [rsp+58h+var_38], bx
 * 00000001C01741ED: lea     r8d, [rdx-3]
 * 00000001C01741F1: call    cs:__imp_WppAutoLogTrace
 * 00000001C01741F8: nop     dword ptr [rax+rax+00h]
 * 00000001C01741FD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0174202: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0174207: add     rsp, 50h
 * 00000001C017420B: pop     rdi
 * 00000001C017420C: retn
 */
