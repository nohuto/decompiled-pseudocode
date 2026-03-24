/*
 * XREFs of WPP_RECORDER_SF_qdd @ 0x1C0015C18
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C0009C0C (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000A530 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00147B0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0015F74 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     ESM_LogUnhandledEvent @ 0x1C004E638 (ESM_LogUnhandledEvent.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006EC08 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdd @ 0x1C0015C18
 * Reason: Hex-Rays returned no pseudocode for 0x1C0015C18
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0015C18: mov     [rsp+arg_0], rbx
 * 00000001C0015C1D: mov     [rsp+arg_8], rbp
 * 00000001C0015C22: mov     [rsp+arg_10], rsi
 * 00000001C0015C27: push    rdi
 * 00000001C0015C28: push    r14
 * 00000001C0015C2A: push    r15
 * 00000001C0015C2C: sub     rsp, 60h
 * 00000001C0015C30: mov     r14d, r8d
 * 00000001C0015C33: mov     r15, rcx
 * 00000001C0015C36: mov     edi, r8d
 * 00000001C0015C39: shr     rdi, 10h
 * 00000001C0015C3D: movzx   esi, dl
 * 00000001C0015C40: lea     ebx, [r14-1]
 * 00000001C0015C44: movzx   ebp, r9w
 * 00000001C0015C48: mov     r10d, ebx
 * 00000001C0015C4B: and     ebx, 1Fh
 * 00000001C0015C4E: shr     r10, 5
 * 00000001C0015C52: lea     rax, [rdi+rdi*4]
 * 00000001C0015C56: and     r10d, 7FFh
 * 00000001C0015C5D: mov     edx, ebx
 * 00000001C0015C5F: mov     ebx, 4
 * 00000001C0015C64: lea     r11, [r10+rax*4]
 * 00000001C0015C68: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0015C6F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0015C74: bt      eax, edx
 * 00000001C0015C77: jb      loc_1C0021308
 * 00000001C0015C7D: and     [rsp+78h+var_20], 0
 * 00000001C0015C83: lea     rax, [rsp+78h+arg_38]
 * 00000001C0015C8B: mov     r9, [rsp+78h+arg_20]
 * 00000001C0015C93: mov     r8d, r14d
 * 00000001C0015C96: mov     [rsp+78h+var_28], rbx
 * 00000001C0015C9B: mov     edx, esi
 * 00000001C0015C9D: mov     [rsp+78h+var_30], rax
 * 00000001C0015CA2: mov     rcx, r15
 * 00000001C0015CA5: mov     [rsp+78h+var_38], rbx
 * 00000001C0015CAA: lea     rax, [rsp+78h+arg_30]
 * 00000001C0015CB2: mov     [rsp+78h+var_40], rax
 * 00000001C0015CB7: lea     rax, [rsp+78h+arg_28]
 * 00000001C0015CBF: mov     [rsp+78h+var_48], 8
 * 00000001C0015CC8: mov     [rsp+78h+var_50], rax
 * 00000001C0015CCD: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0015CD2: call    cs:__imp_WppAutoLogTrace
 * 00000001C0015CD9: nop     dword ptr [rax+rax+00h]
 * 00000001C0015CDE: lea     r11, [rsp+78h+var_18]
 * 00000001C0015CE3: mov     rbx, [r11+20h]
 * 00000001C0015CE7: mov     rbp, [r11+28h]
 * 00000001C0015CEB: mov     rsi, [r11+30h]
 * 00000001C0015CEF: mov     rsp, r11
 * 00000001C0015CF2: pop     r15
 * 00000001C0015CF4: pop     r14
 * 00000001C0015CF6: pop     rdi
 * 00000001C0015CF7: retn
 * 00000001C0021308: lea     rcx, [rdi+rdi*4]
 * 00000001C002130C: add     rcx, rcx
 * 00000001C002130F: cmp     [r10+rcx*8+29h], sil
 * 00000001C0021314: jb      loc_1C0015C7D
 * 00000001C002131A: and     [rsp+78h+var_28], 0
 * 00000001C0021320: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0021328: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002132F: mov     r9d, ebp
 * 00000001C0021332: mov     r8, [rsp+78h+arg_20]
 * 00000001C002133A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002133F: mov     [rsp+78h+var_30], rbx
 * 00000001C0021344: mov     [rsp+78h+var_38], rdx
 * 00000001C0021349: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0021351: mov     [rsp+78h+var_40], rbx
 * 00000001C0021356: mov     [rsp+78h+var_48], rdx
 * 00000001C002135B: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0021363: mov     [rsp+78h+var_50], 8
 * 00000001C002136C: mov     [rsp+78h+var_58], rdx
 * 00000001C0021371: mov     edx, 2Bh ; '+'
 * 00000001C0021376: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002137C: nop
 * 00000001C002137D: jmp     loc_1C0015C7D
 */
