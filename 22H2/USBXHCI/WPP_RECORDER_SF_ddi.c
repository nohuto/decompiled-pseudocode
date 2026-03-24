/*
 * XREFs of WPP_RECORDER_SF_DDi @ 0x1C003FA6C
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     Isoch_RetrieveNextStage @ 0x1C0002D30 (Isoch_RetrieveNextStage.c)
 *     Isoch_TransferData_Initialize @ 0x1C00035F0 (Isoch_TransferData_Initialize.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 *     TR_ValidateSecureTransferType @ 0x1C000D364 (TR_ValidateSecureTransferType.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C003FEC4 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0040150 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0040300 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C0040490 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0042EF0 (Isoch_WdfEvtRequestCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDi @ 0x1C003FA6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003FA6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003FA6C: mov     r11, rsp
 * 00000001C003FA6F: mov     [r11+8], rbx
 * 00000001C003FA73: mov     [r11+10h], rbp
 * 00000001C003FA77: mov     [r11+18h], rsi
 * 00000001C003FA7B: push    rdi
 * 00000001C003FA7C: sub     rsp, 60h
 * 00000001C003FA80: mov     rsi, rcx
 * 00000001C003FA83: movzx   edi, r9w
 * 00000001C003FA87: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003FA8E: mov     ebp, 4
 * 00000001C003FA93: movzx   ebx, dl
 * 00000001C003FA96: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003FA9D: jz      short loc_1C003FAF0
 * 00000001C003FA9F: cmp     [rcx+29h], bl
 * 00000001C003FAA2: jb      short loc_1C003FAF0
 * 00000001C003FAA4: and     qword ptr [r11-18h], 0
 * 00000001C003FAA9: lea     rdx, [r11+40h]
 * 00000001C003FAAD: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003FAB4: mov     r9d, edi
 * 00000001C003FAB7: mov     r8, [rsp+68h+arg_20]
 * 00000001C003FABF: mov     rcx, [rcx+18h]
 * 00000001C003FAC3: mov     qword ptr [r11-20h], 8
 * 00000001C003FACB: mov     [r11-28h], rdx
 * 00000001C003FACF: lea     rdx, [r11+38h]
 * 00000001C003FAD3: mov     [r11-30h], rbp
 * 00000001C003FAD7: mov     [r11-38h], rdx
 * 00000001C003FADB: lea     rdx, [r11+30h]
 * 00000001C003FADF: mov     [r11-40h], rbp
 * 00000001C003FAE3: mov     [r11-48h], rdx
 * 00000001C003FAE7: lea     edx, [rbp+27h]
 * 00000001C003FAEA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003FAF0: and     [rsp+68h+var_10], 0
 * 00000001C003FAF6: lea     rax, [rsp+68h+arg_38]
 * 00000001C003FAFE: mov     r9, [rsp+68h+arg_20]
 * 00000001C003FB06: mov     r8d, 0Eh
 * 00000001C003FB0C: mov     [rsp+68h+var_18], 8
 * 00000001C003FB15: mov     edx, ebx
 * 00000001C003FB17: mov     [rsp+68h+var_20], rax
 * 00000001C003FB1C: mov     rcx, rsi
 * 00000001C003FB1F: mov     [rsp+68h+var_28], rbp
 * 00000001C003FB24: lea     rax, [rsp+68h+arg_30]
 * 00000001C003FB2C: mov     [rsp+68h+var_30], rax
 * 00000001C003FB31: lea     rax, [rsp+68h+arg_28]
 * 00000001C003FB39: mov     [rsp+68h+var_38], rbp
 * 00000001C003FB3E: mov     [rsp+68h+var_40], rax
 * 00000001C003FB43: mov     [rsp+68h+var_48], di
 * 00000001C003FB48: call    cs:__imp_WppAutoLogTrace
 * 00000001C003FB4F: nop     dword ptr [rax+rax+00h]
 * 00000001C003FB54: lea     r11, [rsp+68h+var_8]
 * 00000001C003FB59: mov     rbx, [r11+10h]
 * 00000001C003FB5D: mov     rbp, [r11+18h]
 * 00000001C003FB61: mov     rsi, [r11+20h]
 * 00000001C003FB65: mov     rsp, r11
 * 00000001C003FB68: pop     rdi
 * 00000001C003FB69: retn
 */
