/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00DC844
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0233740 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BE7C (IsToplevelWindowDesktopComposed.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00DC9D0 (IsModelessMenuNotificationWindow.c)
 *     DwmAsyncActivationChange @ 0x1C00DCA10 (DwmAsyncActivationChange.c)
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00DCF9C (GetWindowBorders.c)
 *     xxxMenuBarDraw @ 0x1C024CF54 (xxxMenuBarDraw.c)
 */

/*
 * Hex-Rays decompilation failed for xxxDWP_DoNCActivate @ 0x1C00DC844
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DC844
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DC844: mov     rax, rsp
 * 00000001C00DC847: mov     [rax+8], rbx
 * 00000001C00DC84B: mov     [rax+10h], rbp
 * 00000001C00DC84F: mov     [rax+18h], rsi
 * 00000001C00DC853: mov     [rax+20h], rdi
 * 00000001C00DC857: push    r12
 * 00000001C00DC859: push    r14
 * 00000001C00DC85B: push    r15
 * 00000001C00DC85D: sub     rsp, 20h
 * 00000001C00DC861: mov     r14d, edx
 * 00000001C00DC864: xor     r12d, r12d
 * 00000001C00DC867: mov     ebp, 100Ch
 * 00000001C00DC86C: mov     rsi, r8
 * 00000001C00DC86F: mov     rbx, rcx
 * 00000001C00DC872: mov     r15d, ebp
 * 00000001C00DC875: and     r14d, 1
 * 00000001C00DC879: jnz     loc_1C00DC9B8
 * 00000001C00DC87F: test    dl, 2
 * 00000001C00DC882: jnz     short loc_1C00DC891
 * 00000001C00DC884: call    IsModelessMenuNotificationWindow
 * 00000001C00DC889: test    eax, eax
 * 00000001C00DC88B: jnz     loc_1C00DC9B8
 * 00000001C00DC891: mov     ecx, r12d
 * 00000001C00DC894: mov     r8d, 40h ; '@'
 * 00000001C00DC89A: mov     rdx, rbx
 * 00000001C00DC89D: lea     r9d, [r8-3Fh]
 * 00000001C00DC8A1: call    SetOrClrWF
 * 00000001C00DC8A6: cmp     rsi, 0FFFFFFFFFFFFFFFFh
 * 00000001C00DC8AA: jz      loc_1C00DC968
 * 00000001C00DC8B0: mov     rdx, [rbx+28h]
 * 00000001C00DC8B4: mov     r8b, [rdx+1Fh]
 * 00000001C00DC8B8: test    r8b, 10h
 * 00000001C00DC8BC: jz      loc_1C00DC968
 * 00000001C00DC8C2: test    byte ptr [rdx+11h], 1
 * 00000001C00DC8C6: jnz     loc_1C00DC968
 * 00000001C00DC8CC: mov     rax, cs:__imp_gpsi
 * 00000001C00DC8D3: movzx   edi, r12w
 * 00000001C00DC8D7: mov     rcx, [rax]
 * 00000001C00DC8DA: mov     eax, [rcx+11E4h]
 * 00000001C00DC8E0: cmp     [rcx+11E0h], eax
 * 00000001C00DC8E6: jz      loc_1C01A8F90
 * 00000001C00DC8EC: mov     edi, ebp
 * 00000001C00DC8EE: test    r8b, 20h
 * 00000001C00DC8F2: jnz     short loc_1C00DC8FE
 * 00000001C00DC8F4: test    byte ptr [rdx+1Eh], 4
 * 00000001C00DC8F8: jnz     loc_1C01A8FA7
 * 00000001C00DC8FE: test    di, di
 * 00000001C00DC901: jz      short loc_1C00DC968
 * 00000001C00DC903: mov     rcx, rsi
 * 00000001C00DC906: call    cs:__imp_UserValidateCopyRgn
 * 00000001C00DC90D: nop     dword ptr [rax+rax+00h]
 * 00000001C00DC912: mov     r8d, 10001h
 * 00000001C00DC918: mov     rcx, rbx
 * 00000001C00DC91B: mov     rdx, rax
 * 00000001C00DC91E: mov     rbp, rax
 * 00000001C00DC921: call    cs:__imp__GetDCEx
 * 00000001C00DC928: nop     dword ptr [rax+rax+00h]
 * 00000001C00DC92D: mov     rsi, rax
 * 00000001C00DC930: test    rax, rax
 * 00000001C00DC933: jz      loc_1C01A8FE8
 * 00000001C00DC939: mov     rax, [rbx+28h]
 * 00000001C00DC93D: test    byte ptr [rax+10h], 1
 * 00000001C00DC941: jnz     loc_1C01A8FC6
 * 00000001C00DC947: movzx   r8d, di
 * 00000001C00DC94B: mov     rdx, rsi
 * 00000001C00DC94E: or      r8d, r15d
 * 00000001C00DC951: mov     rcx, rbx
 * 00000001C00DC954: call    xxxDrawCaptionBar
 * 00000001C00DC959: mov     rcx, rsi
 * 00000001C00DC95C: call    cs:__imp__ReleaseDC
 * 00000001C00DC963: nop     dword ptr [rax+rax+00h]
 * 00000001C00DC968: mov     rcx, rbx
 * 00000001C00DC96B: call    IsToplevelWindowDesktopComposed
 * 00000001C00DC970: test    eax, eax
 * 00000001C00DC972: jz      short loc_1C00DC998
 * 00000001C00DC974: mov     rax, [rbx+28h]
 * 00000001C00DC978: test    byte ptr [rax+1Ah], 8
 * 00000001C00DC97C: jz      short loc_1C00DC998
 * 00000001C00DC97E: call    cs:__imp_ReferenceDwmApiPort
 * 00000001C00DC985: nop     dword ptr [rax+rax+00h]
 * 00000001C00DC98A: mov     rdx, [rbx]
 * 00000001C00DC98D: mov     r8d, r14d
 * 00000001C00DC990: mov     rcx, rax; Object
 * 00000001C00DC993: call    DwmAsyncActivationChange
 * 00000001C00DC998: mov     rbx, [rsp+38h+arg_0]
 * 00000001C00DC99D: mov     rbp, [rsp+38h+arg_8]
 * 00000001C00DC9A2: mov     rsi, [rsp+38h+arg_10]
 * 00000001C00DC9A7: mov     rdi, [rsp+38h+arg_18]
 * 00000001C00DC9AC: add     rsp, 20h
 * 00000001C00DC9B0: pop     r15
 * 00000001C00DC9B2: pop     r14
 * 00000001C00DC9B4: pop     r12
 * 00000001C00DC9B6: retn
 * 00000001C00DC9B8: mov     ecx, 1
 * 00000001C00DC9BD: mov     r15d, 100Dh
 * 00000001C00DC9C3: jmp     loc_1C00DC894
 * 00000001C01A8F90: mov     eax, [rcx+1224h]
 * 00000001C01A8F96: cmp     [rcx+11FCh], eax
 * 00000001C01A8F9C: jz      loc_1C00DC8EE
 * 00000001C01A8FA2: jmp     loc_1C00DC8EC
 * 00000001C01A8FA7: mov     eax, [rcx+1204h]
 * 00000001C01A8FAD: cmp     [rcx+1200h], eax
 * 00000001C01A8FB3: jz      loc_1C00DC8FE
 * 00000001C01A8FB9: mov     eax, 8000h
 * 00000001C01A8FBE: or      di, ax
 * 00000001C01A8FC1: jmp     loc_1C00DC8FE
 * 00000001C01A8FC6: mov     edx, [rax+18h]
 * 00000001C01A8FC9: mov     ecx, [rax+1Ch]
 * 00000001C01A8FCC: call    GetWindowBorders
 * 00000001C01A8FD1: mov     r9d, eax
 * 00000001C01A8FD4: mov     r8d, eax
 * 00000001C01A8FD7: mov     rdx, rsi
 * 00000001C01A8FDA: mov     rcx, rbx
 * 00000001C01A8FDD: call    xxxMenuBarDraw
 * 00000001C01A8FE2: nop
 * 00000001C01A8FE3: jmp     loc_1C00DC947
 * 00000001C01A8FE8: mov     rcx, rbp
 * 00000001C01A8FEB: call    cs:__imp_GreDeleteObject
 * 00000001C01A8FF2: nop     dword ptr [rax+rax+00h]
 * 00000001C01A8FF7: nop
 * 00000001C01A8FF8: jmp     loc_1C00DC968
 */
