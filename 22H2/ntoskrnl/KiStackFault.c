/*
 * XREFs of KiStackFault @ 0x14040CC40
 * Callers:
 *     KiStackFaultShadow @ 0x140A14740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14040CC40 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14040CC40
 * Reason: Hex-Rays returned no pseudocode for 0x14040CC40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040CC40: push    rbp
 * 000000014040CC41: sub     rsp, 158h
 * 000000014040CC48: lea     rbp, [rsp+80h]
 * 000000014040CC50: mov     [rbp+0D8h+var_12D], 1
 * 000000014040CC54: mov     [rbp+0D8h+var_128], rax
 * 000000014040CC58: mov     [rbp+0D8h+var_120], rcx
 * 000000014040CC5C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040CC60: mov     [rbp+0D8h+var_110], r8
 * 000000014040CC64: mov     [rbp+0D8h+var_108], r9
 * 000000014040CC68: mov     [rbp+0D8h+var_100], r10
 * 000000014040CC6C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040CC70: test    [rbp+0D8h+arg_8], 1
 * 000000014040CC77: jnz     short loc_14040CCA8
 * 000000014040CC79: lfence
 * 000000014040CC7C: test    word ptr gs:860h, 1
 * 000000014040CC87: jnz     short loc_14040CC91
 * 000000014040CC89: lfence
 * 000000014040CC8C: jmp     loc_14040CEFA
 * 000000014040CC91: movzx   eax, word ptr gs:864h
 * 000000014040CC9A: mov     ecx, 48h ; 'H'
 * 000000014040CC9F: xor     edx, edx
 * 000000014040CCA1: wrmsr
 * 000000014040CCA3: jmp     loc_14040CEFA
 * 000000014040CCA8: test    cs:KiKvaShadow, 1
 * 000000014040CCAF: jnz     short loc_14040CCB4
 * 000000014040CCB1: swapgs
 * 000000014040CCB4: lfence
 * 000000014040CCB7: mov     r10, gs:188h
 * 000000014040CCC0: mov     rcx, gs:188h
 * 000000014040CCC9: mov     rcx, [rcx+220h]
 * 000000014040CCD0: mov     rcx, [rcx+9E0h]
 * 000000014040CCD7: mov     gs:858h, rcx
 * 000000014040CCE0: mov     cx, gs:850h
 * 000000014040CCE9: mov     gs:852h, cx
 * 000000014040CCF2: mov     cx, gs:860h
 * 000000014040CCFB: mov     gs:854h, cx
 * 000000014040CD04: movzx   eax, word ptr gs:866h
 * 000000014040CD0D: cmp     gs:864h, ax
 * 000000014040CD16: jz      short loc_14040CD2A
 * 000000014040CD18: mov     gs:864h, ax
 * 000000014040CD21: mov     ecx, 48h ; 'H'
 * 000000014040CD26: xor     edx, edx
 * 000000014040CD28: wrmsr
 * 000000014040CD2A: movzx   edx, word ptr gs:860h
 * 000000014040CD33: test    edx, 8
 * 000000014040CD39: jz      short loc_14040CD52
 * 000000014040CD3B: mov     eax, 1
 * 000000014040CD40: xor     edx, edx
 * 000000014040CD42: mov     ecx, 49h ; 'I'
 * 000000014040CD47: wrmsr
 * 000000014040CD49: movzx   edx, word ptr gs:860h
 * 000000014040CD52: test    edx, 2
 * 000000014040CD58: jz      loc_14040CE83
 * 000000014040CD5E: call    loc_14040CE71
 * 000000014040CD63: add     rsp, 8
 * 000000014040CD67: call    loc_14040CE7A
 * 000000014040CD6C: add     rsp, 8
 * 000000014040CD70: call    loc_14040CD63
 * 000000014040CD75: add     rsp, 8
 * 000000014040CD79: call    loc_14040CD6C
 * 000000014040CD7E: add     rsp, 8
 * 000000014040CD82: call    loc_14040CD75
 * 000000014040CD87: add     rsp, 8
 * 000000014040CD8B: call    loc_14040CD7E
 * 000000014040CD90: add     rsp, 8
 * 000000014040CD94: call    loc_14040CD87
 * 000000014040CD99: add     rsp, 8
 * 000000014040CD9D: call    loc_14040CD90
 * 000000014040CDA2: add     rsp, 8
 * 000000014040CDA6: call    loc_14040CD99
 * 000000014040CDAB: add     rsp, 8
 * 000000014040CDAF: call    loc_14040CDA2
 * 000000014040CDB4: add     rsp, 8
 * 000000014040CDB8: call    loc_14040CDAB
 * 000000014040CDBD: add     rsp, 8
 * 000000014040CDC1: call    loc_14040CDB4
 * 000000014040CDC6: add     rsp, 8
 * 000000014040CDCA: call    loc_14040CDBD
 * 000000014040CDCF: add     rsp, 8
 * 000000014040CDD3: call    loc_14040CDC6
 * 000000014040CDD8: add     rsp, 8
 * 000000014040CDDC: call    loc_14040CDCF
 * 000000014040CDE1: add     rsp, 8
 * 000000014040CDE5: call    loc_14040CDD8
 * 000000014040CDEA: add     rsp, 8
 * 000000014040CDEE: call    loc_14040CDE1
 * 000000014040CDF3: add     rsp, 8
 * 000000014040CDF7: call    loc_14040CDEA
 * 000000014040CDFC: add     rsp, 8
 * 000000014040CE00: call    loc_14040CDF3
 * 000000014040CE05: add     rsp, 8
 * 000000014040CE09: call    loc_14040CDFC
 * 000000014040CE0E: add     rsp, 8
 * 000000014040CE12: call    loc_14040CE05
 * 000000014040CE17: add     rsp, 8
 * 000000014040CE1B: call    loc_14040CE0E
 * 000000014040CE20: add     rsp, 8
 * 000000014040CE24: call    loc_14040CE17
 * 000000014040CE29: add     rsp, 8
 * 000000014040CE2D: call    loc_14040CE20
 * 000000014040CE32: add     rsp, 8
 * 000000014040CE36: call    loc_14040CE29
 * 000000014040CE3B: add     rsp, 8
 * 000000014040CE3F: call    loc_14040CE32
 * 000000014040CE44: add     rsp, 8
 * 000000014040CE48: call    loc_14040CE3B
 * 000000014040CE4D: add     rsp, 8
 * 000000014040CE51: call    loc_14040CE44
 * 000000014040CE56: add     rsp, 8
 * 000000014040CE5A: call    loc_14040CE4D
 * 000000014040CE5F: add     rsp, 8
 * 000000014040CE63: call    loc_14040CE56
 * 000000014040CE68: add     rsp, 8
 * 000000014040CE6C: call    loc_14040CE5F
 * 000000014040CE71: add     rsp, 8
 * 000000014040CE75: call    loc_14040CE68
 * 000000014040CE7A: add     rsp, 8
 * 000000014040CE7E: mov     eax, 0DADAh
 * 000000014040CE83: test    edx, 200h
 * 000000014040CE89: jz      short loc_14040CE90
 * 000000014040CE8B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040CE90: lfence
 * 000000014040CE93: mov     byte ptr gs:856h, 0
 * 000000014040CE9C: test    byte ptr [r10+3], 80h
 * 000000014040CEA1: jz      short loc_14040CEE5
 * 000000014040CEA3: mov     ecx, 0C0000102h
 * 000000014040CEA8: rdmsr
 * 000000014040CEAA: shl     rdx, 20h
 * 000000014040CEAE: or      rax, rdx
 * 000000014040CEB1: cmp     rax, cs:MmUserProbeAddress
 * 000000014040CEB8: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040CEC0: cmp     [r10+0F0h], rax
 * 000000014040CEC7: jz      short loc_14040CEE5
 * 000000014040CEC9: mov     rdx, [r10+1F0h]
 * 000000014040CED0: bts     dword ptr [r10+74h], 8
 * 000000014040CED6: dec     word ptr [r10+1E6h]
 * 000000014040CEDE: mov     [rdx+80h], rax
 * 000000014040CEE5: test    byte ptr [r10+3], 3
 * 000000014040CEEA: mov     [rbp+0D8h+var_58], 0
 * 000000014040CEF3: jz      short loc_14040CEFA
 * 000000014040CEF5: call    KiSaveDebugRegisterState
 * 000000014040CEFA: cld
 * 000000014040CEFB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040CEFF: ldmxcsr dword ptr gs:180h
 * 000000014040CF08: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040CF0C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040CF10: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040CF14: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040CF18: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040CF1C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040CF20: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040CF27: jz      short loc_14040CF35
 * 000000014040CF29: test    [rbp+0D8h+arg_8], 1
 * 000000014040CF30: jz      short loc_14040CF35
 * 000000014040CF32: stac
 * 000000014040CF35: mov     eax, [rbp+0E0h]
 * 000000014040CF3B: test    [rbp+0D8h+arg_10], 200h
 * 000000014040CF45: jz      short loc_14040CF48
 * 000000014040CF47: sti
 * 000000014040CF48: mov     ecx, 0C0000005h
 * 000000014040CF4D: mov     edx, 2
 * 000000014040CF52: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040CF59: mov     r9d, [rbp+0E0h]
 * 000000014040CF60: or      r9d, 3
 * 000000014040CF64: and     r9d, 0FFFFh
 * 000000014040CF6B: test    [rbp+0D8h+arg_8], 1
 * 000000014040CF72: jnz     short loc_14040CF78
 * 000000014040CF74: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014040CF78: xor     r10, r10
 * 000000014040CF7B: call    KiExceptionDispatch
 * 000000014040CF80: nop
 * 000000014040CF81: retn
 */
