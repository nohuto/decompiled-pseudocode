/*
 * XREFs of KiUpdateStibpPairing @ 0x14021F570
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14021ECC0 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x1403FDCB0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FE0E0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FEC40 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FF5C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FF9B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FFDA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400190 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400580 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140402570 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140403B30 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140403F30 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140404D10 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140406870 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140407D00 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14040AFC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040B640 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040D300 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040E800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040F200 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040F880 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412280 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140412700 (KiUmsFastReturnToUser.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14051B260 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x14021F570
 * Reason: Hex-Rays returned no pseudocode for 0x14021F570
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014021F570: mov     [rsp+arg_10], rbx
 * 000000014021F575: push    rbp
 * 000000014021F576: push    rsi
 * 000000014021F577: push    rdi
 * 000000014021F578: push    r12
 * 000000014021F57A: push    r13
 * 000000014021F57C: push    r14
 * 000000014021F57E: push    r15
 * 000000014021F580: sub     rsp, 20h
 * 000000014021F584: mov     rbx, gs:20h
 * 000000014021F58D: xor     ebp, ebp
 * 000000014021F58F: mov     r11d, 1
 * 000000014021F595: mov     r15d, ebp
 * 000000014021F598: mov     r12d, r11d
 * 000000014021F59B: test    rcx, rcx
 * 000000014021F59E: jnz     short loc_14021F5B3
 * 000000014021F5A0: mov     rax, gs:188h
 * 000000014021F5A9: mov     r12d, ebp
 * 000000014021F5AC: mov     rcx, [rax+220h]
 * 000000014021F5B3: mov     esi, [rcx+87Ch]
 * 000000014021F5B9: mov     r13d, ebp
 * 000000014021F5BC: mov     r14, [rcx+9E0h]
 * 000000014021F5C3: mov     eax, esi
 * 000000014021F5C5: mov     rdi, [rbx+2DB0h]
 * 000000014021F5CC: shr     eax, 16h
 * 000000014021F5CF: and     eax, r11d
 * 000000014021F5D2: mov     [rsp+58h+arg_8], eax
 * 000000014021F5D6: mov     eax, esi
 * 000000014021F5D8: shr     eax, 17h
 * 000000014021F5DB: and     esi, 0C00000h
 * 000000014021F5E1: and     eax, r11d
 * 000000014021F5E4: mov     [rsp+58h+arg_0], eax
 * 000000014021F5E8: test    r12d, r12d
 * 000000014021F5EB: jnz     loc_14021F67D
 * 000000014021F5F1: mov     rax, [rbx+6D8h]
 * 000000014021F5F8: cmp     r14, rax
 * 000000014021F5FB: jz      short loc_14021F62F
 * 000000014021F5FD: mov     eax, 20h ; ' '
 * 000000014021F602: lock or [rdi+6ECh], ax
 * 000000014021F60A: mov     [rbx+6D8h], r14
 * 000000014021F611: mov     r15d, r11d
 * 000000014021F614: or      word ptr [rbx+6E0h], 4
 * 000000014021F61C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F623: test    al, 8
 * 000000014021F625: jnz     short loc_14021F62F
 * 000000014021F627: or      word ptr [rbx+6E0h], 20h
 * 000000014021F62F: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F636: test    al, 4
 * 000000014021F638: jz      short loc_14021F659
 * 000000014021F63A: mov     eax, r11d
 * 000000014021F63D: xor     edx, edx
 * 000000014021F63F: mov     ecx, 49h ; 'I'
 * 000000014021F644: wrmsr
 * 000000014021F646: mov     ecx, 0FFFBh
 * 000000014021F64B: and     [rbx+6E0h], cx
 * 000000014021F652: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F659: test    al, 20h
 * 000000014021F65B: jz      loc_14021F719
 * 000000014021F661: call    KiFlushCurrentRsb
 * 000000014021F666: mov     ecx, 0FFDFh
 * 000000014021F66B: mov     r11d, 1
 * 000000014021F671: and     [rbx+6E0h], cx
 * 000000014021F678: jmp     loc_14021F719
 * 000000014021F67D: cmp     [rsp+58h+arg_8], ebp
 * 000000014021F681: jz      loc_14021F719
 * 000000014021F687: mov     rax, [rbx+6D8h]
 * 000000014021F68E: test    rax, rax
 * 000000014021F691: jz      loc_14021F719
 * 000000014021F697: mov     eax, r11d
 * 000000014021F69A: xor     edx, edx
 * 000000014021F69C: mov     ecx, 49h ; 'I'
 * 000000014021F6A1: wrmsr
 * 000000014021F6A3: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F6AA: test    al, 8
 * 000000014021F6AC: jz      short loc_14021F6B7
 * 000000014021F6AE: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F6B5: jmp     short loc_14021F6DD
 * 000000014021F6B7: call    KiFlushCurrentRsb
 * 000000014021F6BC: mov     eax, 0FFBFh
 * 000000014021F6C1: mov     ecx, 0FFDFh
 * 000000014021F6C6: and     [rbx+6D4h], ax
 * 000000014021F6CD: mov     r11d, 1
 * 000000014021F6D3: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F6DA: and     ax, cx
 * 000000014021F6DD: mov     ecx, 0FFFBh
 * 000000014021F6E2: and     ax, cx
 * 000000014021F6E5: mov     [rbx+6E0h], ax
 * 000000014021F6EC: mov     eax, 20h ; ' '
 * 000000014021F6F1: lock or [rdi+6ECh], ax
 * 000000014021F6F9: or      byte ptr [rbx+6D6h], 2
 * 000000014021F700: mov     eax, 0FFEFh
 * 000000014021F705: mov     [rbx+6D8h], r14
 * 000000014021F70C: mov     r15d, r11d
 * 000000014021F70F: and     [rbx+6D4h], ax
 * 000000014021F716: mov     r13d, r11d
 * 000000014021F719: mov     edx, 2
 * 000000014021F71E: cmp     esi, 400000h
 * 000000014021F724: jz      short loc_14021F762
 * 000000014021F726: cmp     [rsp+58h+arg_0], ebp
 * 000000014021F72A: jnz     short loc_14021F755
 * 000000014021F72C: mov     ecx, 0FFFFFEFFh
 * 000000014021F731: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F738: movzx   r8d, ax
 * 000000014021F73C: and     r8w, cx
 * 000000014021F740: or      r8w, dx
 * 000000014021F744: lock cmpxchg [rbx+6ECh], r8w
 * 000000014021F74E: jnz     short loc_14021F731
 * 000000014021F750: mov     r14, rdx
 * 000000014021F753: jmp     short loc_14021F7BA
 * 000000014021F755: movzx   r8d, word ptr [rbx+6ECh]
 * 000000014021F75D: mov     r14, rdx
 * 000000014021F760: jmp     short loc_14021F7BA
 * 000000014021F762: mov     edx, 0FFFFFEFDh
 * 000000014021F767: prefetchw byte ptr [rbx+6ECh]
 * 000000014021F76E: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F775: test    r12d, r12d
 * 000000014021F778: jz      short loc_14021F7A0
 * 000000014021F77A: nop     word ptr [rax+rax+00h]
 * 000000014021F780: movzx   ecx, ax
 * 000000014021F783: and     cx, dx
 * 000000014021F786: lock cmpxchg [rbx+6ECh], cx
 * 000000014021F78F: jnz     short loc_14021F780
 * 000000014021F791: jmp     short loc_14021F7B1
 * 000000014021F7A0: movzx   ecx, ax
 * 000000014021F7A3: and     cx, dx
 * 000000014021F7A6: lock cmpxchg [rbx+6ECh], cx
 * 000000014021F7AF: jnz     short loc_14021F7A0
 * 000000014021F7B1: mov     edx, 2
 * 000000014021F7B6: movzx   r8d, ax
 * 000000014021F7BA: mov     rax, [rdi+6D8h]
 * 000000014021F7C1: mov     r10d, ebp
 * 000000014021F7C4: test    rax, rax
 * 000000014021F7C7: jnz     short loc_14021F7DA
 * 000000014021F7C9: test    r8b, 10h
 * 000000014021F7CD: jz      short loc_14021F7DA
 * 000000014021F7CF: mov     rax, r11
 * 000000014021F7D2: lock or [rbx+6ECh], dx
 * 000000014021F7DA: mov     esi, 100h
 * 000000014021F7DF: cmp     r14, rax
 * 000000014021F7E2: jz      short loc_14021F7EE
 * 000000014021F7E4: test    r8b, 8
 * 000000014021F7E8: jz      loc_14021F86F
 * 000000014021F7EE: movzx   r9d, r8w
 * 000000014021F7F2: and     r9w, 1
 * 000000014021F7F7: nop     word ptr [rax+rax+00000000h]
 * 000000014021F800: movzx   edx, word ptr [rdi+6ECh]
 * 000000014021F807: movzx   ecx, dx
 * 000000014021F80A: and     cx, 0FFEFh
 * 000000014021F80E: movzx   eax, cx
 * 000000014021F811: or      ax, 1
 * 000000014021F815: test    r14, r14
 * 000000014021F818: jz      short loc_14021F821
 * 000000014021F81A: movzx   eax, cx
 * 000000014021F81D: or      ax, 11h
 * 000000014021F821: movzx   ecx, ax
 * 000000014021F824: or      cx, 2
 * 000000014021F828: test    r9w, r9w
 * 000000014021F82C: cmovnz  cx, ax
 * 000000014021F830: test    si, cx
 * 000000014021F833: jnz     short loc_14021F848
 * 000000014021F835: cmp     cx, dx
 * 000000014021F838: jz      short loc_14021F848
 * 000000014021F83A: movzx   eax, dx
 * 000000014021F83D: lock cmpxchg [rdi+6ECh], cx
 * 000000014021F846: jnz     short loc_14021F800
 * 000000014021F848: test    si, dx
 * 000000014021F84B: jnz     short loc_14021F86C
 * 000000014021F84D: mov     rax, [rdi+6D8h]
 * 000000014021F854: test    rax, rax
 * 000000014021F857: jnz     short loc_14021F86F
 * 000000014021F859: test    r8b, 10h
 * 000000014021F85D: jz      short loc_14021F86F
 * 000000014021F85F: mov     ecx, 2
 * 000000014021F864: lock or [rbx+6ECh], cx
 * 000000014021F86C: mov     rax, r11
 * 000000014021F86F: mov     r11d, 0FFFDh
 * 000000014021F875: cmp     rax, r14
 * 000000014021F878: jz      short loc_14021F880
 * 000000014021F87A: test    r8b, 8
 * 000000014021F87E: jz      short loc_14021F8C0
 * 000000014021F880: cmp     [rsp+58h+arg_0], ebp
 * 000000014021F884: jnz     short loc_14021F8C0
 * 000000014021F886: cmp     rax, 1
 * 000000014021F88A: jz      short loc_14021F8C0
 * 000000014021F88C: and     [rbx+6EAh], r11w
 * 000000014021F894: mov     r9, 20000000000h
 * 000000014021F89E: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F8A5: test    r9, rax
 * 000000014021F8A8: jz      short loc_14021F8B2
 * 000000014021F8AA: and     [rbx+6E6h], r11w
 * 000000014021F8B2: mov     edx, 1
 * 000000014021F8B7: mov     r10d, edx
 * 000000014021F8BA: jmp     short loc_14021F913
 * 000000014021F8C0: movzx   eax, word ptr [rdi+6ECh]
 * 000000014021F8C7: movzx   ecx, r8b
 * 000000014021F8CB: or      cl, al
 * 000000014021F8CD: test    cl, 1
 * 000000014021F8D0: jz      short loc_14021F8E8
 * 000000014021F8D2: movzx   ecx, ax
 * 000000014021F8D5: and     cx, 0FFEEh
 * 000000014021F8D9: or      cx, 2
 * 000000014021F8DD: lock cmpxchg [rdi+6ECh], cx
 * 000000014021F8E6: jnz     short loc_14021F8C0
 * 000000014021F8E8: or      word ptr [rbx+6EAh], 2
 * 000000014021F8F0: mov     r9, 20000000000h
 * 000000014021F8FA: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F901: mov     edx, 1
 * 000000014021F906: test    r9, rax
 * 000000014021F909: jz      short loc_14021F913
 * 000000014021F90B: or      word ptr [rbx+6E6h], 2
 * 000000014021F913: test    r15d, r15d
 * 000000014021F916: jz      short loc_14021F93D
 * 000000014021F918: nop     dword ptr [rax+rax+00000000h]
 * 000000014021F920: movzx   eax, word ptr [rdi+6ECh]
 * 000000014021F927: movzx   ecx, ax
 * 000000014021F92A: and     cx, 0FFDFh
 * 000000014021F92E: or      cx, 2
 * 000000014021F932: lock cmpxchg [rdi+6ECh], cx
 * 000000014021F93B: jnz     short loc_14021F920
 * 000000014021F93D: test    r10d, r10d
 * 000000014021F940: jnz     short loc_14021F97B
 * 000000014021F942: cmp     [rsp+58h+arg_0], ebp
 * 000000014021F946: jz      short loc_14021F97B
 * 000000014021F948: prefetchw byte ptr [rbx+6ECh]
 * 000000014021F94F: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F956: nop     word ptr [rax+rax+00000000h]
 * 000000014021F960: movzx   ecx, ax
 * 000000014021F963: or      cx, si
 * 000000014021F966: lock cmpxchg [rbx+6ECh], cx
 * 000000014021F96F: jnz     short loc_14021F960
 * 000000014021F971: test    al, 1
 * 000000014021F973: jz      short loc_14021F97B
 * 000000014021F975: test    r12d, r12d
 * 000000014021F978: cmovnz  ebp, edx
 * 000000014021F97B: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F982: movzx   edx, word ptr [rbx+6E6h]
 * 000000014021F989: test    r9, rax
 * 000000014021F98C: jz      short loc_14021F995
 * 000000014021F98E: movzx   edx, word ptr [rbx+6D0h]
 * 000000014021F995: test    r14, r14
 * 000000014021F998: jnz     short loc_14021F9FA
 * 000000014021F99A: test    r8b, 10h
 * 000000014021F99E: jnz     short loc_14021F9EC
 * 000000014021F9A0: mov     eax, 0FFFCh
 * 000000014021F9A5: and     dx, ax
 * 000000014021F9A8: mov     [rbx+6D0h], dx
 * 000000014021F9AF: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F9B6: test    r9, rax
 * 000000014021F9B9: jz      short loc_14021F9D4
 * 000000014021F9BB: and     [rbx+6E6h], r11w
 * 000000014021F9C3: and     [rbx+6EAh], r11w
 * 000000014021F9CB: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F9D2: jmp     short loc_14021FA21
 * 000000014021F9D4: and     [rbx+6EAh], r11w
 * 000000014021F9DC: mov     [rbx+6E6h], dx
 * 000000014021F9E3: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F9EA: jmp     short loc_14021FA21
 * 000000014021F9EC: mov     eax, 0FFFEh
 * 000000014021F9F1: and     dx, ax
 * 000000014021F9F4: or      dx, 2
 * 000000014021F9F8: jmp     short loc_14021FA1A
 * 000000014021F9FA: test    dl, 3
 * 000000014021F9FD: jnz     short loc_14021FA21
 * 000000014021F9FF: and     dx, r11w
 * 000000014021FA03: or      dx, 1
 * 000000014021FA07: mov     [rbx+6D0h], dx
 * 000000014021FA0E: mov     rcx, qword ptr cs:KiSpeculationFeatures
 * 000000014021FA15: test    r9, rcx
 * 000000014021FA18: jnz     short loc_14021FA21
 * 000000014021FA1A: mov     [rbx+6E6h], dx
 * 000000014021FA21: test    r13d, r13d
 * 000000014021FA24: jz      short loc_14021FA39
 * 000000014021FA26: mov     eax, 0FFEFh
 * 000000014021FA2B: mov     [rbx+6D2h], dx
 * 000000014021FA32: and     [rbx+6D4h], ax
 * 000000014021FA39: mov     rbx, [rsp+58h+arg_10]
 * 000000014021FA3E: mov     eax, ebp
 * 000000014021FA40: add     rsp, 20h
 * 000000014021FA44: pop     r15
 * 000000014021FA46: pop     r14
 * 000000014021FA48: pop     r13
 * 000000014021FA4A: pop     r12
 * 000000014021FA4C: pop     rdi
 * 000000014021FA4D: pop     rsi
 * 000000014021FA4E: pop     rbp
 * 000000014021FA4F: retn
 */
