/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00DCB94
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0233D00 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BF1C (IsToplevelWindowDesktopComposed.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00DCD20 (IsModelessMenuNotificationWindow.c)
 *     DwmAsyncActivationChange @ 0x1C00DCD60 (DwmAsyncActivationChange.c)
 *     xxxDrawCaptionBar @ 0x1C00DCE08 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00DD2EC (GetWindowBorders.c)
 *     xxxMenuBarDraw @ 0x1C024D514 (xxxMenuBarDraw.c)
 */

/*
 * Hex-Rays decompilation failed for xxxDWP_DoNCActivate @ 0x1C00DCB94
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DCB94
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DCB94: mov     rax, rsp
 * 00000001C00DCB97: mov     [rax+8], rbx
 * 00000001C00DCB9B: mov     [rax+10h], rbp
 * 00000001C00DCB9F: mov     [rax+18h], rsi
 * 00000001C00DCBA3: mov     [rax+20h], rdi
 * 00000001C00DCBA7: push    r12
 * 00000001C00DCBA9: push    r14
 * 00000001C00DCBAB: push    r15
 * 00000001C00DCBAD: sub     rsp, 20h
 * 00000001C00DCBB1: mov     r14d, edx
 * 00000001C00DCBB4: xor     r12d, r12d
 * 00000001C00DCBB7: mov     ebp, 100Ch
 * 00000001C00DCBBC: mov     rsi, r8
 * 00000001C00DCBBF: mov     rbx, rcx
 * 00000001C00DCBC2: mov     r15d, ebp
 * 00000001C00DCBC5: and     r14d, 1
 * 00000001C00DCBC9: jnz     loc_1C00DCD08
 * 00000001C00DCBCF: test    dl, 2
 * 00000001C00DCBD2: jnz     short loc_1C00DCBE1
 * 00000001C00DCBD4: call    IsModelessMenuNotificationWindow
 * 00000001C00DCBD9: test    eax, eax
 * 00000001C00DCBDB: jnz     loc_1C00DCD08
 * 00000001C00DCBE1: mov     ecx, r12d
 * 00000001C00DCBE4: mov     r8d, 40h ; '@'
 * 00000001C00DCBEA: mov     rdx, rbx
 * 00000001C00DCBED: lea     r9d, [r8-3Fh]
 * 00000001C00DCBF1: call    SetOrClrWF
 * 00000001C00DCBF6: cmp     rsi, 0FFFFFFFFFFFFFFFFh
 * 00000001C00DCBFA: jz      loc_1C00DCCB8
 * 00000001C00DCC00: mov     rdx, [rbx+28h]
 * 00000001C00DCC04: mov     r8b, [rdx+1Fh]
 * 00000001C00DCC08: test    r8b, 10h
 * 00000001C00DCC0C: jz      loc_1C00DCCB8
 * 00000001C00DCC12: test    byte ptr [rdx+11h], 1
 * 00000001C00DCC16: jnz     loc_1C00DCCB8
 * 00000001C00DCC1C: mov     rax, cs:__imp_gpsi
 * 00000001C00DCC23: movzx   edi, r12w
 * 00000001C00DCC27: mov     rcx, [rax]
 * 00000001C00DCC2A: mov     eax, [rcx+11E4h]
 * 00000001C00DCC30: cmp     [rcx+11E0h], eax
 * 00000001C00DCC36: jz      loc_1C01A97D6
 * 00000001C00DCC3C: mov     edi, ebp
 * 00000001C00DCC3E: test    r8b, 20h
 * 00000001C00DCC42: jnz     short loc_1C00DCC4E
 * 00000001C00DCC44: test    byte ptr [rdx+1Eh], 4
 * 00000001C00DCC48: jnz     loc_1C01A97ED
 * 00000001C00DCC4E: test    di, di
 * 00000001C00DCC51: jz      short loc_1C00DCCB8
 * 00000001C00DCC53: mov     rcx, rsi
 * 00000001C00DCC56: call    cs:__imp_UserValidateCopyRgn
 * 00000001C00DCC5D: nop     dword ptr [rax+rax+00h]
 * 00000001C00DCC62: mov     r8d, 10001h
 * 00000001C00DCC68: mov     rcx, rbx
 * 00000001C00DCC6B: mov     rdx, rax
 * 00000001C00DCC6E: mov     rbp, rax
 * 00000001C00DCC71: call    cs:__imp__GetDCEx
 * 00000001C00DCC78: nop     dword ptr [rax+rax+00h]
 * 00000001C00DCC7D: mov     rsi, rax
 * 00000001C00DCC80: test    rax, rax
 * 00000001C00DCC83: jz      loc_1C01A982E
 * 00000001C00DCC89: mov     rax, [rbx+28h]
 * 00000001C00DCC8D: test    byte ptr [rax+10h], 1
 * 00000001C00DCC91: jnz     loc_1C01A980C
 * 00000001C00DCC97: movzx   r8d, di
 * 00000001C00DCC9B: mov     rdx, rsi
 * 00000001C00DCC9E: or      r8d, r15d
 * 00000001C00DCCA1: mov     rcx, rbx
 * 00000001C00DCCA4: call    xxxDrawCaptionBar
 * 00000001C00DCCA9: mov     rcx, rsi
 * 00000001C00DCCAC: call    cs:__imp__ReleaseDC
 * 00000001C00DCCB3: nop     dword ptr [rax+rax+00h]
 * 00000001C00DCCB8: mov     rcx, rbx
 * 00000001C00DCCBB: call    IsToplevelWindowDesktopComposed
 * 00000001C00DCCC0: test    eax, eax
 * 00000001C00DCCC2: jz      short loc_1C00DCCE8
 * 00000001C00DCCC4: mov     rax, [rbx+28h]
 * 00000001C00DCCC8: test    byte ptr [rax+1Ah], 8
 * 00000001C00DCCCC: jz      short loc_1C00DCCE8
 * 00000001C00DCCCE: call    cs:__imp_ReferenceDwmApiPort
 * 00000001C00DCCD5: nop     dword ptr [rax+rax+00h]
 * 00000001C00DCCDA: mov     rdx, [rbx]
 * 00000001C00DCCDD: mov     r8d, r14d
 * 00000001C00DCCE0: mov     rcx, rax; Object
 * 00000001C00DCCE3: call    DwmAsyncActivationChange
 * 00000001C00DCCE8: mov     rbx, [rsp+38h+arg_0]
 * 00000001C00DCCED: mov     rbp, [rsp+38h+arg_8]
 * 00000001C00DCCF2: mov     rsi, [rsp+38h+arg_10]
 * 00000001C00DCCF7: mov     rdi, [rsp+38h+arg_18]
 * 00000001C00DCCFC: add     rsp, 20h
 * 00000001C00DCD00: pop     r15
 * 00000001C00DCD02: pop     r14
 * 00000001C00DCD04: pop     r12
 * 00000001C00DCD06: retn
 * 00000001C00DCD08: mov     ecx, 1
 * 00000001C00DCD0D: mov     r15d, 100Dh
 * 00000001C00DCD13: jmp     loc_1C00DCBE4
 * 00000001C01A97D6: mov     eax, [rcx+1224h]
 * 00000001C01A97DC: cmp     [rcx+11FCh], eax
 * 00000001C01A97E2: jz      loc_1C00DCC3E
 * 00000001C01A97E8: jmp     loc_1C00DCC3C
 * 00000001C01A97ED: mov     eax, [rcx+1204h]
 * 00000001C01A97F3: cmp     [rcx+1200h], eax
 * 00000001C01A97F9: jz      loc_1C00DCC4E
 * 00000001C01A97FF: mov     eax, 8000h
 * 00000001C01A9804: or      di, ax
 * 00000001C01A9807: jmp     loc_1C00DCC4E
 * 00000001C01A980C: mov     edx, [rax+18h]
 * 00000001C01A980F: mov     ecx, [rax+1Ch]
 * 00000001C01A9812: call    GetWindowBorders
 * 00000001C01A9817: mov     r9d, eax
 * 00000001C01A981A: mov     r8d, eax
 * 00000001C01A981D: mov     rdx, rsi
 * 00000001C01A9820: mov     rcx, rbx
 * 00000001C01A9823: call    xxxMenuBarDraw
 * 00000001C01A9828: nop
 * 00000001C01A9829: jmp     loc_1C00DCC97
 * 00000001C01A982E: mov     rcx, rbp
 * 00000001C01A9831: call    cs:__imp_GreDeleteObject
 * 00000001C01A9838: nop     dword ptr [rax+rax+00h]
 * 00000001C01A983D: nop
 * 00000001C01A983E: jmp     loc_1C00DCCB8
 */
