/*
 * XREFs of KiUpdateSpeculationControl @ 0x14021ECC0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C7210 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x140405E40 (SwapContext.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiIsBranchConfusionMitigationEnabled @ 0x1403F28A0 (KiIsBranchConfusionMitigationEnabled.c)
 *     KiIsSrsoMitigationEnabled @ 0x1403F2ADC (KiIsSrsoMitigationEnabled.c)
 *     KiFlushCurrentRsb @ 0x140413380 (KiFlushCurrentRsb.c)
 *     KiSynchronizeStibpPairing @ 0x14051B618 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x14051B850 (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     PsGetProcessSecurityDomain @ 0x140581884 (PsGetProcessSecurityDomain.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x14021ECC0
 * Reason: Hex-Rays returned no pseudocode for 0x14021ECC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014021ECC0: push    rbx
 * 000000014021ECC2: push    r13
 * 000000014021ECC4: sub     rsp, 88h
 * 000000014021ECCB: movups  xmm0, cs:KiSpeculationFeatures
 * 000000014021ECD2: mov     rax, 1000000000h
 * 000000014021ECDC: mov     rbx, gs:20h
 * 000000014021ECE5: movsd   xmm1, cs:qword_140CFC4B0
 * 000000014021ECED: mov     r13, rcx
 * 000000014021ECF0: movups  [rsp+98h+var_50], xmm0
 * 000000014021ECF5: movsd   [rsp+98h+var_40], xmm1
 * 000000014021ECFB: test    qword ptr [rsp+98h+var_50], rax
 * 000000014021ED00: jz      loc_14021F555
 * 000000014021ED06: mov     [rsp+98h+var_20], rdi
 * 000000014021ED0B: cli
 * 000000014021ED0C: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021ED13: mov     ecx, 0FFEFh
 * 000000014021ED18: and     ax, cx
 * 000000014021ED1B: mov     ecx, 0FFBFh
 * 000000014021ED20: and     ax, cx
 * 000000014021ED23: mov     ecx, 0FFFDh
 * 000000014021ED28: and     ax, cx
 * 000000014021ED2B: mov     ecx, 0FFFBh
 * 000000014021ED30: and     ax, cx
 * 000000014021ED33: mov     ecx, 0FFF7h
 * 000000014021ED38: and     ax, cx
 * 000000014021ED3B: mov     ecx, 0FDFFh
 * 000000014021ED40: and     ax, cx
 * 000000014021ED43: mov     ecx, 0FFDFh
 * 000000014021ED48: and     ax, cx
 * 000000014021ED4B: mov     rcx, r13
 * 000000014021ED4E: mov     [rbx+6E0h], ax
 * 000000014021ED55: call    PsGetProcessSecurityDomain
 * 000000014021ED5A: mov     rdi, rax
 * 000000014021ED5D: mov     rcx, 8000000000000h
 * 000000014021ED67: mov     eax, [r13+87Ch]
 * 000000014021ED6E: mov     edx, 100h
 * 000000014021ED73: and     eax, 400000h
 * 000000014021ED78: mov     [rsp+98h+arg_18], eax
 * 000000014021ED7F: mov     eax, 1
 * 000000014021ED84: cmovz   rdi, rax
 * 000000014021ED88: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021ED8F: mov     [rsp+98h+var_58], rdi
 * 000000014021ED94: test    rcx, rax
 * 000000014021ED97: jz      short loc_14021EDB9
 * 000000014021ED99: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021EDA0: test    rdi, rdi
 * 000000014021EDA3: jnz     short loc_14021EDAF
 * 000000014021EDA5: mov     ecx, 0FEFFh
 * 000000014021EDAA: and     ax, cx
 * 000000014021EDAD: jmp     short loc_14021EDB2
 * 000000014021EDAF: or      ax, dx
 * 000000014021EDB2: mov     [rbx+6E0h], ax
 * 000000014021EDB9: test    byte ptr [rsp+98h+var_50], 1
 * 000000014021EDBE: jz      short loc_14021EDDD
 * 000000014021EDC0: mov     rdx, r13
 * 000000014021EDC3: mov     rcx, rbx
 * 000000014021EDC6: call    KiUpdateSpecCtrlEnhancedIBRS
 * 000000014021EDCB: sti
 * 000000014021EDCC: mov     rdi, [rsp+98h+var_20]
 * 000000014021EDD1: add     rsp, 88h
 * 000000014021EDD8: pop     r13
 * 000000014021EDDA: pop     rbx
 * 000000014021EDDB: retn
 * 000000014021EDDD: movzx   r9d, word ptr [rbx+6E4h]
 * 000000014021EDE5: mov     rax, 20000000000h
 * 000000014021EDEF: mov     [rsp+98h+arg_0], rbp
 * 000000014021EDF7: mov     [rsp+98h+var_18], rsi
 * 000000014021EDFF: mov     [rsp+98h+var_28], r12
 * 000000014021EE04: mov     r12, qword ptr [rsp+98h+var_50]
 * 000000014021EE09: mov     [rsp+98h+var_30], r14
 * 000000014021EE0E: mov     r14, r12
 * 000000014021EE11: mov     [rsp+98h+var_38], r15
 * 000000014021EE16: mov     [rsp+98h+arg_8], 0
 * 000000014021EE1E: mov     [rsp+98h+arg_10], 0
 * 000000014021EE26: and     r14, rax
 * 000000014021EE29: jz      short loc_14021EE5D
 * 000000014021EE2B: movzx   eax, byte ptr [rbx+6D6h]
 * 000000014021EE32: test    al, 2
 * 000000014021EE34: jnz     short loc_14021EE5D
 * 000000014021EE36: test    al, 1
 * 000000014021EE38: jz      short loc_14021EE5D
 * 000000014021EE3A: movzx   eax, byte ptr [rbx+6D4h]
 * 000000014021EE41: movzx   r9d, word ptr [rbx+6D2h]
 * 000000014021EE49: shr     al, 4
 * 000000014021EE4C: and     al, 1
 * 000000014021EE4E: mov     [rsp+98h+arg_10], 1
 * 000000014021EE56: mov     [rsp+98h+arg_8], al
 * 000000014021EE5D: mov     rcx, 4000000000h
 * 000000014021EE67: xor     eax, eax
 * 000000014021EE69: test    rcx, r12
 * 000000014021EE6C: jz      short loc_14021EE81
 * 000000014021EE6E: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 000000014021EE75: jnz     short loc_14021EE81
 * 000000014021EE77: or      r9w, 4
 * 000000014021EE7C: mov     eax, 4
 * 000000014021EE81: mov     [rbx+6E6h], ax
 * 000000014021EE88: mov     rsi, rbx
 * 000000014021EE8B: mov     [rbx+6EAh], ax
 * 000000014021EE92: mov     r15, rbx
 * 000000014021EE95: mov     [rbx+6D0h], ax
 * 000000014021EE9C: mov     rbp, rbx
 * 000000014021EE9F: mov     rax, r12
 * 000000014021EEA2: mov     ecx, 80h
 * 000000014021EEA7: and     eax, 2000h
 * 000000014021EEAC: mov     [rsp+98h+var_60], rax
 * 000000014021EEB1: jz      short loc_14021EEC1
 * 000000014021EEB3: or      [rbx+6E6h], cx
 * 000000014021EEBA: or      [rbx+6D0h], cx
 * 000000014021EEC1: mov     rax, 80000000000h
 * 000000014021EECB: mov     rdx, r12
 * 000000014021EECE: and     rdx, rax
 * 000000014021EED1: mov     [rsp+98h+var_70], rdx
 * 000000014021EED6: jz      short loc_14021EEE8
 * 000000014021EED8: or      word ptr [rsi+6E6h], 2
 * 000000014021EEE0: or      word ptr [rbp+6D0h], 2
 * 000000014021EEE8: mov     rax, 40000000000000h
 * 000000014021EEF2: mov     ecx, 400h
 * 000000014021EEF7: and     r12, rax
 * 000000014021EEFA: jz      short loc_14021EF0A
 * 000000014021EEFC: or      [rsi+6E6h], cx
 * 000000014021EF03: or      [rbp+6D0h], cx
 * 000000014021EF0A: mov     eax, [r13+87Ch]
 * 000000014021EF11: mov     r10, qword ptr [rsp+98h+var_50]
 * 000000014021EF16: mov     rcx, [rbx+6D8h]
 * 000000014021EF1D: mov     r11, r10
 * 000000014021EF20: shr     eax, 17h
 * 000000014021EF23: movzx   r8d, r10b
 * 000000014021EF27: and     eax, 1
 * 000000014021EF2A: mov     [rsp+98h+var_68], rcx
 * 000000014021EF2F: mov     [rsp+98h+var_78], eax
 * 000000014021EF33: mov     rax, 2000000000h
 * 000000014021EF3D: and     r11, rax
 * 000000014021EF40: jnz     loc_14021F1C7
 * 000000014021EF46: test    rdi, rdi
 * 000000014021EF49: jnz     loc_14021F070
 * 000000014021EF4F: test    r10b, 2
 * 000000014021EF53: jz      short loc_14021EF74
 * 000000014021EF55: test    r10b, 40h
 * 000000014021EF59: jz      loc_14021F048
 * 000000014021EF5F: or      word ptr [rbp+6D0h], 2
 * 000000014021EF67: test    r14, r14
 * 000000014021EF6A: jnz     short loc_14021EF74
 * 000000014021EF6C: or      word ptr [rsi+6E6h], 2
 * 000000014021EF74: mov     eax, 0FFFBh
 * 000000014021EF79: and     [rbx+6D2h], ax
 * 000000014021EF80: movzx   eax, r8b
 * 000000014021EF84: and     al, 42h
 * 000000014021EF86: cmp     al, 42h ; 'B'
 * 000000014021EF88: jnz     short loc_14021EFC5
 * 000000014021EF8A: mov     rax, 100000000h
 * 000000014021EF94: test    rax, r10
 * 000000014021EF97: jnz     short loc_14021EFA6
 * 000000014021EF99: test    dword ptr [r13+9D0h], 40000000h
 * 000000014021EFA4: jz      short loc_14021EFC5
 * 000000014021EFA6: or      word ptr [r15+6EAh], 2
 * 000000014021EFAF: test    r14, r14
 * 000000014021EFB2: jz      short loc_14021EFC5
 * 000000014021EFB4: cmp     r13, cs:PsInitialSystemProcess
 * 000000014021EFBB: jz      short loc_14021EFC5
 * 000000014021EFBD: or      word ptr [rsi+6E6h], 2
 * 000000014021EFC5: test    rdx, rdx
 * 000000014021EFC8: jz      short loc_14021EFD3
 * 000000014021EFCA: or      word ptr [r15+6EAh], 2
 * 000000014021EFD3: mov     rax, 8000000000h
 * 000000014021EFDD: test    rax, r10
 * 000000014021EFE0: jz      short loc_14021EFF8
 * 000000014021EFE2: test    dword ptr [r13+9D4h], 2000h
 * 000000014021EFED: jz      short loc_14021EFF8
 * 000000014021EFEF: or      word ptr [r15+6EAh], 4
 * 000000014021EFF8: mov     r10d, 400h
 * 000000014021EFFE: test    r12, r12
 * 000000014021F001: jz      short loc_14021F00B
 * 000000014021F003: or      [r15+6EAh], r10w
 * 000000014021F00B: test    rcx, rcx
 * 000000014021F00E: jz      loc_14021F28E
 * 000000014021F014: cmp     rcx, rdi
 * 000000014021F017: jz      loc_14021F28E
 * 000000014021F01D: cmp     rcx, [r13+9E8h]
 * 000000014021F024: jz      loc_14021F28E
 * 000000014021F02A: test    r9b, 1
 * 000000014021F02E: jz      loc_14021F252
 * 000000014021F034: test    r8b, 2
 * 000000014021F038: jnz     loc_14021F205
 * 000000014021F03E: and     r9w, 4
 * 000000014021F043: jmp     loc_14021F229
 * 000000014021F048: test    r8b, 10h
 * 000000014021F04C: jz      loc_14021EF74
 * 000000014021F052: or      word ptr [rbp+6D0h], 1
 * 000000014021F05A: test    r14, r14
 * 000000014021F05D: jnz     loc_14021EF74
 * 000000014021F063: or      word ptr [rsi+6E6h], 1
 * 000000014021F06B: jmp     loc_14021EF74
 * 000000014021F070: lea     rcx, [rsp+98h+var_50]
 * 000000014021F075: call    KiIsBranchConfusionMitigationEnabled
 * 000000014021F07A: test    eax, eax
 * 000000014021F07C: jnz     loc_14021F147
 * 000000014021F082: lea     rcx, [rsp+98h+var_50]
 * 000000014021F087: call    KiIsSrsoMitigationEnabled
 * 000000014021F08C: test    eax, eax
 * 000000014021F08E: jnz     loc_14021F147
 * 000000014021F094: test    r8b, 10h
 * 000000014021F098: jz      short loc_14021F0C6
 * 000000014021F09A: or      word ptr [rbp+6D0h], 1
 * 000000014021F0A2: test    r14, r14
 * 000000014021F0A5: jnz     short loc_14021F0AF
 * 000000014021F0A7: or      word ptr [rsi+6E6h], 1
 * 000000014021F0AF: test    r8b, 20h
 * 000000014021F0B3: jnz     loc_14021F1A8
 * 000000014021F0B9: or      word ptr [rbx+6E0h], 2
 * 000000014021F0C1: jmp     loc_14021F1A8
 * 000000014021F0C6: movzx   eax, r8b
 * 000000014021F0CA: and     al, 42h
 * 000000014021F0CC: cmp     al, 42h ; 'B'
 * 000000014021F0CE: jnz     short loc_14021F0E5
 * 000000014021F0D0: or      word ptr [rbp+6D0h], 2
 * 000000014021F0D8: test    r14, r14
 * 000000014021F0DB: jnz     short loc_14021F0E5
 * 000000014021F0DD: or      word ptr [rsi+6E6h], 2
 * 000000014021F0E5: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F0EC: test    r14, r14
 * 000000014021F0EF: jz      short loc_14021F129
 * 000000014021F0F1: or      ax, 10h
 * 000000014021F0F5: mov     [rbx+6E0h], ax
 * 000000014021F0FC: test    r8b, 20h
 * 000000014021F100: jnz     short loc_14021F112
 * 000000014021F102: or      ax, 2
 * 000000014021F106: mov     [rbx+6E0h], ax
 * 000000014021F10D: jmp     loc_14021F1A8
 * 000000014021F112: test    r8b, 8
 * 000000014021F116: jnz     loc_14021F1A8
 * 000000014021F11C: or      ax, 40h
 * 000000014021F120: mov     [rbx+6E0h], ax
 * 000000014021F127: jmp     short loc_14021F1A8
 * 000000014021F129: or      ax, 8
 * 000000014021F12D: mov     [rbx+6E0h], ax
 * 000000014021F134: test    r8b, 8
 * 000000014021F138: jnz     short loc_14021F1A8
 * 000000014021F13A: or      ax, 2
 * 000000014021F13E: mov     [rbx+6E0h], ax
 * 000000014021F145: jmp     short loc_14021F1A8
 * 000000014021F147: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F14E: or      ax, 8
 * 000000014021F152: mov     [rbx+6E0h], ax
 * 000000014021F159: test    r8b, 8
 * 000000014021F15D: jnz     short loc_14021F16A
 * 000000014021F15F: or      ax, 2
 * 000000014021F163: mov     [rbx+6E0h], ax
 * 000000014021F16A: test    r8b, 2
 * 000000014021F16E: jz      short loc_14021F1A8
 * 000000014021F170: test    r8b, 40h
 * 000000014021F174: jz      short loc_14021F18D
 * 000000014021F176: or      word ptr [rbp+6D0h], 2
 * 000000014021F17E: test    r14, r14
 * 000000014021F181: jnz     short loc_14021F1A8
 * 000000014021F183: or      word ptr [rsi+6E6h], 2
 * 000000014021F18B: jmp     short loc_14021F1A8
 * 000000014021F18D: test    r8b, 10h
 * 000000014021F191: jz      short loc_14021F1A8
 * 000000014021F193: or      word ptr [rbp+6D0h], 1
 * 000000014021F19B: test    r14, r14
 * 000000014021F19E: jnz     short loc_14021F1A8
 * 000000014021F1A0: or      word ptr [rsi+6E6h], 1
 * 000000014021F1A8: test    byte ptr [rbx+6E2h], 30h
 * 000000014021F1AF: mov     rcx, [rsp+98h+var_68]
 * 000000014021F1B4: mov     rdx, [rsp+98h+var_70]
 * 000000014021F1B9: jz      short loc_14021F1C7
 * 000000014021F1BB: mov     eax, 200h
 * 000000014021F1C0: or      [rbx+6E0h], ax
 * 000000014021F1C7: test    rdi, rdi
 * 000000014021F1CA: jz      loc_14021EF74
 * 000000014021F1D0: mov     rax, 8000000000h
 * 000000014021F1DA: test    rax, r10
 * 000000014021F1DD: jz      loc_14021EF74
 * 000000014021F1E3: or      word ptr [rbp+6D0h], 4
 * 000000014021F1EB: or      word ptr [rbx+6D2h], 4
 * 000000014021F1F3: or      word ptr [rsi+6E6h], 4
 * 000000014021F1FB: or      r9w, 4
 * 000000014021F200: jmp     loc_14021EF80
 * 000000014021F205: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F20C: test    al, 4
 * 000000014021F20E: jnz     short loc_14021F223
 * 000000014021F210: test    r14, r14
 * 000000014021F213: jz      short loc_14021F23A
 * 000000014021F215: test    byte ptr [rbx+6D6h], 1
 * 000000014021F21C: jnz     short loc_14021F23A
 * 000000014021F21E: and     r9w, 4
 * 000000014021F223: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 000000014021F229: test    r9b, 1
 * 000000014021F22D: jnz     short loc_14021F26B
 * 000000014021F22F: mov     al, 1
 * 000000014021F231: mov     [rsp+98h+arg_10], al
 * 000000014021F238: jmp     short loc_14021F296
 * 000000014021F23A: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 000000014021F240: test    r8b, 40h
 * 000000014021F244: jz      short loc_14021F229
 * 000000014021F246: and     r9w, 4
 * 000000014021F24B: or      r9w, 2
 * 000000014021F250: jmp     short loc_14021F229
 * 000000014021F252: test    r11, r11
 * 000000014021F255: jnz     short loc_14021F26B
 * 000000014021F257: test    r8b, 10h
 * 000000014021F25B: jnz     short loc_14021F26B
 * 000000014021F25D: test    r14, r14
 * 000000014021F260: jz      short loc_14021F28E
 * 000000014021F262: test    byte ptr [rbx+6D6h], 2
 * 000000014021F269: jnz     short loc_14021F28E
 * 000000014021F26B: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F272: or      ax, 4
 * 000000014021F276: mov     [rbx+6E0h], ax
 * 000000014021F27D: test    r8b, 8
 * 000000014021F281: jnz     short loc_14021F28E
 * 000000014021F283: or      ax, 20h
 * 000000014021F287: mov     [rbx+6E0h], ax
 * 000000014021F28E: movzx   eax, [rsp+98h+arg_8]
 * 000000014021F296: mov     edx, 80h
 * 000000014021F29B: movzx   ecx, r9w
 * 000000014021F29F: or      cx, dx
 * 000000014021F2A2: cmp     [rsp+98h+var_60], 0
 * 000000014021F2A8: cmovz   cx, r9w
 * 000000014021F2AD: movzx   edx, cx
 * 000000014021F2B0: or      dx, 2
 * 000000014021F2B4: cmp     [rsp+98h+var_70], 0
 * 000000014021F2BA: cmovz   dx, cx
 * 000000014021F2BE: movzx   edi, dx
 * 000000014021F2C1: or      di, r10w
 * 000000014021F2C5: test    r12, r12
 * 000000014021F2C8: cmovz   di, dx
 * 000000014021F2CC: test    al, al
 * 000000014021F2CE: jz      short loc_14021F325
 * 000000014021F2D0: mov     eax, 1
 * 000000014021F2D5: xor     edx, edx
 * 000000014021F2D7: mov     ecx, 49h ; 'I'
 * 000000014021F2DC: wrmsr
 * 000000014021F2DE: test    r8b, 8
 * 000000014021F2E2: jnz     short loc_14021F2E9
 * 000000014021F2E4: call    KiFlushCurrentRsb
 * 000000014021F2E9: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F2F0: mov     ecx, 0FFFBh
 * 000000014021F2F5: and     ax, cx
 * 000000014021F2F8: mov     qword ptr [rbx+6D8h], 0
 * 000000014021F303: mov     ecx, 0FFDFh
 * 000000014021F308: mov     [rbx+6D2h], di
 * 000000014021F30F: and     ax, cx
 * 000000014021F312: mov     [rbx+6E0h], ax
 * 000000014021F319: mov     eax, 0FFAFh
 * 000000014021F31E: and     [rbx+6D4h], ax
 * 000000014021F325: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F32C: movzx   edx, di
 * 000000014021F32F: test    al, 4
 * 000000014021F331: jz      loc_14021F4E8
 * 000000014021F337: mov     rdx, [rsp+98h+var_58]
 * 000000014021F33C: mov     r12d, 2
 * 000000014021F342: mov     rax, [rbx+2DB0h]
 * 000000014021F349: cmp     [rsp+98h+var_68], rdx
 * 000000014021F34E: jz      short loc_14021F35B
 * 000000014021F350: lock or [rbx+6ECh], r12w
 * 000000014021F359: jmp     short loc_14021F3A5
 * 000000014021F35B: movzx   eax, word ptr [rax+6ECh]
 * 000000014021F362: movzx   ecx, word ptr [r15+6EAh]
 * 000000014021F36A: test    al, 1
 * 000000014021F36C: jnz     short loc_14021F389
 * 000000014021F36E: or      cx, r12w
 * 000000014021F372: mov     [r15+6EAh], cx
 * 000000014021F37A: test    r14, r14
 * 000000014021F37D: jz      short loc_14021F3A5
 * 000000014021F37F: or      [rsi+6E6h], r12w
 * 000000014021F387: jmp     short loc_14021F3A5
 * 000000014021F389: mov     eax, 0FFFDh
 * 000000014021F38E: and     cx, ax
 * 000000014021F391: mov     [r15+6EAh], cx
 * 000000014021F399: test    r14, r14
 * 000000014021F39C: jz      short loc_14021F3A5
 * 000000014021F39E: and     [rsi+6E6h], ax
 * 000000014021F3A5: test    rdx, rdx
 * 000000014021F3A8: jnz     loc_14021F42E
 * 000000014021F3AE: mov     rcx, r13
 * 000000014021F3B1: call    KiUpdateStibpPairing
 * 000000014021F3B6: movzx   ecx, word ptr [rbx+6D2h]
 * 000000014021F3BD: mov     r9d, eax
 * 000000014021F3C0: movzx   r8d, word ptr [rbp+6D0h]
 * 000000014021F3C8: mov     eax, 0FFFCh
 * 000000014021F3CD: and     cx, ax
 * 000000014021F3D0: and     r8w, 3
 * 000000014021F3D5: or      cx, r8w
 * 000000014021F3D9: movzx   edx, di
 * 000000014021F3DC: and     dx, ax
 * 000000014021F3DF: mov     [rbx+6D2h], cx
 * 000000014021F3E6: test    r14, r14
 * 000000014021F3E9: jz      short loc_14021F3FA
 * 000000014021F3EB: test    byte ptr [rbx+6D6h], 1
 * 000000014021F3F2: jz      short loc_14021F3FA
 * 000000014021F3F4: neg     r8w
 * 000000014021F3F8: jmp     short loc_14021F405
 * 000000014021F3FA: movzx   eax, byte ptr [rsi+6E6h]
 * 000000014021F401: and     al, 3
 * 000000014021F403: neg     al
 * 000000014021F405: sbb     ax, ax
 * 000000014021F408: mov     r8b, 1
 * 000000014021F40B: and     ax, r12w
 * 000000014021F40F: or      dx, ax
 * 000000014021F412: cmp     [rsp+98h+arg_18], 0
 * 000000014021F41A: jnz     loc_14021F4F4
 * 000000014021F420: lock or [rbx+6ECh], r12w
 * 000000014021F429: jmp     loc_14021F4F4
 * 000000014021F42E: cmp     [rsp+98h+var_78], 0
 * 000000014021F433: movzx   edx, di
 * 000000014021F436: jz      loc_14021F4E8
 * 000000014021F43C: prefetchw byte ptr [rbx+6ECh]
 * 000000014021F443: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F44A: mov     edx, 100h
 * 000000014021F44F: nop
 * 000000014021F450: movzx   ecx, ax
 * 000000014021F453: or      cx, dx
 * 000000014021F456: lock cmpxchg [rbx+6ECh], cx
 * 000000014021F45F: jnz     short loc_14021F450
 * 000000014021F461: movzx   ecx, ax
 * 000000014021F464: mov     rdx, 20000000000h
 * 000000014021F46E: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F475: and     ecx, 1
 * 000000014021F478: test    rdx, rax
 * 000000014021F47B: jz      short loc_14021F4B7
 * 000000014021F47D: movzx   eax, word ptr [rbp+6D0h]
 * 000000014021F484: test    al, 3
 * 000000014021F486: jnz     short loc_14021F493
 * 000000014021F488: or      ax, r12w
 * 000000014021F48C: mov     [rbp+6D0h], ax
 * 000000014021F493: movzx   eax, word ptr [rbx+6D2h]
 * 000000014021F49A: test    al, 3
 * 000000014021F49C: jnz     short loc_14021F4A9
 * 000000014021F49E: or      ax, r12w
 * 000000014021F4A2: mov     [rbx+6D2h], ax
 * 000000014021F4A9: test    byte ptr [rbx+6D6h], 1
 * 000000014021F4B0: movzx   edx, di
 * 000000014021F4B3: jz      short loc_14021F4DA
 * 000000014021F4B5: jmp     short loc_14021F4D0
 * 000000014021F4B7: movzx   eax, word ptr [rsi+6E6h]
 * 000000014021F4BE: test    al, 3
 * 000000014021F4C0: jnz     short loc_14021F4CD
 * 000000014021F4C2: or      ax, r12w
 * 000000014021F4C6: mov     [rsi+6E6h], ax
 * 000000014021F4CD: movzx   edx, di
 * 000000014021F4D0: test    dil, 3
 * 000000014021F4D4: jnz     short loc_14021F4DA
 * 000000014021F4D6: or      dx, r12w
 * 000000014021F4DA: lock or [rbx+6ECh], r12w
 * 000000014021F4E3: mov     r9d, ecx
 * 000000014021F4E6: jmp     short loc_14021F4EB
 * 000000014021F4E8: xor     r9d, r9d
 * 000000014021F4EB: movzx   r8d, [rsp+98h+arg_10]
 * 000000014021F4F4: mov     r15, [rsp+98h+var_38]
 * 000000014021F4F9: mov     r14, [rsp+98h+var_30]
 * 000000014021F4FE: mov     r12, [rsp+98h+var_28]
 * 000000014021F503: mov     rsi, [rsp+98h+var_18]
 * 000000014021F50B: mov     rbp, [rsp+98h+arg_0]
 * 000000014021F513: cmp     dx, [rbx+6E4h]
 * 000000014021F51A: jz      short loc_14021F533
 * 000000014021F51C: mov     [rbx+6E4h], dx
 * 000000014021F523: mov     ecx, 48h ; 'H'
 * 000000014021F528: movzx   edx, dx
 * 000000014021F52B: mov     eax, edx
 * 000000014021F52D: shr     rdx, 20h
 * 000000014021F531: wrmsr
 * 000000014021F533: test    r8b, r8b
 * 000000014021F536: jz      short loc_14021F53F
 * 000000014021F538: or      byte ptr [rbx+6D6h], 2
 * 000000014021F53F: lfence
 * 000000014021F542: sti
 * 000000014021F543: test    r9d, r9d
 * 000000014021F546: jz      short loc_14021F550
 * 000000014021F548: mov     rcx, rbx
 * 000000014021F54B: call    KiSynchronizeStibpPairing
 * 000000014021F550: mov     rdi, [rsp+98h+var_20]
 * 000000014021F555: add     rsp, 88h
 * 000000014021F55C: pop     r13
 * 000000014021F55E: pop     rbx
 * 000000014021F55F: retn
 */
