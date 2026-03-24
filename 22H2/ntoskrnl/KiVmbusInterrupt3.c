/*
 * XREFs of KiVmbusInterrupt3 @ 0x140403840
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140A151C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x140403840 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x140403840
 * Reason: Hex-Rays returned no pseudocode for 0x140403840
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403840: push    4
 * 0000000140403842: push    rbp
 * 0000000140403843: push    rsi
 * 0000000140403844: sub     rsp, 150h
 * 000000014040384B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403853: mov     byte ptr [rbp-55h], 0
 * 0000000140403857: mov     [rbp-50h], rax
 * 000000014040385B: mov     [rbp-48h], rcx
 * 000000014040385F: mov     [rbp-40h], rdx
 * 0000000140403863: mov     [rbp-38h], r8
 * 0000000140403867: mov     [rbp-30h], r9
 * 000000014040386B: mov     [rbp-28h], r10
 * 000000014040386F: mov     [rbp-20h], r11
 * 0000000140403873: test    byte ptr [rbp+0F0h], 1
 * 000000014040387A: jnz     short loc_1404038AB
 * 000000014040387C: lfence
 * 000000014040387F: test    word ptr gs:860h, 1
 * 000000014040388A: jnz     short loc_140403894
 * 000000014040388C: lfence
 * 000000014040388F: jmp     loc_140403AB4
 * 0000000140403894: movzx   eax, word ptr gs:864h
 * 000000014040389D: mov     ecx, 48h ; 'H'
 * 00000001404038A2: xor     edx, edx
 * 00000001404038A4: wrmsr
 * 00000001404038A6: jmp     loc_140403AB4
 * 00000001404038AB: test    cs:KiKvaShadow, 1
 * 00000001404038B2: jnz     short loc_1404038B7
 * 00000001404038B4: swapgs
 * 00000001404038B7: lfence
 * 00000001404038BA: mov     r10, gs:188h
 * 00000001404038C3: mov     rcx, gs:188h
 * 00000001404038CC: mov     rcx, [rcx+220h]
 * 00000001404038D3: mov     rcx, [rcx+9E0h]
 * 00000001404038DA: mov     gs:858h, rcx
 * 00000001404038E3: mov     cx, gs:850h
 * 00000001404038EC: mov     gs:852h, cx
 * 00000001404038F5: mov     cx, gs:860h
 * 00000001404038FE: mov     gs:854h, cx
 * 0000000140403907: movzx   eax, word ptr gs:866h
 * 0000000140403910: cmp     gs:864h, ax
 * 0000000140403919: jz      short loc_14040392D
 * 000000014040391B: mov     gs:864h, ax
 * 0000000140403924: mov     ecx, 48h ; 'H'
 * 0000000140403929: xor     edx, edx
 * 000000014040392B: wrmsr
 * 000000014040392D: movzx   edx, word ptr gs:860h
 * 0000000140403936: test    edx, 8
 * 000000014040393C: jz      short loc_140403955
 * 000000014040393E: mov     eax, 1
 * 0000000140403943: xor     edx, edx
 * 0000000140403945: mov     ecx, 49h ; 'I'
 * 000000014040394A: wrmsr
 * 000000014040394C: movzx   edx, word ptr gs:860h
 * 0000000140403955: test    edx, 2
 * 000000014040395B: jz      loc_140403A86
 * 0000000140403961: call    loc_140403A74
 * 0000000140403966: add     rsp, 8
 * 000000014040396A: call    loc_140403A7D
 * 000000014040396F: add     rsp, 8
 * 0000000140403973: call    loc_140403966
 * 0000000140403978: add     rsp, 8
 * 000000014040397C: call    loc_14040396F
 * 0000000140403981: add     rsp, 8
 * 0000000140403985: call    loc_140403978
 * 000000014040398A: add     rsp, 8
 * 000000014040398E: call    loc_140403981
 * 0000000140403993: add     rsp, 8
 * 0000000140403997: call    loc_14040398A
 * 000000014040399C: add     rsp, 8
 * 00000001404039A0: call    loc_140403993
 * 00000001404039A5: add     rsp, 8
 * 00000001404039A9: call    loc_14040399C
 * 00000001404039AE: add     rsp, 8
 * 00000001404039B2: call    loc_1404039A5
 * 00000001404039B7: add     rsp, 8
 * 00000001404039BB: call    loc_1404039AE
 * 00000001404039C0: add     rsp, 8
 * 00000001404039C4: call    loc_1404039B7
 * 00000001404039C9: add     rsp, 8
 * 00000001404039CD: call    loc_1404039C0
 * 00000001404039D2: add     rsp, 8
 * 00000001404039D6: call    loc_1404039C9
 * 00000001404039DB: add     rsp, 8
 * 00000001404039DF: call    loc_1404039D2
 * 00000001404039E4: add     rsp, 8
 * 00000001404039E8: call    loc_1404039DB
 * 00000001404039ED: add     rsp, 8
 * 00000001404039F1: call    loc_1404039E4
 * 00000001404039F6: add     rsp, 8
 * 00000001404039FA: call    loc_1404039ED
 * 00000001404039FF: add     rsp, 8
 * 0000000140403A03: call    loc_1404039F6
 * 0000000140403A08: add     rsp, 8
 * 0000000140403A0C: call    loc_1404039FF
 * 0000000140403A11: add     rsp, 8
 * 0000000140403A15: call    loc_140403A08
 * 0000000140403A1A: add     rsp, 8
 * 0000000140403A1E: call    loc_140403A11
 * 0000000140403A23: add     rsp, 8
 * 0000000140403A27: call    loc_140403A1A
 * 0000000140403A2C: add     rsp, 8
 * 0000000140403A30: call    loc_140403A23
 * 0000000140403A35: add     rsp, 8
 * 0000000140403A39: call    loc_140403A2C
 * 0000000140403A3E: add     rsp, 8
 * 0000000140403A42: call    loc_140403A35
 * 0000000140403A47: add     rsp, 8
 * 0000000140403A4B: call    loc_140403A3E
 * 0000000140403A50: add     rsp, 8
 * 0000000140403A54: call    loc_140403A47
 * 0000000140403A59: add     rsp, 8
 * 0000000140403A5D: call    loc_140403A50
 * 0000000140403A62: add     rsp, 8
 * 0000000140403A66: call    loc_140403A59
 * 0000000140403A6B: add     rsp, 8
 * 0000000140403A6F: call    loc_140403A62
 * 0000000140403A74: add     rsp, 8
 * 0000000140403A78: call    loc_140403A6B
 * 0000000140403A7D: add     rsp, 8
 * 0000000140403A81: mov     eax, 0DADAh
 * 0000000140403A86: test    edx, 200h
 * 0000000140403A8C: jz      short loc_140403A93
 * 0000000140403A8E: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140403A93: lfence
 * 0000000140403A96: mov     byte ptr gs:856h, 0
 * 0000000140403A9F: test    byte ptr [r10+3], 3
 * 0000000140403AA4: mov     word ptr [rbp+80h], 0
 * 0000000140403AAD: jz      short loc_140403AB4
 * 0000000140403AAF: call    KiSaveDebugRegisterState
 * 0000000140403AB4: cld
 * 0000000140403AB5: stmxcsr dword ptr [rbp-54h]
 * 0000000140403AB9: ldmxcsr dword ptr gs:180h
 * 0000000140403AC2: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140403AC6: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140403ACA: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140403ACE: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140403AD2: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140403AD6: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140403ADA: cmp     byte ptr gs:801Ah, 0
 * 0000000140403AE3: jz      short loc_140403AEA
 * 0000000140403AE5: call    KeWakeProcessor
 * 0000000140403AEA: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140403AF1: cmp     rax, [rbp+0E8h]
 * 0000000140403AF8: jnb     short loc_140403B13
 * 0000000140403AFA: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140403B01: cmp     rax, [rbp+0E8h]
 * 0000000140403B08: jb      short loc_140403B13
 * 0000000140403B0A: lea     rcx, [rbp-80h]
 * 0000000140403B0E: call    KiCheckForSListAddress
 * 0000000140403B13: xor     esi, esi
 * 0000000140403B15: inc     dword ptr gs:8000h
 * 0000000140403B1D: jmp     KiVmbusInterruptDispatch
 */
