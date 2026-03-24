/*
 * XREFs of KiSwInterrupt @ 0x1404045E0
 * Callers:
 *     KiSwInterruptShadow @ 0x140A14CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x140230CF0 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiSwInterruptDispatch @ 0x1403DC520 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1404045E0
 * Reason: Hex-Rays returned no pseudocode for 0x1404045E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404045E0: sub     rsp, 8
 * 00000001404045E4: push    rbp
 * 00000001404045E5: push    rsi
 * 00000001404045E6: sub     rsp, 150h
 * 00000001404045ED: lea     rbp, [rsp+80h]
 * 00000001404045F5: mov     [rbp+0E8h+var_13D], 0
 * 00000001404045F9: mov     [rbp+0E8h+var_138], rax
 * 00000001404045FD: mov     [rbp+0E8h+var_130], rcx
 * 0000000140404601: mov     [rbp+0E8h+var_128], rdx
 * 0000000140404605: mov     [rbp+0E8h+var_120], r8
 * 0000000140404609: mov     [rbp+0E8h+var_118], r9
 * 000000014040460D: mov     [rbp+0E8h+var_110], r10
 * 0000000140404611: mov     [rbp+0E8h+var_108], r11
 * 0000000140404615: test    [rbp+0E8h+arg_0], 1
 * 000000014040461C: jnz     short loc_14040464D
 * 000000014040461E: lfence
 * 0000000140404621: test    word ptr gs:860h, 1
 * 000000014040462C: jnz     short loc_140404636
 * 000000014040462E: lfence
 * 0000000140404631: jmp     loc_140404856
 * 0000000140404636: movzx   eax, word ptr gs:864h
 * 000000014040463F: mov     ecx, 48h ; 'H'
 * 0000000140404644: xor     edx, edx
 * 0000000140404646: wrmsr
 * 0000000140404648: jmp     loc_140404856
 * 000000014040464D: test    cs:KiKvaShadow, 1
 * 0000000140404654: jnz     short loc_140404659
 * 0000000140404656: swapgs
 * 0000000140404659: lfence
 * 000000014040465C: mov     r10, gs:188h
 * 0000000140404665: mov     rcx, gs:188h
 * 000000014040466E: mov     rcx, [rcx+220h]
 * 0000000140404675: mov     rcx, [rcx+9E0h]
 * 000000014040467C: mov     gs:858h, rcx
 * 0000000140404685: mov     cx, gs:850h
 * 000000014040468E: mov     gs:852h, cx
 * 0000000140404697: mov     cx, gs:860h
 * 00000001404046A0: mov     gs:854h, cx
 * 00000001404046A9: movzx   eax, word ptr gs:866h
 * 00000001404046B2: cmp     gs:864h, ax
 * 00000001404046BB: jz      short loc_1404046CF
 * 00000001404046BD: mov     gs:864h, ax
 * 00000001404046C6: mov     ecx, 48h ; 'H'
 * 00000001404046CB: xor     edx, edx
 * 00000001404046CD: wrmsr
 * 00000001404046CF: movzx   edx, word ptr gs:860h
 * 00000001404046D8: test    edx, 8
 * 00000001404046DE: jz      short loc_1404046F7
 * 00000001404046E0: mov     eax, 1
 * 00000001404046E5: xor     edx, edx
 * 00000001404046E7: mov     ecx, 49h ; 'I'
 * 00000001404046EC: wrmsr
 * 00000001404046EE: movzx   edx, word ptr gs:860h
 * 00000001404046F7: test    edx, 2
 * 00000001404046FD: jz      loc_140404828
 * 0000000140404703: call    loc_140404816
 * 0000000140404708: add     rsp, 8
 * 000000014040470C: call    loc_14040481F
 * 0000000140404711: add     rsp, 8
 * 0000000140404715: call    loc_140404708
 * 000000014040471A: add     rsp, 8
 * 000000014040471E: call    loc_140404711
 * 0000000140404723: add     rsp, 8
 * 0000000140404727: call    loc_14040471A
 * 000000014040472C: add     rsp, 8
 * 0000000140404730: call    loc_140404723
 * 0000000140404735: add     rsp, 8
 * 0000000140404739: call    loc_14040472C
 * 000000014040473E: add     rsp, 8
 * 0000000140404742: call    loc_140404735
 * 0000000140404747: add     rsp, 8
 * 000000014040474B: call    loc_14040473E
 * 0000000140404750: add     rsp, 8
 * 0000000140404754: call    loc_140404747
 * 0000000140404759: add     rsp, 8
 * 000000014040475D: call    loc_140404750
 * 0000000140404762: add     rsp, 8
 * 0000000140404766: call    loc_140404759
 * 000000014040476B: add     rsp, 8
 * 000000014040476F: call    loc_140404762
 * 0000000140404774: add     rsp, 8
 * 0000000140404778: call    loc_14040476B
 * 000000014040477D: add     rsp, 8
 * 0000000140404781: call    loc_140404774
 * 0000000140404786: add     rsp, 8
 * 000000014040478A: call    loc_14040477D
 * 000000014040478F: add     rsp, 8
 * 0000000140404793: call    loc_140404786
 * 0000000140404798: add     rsp, 8
 * 000000014040479C: call    loc_14040478F
 * 00000001404047A1: add     rsp, 8
 * 00000001404047A5: call    loc_140404798
 * 00000001404047AA: add     rsp, 8
 * 00000001404047AE: call    loc_1404047A1
 * 00000001404047B3: add     rsp, 8
 * 00000001404047B7: call    loc_1404047AA
 * 00000001404047BC: add     rsp, 8
 * 00000001404047C0: call    loc_1404047B3
 * 00000001404047C5: add     rsp, 8
 * 00000001404047C9: call    loc_1404047BC
 * 00000001404047CE: add     rsp, 8
 * 00000001404047D2: call    loc_1404047C5
 * 00000001404047D7: add     rsp, 8
 * 00000001404047DB: call    loc_1404047CE
 * 00000001404047E0: add     rsp, 8
 * 00000001404047E4: call    loc_1404047D7
 * 00000001404047E9: add     rsp, 8
 * 00000001404047ED: call    loc_1404047E0
 * 00000001404047F2: add     rsp, 8
 * 00000001404047F6: call    loc_1404047E9
 * 00000001404047FB: add     rsp, 8
 * 00000001404047FF: call    loc_1404047F2
 * 0000000140404804: add     rsp, 8
 * 0000000140404808: call    loc_1404047FB
 * 000000014040480D: add     rsp, 8
 * 0000000140404811: call    loc_140404804
 * 0000000140404816: add     rsp, 8
 * 000000014040481A: call    loc_14040480D
 * 000000014040481F: add     rsp, 8
 * 0000000140404823: mov     eax, 0DADAh
 * 0000000140404828: test    edx, 200h
 * 000000014040482E: jz      short loc_140404835
 * 0000000140404830: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140404835: lfence
 * 0000000140404838: mov     byte ptr gs:856h, 0
 * 0000000140404841: test    byte ptr [r10+3], 3
 * 0000000140404846: mov     [rbp+0E8h+var_68], 0
 * 000000014040484F: jz      short loc_140404856
 * 0000000140404851: call    KiSaveDebugRegisterState
 * 0000000140404856: cld
 * 0000000140404857: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040485B: ldmxcsr dword ptr gs:180h
 * 0000000140404864: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140404868: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040486C: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140404870: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140404874: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140404878: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040487C: cmp     byte ptr gs:801Ah, 0
 * 0000000140404885: jz      short loc_14040488C
 * 0000000140404887: call    KeWakeProcessor
 * 000000014040488C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140404893: cmp     rax, [rbp+0E8h]
 * 000000014040489A: jnb     short loc_1404048B5
 * 000000014040489C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404048A3: cmp     rax, [rbp+0E8h]
 * 00000001404048AA: jb      short loc_1404048B5
 * 00000001404048AC: lea     rcx, [rbp+0E8h+var_168]
 * 00000001404048B0: call    KiCheckForSListAddress
 * 00000001404048B5: xor     esi, esi
 * 00000001404048B7: inc     dword ptr gs:8000h
 * 00000001404048BF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404048C6: jz      short loc_1404048CB
 * 00000001404048C8: clac
 * 00000001404048CB: mov     ecx, 2
 * 00000001404048D0: cmp     cs:KiIrqlFlags, 0
 * 00000001404048D7: jz      short loc_1404048E0
 * 00000001404048D9: call    KzSetIrqlUnsafe
 * 00000001404048DE: jmp     short loc_1404048E8
 * 00000001404048E0: mov     rax, cr8
 * 00000001404048E4: mov     cr8, rcx
 * 00000001404048E8: mov     [rbp+0E8h+var_13F], al
 * 00000001404048EB: mov     rcx, gs:20h
 * 00000001404048F4: inc     byte ptr [rcx+20h]
 * 00000001404048F7: cmp     byte ptr [rcx+20h], 1
 * 00000001404048FB: jnz     short loc_14040494D
 * 00000001404048FD: rdtsc
 * 00000001404048FF: shl     rdx, 20h
 * 0000000140404903: or      rax, rdx
 * 0000000140404906: mov     r8, [rcx+8]
 * 000000014040490A: sub     rax, [rcx+7EC0h]
 * 0000000140404911: add     [r8+48h], rax
 * 0000000140404915: mov     edx, [r8+50h]
 * 0000000140404919: add     [rcx+7EC0h], rax
 * 0000000140404920: add     rdx, rax
 * 0000000140404923: mov     ecx, edx
 * 0000000140404925: shr     rdx, 20h
 * 0000000140404929: jz      short loc_14040492E
 * 000000014040492B: or      ecx, 0FFFFFFFFh
 * 000000014040492E: mov     [r8+50h], ecx
 * 0000000140404932: test    byte ptr [r8+2], 3Eh
 * 0000000140404937: jz      short loc_14040494D
 * 0000000140404939: mov     rdx, r8
 * 000000014040493C: mov     r8, rax
 * 000000014040493F: mov     rcx, gs:20h
 * 0000000140404948: call    KiEndThreadAccountingPeriod
 * 000000014040494D: sti
 * 000000014040494E: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140404952: call    KiSwInterruptDispatch
 * 0000000140404957: cli
 * 0000000140404958: mov     rcx, rsi
 * 000000014040495B: call    HalPerformEndOfInterrupt
 * 0000000140404960: mov     rcx, gs:20h
 * 0000000140404969: cmp     byte ptr [rcx+20h], 1
 * 000000014040496D: ja      short loc_1404049E9
 * 000000014040496F: rdtsc
 * 0000000140404971: shl     rdx, 20h
 * 0000000140404975: or      rax, rdx
 * 0000000140404978: sub     rax, [rcx+7EC0h]
 * 000000014040497F: add     [rcx+7F38h], rax
 * 0000000140404986: add     [rcx+7EC0h], rax
 * 000000014040498D: mov     r8, rax
 * 0000000140404990: mov     rax, [rcx+8]
 * 0000000140404994: test    byte ptr [rax+2], 72h
 * 0000000140404998: jz      short loc_1404049AD
 * 000000014040499A: xor     edx, edx
 * 000000014040499C: call    KiBeginThreadAccountingPeriod
 * 00000001404049A1: mov     rcx, gs:20h
 * 00000001404049AA: inc     byte ptr [rcx+20h]
 * 00000001404049AD: mov     dl, [rcx+6]
 * 00000001404049B0: and     byte ptr [rcx+6], 0
 * 00000001404049B4: cmp     byte ptr [rcx+7], 0
 * 00000001404049B8: jnz     short loc_1404049E9
 * 00000001404049BA: test    dl, dl
 * 00000001404049BC: jz      short loc_1404049E9
 * 00000001404049BE: cmp     [rbp+0E8h+var_13F], 2
 * 00000001404049C2: jnb     short loc_1404049CF
 * 00000001404049C4: and     byte ptr [rcx+20h], 0
 * 00000001404049C8: call    KiDpcInterruptBypass
 * 00000001404049CD: jmp     short loc_1404049EC
 * 00000001404049CF: mov     ecx, 2
 * 00000001404049D4: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404049DB: nop     dword ptr [rax+rax+00h]
 * 00000001404049E0: mov     rcx, gs:20h
 * 00000001404049E9: dec     byte ptr [rcx+20h]
 * 00000001404049EC: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001404049F0: cmp     cs:KiIrqlFlags, 0
 * 00000001404049F7: jz      short loc_140404A00
 * 00000001404049F9: call    KzSetIrqlUnsafe
 * 00000001404049FE: jmp     short loc_140404A04
 * 0000000140404A00: mov     cr8, rcx
 * 0000000140404A04: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140404A0B: cli
 * 0000000140404A0C: test    [rbp+0E8h+arg_0], 1
 * 0000000140404A13: jz      loc_140404CB5
 * 0000000140404A19: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140404A20: jz      short loc_140404A25
 * 0000000140404A22: stac
 * 0000000140404A25: mov     rcx, gs:188h
 * 0000000140404A2E: test    byte ptr [rcx+0C2h], 3
 * 0000000140404A35: jz      short loc_140404A52
 * 0000000140404A37: mov     ecx, 1
 * 0000000140404A3C: mov     cr8, rcx
 * 0000000140404A40: sti
 * 0000000140404A41: call    KiInitiateUserApc
 * 0000000140404A46: cli
 * 0000000140404A47: mov     ecx, 0
 * 0000000140404A4C: mov     cr8, rcx
 * 0000000140404A50: jmp     short loc_140404A25
 * 0000000140404A52: test    byte ptr gs:86Ch, 2
 * 0000000140404A5B: jz      short loc_140404A64
 * 0000000140404A5D: xor     ecx, ecx
 * 0000000140404A5F: call    KiUpdateStibpPairing
 * 0000000140404A64: mov     rcx, gs:188h
 * 0000000140404A6D: test    dword ptr [rcx], 8000000h
 * 0000000140404A73: jz      short loc_140404A7A
 * 0000000140404A75: call    KiRestoreSetContextState
 * 0000000140404A7A: mov     rcx, gs:188h
 * 0000000140404A83: test    dword ptr [rcx], 40010000h
 * 0000000140404A89: jz      short loc_140404A9F
 * 0000000140404A8B: test    byte ptr [rcx+2], 1
 * 0000000140404A8F: jz      short loc_140404A9F
 * 0000000140404A91: call    KiCopyCounters
 * 0000000140404A96: mov     rcx, gs:188h
 * 0000000140404A9F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140404AA3: cmp     [rbp+0E8h+var_68], 0
 * 0000000140404AAB: jz      short loc_140404AB2
 * 0000000140404AAD: call    KiRestoreDebugRegisterState
 * 0000000140404AB2: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140404AB6: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140404ABA: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140404ABE: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140404AC2: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140404AC6: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140404ACA: mov     r11, [rbp+0E8h+var_108]
 * 0000000140404ACE: mov     r10, [rbp+0E8h+var_110]
 * 0000000140404AD2: mov     r9, [rbp+0E8h+var_118]
 * 0000000140404AD6: mov     r8, [rbp+0E8h+var_120]
 * 0000000140404ADA: mov     byte ptr gs:856h, 0
 * 0000000140404AE3: movzx   eax, word ptr gs:86Ah
 * 0000000140404AEC: cmp     gs:864h, ax
 * 0000000140404AF5: jz      short loc_140404B09
 * 0000000140404AF7: mov     gs:864h, ax
 * 0000000140404B00: mov     ecx, 48h ; 'H'
 * 0000000140404B05: xor     edx, edx
 * 0000000140404B07: wrmsr
 * 0000000140404B09: btr     word ptr gs:860h, 2
 * 0000000140404B14: jnb     short loc_140404B24
 * 0000000140404B16: mov     eax, 1
 * 0000000140404B1B: xor     edx, edx
 * 0000000140404B1D: mov     ecx, 49h ; 'I'
 * 0000000140404B22: wrmsr
 * 0000000140404B24: btr     word ptr gs:860h, 5
 * 0000000140404B2F: jnb     loc_140404C5A
 * 0000000140404B35: call    loc_140404C48
 * 0000000140404B3A: add     rsp, 8
 * 0000000140404B3E: call    loc_140404C51
 * 0000000140404B43: add     rsp, 8
 * 0000000140404B47: call    loc_140404B3A
 * 0000000140404B4C: add     rsp, 8
 * 0000000140404B50: call    loc_140404B43
 * 0000000140404B55: add     rsp, 8
 * 0000000140404B59: call    loc_140404B4C
 * 0000000140404B5E: add     rsp, 8
 * 0000000140404B62: call    loc_140404B55
 * 0000000140404B67: add     rsp, 8
 * 0000000140404B6B: call    loc_140404B5E
 * 0000000140404B70: add     rsp, 8
 * 0000000140404B74: call    loc_140404B67
 * 0000000140404B79: add     rsp, 8
 * 0000000140404B7D: call    loc_140404B70
 * 0000000140404B82: add     rsp, 8
 * 0000000140404B86: call    loc_140404B79
 * 0000000140404B8B: add     rsp, 8
 * 0000000140404B8F: call    loc_140404B82
 * 0000000140404B94: add     rsp, 8
 * 0000000140404B98: call    loc_140404B8B
 * 0000000140404B9D: add     rsp, 8
 * 0000000140404BA1: call    loc_140404B94
 * 0000000140404BA6: add     rsp, 8
 * 0000000140404BAA: call    loc_140404B9D
 * 0000000140404BAF: add     rsp, 8
 * 0000000140404BB3: call    loc_140404BA6
 * 0000000140404BB8: add     rsp, 8
 * 0000000140404BBC: call    loc_140404BAF
 * 0000000140404BC1: add     rsp, 8
 * 0000000140404BC5: call    loc_140404BB8
 * 0000000140404BCA: add     rsp, 8
 * 0000000140404BCE: call    loc_140404BC1
 * 0000000140404BD3: add     rsp, 8
 * 0000000140404BD7: call    loc_140404BCA
 * 0000000140404BDC: add     rsp, 8
 * 0000000140404BE0: call    loc_140404BD3
 * 0000000140404BE5: add     rsp, 8
 * 0000000140404BE9: call    loc_140404BDC
 * 0000000140404BEE: add     rsp, 8
 * 0000000140404BF2: call    loc_140404BE5
 * 0000000140404BF7: add     rsp, 8
 * 0000000140404BFB: call    loc_140404BEE
 * 0000000140404C00: add     rsp, 8
 * 0000000140404C04: call    loc_140404BF7
 * 0000000140404C09: add     rsp, 8
 * 0000000140404C0D: call    loc_140404C00
 * 0000000140404C12: add     rsp, 8
 * 0000000140404C16: call    loc_140404C09
 * 0000000140404C1B: add     rsp, 8
 * 0000000140404C1F: call    loc_140404C12
 * 0000000140404C24: add     rsp, 8
 * 0000000140404C28: call    loc_140404C1B
 * 0000000140404C2D: add     rsp, 8
 * 0000000140404C31: call    loc_140404C24
 * 0000000140404C36: add     rsp, 8
 * 0000000140404C3A: call    loc_140404C2D
 * 0000000140404C3F: add     rsp, 8
 * 0000000140404C43: call    loc_140404C36
 * 0000000140404C48: add     rsp, 8
 * 0000000140404C4C: call    loc_140404C3F
 * 0000000140404C51: add     rsp, 8
 * 0000000140404C55: mov     eax, 0DADAh
 * 0000000140404C5A: test    word ptr gs:860h, 80h
 * 0000000140404C65: jz      short loc_140404C73
 * 0000000140404C67: xor     eax, eax
 * 0000000140404C69: xor     edx, edx
 * 0000000140404C6B: mov     ecx, 1
 * 0000000140404C70: div     rcx
 * 0000000140404C73: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140404C77: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140404C7B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140404C7F: mov     rsp, rbp
 * 0000000140404C82: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140404C89: add     rsp, 0E8h
 * 0000000140404C90: test    cs:KiKvaShadow, 1
 * 0000000140404C97: jz      short loc_140404C9E
 * 0000000140404C99: jmp     KiKernelExit
 * 0000000140404C9E: test    word ptr gs:860h, 100h
 * 0000000140404CA9: jz      short loc_140404CB0
 * 0000000140404CAB: verw    [rsp+arg_18]
 * 0000000140404CB0: swapgs
 * 0000000140404CB3: iretq
 * 0000000140404CB5: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140404CB9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140404CBD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140404CC1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140404CC5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140404CC9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140404CCD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140404CD1: mov     r11, [rbp+0E8h+var_108]
 * 0000000140404CD5: mov     r10, [rbp+0E8h+var_110]
 * 0000000140404CD9: mov     r9, [rbp+0E8h+var_118]
 * 0000000140404CDD: mov     r8, [rbp+0E8h+var_120]
 * 0000000140404CE1: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140404CE5: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140404CE9: mov     rax, [rbp+0E8h+var_138]
 * 0000000140404CED: mov     rsp, rbp
 * 0000000140404CF0: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140404CF7: add     rsp, 0E8h
 * 0000000140404CFE: iretq
 */
