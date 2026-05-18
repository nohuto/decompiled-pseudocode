/*
 * XREFs of sub_180043F74 @ 0x180043F74
 * Callers:
 *     sub_180002F70 @ 0x180002F70 (sub_180002F70.c)
 *     sub_180003170 @ 0x180003170 (sub_180003170.c)
 *     sub_180003260 @ 0x180003260 (sub_180003260.c)
 *     sub_180003350 @ 0x180003350 (sub_180003350.c)
 *     sub_180003440 @ 0x180003440 (sub_180003440.c)
 *     sub_180003530 @ 0x180003530 (sub_180003530.c)
 *     sub_180003620 @ 0x180003620 (sub_180003620.c)
 *     sub_180003710 @ 0x180003710 (sub_180003710.c)
 *     sub_180003800 @ 0x180003800 (sub_180003800.c)
 *     sub_1800038F0 @ 0x1800038F0 (sub_1800038F0.c)
 *     sub_1800039E0 @ 0x1800039E0 (sub_1800039E0.c)
 *     sub_180003AD0 @ 0x180003AD0 (sub_180003AD0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000FF40 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     sub_180043DD8 @ 0x180043DD8 (sub_180043DD8.c)
 *     sub_180043DEC @ 0x180043DEC (sub_180043DEC.c)
 *     sub_180043E00 @ 0x180043E00 (sub_180043E00.c)
 *     sub_1800CF2C8 @ 0x1800CF2C8 (sub_1800CF2C8.c)
 *     sub_1800CF3A0 @ 0x1800CF3A0 (sub_1800CF3A0.c)
 *     _alloca_probe @ 0x18011E680 (_alloca_probe.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180043F74 @ 0x180043F74
 * Reason: Hex-Rays returned no pseudocode for 0x180043F74
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180043F74: mov     rax, rsp
 * 0000000180043F77: mov     [rax+10h], rbx
 * 0000000180043F7B: mov     [rax+18h], rsi
 * 0000000180043F7F: mov     [rax+20h], rdi
 * 0000000180043F83: push    rbp
 * 0000000180043F84: push    r12
 * 0000000180043F86: push    r13
 * 0000000180043F88: push    r14
 * 0000000180043F8A: push    r15
 * 0000000180043F8C: lea     rbp, [rax-9E18h]
 * 0000000180043F93: mov     eax, 9EF0h
 * 0000000180043F98: call    _alloca_probe
 * 0000000180043F9D: sub     rsp, rax
 * 0000000180043FA0: mov     ebx, cs:TlsIndex
 * 0000000180043FA6: mov     rdi, gs:58h
 * 0000000180043FAF: mov     r15d, 2Ch ; ','
 * 0000000180043FB5: mov     rax, [rdi+rbx*8]
 * 0000000180043FB9: or      r14d, 0FFFFFFFFh
 * 0000000180043FBD: lea     esi, [r14+2]
 * 0000000180043FC1: lea     r12d, [r14+0Ah]
 * 0000000180043FC5: lea     r13, aStandardshader_0; "StandardShader/ShaderModel40/"
 * 0000000180043FCC: mov     eax, [r15+rax]
 * 0000000180043FD0: cmp     cs:dword_1802188D0, eax
 * 0000000180043FD6: jle     loc_1800440B6
 * 0000000180043FDC: lea     rcx, dword_1802188D0
 * 0000000180043FE3: call    _Init_thread_header
 * 0000000180043FE8: cmp     cs:dword_1802188D0, r14d
 * 0000000180043FEF: jnz     loc_1800440B6
 * 0000000180043FF5: lea     rax, unk_18013E8E0
 * 0000000180043FFC: mov     qword ptr [rsp+9F10h+var_9EC0], rax
 * 0000000180044001: lea     rax, unk_180144CC4
 * 0000000180044008: mov     qword ptr [rsp+9F10h+var_9EC0+8], rax
 * 000000018004400D: movups  xmm0, [rsp+9F10h+var_9EC0]
 * 0000000180044012: movups  [rbp+9E10h+var_89F0], xmm0
 * 0000000180044019: mov     dword ptr [rbp+9E10h+var_89E0], 5
 * 0000000180044023: mov     dword ptr [rbp+9E10h+var_89E0+4], esi
 * 0000000180044029: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004402E: movups  xmm0, [rbp+9E10h+var_89E0]
 * 0000000180044035: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004403A: call    sub_180043E00
 * 000000018004403F: mov     r8, rax
 * 0000000180044042: mov     r9d, r12d
 * 0000000180044045: xor     edx, edx
 * 0000000180044047: lea     rcx, [rbp+9E10h+Src]; Src
 * 000000018004404E: call    sub_1800CF2C8
 * 0000000180044053: nop
 * 0000000180044054: mov     r8, rax
 * 0000000180044057: mov     rdx, r13
 * 000000018004405A: lea     rcx, [rbp+9E10h+var_7020]
 * 0000000180044061: call    sub_180043BDC
 * 0000000180044066: nop
 * 0000000180044067: lea     r8, aPixel; "/Pixel"
 * 000000018004406E: mov     rdx, rax
 * 0000000180044071: lea     rcx, [rbp+9E10h+var_7040]
 * 0000000180044078: call    sub_18002C218
 * 000000018004407D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044082: mov     rcx, rax
 * 0000000180044085: call    sub_1800CF3A0
 * 000000018004408A: mov     cs:byte_1802188CC, al
 * 0000000180044090: lea     rcx, [rbp+9E10h+var_7020]; void *
 * 0000000180044097: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004409C: nop
 * 000000018004409D: lea     rcx, [rbp+9E10h+Src]; void *
 * 00000001800440A4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800440A9: nop
 * 00000001800440AA: lea     rcx, dword_1802188D0
 * 00000001800440B1: call    _Init_thread_footer
 * 00000001800440B6: mov     rax, [rdi+rbx*8]
 * 00000001800440BA: mov     eax, [r15+rax]
 * 00000001800440BE: cmp     cs:dword_1802188D8, eax
 * 00000001800440C4: jle     loc_1800441A5
 * 00000001800440CA: lea     rcx, dword_1802188D8
 * 00000001800440D1: call    _Init_thread_header
 * 00000001800440D6: cmp     cs:dword_1802188D8, r14d
 * 00000001800440DD: jnz     loc_1800441A5
 * 00000001800440E3: lea     rax, unk_180144CD0
 * 00000001800440EA: mov     qword ptr [rsp+9F10h+var_9EB0], rax
 * 00000001800440EF: lea     rax, unk_1801456C8
 * 00000001800440F6: mov     qword ptr [rsp+9F10h+var_9EB0+8], rax
 * 00000001800440FB: movups  xmm0, [rsp+9F10h+var_9EB0]
 * 0000000180044100: movups  [rbp+9E10h+var_89D0], xmm0
 * 0000000180044107: mov     dword ptr [rbp+9E10h+var_89C0], 5
 * 0000000180044111: mov     dword ptr [rbp+9E10h+var_89C0+4], esi
 * 0000000180044117: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004411C: movups  xmm0, [rbp+9E10h+var_89C0]
 * 0000000180044123: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044128: call    sub_180043E00
 * 000000018004412D: mov     r8, rax
 * 0000000180044130: mov     r9d, r12d
 * 0000000180044133: mov     rdx, rsi
 * 0000000180044136: lea     rcx, [rbp+9E10h+var_6FA0]; Src
 * 000000018004413D: call    sub_1800CF2C8
 * 0000000180044142: nop
 * 0000000180044143: mov     r8, rax
 * 0000000180044146: mov     rdx, r13
 * 0000000180044149: lea     rcx, [rbp+9E10h+var_6FC0]
 * 0000000180044150: call    sub_180043BDC
 * 0000000180044155: nop
 * 0000000180044156: lea     r8, aPixel; "/Pixel"
 * 000000018004415D: mov     rdx, rax
 * 0000000180044160: lea     rcx, [rbp+9E10h+var_6FE0]
 * 0000000180044167: call    sub_18002C218
 * 000000018004416C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044171: mov     rcx, rax
 * 0000000180044174: call    sub_1800CF3A0
 * 0000000180044179: mov     cs:byte_1802188D4, al
 * 000000018004417F: lea     rcx, [rbp+9E10h+var_6FC0]; void *
 * 0000000180044186: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004418B: nop
 * 000000018004418C: lea     rcx, [rbp+9E10h+var_6FA0]; void *
 * 0000000180044193: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044198: nop
 * 0000000180044199: lea     rcx, dword_1802188D8
 * 00000001800441A0: call    _Init_thread_footer
 * 00000001800441A5: mov     rax, [rdi+rbx*8]
 * 00000001800441A9: mov     eax, [r15+rax]
 * 00000001800441AD: cmp     cs:dword_1802188E0, eax
 * 00000001800441B3: jle     loc_180044296
 * 00000001800441B9: lea     rcx, dword_1802188E0
 * 00000001800441C0: call    _Init_thread_header
 * 00000001800441C5: cmp     cs:dword_1802188E0, r14d
 * 00000001800441CC: jnz     loc_180044296
 * 00000001800441D2: lea     rax, unk_18013E8E0
 * 00000001800441D9: mov     qword ptr [rsp+9F10h+var_9EA0], rax
 * 00000001800441DE: lea     rax, unk_180144CC4
 * 00000001800441E5: mov     qword ptr [rsp+9F10h+var_9EA0+8], rax
 * 00000001800441EA: movups  xmm0, [rsp+9F10h+var_9EA0]
 * 00000001800441EF: movups  [rbp+9E10h+var_89B0], xmm0
 * 00000001800441F6: mov     dword ptr [rbp+9E10h+var_89A0], 5
 * 0000000180044200: mov     dword ptr [rbp+9E10h+var_89A0+4], esi
 * 0000000180044206: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004420B: movups  xmm0, [rbp+9E10h+var_89A0]
 * 0000000180044212: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044217: call    sub_180043E00
 * 000000018004421C: mov     r8, rax
 * 000000018004421F: mov     r9d, r12d
 * 0000000180044222: mov     edx, 2
 * 0000000180044227: lea     rcx, [rbp+9E10h+var_6F40]; Src
 * 000000018004422E: call    sub_1800CF2C8
 * 0000000180044233: nop
 * 0000000180044234: mov     r8, rax
 * 0000000180044237: mov     rdx, r13
 * 000000018004423A: lea     rcx, [rbp+9E10h+var_6F60]
 * 0000000180044241: call    sub_180043BDC
 * 0000000180044246: nop
 * 0000000180044247: lea     r8, aPixel; "/Pixel"
 * 000000018004424E: mov     rdx, rax
 * 0000000180044251: lea     rcx, [rbp+9E10h+var_6F80]
 * 0000000180044258: call    sub_18002C218
 * 000000018004425D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044262: mov     rcx, rax
 * 0000000180044265: call    sub_1800CF3A0
 * 000000018004426A: mov     cs:byte_1802188DC, al
 * 0000000180044270: lea     rcx, [rbp+9E10h+var_6F60]; void *
 * 0000000180044277: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004427C: nop
 * 000000018004427D: lea     rcx, [rbp+9E10h+var_6F40]; void *
 * 0000000180044284: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044289: nop
 * 000000018004428A: lea     rcx, dword_1802188E0
 * 0000000180044291: call    _Init_thread_footer
 * 0000000180044296: mov     rax, [rdi+rbx*8]
 * 000000018004429A: mov     eax, [r15+rax]
 * 000000018004429E: cmp     cs:dword_1802188E8, eax
 * 00000001800442A4: jle     loc_180044384
 * 00000001800442AA: lea     rcx, dword_1802188E8
 * 00000001800442B1: call    _Init_thread_header
 * 00000001800442B6: cmp     cs:dword_1802188E8, r14d
 * 00000001800442BD: jnz     loc_180044384
 * 00000001800442C3: lea     rax, unk_1801456D0
 * 00000001800442CA: mov     qword ptr [rbp+9E10h+var_9E90], rax
 * 00000001800442CE: lea     rax, unk_180148874
 * 00000001800442D5: mov     qword ptr [rbp+9E10h+var_9E90+8], rax
 * 00000001800442D9: movups  xmm0, [rbp+9E10h+var_9E90]
 * 00000001800442DD: movups  [rbp+9E10h+var_8990], xmm0
 * 00000001800442E4: mov     dword ptr [rbp+9E10h+var_8980], 5
 * 00000001800442EE: mov     dword ptr [rbp+9E10h+var_8980+4], esi
 * 00000001800442F4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800442F9: movups  xmm0, [rbp+9E10h+var_8980]
 * 0000000180044300: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044305: call    sub_180043E00
 * 000000018004430A: mov     r8, rax
 * 000000018004430D: mov     r9d, r12d
 * 0000000180044310: mov     edx, 4
 * 0000000180044315: lea     rcx, [rbp+9E10h+var_6EE0]; Src
 * 000000018004431C: call    sub_1800CF2C8
 * 0000000180044321: nop
 * 0000000180044322: mov     r8, rax
 * 0000000180044325: mov     rdx, r13
 * 0000000180044328: lea     rcx, [rbp+9E10h+var_6F00]
 * 000000018004432F: call    sub_180043BDC
 * 0000000180044334: nop
 * 0000000180044335: lea     r8, aPixel; "/Pixel"
 * 000000018004433C: mov     rdx, rax
 * 000000018004433F: lea     rcx, [rbp+9E10h+var_6F20]
 * 0000000180044346: call    sub_18002C218
 * 000000018004434B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044350: mov     rcx, rax
 * 0000000180044353: call    sub_1800CF3A0
 * 0000000180044358: mov     cs:byte_1802188E4, al
 * 000000018004435E: lea     rcx, [rbp+9E10h+var_6F00]; void *
 * 0000000180044365: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004436A: nop
 * 000000018004436B: lea     rcx, [rbp+9E10h+var_6EE0]; void *
 * 0000000180044372: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044377: nop
 * 0000000180044378: lea     rcx, dword_1802188E8
 * 000000018004437F: call    _Init_thread_footer
 * 0000000180044384: mov     rax, [rdi+rbx*8]
 * 0000000180044388: mov     ecx, [r15+rax]
 * 000000018004438C: cmp     cs:dword_1802188F0, ecx
 * 0000000180044392: jle     loc_180044472
 * 0000000180044398: lea     rcx, dword_1802188F0
 * 000000018004439F: call    _Init_thread_header
 * 00000001800443A4: cmp     cs:dword_1802188F0, r14d
 * 00000001800443AB: jnz     loc_180044472
 * 00000001800443B1: lea     rax, unk_180148880
 * 00000001800443B8: mov     qword ptr [rbp+9E10h+var_9E80], rax
 * 00000001800443BC: lea     rax, unk_180149278
 * 00000001800443C3: mov     qword ptr [rbp+9E10h+var_9E80+8], rax
 * 00000001800443C7: movups  xmm0, [rbp+9E10h+var_9E80]
 * 00000001800443CB: movups  [rbp+9E10h+var_8970], xmm0
 * 00000001800443D2: mov     dword ptr [rbp+9E10h+var_8960], 5
 * 00000001800443DC: mov     dword ptr [rbp+9E10h+var_8960+4], esi
 * 00000001800443E2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800443E7: movups  xmm0, [rbp+9E10h+var_8960]
 * 00000001800443EE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800443F3: call    sub_180043E00
 * 00000001800443F8: mov     r8, rax
 * 00000001800443FB: mov     r9d, r12d
 * 00000001800443FE: mov     edx, 5
 * 0000000180044403: lea     rcx, [rbp+9E10h+var_6E80]; Src
 * 000000018004440A: call    sub_1800CF2C8
 * 000000018004440F: nop
 * 0000000180044410: mov     r8, rax
 * 0000000180044413: mov     rdx, r13
 * 0000000180044416: lea     rcx, [rbp+9E10h+var_6EA0]
 * 000000018004441D: call    sub_180043BDC
 * 0000000180044422: nop
 * 0000000180044423: lea     r8, aPixel; "/Pixel"
 * 000000018004442A: mov     rdx, rax
 * 000000018004442D: lea     rcx, [rbp+9E10h+var_6EC0]
 * 0000000180044434: call    sub_18002C218
 * 0000000180044439: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004443E: mov     rcx, rax
 * 0000000180044441: call    sub_1800CF3A0
 * 0000000180044446: mov     cs:byte_1802188EC, al
 * 000000018004444C: lea     rcx, [rbp+9E10h+var_6EA0]; void *
 * 0000000180044453: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044458: nop
 * 0000000180044459: lea     rcx, [rbp+9E10h+var_6E80]; void *
 * 0000000180044460: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044465: nop
 * 0000000180044466: lea     rcx, dword_1802188F0
 * 000000018004446D: call    _Init_thread_footer
 * 0000000180044472: mov     rax, [rdi+rbx*8]
 * 0000000180044476: mov     eax, [r15+rax]
 * 000000018004447A: cmp     cs:dword_1802188F8, eax
 * 0000000180044480: jle     loc_180044560
 * 0000000180044486: lea     rcx, dword_1802188F8
 * 000000018004448D: call    _Init_thread_header
 * 0000000180044492: cmp     cs:dword_1802188F8, r14d
 * 0000000180044499: jnz     loc_180044560
 * 000000018004449F: lea     rax, unk_1801456D0
 * 00000001800444A6: mov     qword ptr [rbp+9E10h+var_9E70], rax
 * 00000001800444AA: lea     rax, unk_180148874
 * 00000001800444B1: mov     qword ptr [rbp+9E10h+var_9E70+8], rax
 * 00000001800444B5: movups  xmm0, [rbp+9E10h+var_9E70]
 * 00000001800444B9: movups  [rbp+9E10h+var_8950], xmm0
 * 00000001800444C0: mov     dword ptr [rbp+9E10h+var_8940], 5
 * 00000001800444CA: mov     dword ptr [rbp+9E10h+var_8940+4], esi
 * 00000001800444D0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800444D5: movups  xmm0, [rbp+9E10h+var_8940]
 * 00000001800444DC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800444E1: call    sub_180043E00
 * 00000001800444E6: mov     r8, rax
 * 00000001800444E9: mov     r9d, r12d
 * 00000001800444EC: mov     edx, 6
 * 00000001800444F1: lea     rcx, [rbp+9E10h+var_6E20]; Src
 * 00000001800444F8: call    sub_1800CF2C8
 * 00000001800444FD: nop
 * 00000001800444FE: mov     r8, rax
 * 0000000180044501: mov     rdx, r13
 * 0000000180044504: lea     rcx, [rbp+9E10h+var_6E40]
 * 000000018004450B: call    sub_180043BDC
 * 0000000180044510: nop
 * 0000000180044511: lea     r8, aPixel; "/Pixel"
 * 0000000180044518: mov     rdx, rax
 * 000000018004451B: lea     rcx, [rbp+9E10h+var_6E60]
 * 0000000180044522: call    sub_18002C218
 * 0000000180044527: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004452C: mov     rcx, rax
 * 000000018004452F: call    sub_1800CF3A0
 * 0000000180044534: mov     cs:byte_1802188F4, al
 * 000000018004453A: lea     rcx, [rbp+9E10h+var_6E40]; void *
 * 0000000180044541: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044546: nop
 * 0000000180044547: lea     rcx, [rbp+9E10h+var_6E20]; void *
 * 000000018004454E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044553: nop
 * 0000000180044554: lea     rcx, dword_1802188F8
 * 000000018004455B: call    _Init_thread_footer
 * 0000000180044560: mov     rax, [rdi+rbx*8]
 * 0000000180044564: mov     eax, [r15+rax]
 * 0000000180044568: cmp     cs:dword_180218900, eax
 * 000000018004456E: jle     loc_18004464E
 * 0000000180044574: lea     rcx, dword_180218900
 * 000000018004457B: call    _Init_thread_header
 * 0000000180044580: cmp     cs:dword_180218900, r14d
 * 0000000180044587: jnz     loc_18004464E
 * 000000018004458D: lea     rax, unk_180149280
 * 0000000180044594: mov     qword ptr [rbp+9E10h+var_9E60], rax
 * 0000000180044598: lea     rax, unk_18014F80C
 * 000000018004459F: mov     qword ptr [rbp+9E10h+var_9E60+8], rax
 * 00000001800445A3: movups  xmm0, [rbp+9E10h+var_9E60]
 * 00000001800445A7: movups  [rbp+9E10h+var_8930], xmm0
 * 00000001800445AE: mov     dword ptr [rbp+9E10h+var_8920], 5
 * 00000001800445B8: mov     dword ptr [rbp+9E10h+var_8920+4], esi
 * 00000001800445BE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800445C3: movups  xmm0, [rbp+9E10h+var_8920]
 * 00000001800445CA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800445CF: call    sub_180043E00
 * 00000001800445D4: mov     r8, rax
 * 00000001800445D7: mov     r9d, r12d
 * 00000001800445DA: mov     edx, 8
 * 00000001800445DF: lea     rcx, [rbp+9E10h+var_6DC0]; Src
 * 00000001800445E6: call    sub_1800CF2C8
 * 00000001800445EB: nop
 * 00000001800445EC: mov     r8, rax
 * 00000001800445EF: mov     rdx, r13
 * 00000001800445F2: lea     rcx, [rbp+9E10h+var_6DE0]
 * 00000001800445F9: call    sub_180043BDC
 * 00000001800445FE: nop
 * 00000001800445FF: lea     r8, aPixel; "/Pixel"
 * 0000000180044606: mov     rdx, rax
 * 0000000180044609: lea     rcx, [rbp+9E10h+var_6E00]
 * 0000000180044610: call    sub_18002C218
 * 0000000180044615: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004461A: mov     rcx, rax
 * 000000018004461D: call    sub_1800CF3A0
 * 0000000180044622: mov     cs:byte_1802188FC, al
 * 0000000180044628: lea     rcx, [rbp+9E10h+var_6DE0]; void *
 * 000000018004462F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044634: nop
 * 0000000180044635: lea     rcx, [rbp+9E10h+var_6DC0]; void *
 * 000000018004463C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044641: nop
 * 0000000180044642: lea     rcx, dword_180218900
 * 0000000180044649: call    _Init_thread_footer
 * 000000018004464E: mov     rax, [rdi+rbx*8]
 * 0000000180044652: mov     eax, [r15+rax]
 * 0000000180044656: cmp     cs:dword_180218908, eax
 * 000000018004465C: jle     loc_18004473A
 * 0000000180044662: lea     rcx, dword_180218908
 * 0000000180044669: call    _Init_thread_header
 * 000000018004466E: cmp     cs:dword_180218908, r14d
 * 0000000180044675: jnz     loc_18004473A
 * 000000018004467B: lea     rax, unk_18014F810
 * 0000000180044682: mov     qword ptr [rbp+9E10h+var_9E50], rax
 * 0000000180044686: lea     rax, unk_1801508D8
 * 000000018004468D: mov     qword ptr [rbp+9E10h+var_9E50+8], rax
 * 0000000180044691: movups  xmm0, [rbp+9E10h+var_9E50]
 * 0000000180044695: movups  [rbp+9E10h+var_8910], xmm0
 * 000000018004469C: mov     dword ptr [rbp+9E10h+var_8900], 5
 * 00000001800446A6: mov     dword ptr [rbp+9E10h+var_8900+4], esi
 * 00000001800446AC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800446B1: movups  xmm0, [rbp+9E10h+var_8900]
 * 00000001800446B8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800446BD: call    sub_180043E00
 * 00000001800446C2: mov     r8, rax
 * 00000001800446C5: mov     r9d, r12d
 * 00000001800446C8: mov     rdx, r12
 * 00000001800446CB: lea     rcx, [rbp+9E10h+var_6D60]; Src
 * 00000001800446D2: call    sub_1800CF2C8
 * 00000001800446D7: nop
 * 00000001800446D8: mov     r8, rax
 * 00000001800446DB: mov     rdx, r13
 * 00000001800446DE: lea     rcx, [rbp+9E10h+var_6D80]
 * 00000001800446E5: call    sub_180043BDC
 * 00000001800446EA: nop
 * 00000001800446EB: lea     r8, aPixel; "/Pixel"
 * 00000001800446F2: mov     rdx, rax
 * 00000001800446F5: lea     rcx, [rbp+9E10h+var_6DA0]
 * 00000001800446FC: call    sub_18002C218
 * 0000000180044701: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044706: mov     rcx, rax
 * 0000000180044709: call    sub_1800CF3A0
 * 000000018004470E: mov     cs:byte_180218904, al
 * 0000000180044714: lea     rcx, [rbp+9E10h+var_6D80]; void *
 * 000000018004471B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044720: nop
 * 0000000180044721: lea     rcx, [rbp+9E10h+var_6D60]; void *
 * 0000000180044728: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004472D: nop
 * 000000018004472E: lea     rcx, dword_180218908
 * 0000000180044735: call    _Init_thread_footer
 * 000000018004473A: mov     rax, [rdi+rbx*8]
 * 000000018004473E: mov     eax, [r15+rax]
 * 0000000180044742: cmp     cs:dword_180218910, eax
 * 0000000180044748: jle     loc_180044828
 * 000000018004474E: lea     rcx, dword_180218910
 * 0000000180044755: call    _Init_thread_header
 * 000000018004475A: cmp     cs:dword_180218910, r14d
 * 0000000180044761: jnz     loc_180044828
 * 0000000180044767: lea     rax, unk_180149280
 * 000000018004476E: mov     qword ptr [rbp+9E10h+var_9E40], rax
 * 0000000180044772: lea     rax, unk_18014F80C
 * 0000000180044779: mov     qword ptr [rbp+9E10h+var_9E40+8], rax
 * 000000018004477D: movups  xmm0, [rbp+9E10h+var_9E40]
 * 0000000180044781: movups  [rbp+9E10h+var_88F0], xmm0
 * 0000000180044788: mov     dword ptr [rbp+9E10h+var_88E0], 5
 * 0000000180044792: mov     dword ptr [rbp+9E10h+var_88E0+4], esi
 * 0000000180044798: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004479D: movups  xmm0, [rbp+9E10h+var_88E0]
 * 00000001800447A4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800447A9: call    sub_180043E00
 * 00000001800447AE: mov     r8, rax
 * 00000001800447B1: mov     r9d, r12d
 * 00000001800447B4: mov     edx, 0Ah
 * 00000001800447B9: lea     rcx, [rbp+9E10h+var_6D00]; Src
 * 00000001800447C0: call    sub_1800CF2C8
 * 00000001800447C5: nop
 * 00000001800447C6: mov     r8, rax
 * 00000001800447C9: mov     rdx, r13
 * 00000001800447CC: lea     rcx, [rbp+9E10h+var_6D20]
 * 00000001800447D3: call    sub_180043BDC
 * 00000001800447D8: nop
 * 00000001800447D9: lea     r8, aPixel; "/Pixel"
 * 00000001800447E0: mov     rdx, rax
 * 00000001800447E3: lea     rcx, [rbp+9E10h+var_6D40]
 * 00000001800447EA: call    sub_18002C218
 * 00000001800447EF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800447F4: mov     rcx, rax
 * 00000001800447F7: call    sub_1800CF3A0
 * 00000001800447FC: mov     cs:byte_18021890C, al
 * 0000000180044802: lea     rcx, [rbp+9E10h+var_6D20]; void *
 * 0000000180044809: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004480E: nop
 * 000000018004480F: lea     rcx, [rbp+9E10h+var_6D00]; void *
 * 0000000180044816: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004481B: nop
 * 000000018004481C: lea     rcx, dword_180218910
 * 0000000180044823: call    _Init_thread_footer
 * 0000000180044828: mov     rax, [rdi+rbx*8]
 * 000000018004482C: mov     eax, [r15+rax]
 * 0000000180044830: cmp     cs:dword_180218918, eax
 * 0000000180044836: jle     loc_180044916
 * 000000018004483C: lea     rcx, dword_180218918
 * 0000000180044843: call    _Init_thread_header
 * 0000000180044848: cmp     cs:dword_180218918, r14d
 * 000000018004484F: jnz     loc_180044916
 * 0000000180044855: lea     rax, unk_1801508E0
 * 000000018004485C: mov     qword ptr [rbp+9E10h+var_9E30], rax
 * 0000000180044860: lea     rax, unk_180156E98
 * 0000000180044867: mov     qword ptr [rbp+9E10h+var_9E30+8], rax
 * 000000018004486B: movups  xmm0, [rbp+9E10h+var_9E30]
 * 000000018004486F: movups  [rbp+9E10h+var_88D0], xmm0
 * 0000000180044876: mov     dword ptr [rbp+9E10h+var_88C0], 5
 * 0000000180044880: mov     dword ptr [rbp+9E10h+var_88C0+4], esi
 * 0000000180044886: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004488B: movups  xmm0, [rbp+9E10h+var_88C0]
 * 0000000180044892: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044897: call    sub_180043E00
 * 000000018004489C: mov     r8, rax
 * 000000018004489F: mov     r9d, r12d
 * 00000001800448A2: mov     edx, 10h
 * 00000001800448A7: lea     rcx, [rbp+9E10h+var_6CA0]; Src
 * 00000001800448AE: call    sub_1800CF2C8
 * 00000001800448B3: nop
 * 00000001800448B4: mov     r8, rax
 * 00000001800448B7: mov     rdx, r13
 * 00000001800448BA: lea     rcx, [rbp+9E10h+var_6CC0]
 * 00000001800448C1: call    sub_180043BDC
 * 00000001800448C6: nop
 * 00000001800448C7: lea     r8, aPixel; "/Pixel"
 * 00000001800448CE: mov     rdx, rax
 * 00000001800448D1: lea     rcx, [rbp+9E10h+var_6CE0]
 * 00000001800448D8: call    sub_18002C218
 * 00000001800448DD: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800448E2: mov     rcx, rax
 * 00000001800448E5: call    sub_1800CF3A0
 * 00000001800448EA: mov     cs:byte_180218914, al
 * 00000001800448F0: lea     rcx, [rbp+9E10h+var_6CC0]; void *
 * 00000001800448F7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800448FC: nop
 * 00000001800448FD: lea     rcx, [rbp+9E10h+var_6CA0]; void *
 * 0000000180044904: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044909: nop
 * 000000018004490A: lea     rcx, dword_180218918
 * 0000000180044911: call    _Init_thread_footer
 * 0000000180044916: mov     rax, [rdi+rbx*8]
 * 000000018004491A: mov     eax, [r15+rax]
 * 000000018004491E: cmp     cs:dword_180218920, eax
 * 0000000180044924: jle     loc_180044A04
 * 000000018004492A: lea     rcx, dword_180218920
 * 0000000180044931: call    _Init_thread_header
 * 0000000180044936: cmp     cs:dword_180218920, r14d
 * 000000018004493D: jnz     loc_180044A04
 * 0000000180044943: lea     rax, unk_1801508E0
 * 000000018004494A: mov     qword ptr [rbp+9E10h+var_9E20], rax
 * 000000018004494E: lea     rax, unk_180156E98
 * 0000000180044955: mov     qword ptr [rbp+9E10h+var_9E20+8], rax
 * 0000000180044959: movups  xmm0, [rbp+9E10h+var_9E20]
 * 000000018004495D: movups  [rbp+9E10h+var_88B0], xmm0
 * 0000000180044964: mov     dword ptr [rbp+9E10h+var_88A0], 5
 * 000000018004496E: mov     dword ptr [rbp+9E10h+var_88A0+4], esi
 * 0000000180044974: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180044979: movups  xmm0, [rbp+9E10h+var_88A0]
 * 0000000180044980: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044985: call    sub_180043E00
 * 000000018004498A: mov     r8, rax
 * 000000018004498D: mov     r9d, r12d
 * 0000000180044990: mov     edx, 12h
 * 0000000180044995: lea     rcx, [rbp+9E10h+var_6C40]; Src
 * 000000018004499C: call    sub_1800CF2C8
 * 00000001800449A1: nop
 * 00000001800449A2: mov     r8, rax
 * 00000001800449A5: mov     rdx, r13
 * 00000001800449A8: lea     rcx, [rbp+9E10h+var_6C60]
 * 00000001800449AF: call    sub_180043BDC
 * 00000001800449B4: nop
 * 00000001800449B5: lea     r8, aPixel; "/Pixel"
 * 00000001800449BC: mov     rdx, rax
 * 00000001800449BF: lea     rcx, [rbp+9E10h+var_6C80]
 * 00000001800449C6: call    sub_18002C218
 * 00000001800449CB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800449D0: mov     rcx, rax
 * 00000001800449D3: call    sub_1800CF3A0
 * 00000001800449D8: mov     cs:byte_18021891C, al
 * 00000001800449DE: lea     rcx, [rbp+9E10h+var_6C60]; void *
 * 00000001800449E5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800449EA: nop
 * 00000001800449EB: lea     rcx, [rbp+9E10h+var_6C40]; void *
 * 00000001800449F2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800449F7: nop
 * 00000001800449F8: lea     rcx, dword_180218920
 * 00000001800449FF: call    _Init_thread_footer
 * 0000000180044A04: mov     rax, [rdi+rbx*8]
 * 0000000180044A08: mov     eax, [r15+rax]
 * 0000000180044A0C: cmp     cs:dword_180218928, eax
 * 0000000180044A12: jle     loc_180044AF2
 * 0000000180044A18: lea     rcx, dword_180218928
 * 0000000180044A1F: call    _Init_thread_header
 * 0000000180044A24: cmp     cs:dword_180218928, r14d
 * 0000000180044A2B: jnz     loc_180044AF2
 * 0000000180044A31: lea     rax, unk_180156EA0
 * 0000000180044A38: mov     qword ptr [rbp+9E10h+var_9E10], rax
 * 0000000180044A3C: lea     rax, unk_18015A198
 * 0000000180044A43: mov     qword ptr [rbp+9E10h+var_9E10+8], rax
 * 0000000180044A47: movups  xmm0, [rbp+9E10h+var_9E10]
 * 0000000180044A4B: movups  [rbp+9E10h+var_8890], xmm0
 * 0000000180044A52: mov     dword ptr [rbp+9E10h+var_8880], 5
 * 0000000180044A5C: mov     dword ptr [rbp+9E10h+var_8880+4], esi
 * 0000000180044A62: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180044A67: movups  xmm0, [rbp+9E10h+var_8880]
 * 0000000180044A6E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044A73: call    sub_180043E00
 * 0000000180044A78: mov     r8, rax
 * 0000000180044A7B: mov     r9d, r12d
 * 0000000180044A7E: mov     edx, 14h
 * 0000000180044A83: lea     rcx, [rbp+9E10h+var_6BE0]; Src
 * 0000000180044A8A: call    sub_1800CF2C8
 * 0000000180044A8F: nop
 * 0000000180044A90: mov     r8, rax
 * 0000000180044A93: mov     rdx, r13
 * 0000000180044A96: lea     rcx, [rbp+9E10h+var_6C00]
 * 0000000180044A9D: call    sub_180043BDC
 * 0000000180044AA2: nop
 * 0000000180044AA3: lea     r8, aPixel; "/Pixel"
 * 0000000180044AAA: mov     rdx, rax
 * 0000000180044AAD: lea     rcx, [rbp+9E10h+var_6C20]
 * 0000000180044AB4: call    sub_18002C218
 * 0000000180044AB9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044ABE: mov     rcx, rax
 * 0000000180044AC1: call    sub_1800CF3A0
 * 0000000180044AC6: mov     cs:byte_180218924, al
 * 0000000180044ACC: lea     rcx, [rbp+9E10h+var_6C00]; void *
 * 0000000180044AD3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044AD8: nop
 * 0000000180044AD9: lea     rcx, [rbp+9E10h+var_6BE0]; void *
 * 0000000180044AE0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044AE5: nop
 * 0000000180044AE6: lea     rcx, dword_180218928
 * 0000000180044AED: call    _Init_thread_footer
 * 0000000180044AF2: mov     rax, [rdi+rbx*8]
 * 0000000180044AF6: mov     eax, [r15+rax]
 * 0000000180044AFA: cmp     cs:dword_180218930, eax
 * 0000000180044B00: jle     loc_180044BE0
 * 0000000180044B06: lea     rcx, dword_180218930
 * 0000000180044B0D: call    _Init_thread_header
 * 0000000180044B12: cmp     cs:dword_180218930, r14d
 * 0000000180044B19: jnz     loc_180044BE0
 * 0000000180044B1F: lea     rax, unk_180156EA0
 * 0000000180044B26: mov     qword ptr [rbp+9E10h+var_9E00], rax
 * 0000000180044B2A: lea     rax, unk_18015A198
 * 0000000180044B31: mov     qword ptr [rbp+9E10h+var_9E00+8], rax
 * 0000000180044B35: movups  xmm0, [rbp+9E10h+var_9E00]
 * 0000000180044B39: movups  [rbp+9E10h+var_8870], xmm0
 * 0000000180044B40: mov     dword ptr [rbp+9E10h+var_8860], 5
 * 0000000180044B4A: mov     dword ptr [rbp+9E10h+var_8860+4], esi
 * 0000000180044B50: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180044B55: movups  xmm0, [rbp+9E10h+var_8860]
 * 0000000180044B5C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044B61: call    sub_180043E00
 * 0000000180044B66: mov     r8, rax
 * 0000000180044B69: mov     r9d, r12d
 * 0000000180044B6C: mov     edx, 16h
 * 0000000180044B71: lea     rcx, [rbp+9E10h+var_6B80]; Src
 * 0000000180044B78: call    sub_1800CF2C8
 * 0000000180044B7D: nop
 * 0000000180044B7E: mov     r8, rax
 * 0000000180044B81: mov     rdx, r13
 * 0000000180044B84: lea     rcx, [rbp+9E10h+var_6BA0]
 * 0000000180044B8B: call    sub_180043BDC
 * 0000000180044B90: nop
 * 0000000180044B91: lea     r8, aPixel; "/Pixel"
 * 0000000180044B98: mov     rdx, rax
 * 0000000180044B9B: lea     rcx, [rbp+9E10h+var_6BC0]
 * 0000000180044BA2: call    sub_18002C218
 * 0000000180044BA7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044BAC: mov     rcx, rax
 * 0000000180044BAF: call    sub_1800CF3A0
 * 0000000180044BB4: mov     cs:byte_18021892C, al
 * 0000000180044BBA: lea     rcx, [rbp+9E10h+var_6BA0]; void *
 * 0000000180044BC1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044BC6: nop
 * 0000000180044BC7: lea     rcx, [rbp+9E10h+var_6B80]; void *
 * 0000000180044BCE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044BD3: nop
 * 0000000180044BD4: lea     rcx, dword_180218930
 * 0000000180044BDB: call    _Init_thread_footer
 * 0000000180044BE0: mov     rax, [rdi+rbx*8]
 * 0000000180044BE4: mov     eax, [r15+rax]
 * 0000000180044BE8: cmp     cs:dword_180218938, eax
 * 0000000180044BEE: jle     loc_180044CCE
 * 0000000180044BF4: lea     rcx, dword_180218938
 * 0000000180044BFB: call    _Init_thread_header
 * 0000000180044C00: cmp     cs:dword_180218938, r14d
 * 0000000180044C07: jnz     loc_180044CCE
 * 0000000180044C0D: lea     rax, unk_18015A1A0
 * 0000000180044C14: mov     qword ptr [rbp+9E10h+var_9DF0], rax
 * 0000000180044C18: lea     rax, unk_18016092C
 * 0000000180044C1F: mov     qword ptr [rbp+9E10h+var_9DF0+8], rax
 * 0000000180044C23: movups  xmm0, [rbp+9E10h+var_9DF0]
 * 0000000180044C27: movups  [rbp+9E10h+var_8850], xmm0
 * 0000000180044C2E: mov     dword ptr [rbp+9E10h+var_8840], 5
 * 0000000180044C38: mov     dword ptr [rbp+9E10h+var_8840+4], esi
 * 0000000180044C3E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180044C43: movups  xmm0, [rbp+9E10h+var_8840]
 * 0000000180044C4A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044C4F: call    sub_180043E00
 * 0000000180044C54: mov     r8, rax
 * 0000000180044C57: mov     r9d, r12d
 * 0000000180044C5A: mov     edx, 18h
 * 0000000180044C5F: lea     rcx, [rbp+9E10h+var_6B20]; Src
 * 0000000180044C66: call    sub_1800CF2C8
 * 0000000180044C6B: nop
 * 0000000180044C6C: mov     r8, rax
 * 0000000180044C6F: mov     rdx, r13
 * 0000000180044C72: lea     rcx, [rbp+9E10h+var_6B40]
 * 0000000180044C79: call    sub_180043BDC
 * 0000000180044C7E: nop
 * 0000000180044C7F: lea     r8, aPixel; "/Pixel"
 * 0000000180044C86: mov     rdx, rax
 * 0000000180044C89: lea     rcx, [rbp+9E10h+var_6B60]
 * 0000000180044C90: call    sub_18002C218
 * 0000000180044C95: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044C9A: mov     rcx, rax
 * 0000000180044C9D: call    sub_1800CF3A0
 * 0000000180044CA2: mov     cs:byte_180218934, al
 * 0000000180044CA8: lea     rcx, [rbp+9E10h+var_6B40]; void *
 * 0000000180044CAF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044CB4: nop
 * 0000000180044CB5: lea     rcx, [rbp+9E10h+var_6B20]; void *
 * 0000000180044CBC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044CC1: nop
 * 0000000180044CC2: lea     rcx, dword_180218938
 * 0000000180044CC9: call    _Init_thread_footer
 * 0000000180044CCE: mov     rax, [rdi+rbx*8]
 * 0000000180044CD2: mov     eax, [r15+rax]
 * 0000000180044CD6: cmp     cs:dword_180218940, eax
 * 0000000180044CDC: jle     loc_180044DBC
 * 0000000180044CE2: lea     rcx, dword_180218940
 * 0000000180044CE9: call    _Init_thread_header
 * 0000000180044CEE: cmp     cs:dword_180218940, r14d
 * 0000000180044CF5: jnz     loc_180044DBC
 * 0000000180044CFB: lea     rax, unk_18015A1A0
 * 0000000180044D02: mov     qword ptr [rbp+9E10h+var_9DE0], rax
 * 0000000180044D06: lea     rax, unk_18016092C
 * 0000000180044D0D: mov     qword ptr [rbp+9E10h+var_9DE0+8], rax
 * 0000000180044D11: movups  xmm0, [rbp+9E10h+var_9DE0]
 * 0000000180044D15: movups  [rbp+9E10h+var_8830], xmm0
 * 0000000180044D1C: mov     dword ptr [rbp+9E10h+var_8820], 5
 * 0000000180044D26: mov     dword ptr [rbp+9E10h+var_8820+4], esi
 * 0000000180044D2C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180044D31: movups  xmm0, [rbp+9E10h+var_8820]
 * 0000000180044D38: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044D3D: call    sub_180043E00
 * 0000000180044D42: mov     r8, rax
 * 0000000180044D45: mov     r9d, r12d
 * 0000000180044D48: mov     edx, 1Ah
 * 0000000180044D4D: lea     rcx, [rbp+9E10h+var_6AC0]; Src
 * 0000000180044D54: call    sub_1800CF2C8
 * 0000000180044D59: nop
 * 0000000180044D5A: mov     r8, rax
 * 0000000180044D5D: mov     rdx, r13
 * 0000000180044D60: lea     rcx, [rbp+9E10h+var_6AE0]
 * 0000000180044D67: call    sub_180043BDC
 * 0000000180044D6C: nop
 * 0000000180044D6D: lea     r8, aPixel; "/Pixel"
 * 0000000180044D74: mov     rdx, rax
 * 0000000180044D77: lea     rcx, [rbp+9E10h+var_6B00]
 * 0000000180044D7E: call    sub_18002C218
 * 0000000180044D83: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044D88: mov     rcx, rax
 * 0000000180044D8B: call    sub_1800CF3A0
 * 0000000180044D90: mov     cs:byte_18021893C, al
 * 0000000180044D96: lea     rcx, [rbp+9E10h+var_6AE0]; void *
 * 0000000180044D9D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044DA2: nop
 * 0000000180044DA3: lea     rcx, [rbp+9E10h+var_6AC0]; void *
 * 0000000180044DAA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044DAF: nop
 * 0000000180044DB0: lea     rcx, dword_180218940
 * 0000000180044DB7: call    _Init_thread_footer
 * 0000000180044DBC: mov     rax, [rdi+rbx*8]
 * 0000000180044DC0: mov     eax, [r15+rax]
 * 0000000180044DC4: cmp     cs:dword_180218948, eax
 * 0000000180044DCA: jle     loc_180044EAA
 * 0000000180044DD0: lea     rcx, dword_180218948
 * 0000000180044DD7: call    _Init_thread_header
 * 0000000180044DDC: cmp     cs:dword_180218948, r14d
 * 0000000180044DE3: jnz     loc_180044EAA
 * 0000000180044DE9: lea     rax, unk_18013E8E0
 * 0000000180044DF0: mov     qword ptr [rbp+9E10h+var_9DD0], rax
 * 0000000180044DF4: lea     rax, unk_180144CC4
 * 0000000180044DFB: mov     qword ptr [rbp+9E10h+var_9DD0+8], rax
 * 0000000180044DFF: movups  xmm0, [rbp+9E10h+var_9DD0]
 * 0000000180044E03: movups  [rbp+9E10h+var_8810], xmm0
 * 0000000180044E0A: mov     dword ptr [rbp+9E10h+var_8800], 5
 * 0000000180044E14: mov     dword ptr [rbp+9E10h+var_8800+4], esi
 * 0000000180044E1A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180044E1F: movups  xmm0, [rbp+9E10h+var_8800]
 * 0000000180044E26: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044E2B: call    sub_180043E00
 * 0000000180044E30: mov     r8, rax
 * 0000000180044E33: mov     r9d, r12d
 * 0000000180044E36: mov     edx, 20h ; ' '
 * 0000000180044E3B: lea     rcx, [rbp+9E10h+var_6A60]; Src
 * 0000000180044E42: call    sub_1800CF2C8
 * 0000000180044E47: nop
 * 0000000180044E48: mov     r8, rax
 * 0000000180044E4B: mov     rdx, r13
 * 0000000180044E4E: lea     rcx, [rbp+9E10h+var_6A80]
 * 0000000180044E55: call    sub_180043BDC
 * 0000000180044E5A: nop
 * 0000000180044E5B: lea     r8, aPixel; "/Pixel"
 * 0000000180044E62: mov     rdx, rax
 * 0000000180044E65: lea     rcx, [rbp+9E10h+var_6AA0]
 * 0000000180044E6C: call    sub_18002C218
 * 0000000180044E71: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044E76: mov     rcx, rax
 * 0000000180044E79: call    sub_1800CF3A0
 * 0000000180044E7E: mov     cs:byte_180218944, al
 * 0000000180044E84: lea     rcx, [rbp+9E10h+var_6A80]; void *
 * 0000000180044E8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044E90: nop
 * 0000000180044E91: lea     rcx, [rbp+9E10h+var_6A60]; void *
 * 0000000180044E98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044E9D: nop
 * 0000000180044E9E: lea     rcx, dword_180218948
 * 0000000180044EA5: call    _Init_thread_footer
 * 0000000180044EAA: mov     rax, [rdi+rbx*8]
 * 0000000180044EAE: mov     eax, [r15+rax]
 * 0000000180044EB2: cmp     cs:dword_180218950, eax
 * 0000000180044EB8: jle     loc_180044F98
 * 0000000180044EBE: lea     rcx, dword_180218950
 * 0000000180044EC5: call    _Init_thread_header
 * 0000000180044ECA: cmp     cs:dword_180218950, r14d
 * 0000000180044ED1: jnz     loc_180044F98
 * 0000000180044ED7: lea     rax, unk_180144CD0
 * 0000000180044EDE: mov     qword ptr [rbp+9E10h+var_9DC0], rax
 * 0000000180044EE2: lea     rax, unk_1801456C8
 * 0000000180044EE9: mov     qword ptr [rbp+9E10h+var_9DC0+8], rax
 * 0000000180044EED: movups  xmm0, [rbp+9E10h+var_9DC0]
 * 0000000180044EF1: movups  [rbp+9E10h+var_87F0], xmm0
 * 0000000180044EF8: mov     dword ptr [rbp+9E10h+var_87E0], 5
 * 0000000180044F02: mov     dword ptr [rbp+9E10h+var_87E0+4], esi
 * 0000000180044F08: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180044F0D: movups  xmm0, [rbp+9E10h+var_87E0]
 * 0000000180044F14: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180044F19: call    sub_180043E00
 * 0000000180044F1E: mov     r8, rax
 * 0000000180044F21: mov     r9d, r12d
 * 0000000180044F24: mov     edx, 21h ; '!'
 * 0000000180044F29: lea     rcx, [rbp+9E10h+var_6A00]; Src
 * 0000000180044F30: call    sub_1800CF2C8
 * 0000000180044F35: nop
 * 0000000180044F36: mov     r8, rax
 * 0000000180044F39: mov     rdx, r13
 * 0000000180044F3C: lea     rcx, [rbp+9E10h+var_6A20]
 * 0000000180044F43: call    sub_180043BDC
 * 0000000180044F48: nop
 * 0000000180044F49: lea     r8, aPixel; "/Pixel"
 * 0000000180044F50: mov     rdx, rax
 * 0000000180044F53: lea     rcx, [rbp+9E10h+var_6A40]
 * 0000000180044F5A: call    sub_18002C218
 * 0000000180044F5F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180044F64: mov     rcx, rax
 * 0000000180044F67: call    sub_1800CF3A0
 * 0000000180044F6C: mov     cs:byte_18021894C, al
 * 0000000180044F72: lea     rcx, [rbp+9E10h+var_6A20]; void *
 * 0000000180044F79: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044F7E: nop
 * 0000000180044F7F: lea     rcx, [rbp+9E10h+var_6A00]; void *
 * 0000000180044F86: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180044F8B: nop
 * 0000000180044F8C: lea     rcx, dword_180218950
 * 0000000180044F93: call    _Init_thread_footer
 * 0000000180044F98: mov     rax, [rdi+rbx*8]
 * 0000000180044F9C: mov     eax, [r15+rax]
 * 0000000180044FA0: cmp     cs:dword_180218958, eax
 * 0000000180044FA6: jle     loc_180045086
 * 0000000180044FAC: lea     rcx, dword_180218958
 * 0000000180044FB3: call    _Init_thread_header
 * 0000000180044FB8: cmp     cs:dword_180218958, r14d
 * 0000000180044FBF: jnz     loc_180045086
 * 0000000180044FC5: lea     rax, unk_18013E8E0
 * 0000000180044FCC: mov     qword ptr [rbp+9E10h+var_9DB0], rax
 * 0000000180044FD0: lea     rax, unk_180144CC4
 * 0000000180044FD7: mov     qword ptr [rbp+9E10h+var_9DB0+8], rax
 * 0000000180044FDB: movups  xmm0, [rbp+9E10h+var_9DB0]
 * 0000000180044FDF: movups  [rbp+9E10h+var_87D0], xmm0
 * 0000000180044FE6: mov     dword ptr [rbp+9E10h+var_87C0], 5
 * 0000000180044FF0: mov     dword ptr [rbp+9E10h+var_87C0+4], esi
 * 0000000180044FF6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180044FFB: movups  xmm0, [rbp+9E10h+var_87C0]
 * 0000000180045002: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180045007: call    sub_180043E00
 * 000000018004500C: mov     r8, rax
 * 000000018004500F: mov     r9d, r12d
 * 0000000180045012: mov     edx, 22h ; '"'
 * 0000000180045017: lea     rcx, [rbp+9E10h+var_69A0]; Src
 * 000000018004501E: call    sub_1800CF2C8
 * 0000000180045023: nop
 * 0000000180045024: mov     r8, rax
 * 0000000180045027: mov     rdx, r13
 * 000000018004502A: lea     rcx, [rbp+9E10h+var_69C0]
 * 0000000180045031: call    sub_180043BDC
 * 0000000180045036: nop
 * 0000000180045037: lea     r8, aPixel; "/Pixel"
 * 000000018004503E: mov     rdx, rax
 * 0000000180045041: lea     rcx, [rbp+9E10h+var_69E0]
 * 0000000180045048: call    sub_18002C218
 * 000000018004504D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045052: mov     rcx, rax
 * 0000000180045055: call    sub_1800CF3A0
 * 000000018004505A: mov     cs:byte_180218954, al
 * 0000000180045060: lea     rcx, [rbp+9E10h+var_69C0]; void *
 * 0000000180045067: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004506C: nop
 * 000000018004506D: lea     rcx, [rbp+9E10h+var_69A0]; void *
 * 0000000180045074: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045079: nop
 * 000000018004507A: lea     rcx, dword_180218958
 * 0000000180045081: call    _Init_thread_footer
 * 0000000180045086: mov     rax, [rdi+rbx*8]
 * 000000018004508A: mov     eax, [r15+rax]
 * 000000018004508E: cmp     cs:dword_180218960, eax
 * 0000000180045094: jle     loc_180045174
 * 000000018004509A: lea     rcx, dword_180218960
 * 00000001800450A1: call    _Init_thread_header
 * 00000001800450A6: cmp     cs:dword_180218960, r14d
 * 00000001800450AD: jnz     loc_180045174
 * 00000001800450B3: lea     rax, unk_180149280
 * 00000001800450BA: mov     qword ptr [rbp+9E10h+var_9DA0], rax
 * 00000001800450BE: lea     rax, unk_18014F80C
 * 00000001800450C5: mov     qword ptr [rbp+9E10h+var_9DA0+8], rax
 * 00000001800450C9: movups  xmm0, [rbp+9E10h+var_9DA0]
 * 00000001800450CD: movups  [rbp+9E10h+var_87B0], xmm0
 * 00000001800450D4: mov     dword ptr [rbp+9E10h+var_87A0], 5
 * 00000001800450DE: mov     dword ptr [rbp+9E10h+var_87A0+4], esi
 * 00000001800450E4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800450E9: movups  xmm0, [rbp+9E10h+var_87A0]
 * 00000001800450F0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800450F5: call    sub_180043E00
 * 00000001800450FA: mov     r8, rax
 * 00000001800450FD: mov     r9d, r12d
 * 0000000180045100: mov     edx, 28h ; '('
 * 0000000180045105: lea     rcx, [rbp+9E10h+var_6940]; Src
 * 000000018004510C: call    sub_1800CF2C8
 * 0000000180045111: nop
 * 0000000180045112: mov     r8, rax
 * 0000000180045115: mov     rdx, r13
 * 0000000180045118: lea     rcx, [rbp+9E10h+var_6960]
 * 000000018004511F: call    sub_180043BDC
 * 0000000180045124: nop
 * 0000000180045125: lea     r8, aPixel; "/Pixel"
 * 000000018004512C: mov     rdx, rax
 * 000000018004512F: lea     rcx, [rbp+9E10h+var_6980]
 * 0000000180045136: call    sub_18002C218
 * 000000018004513B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045140: mov     rcx, rax
 * 0000000180045143: call    sub_1800CF3A0
 * 0000000180045148: mov     cs:byte_18021895C, al
 * 000000018004514E: lea     rcx, [rbp+9E10h+var_6960]; void *
 * 0000000180045155: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004515A: nop
 * 000000018004515B: lea     rcx, [rbp+9E10h+var_6940]; void *
 * 0000000180045162: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045167: nop
 * 0000000180045168: lea     rcx, dword_180218960
 * 000000018004516F: call    _Init_thread_footer
 * 0000000180045174: mov     rax, [rdi+rbx*8]
 * 0000000180045178: mov     eax, [r15+rax]
 * 000000018004517C: cmp     cs:dword_180218968, eax
 * 0000000180045182: jle     loc_18004526B
 * 0000000180045188: lea     rcx, dword_180218968
 * 000000018004518F: call    _Init_thread_header
 * 0000000180045194: cmp     cs:dword_180218968, r14d
 * 000000018004519B: jnz     loc_18004526B
 * 00000001800451A1: lea     rax, unk_18014F810
 * 00000001800451A8: mov     qword ptr [rbp+9E10h+var_9D90], rax
 * 00000001800451AF: lea     rax, unk_1801508D8
 * 00000001800451B6: mov     qword ptr [rbp+9E10h+var_9D90+8], rax
 * 00000001800451BD: movups  xmm0, [rbp+9E10h+var_9D90]
 * 00000001800451C4: movups  [rbp+9E10h+var_8790], xmm0
 * 00000001800451CB: mov     dword ptr [rbp+9E10h+var_8780], 5
 * 00000001800451D5: mov     dword ptr [rbp+9E10h+var_8780+4], esi
 * 00000001800451DB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800451E0: movups  xmm0, [rbp+9E10h+var_8780]
 * 00000001800451E7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800451EC: call    sub_180043E00
 * 00000001800451F1: mov     r8, rax
 * 00000001800451F4: mov     r9d, r12d
 * 00000001800451F7: mov     edx, 29h ; ')'
 * 00000001800451FC: lea     rcx, [rbp+9E10h+var_68E0]; Src
 * 0000000180045203: call    sub_1800CF2C8
 * 0000000180045208: nop
 * 0000000180045209: mov     r8, rax
 * 000000018004520C: mov     rdx, r13
 * 000000018004520F: lea     rcx, [rbp+9E10h+var_6900]
 * 0000000180045216: call    sub_180043BDC
 * 000000018004521B: nop
 * 000000018004521C: lea     r8, aPixel; "/Pixel"
 * 0000000180045223: mov     rdx, rax
 * 0000000180045226: lea     rcx, [rbp+9E10h+var_6920]
 * 000000018004522D: call    sub_18002C218
 * 0000000180045232: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045237: mov     rcx, rax
 * 000000018004523A: call    sub_1800CF3A0
 * 000000018004523F: mov     cs:byte_180218964, al
 * 0000000180045245: lea     rcx, [rbp+9E10h+var_6900]; void *
 * 000000018004524C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045251: nop
 * 0000000180045252: lea     rcx, [rbp+9E10h+var_68E0]; void *
 * 0000000180045259: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004525E: nop
 * 000000018004525F: lea     rcx, dword_180218968
 * 0000000180045266: call    _Init_thread_footer
 * 000000018004526B: mov     rax, [rdi+rbx*8]
 * 000000018004526F: mov     eax, [r15+rax]
 * 0000000180045273: cmp     cs:dword_180218970, eax
 * 0000000180045279: jle     loc_180045362
 * 000000018004527F: lea     rcx, dword_180218970
 * 0000000180045286: call    _Init_thread_header
 * 000000018004528B: cmp     cs:dword_180218970, r14d
 * 0000000180045292: jnz     loc_180045362
 * 0000000180045298: lea     rax, unk_180149280
 * 000000018004529F: mov     qword ptr [rbp+9E10h+var_9D80], rax
 * 00000001800452A6: lea     rax, unk_18014F80C
 * 00000001800452AD: mov     qword ptr [rbp+9E10h+var_9D80+8], rax
 * 00000001800452B4: movups  xmm0, [rbp+9E10h+var_9D80]
 * 00000001800452BB: movups  [rbp+9E10h+var_8770], xmm0
 * 00000001800452C2: mov     dword ptr [rbp+9E10h+var_8760], 5
 * 00000001800452CC: mov     dword ptr [rbp+9E10h+var_8760+4], esi
 * 00000001800452D2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800452D7: movups  xmm0, [rbp+9E10h+var_8760]
 * 00000001800452DE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800452E3: call    sub_180043E00
 * 00000001800452E8: mov     r8, rax
 * 00000001800452EB: mov     r9d, r12d
 * 00000001800452EE: mov     edx, 2Ah ; '*'
 * 00000001800452F3: lea     rcx, [rbp+9E10h+var_6880]; Src
 * 00000001800452FA: call    sub_1800CF2C8
 * 00000001800452FF: nop
 * 0000000180045300: mov     r8, rax
 * 0000000180045303: mov     rdx, r13
 * 0000000180045306: lea     rcx, [rbp+9E10h+var_68A0]
 * 000000018004530D: call    sub_180043BDC
 * 0000000180045312: nop
 * 0000000180045313: lea     r8, aPixel; "/Pixel"
 * 000000018004531A: mov     rdx, rax
 * 000000018004531D: lea     rcx, [rbp+9E10h+var_68C0]
 * 0000000180045324: call    sub_18002C218
 * 0000000180045329: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004532E: mov     rcx, rax
 * 0000000180045331: call    sub_1800CF3A0
 * 0000000180045336: mov     cs:byte_18021896C, al
 * 000000018004533C: lea     rcx, [rbp+9E10h+var_68A0]; void *
 * 0000000180045343: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045348: nop
 * 0000000180045349: lea     rcx, [rbp+9E10h+var_6880]; void *
 * 0000000180045350: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045355: nop
 * 0000000180045356: lea     rcx, dword_180218970
 * 000000018004535D: call    _Init_thread_footer
 * 0000000180045362: mov     rax, [rdi+rbx*8]
 * 0000000180045366: mov     eax, [r15+rax]
 * 000000018004536A: cmp     cs:dword_180218978, eax
 * 0000000180045370: jle     loc_180045459
 * 0000000180045376: lea     rcx, dword_180218978
 * 000000018004537D: call    _Init_thread_header
 * 0000000180045382: cmp     cs:dword_180218978, r14d
 * 0000000180045389: jnz     loc_180045459
 * 000000018004538F: lea     rax, unk_1801508E0
 * 0000000180045396: mov     qword ptr [rbp+9E10h+var_9D70], rax
 * 000000018004539D: lea     rax, unk_180156E98
 * 00000001800453A4: mov     qword ptr [rbp+9E10h+var_9D70+8], rax
 * 00000001800453AB: movups  xmm0, [rbp+9E10h+var_9D70]
 * 00000001800453B2: movups  [rbp+9E10h+var_8750], xmm0
 * 00000001800453B9: mov     dword ptr [rbp+9E10h+var_8740], 5
 * 00000001800453C3: mov     dword ptr [rbp+9E10h+var_8740+4], esi
 * 00000001800453C9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800453CE: movups  xmm0, [rbp+9E10h+var_8740]
 * 00000001800453D5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800453DA: call    sub_180043E00
 * 00000001800453DF: mov     r8, rax
 * 00000001800453E2: mov     r9d, r12d
 * 00000001800453E5: mov     edx, 30h ; '0'
 * 00000001800453EA: lea     rcx, [rbp+9E10h+var_6820]; Src
 * 00000001800453F1: call    sub_1800CF2C8
 * 00000001800453F6: nop
 * 00000001800453F7: mov     r8, rax
 * 00000001800453FA: mov     rdx, r13
 * 00000001800453FD: lea     rcx, [rbp+9E10h+var_6840]
 * 0000000180045404: call    sub_180043BDC
 * 0000000180045409: nop
 * 000000018004540A: lea     r8, aPixel; "/Pixel"
 * 0000000180045411: mov     rdx, rax
 * 0000000180045414: lea     rcx, [rbp+9E10h+var_6860]
 * 000000018004541B: call    sub_18002C218
 * 0000000180045420: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045425: mov     rcx, rax
 * 0000000180045428: call    sub_1800CF3A0
 * 000000018004542D: mov     cs:byte_180218974, al
 * 0000000180045433: lea     rcx, [rbp+9E10h+var_6840]; void *
 * 000000018004543A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004543F: nop
 * 0000000180045440: lea     rcx, [rbp+9E10h+var_6820]; void *
 * 0000000180045447: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004544C: nop
 * 000000018004544D: lea     rcx, dword_180218978
 * 0000000180045454: call    _Init_thread_footer
 * 0000000180045459: mov     rax, [rdi+rbx*8]
 * 000000018004545D: mov     eax, [r15+rax]
 * 0000000180045461: cmp     cs:dword_180218980, eax
 * 0000000180045467: jle     loc_180045550
 * 000000018004546D: lea     rcx, dword_180218980
 * 0000000180045474: call    _Init_thread_header
 * 0000000180045479: cmp     cs:dword_180218980, r14d
 * 0000000180045480: jnz     loc_180045550
 * 0000000180045486: lea     rax, unk_1801508E0
 * 000000018004548D: mov     qword ptr [rbp+9E10h+var_9D60], rax
 * 0000000180045494: lea     rax, unk_180156E98
 * 000000018004549B: mov     qword ptr [rbp+9E10h+var_9D60+8], rax
 * 00000001800454A2: movups  xmm0, [rbp+9E10h+var_9D60]
 * 00000001800454A9: movups  [rbp+9E10h+var_8730], xmm0
 * 00000001800454B0: mov     dword ptr [rbp+9E10h+var_8720], 5
 * 00000001800454BA: mov     dword ptr [rbp+9E10h+var_8720+4], esi
 * 00000001800454C0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800454C5: movups  xmm0, [rbp+9E10h+var_8720]
 * 00000001800454CC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800454D1: call    sub_180043E00
 * 00000001800454D6: mov     r8, rax
 * 00000001800454D9: mov     r9d, r12d
 * 00000001800454DC: mov     edx, 32h ; '2'
 * 00000001800454E1: lea     rcx, [rbp+9E10h+var_67C0]; Src
 * 00000001800454E8: call    sub_1800CF2C8
 * 00000001800454ED: nop
 * 00000001800454EE: mov     r8, rax
 * 00000001800454F1: mov     rdx, r13
 * 00000001800454F4: lea     rcx, [rbp+9E10h+var_67E0]
 * 00000001800454FB: call    sub_180043BDC
 * 0000000180045500: nop
 * 0000000180045501: lea     r8, aPixel; "/Pixel"
 * 0000000180045508: mov     rdx, rax
 * 000000018004550B: lea     rcx, [rbp+9E10h+var_6800]
 * 0000000180045512: call    sub_18002C218
 * 0000000180045517: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004551C: mov     rcx, rax
 * 000000018004551F: call    sub_1800CF3A0
 * 0000000180045524: mov     cs:byte_18021897C, al
 * 000000018004552A: lea     rcx, [rbp+9E10h+var_67E0]; void *
 * 0000000180045531: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045536: nop
 * 0000000180045537: lea     rcx, [rbp+9E10h+var_67C0]; void *
 * 000000018004553E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045543: nop
 * 0000000180045544: lea     rcx, dword_180218980
 * 000000018004554B: call    _Init_thread_footer
 * 0000000180045550: mov     rax, [rdi+rbx*8]
 * 0000000180045554: mov     eax, [r15+rax]
 * 0000000180045558: cmp     cs:dword_180218988, eax
 * 000000018004555E: jle     loc_180045647
 * 0000000180045564: lea     rcx, dword_180218988
 * 000000018004556B: call    _Init_thread_header
 * 0000000180045570: cmp     cs:dword_180218988, r14d
 * 0000000180045577: jnz     loc_180045647
 * 000000018004557D: lea     rax, unk_18015A1A0
 * 0000000180045584: mov     qword ptr [rbp+9E10h+var_9D50], rax
 * 000000018004558B: lea     rax, unk_18016092C
 * 0000000180045592: mov     qword ptr [rbp+9E10h+var_9D50+8], rax
 * 0000000180045599: movups  xmm0, [rbp+9E10h+var_9D50]
 * 00000001800455A0: movups  [rbp+9E10h+var_8710], xmm0
 * 00000001800455A7: mov     dword ptr [rbp+9E10h+var_8700], 5
 * 00000001800455B1: mov     dword ptr [rbp+9E10h+var_8700+4], esi
 * 00000001800455B7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800455BC: movups  xmm0, [rbp+9E10h+var_8700]
 * 00000001800455C3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800455C8: call    sub_180043E00
 * 00000001800455CD: mov     r8, rax
 * 00000001800455D0: mov     r9d, r12d
 * 00000001800455D3: mov     edx, 38h ; '8'
 * 00000001800455D8: lea     rcx, [rbp+9E10h+var_6760]; Src
 * 00000001800455DF: call    sub_1800CF2C8
 * 00000001800455E4: nop
 * 00000001800455E5: mov     r8, rax
 * 00000001800455E8: mov     rdx, r13
 * 00000001800455EB: lea     rcx, [rbp+9E10h+var_6780]
 * 00000001800455F2: call    sub_180043BDC
 * 00000001800455F7: nop
 * 00000001800455F8: lea     r8, aPixel; "/Pixel"
 * 00000001800455FF: mov     rdx, rax
 * 0000000180045602: lea     rcx, [rbp+9E10h+var_67A0]
 * 0000000180045609: call    sub_18002C218
 * 000000018004560E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045613: mov     rcx, rax
 * 0000000180045616: call    sub_1800CF3A0
 * 000000018004561B: mov     cs:byte_180218984, al
 * 0000000180045621: lea     rcx, [rbp+9E10h+var_6780]; void *
 * 0000000180045628: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004562D: nop
 * 000000018004562E: lea     rcx, [rbp+9E10h+var_6760]; void *
 * 0000000180045635: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004563A: nop
 * 000000018004563B: lea     rcx, dword_180218988
 * 0000000180045642: call    _Init_thread_footer
 * 0000000180045647: mov     rax, [rdi+rbx*8]
 * 000000018004564B: mov     eax, [r15+rax]
 * 000000018004564F: cmp     cs:dword_180218990, eax
 * 0000000180045655: jle     loc_18004573E
 * 000000018004565B: lea     rcx, dword_180218990
 * 0000000180045662: call    _Init_thread_header
 * 0000000180045667: cmp     cs:dword_180218990, r14d
 * 000000018004566E: jnz     loc_18004573E
 * 0000000180045674: lea     rax, unk_18015A1A0
 * 000000018004567B: mov     qword ptr [rbp+9E10h+var_9D40], rax
 * 0000000180045682: lea     rax, unk_18016092C
 * 0000000180045689: mov     qword ptr [rbp+9E10h+var_9D40+8], rax
 * 0000000180045690: movups  xmm0, [rbp+9E10h+var_9D40]
 * 0000000180045697: movups  [rbp+9E10h+var_86F0], xmm0
 * 000000018004569E: mov     dword ptr [rbp+9E10h+var_86E0], 5
 * 00000001800456A8: mov     dword ptr [rbp+9E10h+var_86E0+4], esi
 * 00000001800456AE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800456B3: movups  xmm0, [rbp+9E10h+var_86E0]
 * 00000001800456BA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800456BF: call    sub_180043E00
 * 00000001800456C4: mov     r8, rax
 * 00000001800456C7: mov     r9d, r12d
 * 00000001800456CA: mov     edx, 3Ah ; ':'
 * 00000001800456CF: lea     rcx, [rbp+9E10h+var_6700]; Src
 * 00000001800456D6: call    sub_1800CF2C8
 * 00000001800456DB: nop
 * 00000001800456DC: mov     r8, rax
 * 00000001800456DF: mov     rdx, r13
 * 00000001800456E2: lea     rcx, [rbp+9E10h+var_6720]
 * 00000001800456E9: call    sub_180043BDC
 * 00000001800456EE: nop
 * 00000001800456EF: lea     r8, aPixel; "/Pixel"
 * 00000001800456F6: mov     rdx, rax
 * 00000001800456F9: lea     rcx, [rbp+9E10h+var_6740]
 * 0000000180045700: call    sub_18002C218
 * 0000000180045705: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004570A: mov     rcx, rax
 * 000000018004570D: call    sub_1800CF3A0
 * 0000000180045712: mov     cs:byte_18021898C, al
 * 0000000180045718: lea     rcx, [rbp+9E10h+var_6720]; void *
 * 000000018004571F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045724: nop
 * 0000000180045725: lea     rcx, [rbp+9E10h+var_6700]; void *
 * 000000018004572C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045731: nop
 * 0000000180045732: lea     rcx, dword_180218990
 * 0000000180045739: call    _Init_thread_footer
 * 000000018004573E: mov     rax, [rdi+rbx*8]
 * 0000000180045742: mov     eax, [r15+rax]
 * 0000000180045746: cmp     cs:dword_180218998, eax
 * 000000018004574C: jle     loc_180045835
 * 0000000180045752: lea     rcx, dword_180218998
 * 0000000180045759: call    _Init_thread_header
 * 000000018004575E: cmp     cs:dword_180218998, r14d
 * 0000000180045765: jnz     loc_180045835
 * 000000018004576B: lea     rax, unk_18013E8E0
 * 0000000180045772: mov     qword ptr [rbp+9E10h+var_9D30], rax
 * 0000000180045779: lea     rax, unk_180144CC4
 * 0000000180045780: mov     qword ptr [rbp+9E10h+var_9D30+8], rax
 * 0000000180045787: movups  xmm0, [rbp+9E10h+var_9D30]
 * 000000018004578E: movups  [rbp+9E10h+var_86D0], xmm0
 * 0000000180045795: mov     dword ptr [rbp+9E10h+var_86C0], 5
 * 000000018004579F: mov     dword ptr [rbp+9E10h+var_86C0+4], esi
 * 00000001800457A5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800457AA: movups  xmm0, [rbp+9E10h+var_86C0]
 * 00000001800457B1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800457B6: call    sub_180043E00
 * 00000001800457BB: mov     r8, rax
 * 00000001800457BE: mov     r9d, r12d
 * 00000001800457C1: mov     edx, 40h ; '@'
 * 00000001800457C6: lea     rcx, [rbp+9E10h+var_66A0]; Src
 * 00000001800457CD: call    sub_1800CF2C8
 * 00000001800457D2: nop
 * 00000001800457D3: mov     r8, rax
 * 00000001800457D6: mov     rdx, r13
 * 00000001800457D9: lea     rcx, [rbp+9E10h+var_66C0]
 * 00000001800457E0: call    sub_180043BDC
 * 00000001800457E5: nop
 * 00000001800457E6: lea     r8, aPixel; "/Pixel"
 * 00000001800457ED: mov     rdx, rax
 * 00000001800457F0: lea     rcx, [rbp+9E10h+var_66E0]
 * 00000001800457F7: call    sub_18002C218
 * 00000001800457FC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045801: mov     rcx, rax
 * 0000000180045804: call    sub_1800CF3A0
 * 0000000180045809: mov     cs:byte_180218994, al
 * 000000018004580F: lea     rcx, [rbp+9E10h+var_66C0]; void *
 * 0000000180045816: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004581B: nop
 * 000000018004581C: lea     rcx, [rbp+9E10h+var_66A0]; void *
 * 0000000180045823: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045828: nop
 * 0000000180045829: lea     rcx, dword_180218998
 * 0000000180045830: call    _Init_thread_footer
 * 0000000180045835: mov     rax, [rdi+rbx*8]
 * 0000000180045839: mov     eax, [r15+rax]
 * 000000018004583D: cmp     cs:dword_1802189A0, eax
 * 0000000180045843: jle     loc_18004592C
 * 0000000180045849: lea     rcx, dword_1802189A0
 * 0000000180045850: call    _Init_thread_header
 * 0000000180045855: cmp     cs:dword_1802189A0, r14d
 * 000000018004585C: jnz     loc_18004592C
 * 0000000180045862: lea     rax, unk_18013E8E0
 * 0000000180045869: mov     qword ptr [rbp+9E10h+var_9D20], rax
 * 0000000180045870: lea     rax, unk_180144CC4
 * 0000000180045877: mov     qword ptr [rbp+9E10h+var_9D20+8], rax
 * 000000018004587E: movups  xmm0, [rbp+9E10h+var_9D20]
 * 0000000180045885: movups  [rbp+9E10h+var_86B0], xmm0
 * 000000018004588C: mov     dword ptr [rbp+9E10h+var_86A0], 5
 * 0000000180045896: mov     dword ptr [rbp+9E10h+var_86A0+4], esi
 * 000000018004589C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800458A1: movups  xmm0, [rbp+9E10h+var_86A0]
 * 00000001800458A8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800458AD: call    sub_180043E00
 * 00000001800458B2: mov     r8, rax
 * 00000001800458B5: mov     r9d, r12d
 * 00000001800458B8: mov     edx, 42h ; 'B'
 * 00000001800458BD: lea     rcx, [rbp+9E10h+var_6640]; Src
 * 00000001800458C4: call    sub_1800CF2C8
 * 00000001800458C9: nop
 * 00000001800458CA: mov     r8, rax
 * 00000001800458CD: mov     rdx, r13
 * 00000001800458D0: lea     rcx, [rbp+9E10h+var_6660]
 * 00000001800458D7: call    sub_180043BDC
 * 00000001800458DC: nop
 * 00000001800458DD: lea     r8, aPixel; "/Pixel"
 * 00000001800458E4: mov     rdx, rax
 * 00000001800458E7: lea     rcx, [rbp+9E10h+var_6680]
 * 00000001800458EE: call    sub_18002C218
 * 00000001800458F3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800458F8: mov     rcx, rax
 * 00000001800458FB: call    sub_1800CF3A0
 * 0000000180045900: mov     cs:byte_18021899C, al
 * 0000000180045906: lea     rcx, [rbp+9E10h+var_6660]; void *
 * 000000018004590D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045912: nop
 * 0000000180045913: lea     rcx, [rbp+9E10h+var_6640]; void *
 * 000000018004591A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004591F: nop
 * 0000000180045920: lea     rcx, dword_1802189A0
 * 0000000180045927: call    _Init_thread_footer
 * 000000018004592C: mov     rax, [rdi+rbx*8]
 * 0000000180045930: mov     eax, [r15+rax]
 * 0000000180045934: cmp     cs:dword_1802189A8, eax
 * 000000018004593A: jle     loc_180045A23
 * 0000000180045940: lea     rcx, dword_1802189A8
 * 0000000180045947: call    _Init_thread_header
 * 000000018004594C: cmp     cs:dword_1802189A8, r14d
 * 0000000180045953: jnz     loc_180045A23
 * 0000000180045959: lea     rax, unk_180149280
 * 0000000180045960: mov     qword ptr [rbp+9E10h+var_9D10], rax
 * 0000000180045967: lea     rax, unk_18014F80C
 * 000000018004596E: mov     qword ptr [rbp+9E10h+var_9D10+8], rax
 * 0000000180045975: movups  xmm0, [rbp+9E10h+var_9D10]
 * 000000018004597C: movups  [rbp+9E10h+var_8690], xmm0
 * 0000000180045983: mov     dword ptr [rbp+9E10h+var_8680], 5
 * 000000018004598D: mov     dword ptr [rbp+9E10h+var_8680+4], esi
 * 0000000180045993: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180045998: movups  xmm0, [rbp+9E10h+var_8680]
 * 000000018004599F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800459A4: call    sub_180043E00
 * 00000001800459A9: mov     r8, rax
 * 00000001800459AC: mov     r9d, r12d
 * 00000001800459AF: mov     edx, 48h ; 'H'
 * 00000001800459B4: lea     rcx, [rbp+9E10h+var_65E0]; Src
 * 00000001800459BB: call    sub_1800CF2C8
 * 00000001800459C0: nop
 * 00000001800459C1: mov     r8, rax
 * 00000001800459C4: mov     rdx, r13
 * 00000001800459C7: lea     rcx, [rbp+9E10h+var_6600]
 * 00000001800459CE: call    sub_180043BDC
 * 00000001800459D3: nop
 * 00000001800459D4: lea     r8, aPixel; "/Pixel"
 * 00000001800459DB: mov     rdx, rax
 * 00000001800459DE: lea     rcx, [rbp+9E10h+var_6620]
 * 00000001800459E5: call    sub_18002C218
 * 00000001800459EA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800459EF: mov     rcx, rax
 * 00000001800459F2: call    sub_1800CF3A0
 * 00000001800459F7: mov     cs:byte_1802189A4, al
 * 00000001800459FD: lea     rcx, [rbp+9E10h+var_6600]; void *
 * 0000000180045A04: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045A09: nop
 * 0000000180045A0A: lea     rcx, [rbp+9E10h+var_65E0]; void *
 * 0000000180045A11: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045A16: nop
 * 0000000180045A17: lea     rcx, dword_1802189A8
 * 0000000180045A1E: call    _Init_thread_footer
 * 0000000180045A23: mov     rax, [rdi+rbx*8]
 * 0000000180045A27: mov     eax, [r15+rax]
 * 0000000180045A2B: cmp     cs:dword_1802189B0, eax
 * 0000000180045A31: jle     loc_180045B1A
 * 0000000180045A37: lea     rcx, dword_1802189B0
 * 0000000180045A3E: call    _Init_thread_header
 * 0000000180045A43: cmp     cs:dword_1802189B0, r14d
 * 0000000180045A4A: jnz     loc_180045B1A
 * 0000000180045A50: lea     rax, unk_180149280
 * 0000000180045A57: mov     qword ptr [rbp+9E10h+var_9D00], rax
 * 0000000180045A5E: lea     rax, unk_18014F80C
 * 0000000180045A65: mov     qword ptr [rbp+9E10h+var_9D00+8], rax
 * 0000000180045A6C: movups  xmm0, [rbp+9E10h+var_9D00]
 * 0000000180045A73: movups  [rbp+9E10h+var_8670], xmm0
 * 0000000180045A7A: mov     dword ptr [rbp+9E10h+var_8660], 5
 * 0000000180045A84: mov     dword ptr [rbp+9E10h+var_8660+4], esi
 * 0000000180045A8A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180045A8F: movups  xmm0, [rbp+9E10h+var_8660]
 * 0000000180045A96: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180045A9B: call    sub_180043E00
 * 0000000180045AA0: mov     r8, rax
 * 0000000180045AA3: mov     r9d, r12d
 * 0000000180045AA6: mov     edx, 4Ah ; 'J'
 * 0000000180045AAB: lea     rcx, [rbp+9E10h+var_6580]; Src
 * 0000000180045AB2: call    sub_1800CF2C8
 * 0000000180045AB7: nop
 * 0000000180045AB8: mov     r8, rax
 * 0000000180045ABB: mov     rdx, r13
 * 0000000180045ABE: lea     rcx, [rbp+9E10h+var_65A0]
 * 0000000180045AC5: call    sub_180043BDC
 * 0000000180045ACA: nop
 * 0000000180045ACB: lea     r8, aPixel; "/Pixel"
 * 0000000180045AD2: mov     rdx, rax
 * 0000000180045AD5: lea     rcx, [rbp+9E10h+var_65C0]
 * 0000000180045ADC: call    sub_18002C218
 * 0000000180045AE1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045AE6: mov     rcx, rax
 * 0000000180045AE9: call    sub_1800CF3A0
 * 0000000180045AEE: mov     cs:byte_1802189AC, al
 * 0000000180045AF4: lea     rcx, [rbp+9E10h+var_65A0]; void *
 * 0000000180045AFB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045B00: nop
 * 0000000180045B01: lea     rcx, [rbp+9E10h+var_6580]; void *
 * 0000000180045B08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045B0D: nop
 * 0000000180045B0E: lea     rcx, dword_1802189B0
 * 0000000180045B15: call    _Init_thread_footer
 * 0000000180045B1A: mov     rax, [rdi+rbx*8]
 * 0000000180045B1E: mov     eax, [r15+rax]
 * 0000000180045B22: cmp     cs:dword_1802189B8, eax
 * 0000000180045B28: jle     loc_180045C11
 * 0000000180045B2E: lea     rcx, dword_1802189B8
 * 0000000180045B35: call    _Init_thread_header
 * 0000000180045B3A: cmp     cs:dword_1802189B8, r14d
 * 0000000180045B41: jnz     loc_180045C11
 * 0000000180045B47: lea     rax, unk_1801508E0
 * 0000000180045B4E: mov     qword ptr [rbp+9E10h+var_9CF0], rax
 * 0000000180045B55: lea     rax, unk_180156E98
 * 0000000180045B5C: mov     qword ptr [rbp+9E10h+var_9CF0+8], rax
 * 0000000180045B63: movups  xmm0, [rbp+9E10h+var_9CF0]
 * 0000000180045B6A: movups  [rbp+9E10h+var_8650], xmm0
 * 0000000180045B71: mov     dword ptr [rbp+9E10h+var_8640], 5
 * 0000000180045B7B: mov     dword ptr [rbp+9E10h+var_8640+4], esi
 * 0000000180045B81: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180045B86: movups  xmm0, [rbp+9E10h+var_8640]
 * 0000000180045B8D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180045B92: call    sub_180043E00
 * 0000000180045B97: mov     r8, rax
 * 0000000180045B9A: mov     r9d, r12d
 * 0000000180045B9D: mov     edx, 50h ; 'P'
 * 0000000180045BA2: lea     rcx, [rbp+9E10h+var_6520]; Src
 * 0000000180045BA9: call    sub_1800CF2C8
 * 0000000180045BAE: nop
 * 0000000180045BAF: mov     r8, rax
 * 0000000180045BB2: mov     rdx, r13
 * 0000000180045BB5: lea     rcx, [rbp+9E10h+var_6540]
 * 0000000180045BBC: call    sub_180043BDC
 * 0000000180045BC1: nop
 * 0000000180045BC2: lea     r8, aPixel; "/Pixel"
 * 0000000180045BC9: mov     rdx, rax
 * 0000000180045BCC: lea     rcx, [rbp+9E10h+var_6560]
 * 0000000180045BD3: call    sub_18002C218
 * 0000000180045BD8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045BDD: mov     rcx, rax
 * 0000000180045BE0: call    sub_1800CF3A0
 * 0000000180045BE5: mov     cs:byte_1802189B4, al
 * 0000000180045BEB: lea     rcx, [rbp+9E10h+var_6540]; void *
 * 0000000180045BF2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045BF7: nop
 * 0000000180045BF8: lea     rcx, [rbp+9E10h+var_6520]; void *
 * 0000000180045BFF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045C04: nop
 * 0000000180045C05: lea     rcx, dword_1802189B8
 * 0000000180045C0C: call    _Init_thread_footer
 * 0000000180045C11: mov     rax, [rdi+rbx*8]
 * 0000000180045C15: mov     eax, [r15+rax]
 * 0000000180045C19: cmp     cs:dword_1802189C0, eax
 * 0000000180045C1F: jle     loc_180045D08
 * 0000000180045C25: lea     rcx, dword_1802189C0
 * 0000000180045C2C: call    _Init_thread_header
 * 0000000180045C31: cmp     cs:dword_1802189C0, r14d
 * 0000000180045C38: jnz     loc_180045D08
 * 0000000180045C3E: lea     rax, unk_1801508E0
 * 0000000180045C45: mov     qword ptr [rbp+9E10h+var_9CE0], rax
 * 0000000180045C4C: lea     rax, unk_180156E98
 * 0000000180045C53: mov     qword ptr [rbp+9E10h+var_9CE0+8], rax
 * 0000000180045C5A: movups  xmm0, [rbp+9E10h+var_9CE0]
 * 0000000180045C61: movups  [rbp+9E10h+var_8630], xmm0
 * 0000000180045C68: mov     dword ptr [rbp+9E10h+var_8620], 5
 * 0000000180045C72: mov     dword ptr [rbp+9E10h+var_8620+4], esi
 * 0000000180045C78: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180045C7D: movups  xmm0, [rbp+9E10h+var_8620]
 * 0000000180045C84: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180045C89: call    sub_180043E00
 * 0000000180045C8E: mov     r8, rax
 * 0000000180045C91: mov     r9d, r12d
 * 0000000180045C94: mov     edx, 52h ; 'R'
 * 0000000180045C99: lea     rcx, [rbp+9E10h+var_64C0]; Src
 * 0000000180045CA0: call    sub_1800CF2C8
 * 0000000180045CA5: nop
 * 0000000180045CA6: mov     r8, rax
 * 0000000180045CA9: mov     rdx, r13
 * 0000000180045CAC: lea     rcx, [rbp+9E10h+var_64E0]
 * 0000000180045CB3: call    sub_180043BDC
 * 0000000180045CB8: nop
 * 0000000180045CB9: lea     r8, aPixel; "/Pixel"
 * 0000000180045CC0: mov     rdx, rax
 * 0000000180045CC3: lea     rcx, [rbp+9E10h+var_6500]
 * 0000000180045CCA: call    sub_18002C218
 * 0000000180045CCF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045CD4: mov     rcx, rax
 * 0000000180045CD7: call    sub_1800CF3A0
 * 0000000180045CDC: mov     cs:byte_1802189BC, al
 * 0000000180045CE2: lea     rcx, [rbp+9E10h+var_64E0]; void *
 * 0000000180045CE9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045CEE: nop
 * 0000000180045CEF: lea     rcx, [rbp+9E10h+var_64C0]; void *
 * 0000000180045CF6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045CFB: nop
 * 0000000180045CFC: lea     rcx, dword_1802189C0
 * 0000000180045D03: call    _Init_thread_footer
 * 0000000180045D08: mov     rax, [rdi+rbx*8]
 * 0000000180045D0C: mov     eax, [r15+rax]
 * 0000000180045D10: cmp     cs:dword_1802189C8, eax
 * 0000000180045D16: jle     loc_180045DFF
 * 0000000180045D1C: lea     rcx, dword_1802189C8
 * 0000000180045D23: call    _Init_thread_header
 * 0000000180045D28: cmp     cs:dword_1802189C8, r14d
 * 0000000180045D2F: jnz     loc_180045DFF
 * 0000000180045D35: lea     rax, unk_18015A1A0
 * 0000000180045D3C: mov     qword ptr [rbp+9E10h+var_9CD0], rax
 * 0000000180045D43: lea     rax, unk_18016092C
 * 0000000180045D4A: mov     qword ptr [rbp+9E10h+var_9CD0+8], rax
 * 0000000180045D51: movups  xmm0, [rbp+9E10h+var_9CD0]
 * 0000000180045D58: movups  [rbp+9E10h+var_8610], xmm0
 * 0000000180045D5F: mov     dword ptr [rbp+9E10h+var_8600], 5
 * 0000000180045D69: mov     dword ptr [rbp+9E10h+var_8600+4], esi
 * 0000000180045D6F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180045D74: movups  xmm0, [rbp+9E10h+var_8600]
 * 0000000180045D7B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180045D80: call    sub_180043E00
 * 0000000180045D85: mov     r8, rax
 * 0000000180045D88: mov     r9d, r12d
 * 0000000180045D8B: mov     edx, 58h ; 'X'
 * 0000000180045D90: lea     rcx, [rbp+9E10h+var_6460]; Src
 * 0000000180045D97: call    sub_1800CF2C8
 * 0000000180045D9C: nop
 * 0000000180045D9D: mov     r8, rax
 * 0000000180045DA0: mov     rdx, r13
 * 0000000180045DA3: lea     rcx, [rbp+9E10h+var_6480]
 * 0000000180045DAA: call    sub_180043BDC
 * 0000000180045DAF: nop
 * 0000000180045DB0: lea     r8, aPixel; "/Pixel"
 * 0000000180045DB7: mov     rdx, rax
 * 0000000180045DBA: lea     rcx, [rbp+9E10h+var_64A0]
 * 0000000180045DC1: call    sub_18002C218
 * 0000000180045DC6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045DCB: mov     rcx, rax
 * 0000000180045DCE: call    sub_1800CF3A0
 * 0000000180045DD3: mov     cs:byte_1802189C4, al
 * 0000000180045DD9: lea     rcx, [rbp+9E10h+var_6480]; void *
 * 0000000180045DE0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045DE5: nop
 * 0000000180045DE6: lea     rcx, [rbp+9E10h+var_6460]; void *
 * 0000000180045DED: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045DF2: nop
 * 0000000180045DF3: lea     rcx, dword_1802189C8
 * 0000000180045DFA: call    _Init_thread_footer
 * 0000000180045DFF: mov     rax, [rdi+rbx*8]
 * 0000000180045E03: mov     eax, [r15+rax]
 * 0000000180045E07: cmp     cs:dword_1802189D0, eax
 * 0000000180045E0D: jle     loc_180045EF6
 * 0000000180045E13: lea     rcx, dword_1802189D0
 * 0000000180045E1A: call    _Init_thread_header
 * 0000000180045E1F: cmp     cs:dword_1802189D0, r14d
 * 0000000180045E26: jnz     loc_180045EF6
 * 0000000180045E2C: lea     rax, unk_18015A1A0
 * 0000000180045E33: mov     qword ptr [rbp+9E10h+var_9CC0], rax
 * 0000000180045E3A: lea     rax, unk_18016092C
 * 0000000180045E41: mov     qword ptr [rbp+9E10h+var_9CC0+8], rax
 * 0000000180045E48: movups  xmm0, [rbp+9E10h+var_9CC0]
 * 0000000180045E4F: movups  [rbp+9E10h+var_85F0], xmm0
 * 0000000180045E56: mov     dword ptr [rbp+9E10h+var_85E0], 5
 * 0000000180045E60: mov     dword ptr [rbp+9E10h+var_85E0+4], esi
 * 0000000180045E66: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180045E6B: movups  xmm0, [rbp+9E10h+var_85E0]
 * 0000000180045E72: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180045E77: call    sub_180043E00
 * 0000000180045E7C: mov     r8, rax
 * 0000000180045E7F: mov     r9d, r12d
 * 0000000180045E82: mov     edx, 5Ah ; 'Z'
 * 0000000180045E87: lea     rcx, [rbp+9E10h+var_6400]; Src
 * 0000000180045E8E: call    sub_1800CF2C8
 * 0000000180045E93: nop
 * 0000000180045E94: mov     r8, rax
 * 0000000180045E97: mov     rdx, r13
 * 0000000180045E9A: lea     rcx, [rbp+9E10h+var_6420]
 * 0000000180045EA1: call    sub_180043BDC
 * 0000000180045EA6: nop
 * 0000000180045EA7: lea     r8, aPixel; "/Pixel"
 * 0000000180045EAE: mov     rdx, rax
 * 0000000180045EB1: lea     rcx, [rbp+9E10h+var_6440]
 * 0000000180045EB8: call    sub_18002C218
 * 0000000180045EBD: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045EC2: mov     rcx, rax
 * 0000000180045EC5: call    sub_1800CF3A0
 * 0000000180045ECA: mov     cs:byte_1802189CC, al
 * 0000000180045ED0: lea     rcx, [rbp+9E10h+var_6420]; void *
 * 0000000180045ED7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045EDC: nop
 * 0000000180045EDD: lea     rcx, [rbp+9E10h+var_6400]; void *
 * 0000000180045EE4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045EE9: nop
 * 0000000180045EEA: lea     rcx, dword_1802189D0
 * 0000000180045EF1: call    _Init_thread_footer
 * 0000000180045EF6: mov     rax, [rdi+rbx*8]
 * 0000000180045EFA: mov     eax, [r15+rax]
 * 0000000180045EFE: cmp     cs:dword_1802189D8, eax
 * 0000000180045F04: jle     loc_180045FED
 * 0000000180045F0A: lea     rcx, dword_1802189D8
 * 0000000180045F11: call    _Init_thread_header
 * 0000000180045F16: cmp     cs:dword_1802189D8, r14d
 * 0000000180045F1D: jnz     loc_180045FED
 * 0000000180045F23: lea     rax, unk_18013E8E0
 * 0000000180045F2A: mov     qword ptr [rbp+9E10h+var_9CB0], rax
 * 0000000180045F31: lea     rax, unk_180144CC4
 * 0000000180045F38: mov     qword ptr [rbp+9E10h+var_9CB0+8], rax
 * 0000000180045F3F: movups  xmm0, [rbp+9E10h+var_9CB0]
 * 0000000180045F46: movups  [rbp+9E10h+var_85D0], xmm0
 * 0000000180045F4D: mov     dword ptr [rbp+9E10h+var_85C0], 5
 * 0000000180045F57: mov     dword ptr [rbp+9E10h+var_85C0+4], esi
 * 0000000180045F5D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180045F62: movups  xmm0, [rbp+9E10h+var_85C0]
 * 0000000180045F69: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180045F6E: call    sub_180043E00
 * 0000000180045F73: mov     r8, rax
 * 0000000180045F76: mov     r9d, r12d
 * 0000000180045F79: mov     edx, 60h ; '`'
 * 0000000180045F7E: lea     rcx, [rbp+9E10h+var_63A0]; Src
 * 0000000180045F85: call    sub_1800CF2C8
 * 0000000180045F8A: nop
 * 0000000180045F8B: mov     r8, rax
 * 0000000180045F8E: mov     rdx, r13
 * 0000000180045F91: lea     rcx, [rbp+9E10h+var_63C0]
 * 0000000180045F98: call    sub_180043BDC
 * 0000000180045F9D: nop
 * 0000000180045F9E: lea     r8, aPixel; "/Pixel"
 * 0000000180045FA5: mov     rdx, rax
 * 0000000180045FA8: lea     rcx, [rbp+9E10h+var_63E0]
 * 0000000180045FAF: call    sub_18002C218
 * 0000000180045FB4: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180045FB9: mov     rcx, rax
 * 0000000180045FBC: call    sub_1800CF3A0
 * 0000000180045FC1: mov     cs:byte_1802189D4, al
 * 0000000180045FC7: lea     rcx, [rbp+9E10h+var_63C0]; void *
 * 0000000180045FCE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045FD3: nop
 * 0000000180045FD4: lea     rcx, [rbp+9E10h+var_63A0]; void *
 * 0000000180045FDB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180045FE0: nop
 * 0000000180045FE1: lea     rcx, dword_1802189D8
 * 0000000180045FE8: call    _Init_thread_footer
 * 0000000180045FED: mov     rax, [rdi+rbx*8]
 * 0000000180045FF1: mov     eax, [r15+rax]
 * 0000000180045FF5: cmp     cs:dword_1802189E0, eax
 * 0000000180045FFB: jle     loc_1800460E4
 * 0000000180046001: lea     rcx, dword_1802189E0
 * 0000000180046008: call    _Init_thread_header
 * 000000018004600D: cmp     cs:dword_1802189E0, r14d
 * 0000000180046014: jnz     loc_1800460E4
 * 000000018004601A: lea     rax, unk_18013E8E0
 * 0000000180046021: mov     qword ptr [rbp+9E10h+var_9CA0], rax
 * 0000000180046028: lea     rax, unk_180144CC4
 * 000000018004602F: mov     qword ptr [rbp+9E10h+var_9CA0+8], rax
 * 0000000180046036: movups  xmm0, [rbp+9E10h+var_9CA0]
 * 000000018004603D: movups  [rbp+9E10h+var_85B0], xmm0
 * 0000000180046044: mov     dword ptr [rbp+9E10h+var_85A0], 5
 * 000000018004604E: mov     dword ptr [rbp+9E10h+var_85A0+4], esi
 * 0000000180046054: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046059: movups  xmm0, [rbp+9E10h+var_85A0]
 * 0000000180046060: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046065: call    sub_180043E00
 * 000000018004606A: mov     r8, rax
 * 000000018004606D: mov     r9d, r12d
 * 0000000180046070: mov     edx, 62h ; 'b'
 * 0000000180046075: lea     rcx, [rbp+9E10h+var_6340]; Src
 * 000000018004607C: call    sub_1800CF2C8
 * 0000000180046081: nop
 * 0000000180046082: mov     r8, rax
 * 0000000180046085: mov     rdx, r13
 * 0000000180046088: lea     rcx, [rbp+9E10h+var_6360]
 * 000000018004608F: call    sub_180043BDC
 * 0000000180046094: nop
 * 0000000180046095: lea     r8, aPixel; "/Pixel"
 * 000000018004609C: mov     rdx, rax
 * 000000018004609F: lea     rcx, [rbp+9E10h+var_6380]
 * 00000001800460A6: call    sub_18002C218
 * 00000001800460AB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800460B0: mov     rcx, rax
 * 00000001800460B3: call    sub_1800CF3A0
 * 00000001800460B8: mov     cs:byte_1802189DC, al
 * 00000001800460BE: lea     rcx, [rbp+9E10h+var_6360]; void *
 * 00000001800460C5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800460CA: nop
 * 00000001800460CB: lea     rcx, [rbp+9E10h+var_6340]; void *
 * 00000001800460D2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800460D7: nop
 * 00000001800460D8: lea     rcx, dword_1802189E0
 * 00000001800460DF: call    _Init_thread_footer
 * 00000001800460E4: mov     rax, [rdi+rbx*8]
 * 00000001800460E8: mov     eax, [r15+rax]
 * 00000001800460EC: cmp     cs:dword_1802189E8, eax
 * 00000001800460F2: jle     loc_1800461DB
 * 00000001800460F8: lea     rcx, dword_1802189E8
 * 00000001800460FF: call    _Init_thread_header
 * 0000000180046104: cmp     cs:dword_1802189E8, r14d
 * 000000018004610B: jnz     loc_1800461DB
 * 0000000180046111: lea     rax, unk_180149280
 * 0000000180046118: mov     qword ptr [rbp+9E10h+var_9C90], rax
 * 000000018004611F: lea     rax, unk_18014F80C
 * 0000000180046126: mov     qword ptr [rbp+9E10h+var_9C90+8], rax
 * 000000018004612D: movups  xmm0, [rbp+9E10h+var_9C90]
 * 0000000180046134: movups  [rbp+9E10h+var_8590], xmm0
 * 000000018004613B: mov     dword ptr [rbp+9E10h+var_8580], 5
 * 0000000180046145: mov     dword ptr [rbp+9E10h+var_8580+4], esi
 * 000000018004614B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046150: movups  xmm0, [rbp+9E10h+var_8580]
 * 0000000180046157: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004615C: call    sub_180043E00
 * 0000000180046161: mov     r8, rax
 * 0000000180046164: mov     r9d, r12d
 * 0000000180046167: mov     edx, 68h ; 'h'
 * 000000018004616C: lea     rcx, [rbp+9E10h+var_62E0]; Src
 * 0000000180046173: call    sub_1800CF2C8
 * 0000000180046178: nop
 * 0000000180046179: mov     r8, rax
 * 000000018004617C: mov     rdx, r13
 * 000000018004617F: lea     rcx, [rbp+9E10h+var_6300]
 * 0000000180046186: call    sub_180043BDC
 * 000000018004618B: nop
 * 000000018004618C: lea     r8, aPixel; "/Pixel"
 * 0000000180046193: mov     rdx, rax
 * 0000000180046196: lea     rcx, [rbp+9E10h+var_6320]
 * 000000018004619D: call    sub_18002C218
 * 00000001800461A2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800461A7: mov     rcx, rax
 * 00000001800461AA: call    sub_1800CF3A0
 * 00000001800461AF: mov     cs:byte_1802189E4, al
 * 00000001800461B5: lea     rcx, [rbp+9E10h+var_6300]; void *
 * 00000001800461BC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800461C1: nop
 * 00000001800461C2: lea     rcx, [rbp+9E10h+var_62E0]; void *
 * 00000001800461C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800461CE: nop
 * 00000001800461CF: lea     rcx, dword_1802189E8
 * 00000001800461D6: call    _Init_thread_footer
 * 00000001800461DB: mov     rax, [rdi+rbx*8]
 * 00000001800461DF: mov     eax, [r15+rax]
 * 00000001800461E3: cmp     cs:dword_1802189F0, eax
 * 00000001800461E9: jle     loc_1800462D2
 * 00000001800461EF: lea     rcx, dword_1802189F0
 * 00000001800461F6: call    _Init_thread_header
 * 00000001800461FB: cmp     cs:dword_1802189F0, r14d
 * 0000000180046202: jnz     loc_1800462D2
 * 0000000180046208: lea     rax, unk_180149280
 * 000000018004620F: mov     qword ptr [rbp+9E10h+var_9C80], rax
 * 0000000180046216: lea     rax, unk_18014F80C
 * 000000018004621D: mov     qword ptr [rbp+9E10h+var_9C80+8], rax
 * 0000000180046224: movups  xmm0, [rbp+9E10h+var_9C80]
 * 000000018004622B: movups  [rbp+9E10h+var_8570], xmm0
 * 0000000180046232: mov     dword ptr [rbp+9E10h+var_8560], 5
 * 000000018004623C: mov     dword ptr [rbp+9E10h+var_8560+4], esi
 * 0000000180046242: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046247: movups  xmm0, [rbp+9E10h+var_8560]
 * 000000018004624E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046253: call    sub_180043E00
 * 0000000180046258: mov     r8, rax
 * 000000018004625B: mov     r9d, r12d
 * 000000018004625E: mov     edx, 6Ah ; 'j'
 * 0000000180046263: lea     rcx, [rbp+9E10h+var_6280]; Src
 * 000000018004626A: call    sub_1800CF2C8
 * 000000018004626F: nop
 * 0000000180046270: mov     r8, rax
 * 0000000180046273: mov     rdx, r13
 * 0000000180046276: lea     rcx, [rbp+9E10h+var_62A0]
 * 000000018004627D: call    sub_180043BDC
 * 0000000180046282: nop
 * 0000000180046283: lea     r8, aPixel; "/Pixel"
 * 000000018004628A: mov     rdx, rax
 * 000000018004628D: lea     rcx, [rbp+9E10h+var_62C0]
 * 0000000180046294: call    sub_18002C218
 * 0000000180046299: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004629E: mov     rcx, rax
 * 00000001800462A1: call    sub_1800CF3A0
 * 00000001800462A6: mov     cs:byte_1802189EC, al
 * 00000001800462AC: lea     rcx, [rbp+9E10h+var_62A0]; void *
 * 00000001800462B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800462B8: nop
 * 00000001800462B9: lea     rcx, [rbp+9E10h+var_6280]; void *
 * 00000001800462C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800462C5: nop
 * 00000001800462C6: lea     rcx, dword_1802189F0
 * 00000001800462CD: call    _Init_thread_footer
 * 00000001800462D2: mov     rax, [rdi+rbx*8]
 * 00000001800462D6: mov     eax, [r15+rax]
 * 00000001800462DA: cmp     cs:dword_1802189F8, eax
 * 00000001800462E0: jle     loc_1800463C9
 * 00000001800462E6: lea     rcx, dword_1802189F8
 * 00000001800462ED: call    _Init_thread_header
 * 00000001800462F2: cmp     cs:dword_1802189F8, r14d
 * 00000001800462F9: jnz     loc_1800463C9
 * 00000001800462FF: lea     rax, unk_1801508E0
 * 0000000180046306: mov     qword ptr [rbp+9E10h+var_9C70], rax
 * 000000018004630D: lea     rax, unk_180156E98
 * 0000000180046314: mov     qword ptr [rbp+9E10h+var_9C70+8], rax
 * 000000018004631B: movups  xmm0, [rbp+9E10h+var_9C70]
 * 0000000180046322: movups  [rbp+9E10h+var_8550], xmm0
 * 0000000180046329: mov     dword ptr [rbp+9E10h+var_8540], 5
 * 0000000180046333: mov     dword ptr [rbp+9E10h+var_8540+4], esi
 * 0000000180046339: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004633E: movups  xmm0, [rbp+9E10h+var_8540]
 * 0000000180046345: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004634A: call    sub_180043E00
 * 000000018004634F: mov     r8, rax
 * 0000000180046352: mov     r9d, r12d
 * 0000000180046355: mov     edx, 70h ; 'p'
 * 000000018004635A: lea     rcx, [rbp+9E10h+var_6220]; Src
 * 0000000180046361: call    sub_1800CF2C8
 * 0000000180046366: nop
 * 0000000180046367: mov     r8, rax
 * 000000018004636A: mov     rdx, r13
 * 000000018004636D: lea     rcx, [rbp+9E10h+var_6240]
 * 0000000180046374: call    sub_180043BDC
 * 0000000180046379: nop
 * 000000018004637A: lea     r8, aPixel; "/Pixel"
 * 0000000180046381: mov     rdx, rax
 * 0000000180046384: lea     rcx, [rbp+9E10h+var_6260]
 * 000000018004638B: call    sub_18002C218
 * 0000000180046390: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046395: mov     rcx, rax
 * 0000000180046398: call    sub_1800CF3A0
 * 000000018004639D: mov     cs:byte_1802189F4, al
 * 00000001800463A3: lea     rcx, [rbp+9E10h+var_6240]; void *
 * 00000001800463AA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800463AF: nop
 * 00000001800463B0: lea     rcx, [rbp+9E10h+var_6220]; void *
 * 00000001800463B7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800463BC: nop
 * 00000001800463BD: lea     rcx, dword_1802189F8
 * 00000001800463C4: call    _Init_thread_footer
 * 00000001800463C9: mov     rax, [rdi+rbx*8]
 * 00000001800463CD: mov     eax, [r15+rax]
 * 00000001800463D1: cmp     cs:dword_180218A00, eax
 * 00000001800463D7: jle     loc_1800464C0
 * 00000001800463DD: lea     rcx, dword_180218A00
 * 00000001800463E4: call    _Init_thread_header
 * 00000001800463E9: cmp     cs:dword_180218A00, r14d
 * 00000001800463F0: jnz     loc_1800464C0
 * 00000001800463F6: lea     rax, unk_1801508E0
 * 00000001800463FD: mov     qword ptr [rbp+9E10h+var_9C60], rax
 * 0000000180046404: lea     rax, unk_180156E98
 * 000000018004640B: mov     qword ptr [rbp+9E10h+var_9C60+8], rax
 * 0000000180046412: movups  xmm0, [rbp+9E10h+var_9C60]
 * 0000000180046419: movups  [rbp+9E10h+var_8530], xmm0
 * 0000000180046420: mov     dword ptr [rbp+9E10h+var_8520], 5
 * 000000018004642A: mov     dword ptr [rbp+9E10h+var_8520+4], esi
 * 0000000180046430: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046435: movups  xmm0, [rbp+9E10h+var_8520]
 * 000000018004643C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046441: call    sub_180043E00
 * 0000000180046446: mov     r8, rax
 * 0000000180046449: mov     r9d, r12d
 * 000000018004644C: mov     edx, 72h ; 'r'
 * 0000000180046451: lea     rcx, [rbp+9E10h+var_61C0]; Src
 * 0000000180046458: call    sub_1800CF2C8
 * 000000018004645D: nop
 * 000000018004645E: mov     r8, rax
 * 0000000180046461: mov     rdx, r13
 * 0000000180046464: lea     rcx, [rbp+9E10h+var_61E0]
 * 000000018004646B: call    sub_180043BDC
 * 0000000180046470: nop
 * 0000000180046471: lea     r8, aPixel; "/Pixel"
 * 0000000180046478: mov     rdx, rax
 * 000000018004647B: lea     rcx, [rbp+9E10h+var_6200]
 * 0000000180046482: call    sub_18002C218
 * 0000000180046487: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004648C: mov     rcx, rax
 * 000000018004648F: call    sub_1800CF3A0
 * 0000000180046494: mov     cs:byte_1802189FC, al
 * 000000018004649A: lea     rcx, [rbp+9E10h+var_61E0]; void *
 * 00000001800464A1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800464A6: nop
 * 00000001800464A7: lea     rcx, [rbp+9E10h+var_61C0]; void *
 * 00000001800464AE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800464B3: nop
 * 00000001800464B4: lea     rcx, dword_180218A00
 * 00000001800464BB: call    _Init_thread_footer
 * 00000001800464C0: mov     rax, [rdi+rbx*8]
 * 00000001800464C4: mov     eax, [r15+rax]
 * 00000001800464C8: cmp     cs:dword_180218A08, eax
 * 00000001800464CE: jle     loc_1800465B7
 * 00000001800464D4: lea     rcx, dword_180218A08
 * 00000001800464DB: call    _Init_thread_header
 * 00000001800464E0: cmp     cs:dword_180218A08, r14d
 * 00000001800464E7: jnz     loc_1800465B7
 * 00000001800464ED: lea     rax, unk_18015A1A0
 * 00000001800464F4: mov     qword ptr [rbp+9E10h+var_9C50], rax
 * 00000001800464FB: lea     rax, unk_18016092C
 * 0000000180046502: mov     qword ptr [rbp+9E10h+var_9C50+8], rax
 * 0000000180046509: movups  xmm0, [rbp+9E10h+var_9C50]
 * 0000000180046510: movups  [rbp+9E10h+var_8510], xmm0
 * 0000000180046517: mov     dword ptr [rbp+9E10h+var_8500], 5
 * 0000000180046521: mov     dword ptr [rbp+9E10h+var_8500+4], esi
 * 0000000180046527: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004652C: movups  xmm0, [rbp+9E10h+var_8500]
 * 0000000180046533: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046538: call    sub_180043E00
 * 000000018004653D: mov     r8, rax
 * 0000000180046540: mov     r9d, r12d
 * 0000000180046543: mov     edx, 78h ; 'x'
 * 0000000180046548: lea     rcx, [rbp+9E10h+var_6160]; Src
 * 000000018004654F: call    sub_1800CF2C8
 * 0000000180046554: nop
 * 0000000180046555: mov     r8, rax
 * 0000000180046558: mov     rdx, r13
 * 000000018004655B: lea     rcx, [rbp+9E10h+var_6180]
 * 0000000180046562: call    sub_180043BDC
 * 0000000180046567: nop
 * 0000000180046568: lea     r8, aPixel; "/Pixel"
 * 000000018004656F: mov     rdx, rax
 * 0000000180046572: lea     rcx, [rbp+9E10h+var_61A0]
 * 0000000180046579: call    sub_18002C218
 * 000000018004657E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046583: mov     rcx, rax
 * 0000000180046586: call    sub_1800CF3A0
 * 000000018004658B: mov     cs:byte_180218A04, al
 * 0000000180046591: lea     rcx, [rbp+9E10h+var_6180]; void *
 * 0000000180046598: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004659D: nop
 * 000000018004659E: lea     rcx, [rbp+9E10h+var_6160]; void *
 * 00000001800465A5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800465AA: nop
 * 00000001800465AB: lea     rcx, dword_180218A08
 * 00000001800465B2: call    _Init_thread_footer
 * 00000001800465B7: mov     rax, [rdi+rbx*8]
 * 00000001800465BB: mov     eax, [r15+rax]
 * 00000001800465BF: cmp     cs:dword_180218A10, eax
 * 00000001800465C5: jle     loc_1800466AE
 * 00000001800465CB: lea     rcx, dword_180218A10
 * 00000001800465D2: call    _Init_thread_header
 * 00000001800465D7: cmp     cs:dword_180218A10, r14d
 * 00000001800465DE: jnz     loc_1800466AE
 * 00000001800465E4: lea     rax, unk_18015A1A0
 * 00000001800465EB: mov     qword ptr [rbp+9E10h+var_9C40], rax
 * 00000001800465F2: lea     rax, unk_18016092C
 * 00000001800465F9: mov     qword ptr [rbp+9E10h+var_9C40+8], rax
 * 0000000180046600: movups  xmm0, [rbp+9E10h+var_9C40]
 * 0000000180046607: movups  [rbp+9E10h+var_84F0], xmm0
 * 000000018004660E: mov     dword ptr [rbp+9E10h+var_84E0], 5
 * 0000000180046618: mov     dword ptr [rbp+9E10h+var_84E0+4], esi
 * 000000018004661E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046623: movups  xmm0, [rbp+9E10h+var_84E0]
 * 000000018004662A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004662F: call    sub_180043E00
 * 0000000180046634: mov     r8, rax
 * 0000000180046637: mov     r9d, r12d
 * 000000018004663A: mov     edx, 7Ah ; 'z'
 * 000000018004663F: lea     rcx, [rbp+9E10h+var_6100]; Src
 * 0000000180046646: call    sub_1800CF2C8
 * 000000018004664B: nop
 * 000000018004664C: mov     r8, rax
 * 000000018004664F: mov     rdx, r13
 * 0000000180046652: lea     rcx, [rbp+9E10h+var_6120]
 * 0000000180046659: call    sub_180043BDC
 * 000000018004665E: nop
 * 000000018004665F: lea     r8, aPixel; "/Pixel"
 * 0000000180046666: mov     rdx, rax
 * 0000000180046669: lea     rcx, [rbp+9E10h+var_6140]
 * 0000000180046670: call    sub_18002C218
 * 0000000180046675: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004667A: mov     rcx, rax
 * 000000018004667D: call    sub_1800CF3A0
 * 0000000180046682: mov     cs:byte_180218A0C, al
 * 0000000180046688: lea     rcx, [rbp+9E10h+var_6120]; void *
 * 000000018004668F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046694: nop
 * 0000000180046695: lea     rcx, [rbp+9E10h+var_6100]; void *
 * 000000018004669C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800466A1: nop
 * 00000001800466A2: lea     rcx, dword_180218A10
 * 00000001800466A9: call    _Init_thread_footer
 * 00000001800466AE: mov     rax, [rdi+rbx*8]
 * 00000001800466B2: mov     eax, [r15+rax]
 * 00000001800466B6: cmp     cs:dword_180218A18, eax
 * 00000001800466BC: jle     loc_1800467A5
 * 00000001800466C2: lea     rcx, dword_180218A18
 * 00000001800466C9: call    _Init_thread_header
 * 00000001800466CE: cmp     cs:dword_180218A18, r14d
 * 00000001800466D5: jnz     loc_1800467A5
 * 00000001800466DB: lea     rax, unk_18013E8E0
 * 00000001800466E2: mov     qword ptr [rbp+9E10h+var_9C30], rax
 * 00000001800466E9: lea     rax, unk_180144CC4
 * 00000001800466F0: mov     qword ptr [rbp+9E10h+var_9C30+8], rax
 * 00000001800466F7: movups  xmm0, [rbp+9E10h+var_9C30]
 * 00000001800466FE: movups  [rbp+9E10h+var_84D0], xmm0
 * 0000000180046705: mov     dword ptr [rbp+9E10h+var_84C0], 5
 * 000000018004670F: mov     dword ptr [rbp+9E10h+var_84C0+4], esi
 * 0000000180046715: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004671A: movups  xmm0, [rbp+9E10h+var_84C0]
 * 0000000180046721: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046726: call    sub_180043E00
 * 000000018004672B: mov     r8, rax
 * 000000018004672E: mov     r9d, r12d
 * 0000000180046731: mov     edx, 80h
 * 0000000180046736: lea     rcx, [rbp+9E10h+var_60A0]; Src
 * 000000018004673D: call    sub_1800CF2C8
 * 0000000180046742: nop
 * 0000000180046743: mov     r8, rax
 * 0000000180046746: mov     rdx, r13
 * 0000000180046749: lea     rcx, [rbp+9E10h+var_60C0]
 * 0000000180046750: call    sub_180043BDC
 * 0000000180046755: nop
 * 0000000180046756: lea     r8, aPixel; "/Pixel"
 * 000000018004675D: mov     rdx, rax
 * 0000000180046760: lea     rcx, [rbp+9E10h+var_60E0]
 * 0000000180046767: call    sub_18002C218
 * 000000018004676C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046771: mov     rcx, rax
 * 0000000180046774: call    sub_1800CF3A0
 * 0000000180046779: mov     cs:byte_180218A14, al
 * 000000018004677F: lea     rcx, [rbp+9E10h+var_60C0]; void *
 * 0000000180046786: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004678B: nop
 * 000000018004678C: lea     rcx, [rbp+9E10h+var_60A0]; void *
 * 0000000180046793: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046798: nop
 * 0000000180046799: lea     rcx, dword_180218A18
 * 00000001800467A0: call    _Init_thread_footer
 * 00000001800467A5: mov     rax, [rdi+rbx*8]
 * 00000001800467A9: mov     eax, [r15+rax]
 * 00000001800467AD: cmp     cs:dword_180218A20, eax
 * 00000001800467B3: jle     loc_18004689C
 * 00000001800467B9: lea     rcx, dword_180218A20
 * 00000001800467C0: call    _Init_thread_header
 * 00000001800467C5: cmp     cs:dword_180218A20, r14d
 * 00000001800467CC: jnz     loc_18004689C
 * 00000001800467D2: lea     rax, unk_18013E8E0
 * 00000001800467D9: mov     qword ptr [rbp+9E10h+var_9C20], rax
 * 00000001800467E0: lea     rax, unk_180144CC4
 * 00000001800467E7: mov     qword ptr [rbp+9E10h+var_9C20+8], rax
 * 00000001800467EE: movups  xmm0, [rbp+9E10h+var_9C20]
 * 00000001800467F5: movups  [rbp+9E10h+var_84B0], xmm0
 * 00000001800467FC: mov     dword ptr [rbp+9E10h+var_84A0], 5
 * 0000000180046806: mov     dword ptr [rbp+9E10h+var_84A0+4], esi
 * 000000018004680C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046811: movups  xmm0, [rbp+9E10h+var_84A0]
 * 0000000180046818: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004681D: call    sub_180043E00
 * 0000000180046822: mov     r8, rax
 * 0000000180046825: mov     r9d, r12d
 * 0000000180046828: mov     edx, 82h
 * 000000018004682D: lea     rcx, [rbp+9E10h+var_6040]; Src
 * 0000000180046834: call    sub_1800CF2C8
 * 0000000180046839: nop
 * 000000018004683A: mov     r8, rax
 * 000000018004683D: mov     rdx, r13
 * 0000000180046840: lea     rcx, [rbp+9E10h+var_6060]
 * 0000000180046847: call    sub_180043BDC
 * 000000018004684C: nop
 * 000000018004684D: lea     r8, aPixel; "/Pixel"
 * 0000000180046854: mov     rdx, rax
 * 0000000180046857: lea     rcx, [rbp+9E10h+var_6080]
 * 000000018004685E: call    sub_18002C218
 * 0000000180046863: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046868: mov     rcx, rax
 * 000000018004686B: call    sub_1800CF3A0
 * 0000000180046870: mov     cs:byte_180218A1C, al
 * 0000000180046876: lea     rcx, [rbp+9E10h+var_6060]; void *
 * 000000018004687D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046882: nop
 * 0000000180046883: lea     rcx, [rbp+9E10h+var_6040]; void *
 * 000000018004688A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004688F: nop
 * 0000000180046890: lea     rcx, dword_180218A20
 * 0000000180046897: call    _Init_thread_footer
 * 000000018004689C: mov     rax, [rdi+rbx*8]
 * 00000001800468A0: mov     eax, [r15+rax]
 * 00000001800468A4: cmp     cs:dword_180218A28, eax
 * 00000001800468AA: jle     loc_180046993
 * 00000001800468B0: lea     rcx, dword_180218A28
 * 00000001800468B7: call    _Init_thread_header
 * 00000001800468BC: cmp     cs:dword_180218A28, r14d
 * 00000001800468C3: jnz     loc_180046993
 * 00000001800468C9: lea     rax, unk_180149280
 * 00000001800468D0: mov     qword ptr [rbp+9E10h+var_9C10], rax
 * 00000001800468D7: lea     rax, unk_18014F80C
 * 00000001800468DE: mov     qword ptr [rbp+9E10h+var_9C10+8], rax
 * 00000001800468E5: movups  xmm0, [rbp+9E10h+var_9C10]
 * 00000001800468EC: movups  [rbp+9E10h+var_8490], xmm0
 * 00000001800468F3: mov     dword ptr [rbp+9E10h+var_8480], 5
 * 00000001800468FD: mov     dword ptr [rbp+9E10h+var_8480+4], esi
 * 0000000180046903: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046908: movups  xmm0, [rbp+9E10h+var_8480]
 * 000000018004690F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046914: call    sub_180043E00
 * 0000000180046919: mov     r8, rax
 * 000000018004691C: mov     r9d, r12d
 * 000000018004691F: mov     edx, 88h
 * 0000000180046924: lea     rcx, [rbp+9E10h+var_5FE0]; Src
 * 000000018004692B: call    sub_1800CF2C8
 * 0000000180046930: nop
 * 0000000180046931: mov     r8, rax
 * 0000000180046934: mov     rdx, r13
 * 0000000180046937: lea     rcx, [rbp+9E10h+var_6000]
 * 000000018004693E: call    sub_180043BDC
 * 0000000180046943: nop
 * 0000000180046944: lea     r8, aPixel; "/Pixel"
 * 000000018004694B: mov     rdx, rax
 * 000000018004694E: lea     rcx, [rbp+9E10h+var_6020]
 * 0000000180046955: call    sub_18002C218
 * 000000018004695A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004695F: mov     rcx, rax
 * 0000000180046962: call    sub_1800CF3A0
 * 0000000180046967: mov     cs:byte_180218A24, al
 * 000000018004696D: lea     rcx, [rbp+9E10h+var_6000]; void *
 * 0000000180046974: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046979: nop
 * 000000018004697A: lea     rcx, [rbp+9E10h+var_5FE0]; void *
 * 0000000180046981: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046986: nop
 * 0000000180046987: lea     rcx, dword_180218A28
 * 000000018004698E: call    _Init_thread_footer
 * 0000000180046993: mov     rax, [rdi+rbx*8]
 * 0000000180046997: mov     eax, [r15+rax]
 * 000000018004699B: cmp     cs:dword_180218A30, eax
 * 00000001800469A1: jle     loc_180046A8A
 * 00000001800469A7: lea     rcx, dword_180218A30
 * 00000001800469AE: call    _Init_thread_header
 * 00000001800469B3: cmp     cs:dword_180218A30, r14d
 * 00000001800469BA: jnz     loc_180046A8A
 * 00000001800469C0: lea     rax, unk_180149280
 * 00000001800469C7: mov     qword ptr [rbp+9E10h+var_9C00], rax
 * 00000001800469CE: lea     rax, unk_18014F80C
 * 00000001800469D5: mov     qword ptr [rbp+9E10h+var_9C00+8], rax
 * 00000001800469DC: movups  xmm0, [rbp+9E10h+var_9C00]
 * 00000001800469E3: movups  [rbp+9E10h+var_8470], xmm0
 * 00000001800469EA: mov     dword ptr [rbp+9E10h+var_8460], 5
 * 00000001800469F4: mov     dword ptr [rbp+9E10h+var_8460+4], esi
 * 00000001800469FA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800469FF: movups  xmm0, [rbp+9E10h+var_8460]
 * 0000000180046A06: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046A0B: call    sub_180043E00
 * 0000000180046A10: mov     r8, rax
 * 0000000180046A13: mov     r9d, r12d
 * 0000000180046A16: mov     edx, 8Ah
 * 0000000180046A1B: lea     rcx, [rbp+9E10h+var_5F80]; Src
 * 0000000180046A22: call    sub_1800CF2C8
 * 0000000180046A27: nop
 * 0000000180046A28: mov     r8, rax
 * 0000000180046A2B: mov     rdx, r13
 * 0000000180046A2E: lea     rcx, [rbp+9E10h+var_5FA0]
 * 0000000180046A35: call    sub_180043BDC
 * 0000000180046A3A: nop
 * 0000000180046A3B: lea     r8, aPixel; "/Pixel"
 * 0000000180046A42: mov     rdx, rax
 * 0000000180046A45: lea     rcx, [rbp+9E10h+var_5FC0]
 * 0000000180046A4C: call    sub_18002C218
 * 0000000180046A51: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046A56: mov     rcx, rax
 * 0000000180046A59: call    sub_1800CF3A0
 * 0000000180046A5E: mov     cs:byte_180218A2C, al
 * 0000000180046A64: lea     rcx, [rbp+9E10h+var_5FA0]; void *
 * 0000000180046A6B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046A70: nop
 * 0000000180046A71: lea     rcx, [rbp+9E10h+var_5F80]; void *
 * 0000000180046A78: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046A7D: nop
 * 0000000180046A7E: lea     rcx, dword_180218A30
 * 0000000180046A85: call    _Init_thread_footer
 * 0000000180046A8A: mov     rax, [rdi+rbx*8]
 * 0000000180046A8E: mov     eax, [r15+rax]
 * 0000000180046A92: cmp     cs:dword_180218A38, eax
 * 0000000180046A98: jle     loc_180046B81
 * 0000000180046A9E: lea     rcx, dword_180218A38
 * 0000000180046AA5: call    _Init_thread_header
 * 0000000180046AAA: cmp     cs:dword_180218A38, r14d
 * 0000000180046AB1: jnz     loc_180046B81
 * 0000000180046AB7: lea     rax, unk_1801508E0
 * 0000000180046ABE: mov     qword ptr [rbp+9E10h+var_9BF0], rax
 * 0000000180046AC5: lea     rax, unk_180156E98
 * 0000000180046ACC: mov     qword ptr [rbp+9E10h+var_9BF0+8], rax
 * 0000000180046AD3: movups  xmm0, [rbp+9E10h+var_9BF0]
 * 0000000180046ADA: movups  [rbp+9E10h+var_8450], xmm0
 * 0000000180046AE1: mov     dword ptr [rbp+9E10h+var_8440], 5
 * 0000000180046AEB: mov     dword ptr [rbp+9E10h+var_8440+4], esi
 * 0000000180046AF1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046AF6: movups  xmm0, [rbp+9E10h+var_8440]
 * 0000000180046AFD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046B02: call    sub_180043E00
 * 0000000180046B07: mov     r8, rax
 * 0000000180046B0A: mov     r9d, r12d
 * 0000000180046B0D: mov     edx, 90h
 * 0000000180046B12: lea     rcx, [rbp+9E10h+var_5F20]; Src
 * 0000000180046B19: call    sub_1800CF2C8
 * 0000000180046B1E: nop
 * 0000000180046B1F: mov     r8, rax
 * 0000000180046B22: mov     rdx, r13
 * 0000000180046B25: lea     rcx, [rbp+9E10h+var_5F40]
 * 0000000180046B2C: call    sub_180043BDC
 * 0000000180046B31: nop
 * 0000000180046B32: lea     r8, aPixel; "/Pixel"
 * 0000000180046B39: mov     rdx, rax
 * 0000000180046B3C: lea     rcx, [rbp+9E10h+var_5F60]
 * 0000000180046B43: call    sub_18002C218
 * 0000000180046B48: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046B4D: mov     rcx, rax
 * 0000000180046B50: call    sub_1800CF3A0
 * 0000000180046B55: mov     cs:byte_180218A34, al
 * 0000000180046B5B: lea     rcx, [rbp+9E10h+var_5F40]; void *
 * 0000000180046B62: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046B67: nop
 * 0000000180046B68: lea     rcx, [rbp+9E10h+var_5F20]; void *
 * 0000000180046B6F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046B74: nop
 * 0000000180046B75: lea     rcx, dword_180218A38
 * 0000000180046B7C: call    _Init_thread_footer
 * 0000000180046B81: mov     rax, [rdi+rbx*8]
 * 0000000180046B85: mov     eax, [r15+rax]
 * 0000000180046B89: cmp     cs:dword_180218A40, eax
 * 0000000180046B8F: jle     loc_180046C78
 * 0000000180046B95: lea     rcx, dword_180218A40
 * 0000000180046B9C: call    _Init_thread_header
 * 0000000180046BA1: cmp     cs:dword_180218A40, r14d
 * 0000000180046BA8: jnz     loc_180046C78
 * 0000000180046BAE: lea     rax, unk_1801508E0
 * 0000000180046BB5: mov     qword ptr [rbp+9E10h+var_9BE0], rax
 * 0000000180046BBC: lea     rax, unk_180156E98
 * 0000000180046BC3: mov     qword ptr [rbp+9E10h+var_9BE0+8], rax
 * 0000000180046BCA: movups  xmm0, [rbp+9E10h+var_9BE0]
 * 0000000180046BD1: movups  [rbp+9E10h+var_8430], xmm0
 * 0000000180046BD8: mov     dword ptr [rbp+9E10h+var_8420], 5
 * 0000000180046BE2: mov     dword ptr [rbp+9E10h+var_8420+4], esi
 * 0000000180046BE8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046BED: movups  xmm0, [rbp+9E10h+var_8420]
 * 0000000180046BF4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046BF9: call    sub_180043E00
 * 0000000180046BFE: mov     r8, rax
 * 0000000180046C01: mov     r9d, r12d
 * 0000000180046C04: mov     edx, 92h
 * 0000000180046C09: lea     rcx, [rbp+9E10h+var_5EC0]; Src
 * 0000000180046C10: call    sub_1800CF2C8
 * 0000000180046C15: nop
 * 0000000180046C16: mov     r8, rax
 * 0000000180046C19: mov     rdx, r13
 * 0000000180046C1C: lea     rcx, [rbp+9E10h+var_5EE0]
 * 0000000180046C23: call    sub_180043BDC
 * 0000000180046C28: nop
 * 0000000180046C29: lea     r8, aPixel; "/Pixel"
 * 0000000180046C30: mov     rdx, rax
 * 0000000180046C33: lea     rcx, [rbp+9E10h+var_5F00]
 * 0000000180046C3A: call    sub_18002C218
 * 0000000180046C3F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046C44: mov     rcx, rax
 * 0000000180046C47: call    sub_1800CF3A0
 * 0000000180046C4C: mov     cs:byte_180218A3C, al
 * 0000000180046C52: lea     rcx, [rbp+9E10h+var_5EE0]; void *
 * 0000000180046C59: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046C5E: nop
 * 0000000180046C5F: lea     rcx, [rbp+9E10h+var_5EC0]; void *
 * 0000000180046C66: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046C6B: nop
 * 0000000180046C6C: lea     rcx, dword_180218A40
 * 0000000180046C73: call    _Init_thread_footer
 * 0000000180046C78: mov     rax, [rdi+rbx*8]
 * 0000000180046C7C: mov     eax, [r15+rax]
 * 0000000180046C80: cmp     cs:dword_180218A48, eax
 * 0000000180046C86: jle     loc_180046D6F
 * 0000000180046C8C: lea     rcx, dword_180218A48
 * 0000000180046C93: call    _Init_thread_header
 * 0000000180046C98: cmp     cs:dword_180218A48, r14d
 * 0000000180046C9F: jnz     loc_180046D6F
 * 0000000180046CA5: lea     rax, unk_18015A1A0
 * 0000000180046CAC: mov     qword ptr [rbp+9E10h+var_9BD0], rax
 * 0000000180046CB3: lea     rax, unk_18016092C
 * 0000000180046CBA: mov     qword ptr [rbp+9E10h+var_9BD0+8], rax
 * 0000000180046CC1: movups  xmm0, [rbp+9E10h+var_9BD0]
 * 0000000180046CC8: movups  [rbp+9E10h+var_8410], xmm0
 * 0000000180046CCF: mov     dword ptr [rbp+9E10h+var_8400], 5
 * 0000000180046CD9: mov     dword ptr [rbp+9E10h+var_8400+4], esi
 * 0000000180046CDF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046CE4: movups  xmm0, [rbp+9E10h+var_8400]
 * 0000000180046CEB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046CF0: call    sub_180043E00
 * 0000000180046CF5: mov     r8, rax
 * 0000000180046CF8: mov     r9d, r12d
 * 0000000180046CFB: mov     edx, 98h
 * 0000000180046D00: lea     rcx, [rbp+9E10h+var_5E60]; Src
 * 0000000180046D07: call    sub_1800CF2C8
 * 0000000180046D0C: nop
 * 0000000180046D0D: mov     r8, rax
 * 0000000180046D10: mov     rdx, r13
 * 0000000180046D13: lea     rcx, [rbp+9E10h+var_5E80]
 * 0000000180046D1A: call    sub_180043BDC
 * 0000000180046D1F: nop
 * 0000000180046D20: lea     r8, aPixel; "/Pixel"
 * 0000000180046D27: mov     rdx, rax
 * 0000000180046D2A: lea     rcx, [rbp+9E10h+var_5EA0]
 * 0000000180046D31: call    sub_18002C218
 * 0000000180046D36: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046D3B: mov     rcx, rax
 * 0000000180046D3E: call    sub_1800CF3A0
 * 0000000180046D43: mov     cs:byte_180218A44, al
 * 0000000180046D49: lea     rcx, [rbp+9E10h+var_5E80]; void *
 * 0000000180046D50: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046D55: nop
 * 0000000180046D56: lea     rcx, [rbp+9E10h+var_5E60]; void *
 * 0000000180046D5D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046D62: nop
 * 0000000180046D63: lea     rcx, dword_180218A48
 * 0000000180046D6A: call    _Init_thread_footer
 * 0000000180046D6F: mov     rax, [rdi+rbx*8]
 * 0000000180046D73: mov     eax, [r15+rax]
 * 0000000180046D77: cmp     cs:dword_180218A50, eax
 * 0000000180046D7D: jle     loc_180046E66
 * 0000000180046D83: lea     rcx, dword_180218A50
 * 0000000180046D8A: call    _Init_thread_header
 * 0000000180046D8F: cmp     cs:dword_180218A50, r14d
 * 0000000180046D96: jnz     loc_180046E66
 * 0000000180046D9C: lea     rax, unk_18015A1A0
 * 0000000180046DA3: mov     qword ptr [rbp+9E10h+var_9BC0], rax
 * 0000000180046DAA: lea     rax, unk_18016092C
 * 0000000180046DB1: mov     qword ptr [rbp+9E10h+var_9BC0+8], rax
 * 0000000180046DB8: movups  xmm0, [rbp+9E10h+var_9BC0]
 * 0000000180046DBF: movups  [rbp+9E10h+var_83F0], xmm0
 * 0000000180046DC6: mov     dword ptr [rbp+9E10h+var_83E0], 5
 * 0000000180046DD0: mov     dword ptr [rbp+9E10h+var_83E0+4], esi
 * 0000000180046DD6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046DDB: movups  xmm0, [rbp+9E10h+var_83E0]
 * 0000000180046DE2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046DE7: call    sub_180043E00
 * 0000000180046DEC: mov     r8, rax
 * 0000000180046DEF: mov     r9d, r12d
 * 0000000180046DF2: mov     edx, 9Ah
 * 0000000180046DF7: lea     rcx, [rbp+9E10h+var_5E00]; Src
 * 0000000180046DFE: call    sub_1800CF2C8
 * 0000000180046E03: nop
 * 0000000180046E04: mov     r8, rax
 * 0000000180046E07: mov     rdx, r13
 * 0000000180046E0A: lea     rcx, [rbp+9E10h+var_5E20]
 * 0000000180046E11: call    sub_180043BDC
 * 0000000180046E16: nop
 * 0000000180046E17: lea     r8, aPixel; "/Pixel"
 * 0000000180046E1E: mov     rdx, rax
 * 0000000180046E21: lea     rcx, [rbp+9E10h+var_5E40]
 * 0000000180046E28: call    sub_18002C218
 * 0000000180046E2D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046E32: mov     rcx, rax
 * 0000000180046E35: call    sub_1800CF3A0
 * 0000000180046E3A: mov     cs:byte_180218A4C, al
 * 0000000180046E40: lea     rcx, [rbp+9E10h+var_5E20]; void *
 * 0000000180046E47: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046E4C: nop
 * 0000000180046E4D: lea     rcx, [rbp+9E10h+var_5E00]; void *
 * 0000000180046E54: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046E59: nop
 * 0000000180046E5A: lea     rcx, dword_180218A50
 * 0000000180046E61: call    _Init_thread_footer
 * 0000000180046E66: mov     rax, [rdi+rbx*8]
 * 0000000180046E6A: mov     eax, [r15+rax]
 * 0000000180046E6E: cmp     cs:dword_180218A58, eax
 * 0000000180046E74: jle     loc_180046F5D
 * 0000000180046E7A: lea     rcx, dword_180218A58
 * 0000000180046E81: call    _Init_thread_header
 * 0000000180046E86: cmp     cs:dword_180218A58, r14d
 * 0000000180046E8D: jnz     loc_180046F5D
 * 0000000180046E93: lea     rax, unk_18013E8E0
 * 0000000180046E9A: mov     qword ptr [rbp+9E10h+var_9BB0], rax
 * 0000000180046EA1: lea     rax, unk_180144CC4
 * 0000000180046EA8: mov     qword ptr [rbp+9E10h+var_9BB0+8], rax
 * 0000000180046EAF: movups  xmm0, [rbp+9E10h+var_9BB0]
 * 0000000180046EB6: movups  [rbp+9E10h+var_83D0], xmm0
 * 0000000180046EBD: mov     dword ptr [rbp+9E10h+var_83C0], 5
 * 0000000180046EC7: mov     dword ptr [rbp+9E10h+var_83C0+4], esi
 * 0000000180046ECD: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046ED2: movups  xmm0, [rbp+9E10h+var_83C0]
 * 0000000180046ED9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046EDE: call    sub_180043E00
 * 0000000180046EE3: mov     r8, rax
 * 0000000180046EE6: mov     r9d, r12d
 * 0000000180046EE9: mov     edx, 0A0h
 * 0000000180046EEE: lea     rcx, [rbp+9E10h+var_5DA0]; Src
 * 0000000180046EF5: call    sub_1800CF2C8
 * 0000000180046EFA: nop
 * 0000000180046EFB: mov     r8, rax
 * 0000000180046EFE: mov     rdx, r13
 * 0000000180046F01: lea     rcx, [rbp+9E10h+var_5DC0]
 * 0000000180046F08: call    sub_180043BDC
 * 0000000180046F0D: nop
 * 0000000180046F0E: lea     r8, aPixel; "/Pixel"
 * 0000000180046F15: mov     rdx, rax
 * 0000000180046F18: lea     rcx, [rbp+9E10h+var_5DE0]
 * 0000000180046F1F: call    sub_18002C218
 * 0000000180046F24: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180046F29: mov     rcx, rax
 * 0000000180046F2C: call    sub_1800CF3A0
 * 0000000180046F31: mov     cs:byte_180218A54, al
 * 0000000180046F37: lea     rcx, [rbp+9E10h+var_5DC0]; void *
 * 0000000180046F3E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046F43: nop
 * 0000000180046F44: lea     rcx, [rbp+9E10h+var_5DA0]; void *
 * 0000000180046F4B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180046F50: nop
 * 0000000180046F51: lea     rcx, dword_180218A58
 * 0000000180046F58: call    _Init_thread_footer
 * 0000000180046F5D: mov     rax, [rdi+rbx*8]
 * 0000000180046F61: mov     eax, [r15+rax]
 * 0000000180046F65: cmp     cs:dword_180218A60, eax
 * 0000000180046F6B: jle     loc_180047054
 * 0000000180046F71: lea     rcx, dword_180218A60
 * 0000000180046F78: call    _Init_thread_header
 * 0000000180046F7D: cmp     cs:dword_180218A60, r14d
 * 0000000180046F84: jnz     loc_180047054
 * 0000000180046F8A: lea     rax, unk_18013E8E0
 * 0000000180046F91: mov     qword ptr [rbp+9E10h+var_9BA0], rax
 * 0000000180046F98: lea     rax, unk_180144CC4
 * 0000000180046F9F: mov     qword ptr [rbp+9E10h+var_9BA0+8], rax
 * 0000000180046FA6: movups  xmm0, [rbp+9E10h+var_9BA0]
 * 0000000180046FAD: movups  [rbp+9E10h+var_83B0], xmm0
 * 0000000180046FB4: mov     dword ptr [rbp+9E10h+var_83A0], 5
 * 0000000180046FBE: mov     dword ptr [rbp+9E10h+var_83A0+4], esi
 * 0000000180046FC4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180046FC9: movups  xmm0, [rbp+9E10h+var_83A0]
 * 0000000180046FD0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180046FD5: call    sub_180043E00
 * 0000000180046FDA: mov     r8, rax
 * 0000000180046FDD: mov     r9d, r12d
 * 0000000180046FE0: mov     edx, 0A2h
 * 0000000180046FE5: lea     rcx, [rbp+9E10h+var_5D40]; Src
 * 0000000180046FEC: call    sub_1800CF2C8
 * 0000000180046FF1: nop
 * 0000000180046FF2: mov     r8, rax
 * 0000000180046FF5: mov     rdx, r13
 * 0000000180046FF8: lea     rcx, [rbp+9E10h+var_5D60]
 * 0000000180046FFF: call    sub_180043BDC
 * 0000000180047004: nop
 * 0000000180047005: lea     r8, aPixel; "/Pixel"
 * 000000018004700C: mov     rdx, rax
 * 000000018004700F: lea     rcx, [rbp+9E10h+var_5D80]
 * 0000000180047016: call    sub_18002C218
 * 000000018004701B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047020: mov     rcx, rax
 * 0000000180047023: call    sub_1800CF3A0
 * 0000000180047028: mov     cs:byte_180218A5C, al
 * 000000018004702E: lea     rcx, [rbp+9E10h+var_5D60]; void *
 * 0000000180047035: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004703A: nop
 * 000000018004703B: lea     rcx, [rbp+9E10h+var_5D40]; void *
 * 0000000180047042: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047047: nop
 * 0000000180047048: lea     rcx, dword_180218A60
 * 000000018004704F: call    _Init_thread_footer
 * 0000000180047054: mov     rax, [rdi+rbx*8]
 * 0000000180047058: mov     eax, [r15+rax]
 * 000000018004705C: cmp     cs:dword_180218A68, eax
 * 0000000180047062: jle     loc_18004714B
 * 0000000180047068: lea     rcx, dword_180218A68
 * 000000018004706F: call    _Init_thread_header
 * 0000000180047074: cmp     cs:dword_180218A68, r14d
 * 000000018004707B: jnz     loc_18004714B
 * 0000000180047081: lea     rax, unk_180149280
 * 0000000180047088: mov     qword ptr [rbp+9E10h+var_9B90], rax
 * 000000018004708F: lea     rax, unk_18014F80C
 * 0000000180047096: mov     qword ptr [rbp+9E10h+var_9B90+8], rax
 * 000000018004709D: movups  xmm0, [rbp+9E10h+var_9B90]
 * 00000001800470A4: movups  [rbp+9E10h+var_8390], xmm0
 * 00000001800470AB: mov     dword ptr [rbp+9E10h+var_8380], 5
 * 00000001800470B5: mov     dword ptr [rbp+9E10h+var_8380+4], esi
 * 00000001800470BB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800470C0: movups  xmm0, [rbp+9E10h+var_8380]
 * 00000001800470C7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800470CC: call    sub_180043E00
 * 00000001800470D1: mov     r8, rax
 * 00000001800470D4: mov     r9d, r12d
 * 00000001800470D7: mov     edx, 0A8h
 * 00000001800470DC: lea     rcx, [rbp+9E10h+var_5CE0]; Src
 * 00000001800470E3: call    sub_1800CF2C8
 * 00000001800470E8: nop
 * 00000001800470E9: mov     r8, rax
 * 00000001800470EC: mov     rdx, r13
 * 00000001800470EF: lea     rcx, [rbp+9E10h+var_5D00]
 * 00000001800470F6: call    sub_180043BDC
 * 00000001800470FB: nop
 * 00000001800470FC: lea     r8, aPixel; "/Pixel"
 * 0000000180047103: mov     rdx, rax
 * 0000000180047106: lea     rcx, [rbp+9E10h+var_5D20]
 * 000000018004710D: call    sub_18002C218
 * 0000000180047112: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047117: mov     rcx, rax
 * 000000018004711A: call    sub_1800CF3A0
 * 000000018004711F: mov     cs:byte_180218A64, al
 * 0000000180047125: lea     rcx, [rbp+9E10h+var_5D00]; void *
 * 000000018004712C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047131: nop
 * 0000000180047132: lea     rcx, [rbp+9E10h+var_5CE0]; void *
 * 0000000180047139: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004713E: nop
 * 000000018004713F: lea     rcx, dword_180218A68
 * 0000000180047146: call    _Init_thread_footer
 * 000000018004714B: mov     rax, [rdi+rbx*8]
 * 000000018004714F: mov     eax, [r15+rax]
 * 0000000180047153: cmp     cs:dword_180218A70, eax
 * 0000000180047159: jle     loc_180047242
 * 000000018004715F: lea     rcx, dword_180218A70
 * 0000000180047166: call    _Init_thread_header
 * 000000018004716B: cmp     cs:dword_180218A70, r14d
 * 0000000180047172: jnz     loc_180047242
 * 0000000180047178: lea     rax, unk_180149280
 * 000000018004717F: mov     qword ptr [rbp+9E10h+var_9B80], rax
 * 0000000180047186: lea     rax, unk_18014F80C
 * 000000018004718D: mov     qword ptr [rbp+9E10h+var_9B80+8], rax
 * 0000000180047194: movups  xmm0, [rbp+9E10h+var_9B80]
 * 000000018004719B: movups  [rbp+9E10h+var_8370], xmm0
 * 00000001800471A2: mov     dword ptr [rbp+9E10h+var_8360], 5
 * 00000001800471AC: mov     dword ptr [rbp+9E10h+var_8360+4], esi
 * 00000001800471B2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800471B7: movups  xmm0, [rbp+9E10h+var_8360]
 * 00000001800471BE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800471C3: call    sub_180043E00
 * 00000001800471C8: mov     r8, rax
 * 00000001800471CB: mov     r9d, r12d
 * 00000001800471CE: mov     edx, 0AAh
 * 00000001800471D3: lea     rcx, [rbp+9E10h+var_5C80]; Src
 * 00000001800471DA: call    sub_1800CF2C8
 * 00000001800471DF: nop
 * 00000001800471E0: mov     r8, rax
 * 00000001800471E3: mov     rdx, r13
 * 00000001800471E6: lea     rcx, [rbp+9E10h+var_5CA0]
 * 00000001800471ED: call    sub_180043BDC
 * 00000001800471F2: nop
 * 00000001800471F3: lea     r8, aPixel; "/Pixel"
 * 00000001800471FA: mov     rdx, rax
 * 00000001800471FD: lea     rcx, [rbp+9E10h+var_5CC0]
 * 0000000180047204: call    sub_18002C218
 * 0000000180047209: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004720E: mov     rcx, rax
 * 0000000180047211: call    sub_1800CF3A0
 * 0000000180047216: mov     cs:byte_180218A6C, al
 * 000000018004721C: lea     rcx, [rbp+9E10h+var_5CA0]; void *
 * 0000000180047223: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047228: nop
 * 0000000180047229: lea     rcx, [rbp+9E10h+var_5C80]; void *
 * 0000000180047230: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047235: nop
 * 0000000180047236: lea     rcx, dword_180218A70
 * 000000018004723D: call    _Init_thread_footer
 * 0000000180047242: mov     rax, [rdi+rbx*8]
 * 0000000180047246: mov     eax, [r15+rax]
 * 000000018004724A: cmp     cs:dword_180218A78, eax
 * 0000000180047250: jle     loc_180047339
 * 0000000180047256: lea     rcx, dword_180218A78
 * 000000018004725D: call    _Init_thread_header
 * 0000000180047262: cmp     cs:dword_180218A78, r14d
 * 0000000180047269: jnz     loc_180047339
 * 000000018004726F: lea     rax, unk_1801508E0
 * 0000000180047276: mov     qword ptr [rbp+9E10h+var_9B70], rax
 * 000000018004727D: lea     rax, unk_180156E98
 * 0000000180047284: mov     qword ptr [rbp+9E10h+var_9B70+8], rax
 * 000000018004728B: movups  xmm0, [rbp+9E10h+var_9B70]
 * 0000000180047292: movups  [rbp+9E10h+var_8350], xmm0
 * 0000000180047299: mov     dword ptr [rbp+9E10h+var_8340], 5
 * 00000001800472A3: mov     dword ptr [rbp+9E10h+var_8340+4], esi
 * 00000001800472A9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800472AE: movups  xmm0, [rbp+9E10h+var_8340]
 * 00000001800472B5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800472BA: call    sub_180043E00
 * 00000001800472BF: mov     r8, rax
 * 00000001800472C2: mov     r9d, r12d
 * 00000001800472C5: mov     edx, 0B0h
 * 00000001800472CA: lea     rcx, [rbp+9E10h+var_5C20]; Src
 * 00000001800472D1: call    sub_1800CF2C8
 * 00000001800472D6: nop
 * 00000001800472D7: mov     r8, rax
 * 00000001800472DA: mov     rdx, r13
 * 00000001800472DD: lea     rcx, [rbp+9E10h+var_5C40]
 * 00000001800472E4: call    sub_180043BDC
 * 00000001800472E9: nop
 * 00000001800472EA: lea     r8, aPixel; "/Pixel"
 * 00000001800472F1: mov     rdx, rax
 * 00000001800472F4: lea     rcx, [rbp+9E10h+var_5C60]
 * 00000001800472FB: call    sub_18002C218
 * 0000000180047300: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047305: mov     rcx, rax
 * 0000000180047308: call    sub_1800CF3A0
 * 000000018004730D: mov     cs:byte_180218A74, al
 * 0000000180047313: lea     rcx, [rbp+9E10h+var_5C40]; void *
 * 000000018004731A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004731F: nop
 * 0000000180047320: lea     rcx, [rbp+9E10h+var_5C20]; void *
 * 0000000180047327: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004732C: nop
 * 000000018004732D: lea     rcx, dword_180218A78
 * 0000000180047334: call    _Init_thread_footer
 * 0000000180047339: mov     rax, [rdi+rbx*8]
 * 000000018004733D: mov     eax, [r15+rax]
 * 0000000180047341: cmp     cs:dword_180218A80, eax
 * 0000000180047347: jle     loc_180047430
 * 000000018004734D: lea     rcx, dword_180218A80
 * 0000000180047354: call    _Init_thread_header
 * 0000000180047359: cmp     cs:dword_180218A80, r14d
 * 0000000180047360: jnz     loc_180047430
 * 0000000180047366: lea     rax, unk_1801508E0
 * 000000018004736D: mov     qword ptr [rbp+9E10h+var_9B60], rax
 * 0000000180047374: lea     rax, unk_180156E98
 * 000000018004737B: mov     qword ptr [rbp+9E10h+var_9B60+8], rax
 * 0000000180047382: movups  xmm0, [rbp+9E10h+var_9B60]
 * 0000000180047389: movups  [rbp+9E10h+var_8330], xmm0
 * 0000000180047390: mov     dword ptr [rbp+9E10h+var_8320], 5
 * 000000018004739A: mov     dword ptr [rbp+9E10h+var_8320+4], esi
 * 00000001800473A0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800473A5: movups  xmm0, [rbp+9E10h+var_8320]
 * 00000001800473AC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800473B1: call    sub_180043E00
 * 00000001800473B6: mov     r8, rax
 * 00000001800473B9: mov     r9d, r12d
 * 00000001800473BC: mov     edx, 0B2h
 * 00000001800473C1: lea     rcx, [rbp+9E10h+var_5BC0]; Src
 * 00000001800473C8: call    sub_1800CF2C8
 * 00000001800473CD: nop
 * 00000001800473CE: mov     r8, rax
 * 00000001800473D1: mov     rdx, r13
 * 00000001800473D4: lea     rcx, [rbp+9E10h+var_5BE0]
 * 00000001800473DB: call    sub_180043BDC
 * 00000001800473E0: nop
 * 00000001800473E1: lea     r8, aPixel; "/Pixel"
 * 00000001800473E8: mov     rdx, rax
 * 00000001800473EB: lea     rcx, [rbp+9E10h+var_5C00]
 * 00000001800473F2: call    sub_18002C218
 * 00000001800473F7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800473FC: mov     rcx, rax
 * 00000001800473FF: call    sub_1800CF3A0
 * 0000000180047404: mov     cs:byte_180218A7C, al
 * 000000018004740A: lea     rcx, [rbp+9E10h+var_5BE0]; void *
 * 0000000180047411: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047416: nop
 * 0000000180047417: lea     rcx, [rbp+9E10h+var_5BC0]; void *
 * 000000018004741E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047423: nop
 * 0000000180047424: lea     rcx, dword_180218A80
 * 000000018004742B: call    _Init_thread_footer
 * 0000000180047430: mov     rax, [rdi+rbx*8]
 * 0000000180047434: mov     eax, [r15+rax]
 * 0000000180047438: cmp     cs:dword_180218A88, eax
 * 000000018004743E: jle     loc_180047527
 * 0000000180047444: lea     rcx, dword_180218A88
 * 000000018004744B: call    _Init_thread_header
 * 0000000180047450: cmp     cs:dword_180218A88, r14d
 * 0000000180047457: jnz     loc_180047527
 * 000000018004745D: lea     rax, unk_18015A1A0
 * 0000000180047464: mov     qword ptr [rbp+9E10h+var_9B50], rax
 * 000000018004746B: lea     rax, unk_18016092C
 * 0000000180047472: mov     qword ptr [rbp+9E10h+var_9B50+8], rax
 * 0000000180047479: movups  xmm0, [rbp+9E10h+var_9B50]
 * 0000000180047480: movups  [rbp+9E10h+var_8310], xmm0
 * 0000000180047487: mov     dword ptr [rbp+9E10h+var_8300], 5
 * 0000000180047491: mov     dword ptr [rbp+9E10h+var_8300+4], esi
 * 0000000180047497: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004749C: movups  xmm0, [rbp+9E10h+var_8300]
 * 00000001800474A3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800474A8: call    sub_180043E00
 * 00000001800474AD: mov     r8, rax
 * 00000001800474B0: mov     r9d, r12d
 * 00000001800474B3: mov     edx, 0B8h
 * 00000001800474B8: lea     rcx, [rbp+9E10h+var_5B60]; Src
 * 00000001800474BF: call    sub_1800CF2C8
 * 00000001800474C4: nop
 * 00000001800474C5: mov     r8, rax
 * 00000001800474C8: mov     rdx, r13
 * 00000001800474CB: lea     rcx, [rbp+9E10h+var_5B80]
 * 00000001800474D2: call    sub_180043BDC
 * 00000001800474D7: nop
 * 00000001800474D8: lea     r8, aPixel; "/Pixel"
 * 00000001800474DF: mov     rdx, rax
 * 00000001800474E2: lea     rcx, [rbp+9E10h+var_5BA0]
 * 00000001800474E9: call    sub_18002C218
 * 00000001800474EE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800474F3: mov     rcx, rax
 * 00000001800474F6: call    sub_1800CF3A0
 * 00000001800474FB: mov     cs:byte_180218A84, al
 * 0000000180047501: lea     rcx, [rbp+9E10h+var_5B80]; void *
 * 0000000180047508: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004750D: nop
 * 000000018004750E: lea     rcx, [rbp+9E10h+var_5B60]; void *
 * 0000000180047515: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004751A: nop
 * 000000018004751B: lea     rcx, dword_180218A88
 * 0000000180047522: call    _Init_thread_footer
 * 0000000180047527: mov     rax, [rdi+rbx*8]
 * 000000018004752B: mov     eax, [r15+rax]
 * 000000018004752F: cmp     cs:dword_180218A90, eax
 * 0000000180047535: jle     loc_18004761E
 * 000000018004753B: lea     rcx, dword_180218A90
 * 0000000180047542: call    _Init_thread_header
 * 0000000180047547: cmp     cs:dword_180218A90, r14d
 * 000000018004754E: jnz     loc_18004761E
 * 0000000180047554: lea     rax, unk_18015A1A0
 * 000000018004755B: mov     qword ptr [rbp+9E10h+var_9B40], rax
 * 0000000180047562: lea     rax, unk_18016092C
 * 0000000180047569: mov     qword ptr [rbp+9E10h+var_9B40+8], rax
 * 0000000180047570: movups  xmm0, [rbp+9E10h+var_9B40]
 * 0000000180047577: movups  [rbp+9E10h+var_82F0], xmm0
 * 000000018004757E: mov     dword ptr [rbp+9E10h+var_82E0], 5
 * 0000000180047588: mov     dword ptr [rbp+9E10h+var_82E0+4], esi
 * 000000018004758E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047593: movups  xmm0, [rbp+9E10h+var_82E0]
 * 000000018004759A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004759F: call    sub_180043E00
 * 00000001800475A4: mov     r8, rax
 * 00000001800475A7: mov     r9d, r12d
 * 00000001800475AA: mov     edx, 0BAh
 * 00000001800475AF: lea     rcx, [rbp+9E10h+var_5B00]; Src
 * 00000001800475B6: call    sub_1800CF2C8
 * 00000001800475BB: nop
 * 00000001800475BC: mov     r8, rax
 * 00000001800475BF: mov     rdx, r13
 * 00000001800475C2: lea     rcx, [rbp+9E10h+var_5B20]
 * 00000001800475C9: call    sub_180043BDC
 * 00000001800475CE: nop
 * 00000001800475CF: lea     r8, aPixel; "/Pixel"
 * 00000001800475D6: mov     rdx, rax
 * 00000001800475D9: lea     rcx, [rbp+9E10h+var_5B40]
 * 00000001800475E0: call    sub_18002C218
 * 00000001800475E5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800475EA: mov     rcx, rax
 * 00000001800475ED: call    sub_1800CF3A0
 * 00000001800475F2: mov     cs:byte_180218A8C, al
 * 00000001800475F8: lea     rcx, [rbp+9E10h+var_5B20]; void *
 * 00000001800475FF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047604: nop
 * 0000000180047605: lea     rcx, [rbp+9E10h+var_5B00]; void *
 * 000000018004760C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047611: nop
 * 0000000180047612: lea     rcx, dword_180218A90
 * 0000000180047619: call    _Init_thread_footer
 * 000000018004761E: mov     rax, [rdi+rbx*8]
 * 0000000180047622: mov     eax, [r15+rax]
 * 0000000180047626: cmp     cs:dword_180218A98, eax
 * 000000018004762C: jle     loc_180047715
 * 0000000180047632: lea     rcx, dword_180218A98
 * 0000000180047639: call    _Init_thread_header
 * 000000018004763E: cmp     cs:dword_180218A98, r14d
 * 0000000180047645: jnz     loc_180047715
 * 000000018004764B: lea     rax, unk_18013E8E0
 * 0000000180047652: mov     qword ptr [rbp+9E10h+var_9B30], rax
 * 0000000180047659: lea     rax, unk_180144CC4
 * 0000000180047660: mov     qword ptr [rbp+9E10h+var_9B30+8], rax
 * 0000000180047667: movups  xmm0, [rbp+9E10h+var_9B30]
 * 000000018004766E: movups  [rbp+9E10h+var_82D0], xmm0
 * 0000000180047675: mov     dword ptr [rbp+9E10h+var_82C0], 5
 * 000000018004767F: mov     dword ptr [rbp+9E10h+var_82C0+4], esi
 * 0000000180047685: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004768A: movups  xmm0, [rbp+9E10h+var_82C0]
 * 0000000180047691: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180047696: call    sub_180043E00
 * 000000018004769B: mov     r8, rax
 * 000000018004769E: mov     r9d, r12d
 * 00000001800476A1: mov     edx, 0C0h
 * 00000001800476A6: lea     rcx, [rbp+9E10h+var_5AA0]; Src
 * 00000001800476AD: call    sub_1800CF2C8
 * 00000001800476B2: nop
 * 00000001800476B3: mov     r8, rax
 * 00000001800476B6: mov     rdx, r13
 * 00000001800476B9: lea     rcx, [rbp+9E10h+var_5AC0]
 * 00000001800476C0: call    sub_180043BDC
 * 00000001800476C5: nop
 * 00000001800476C6: lea     r8, aPixel; "/Pixel"
 * 00000001800476CD: mov     rdx, rax
 * 00000001800476D0: lea     rcx, [rbp+9E10h+var_5AE0]
 * 00000001800476D7: call    sub_18002C218
 * 00000001800476DC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800476E1: mov     rcx, rax
 * 00000001800476E4: call    sub_1800CF3A0
 * 00000001800476E9: mov     cs:byte_180218A94, al
 * 00000001800476EF: lea     rcx, [rbp+9E10h+var_5AC0]; void *
 * 00000001800476F6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800476FB: nop
 * 00000001800476FC: lea     rcx, [rbp+9E10h+var_5AA0]; void *
 * 0000000180047703: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047708: nop
 * 0000000180047709: lea     rcx, dword_180218A98
 * 0000000180047710: call    _Init_thread_footer
 * 0000000180047715: mov     rax, [rdi+rbx*8]
 * 0000000180047719: mov     eax, [r15+rax]
 * 000000018004771D: cmp     cs:dword_180218AA0, eax
 * 0000000180047723: jle     loc_18004780C
 * 0000000180047729: lea     rcx, dword_180218AA0
 * 0000000180047730: call    _Init_thread_header
 * 0000000180047735: cmp     cs:dword_180218AA0, r14d
 * 000000018004773C: jnz     loc_18004780C
 * 0000000180047742: lea     rax, unk_18013E8E0
 * 0000000180047749: mov     qword ptr [rbp+9E10h+var_9B20], rax
 * 0000000180047750: lea     rax, unk_180144CC4
 * 0000000180047757: mov     qword ptr [rbp+9E10h+var_9B20+8], rax
 * 000000018004775E: movups  xmm0, [rbp+9E10h+var_9B20]
 * 0000000180047765: movups  [rbp+9E10h+var_82B0], xmm0
 * 000000018004776C: mov     dword ptr [rbp+9E10h+var_82A0], 5
 * 0000000180047776: mov     dword ptr [rbp+9E10h+var_82A0+4], esi
 * 000000018004777C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047781: movups  xmm0, [rbp+9E10h+var_82A0]
 * 0000000180047788: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004778D: call    sub_180043E00
 * 0000000180047792: mov     r8, rax
 * 0000000180047795: mov     r9d, r12d
 * 0000000180047798: mov     edx, 0C2h
 * 000000018004779D: lea     rcx, [rbp+9E10h+var_5A40]; Src
 * 00000001800477A4: call    sub_1800CF2C8
 * 00000001800477A9: nop
 * 00000001800477AA: mov     r8, rax
 * 00000001800477AD: mov     rdx, r13
 * 00000001800477B0: lea     rcx, [rbp+9E10h+var_5A60]
 * 00000001800477B7: call    sub_180043BDC
 * 00000001800477BC: nop
 * 00000001800477BD: lea     r8, aPixel; "/Pixel"
 * 00000001800477C4: mov     rdx, rax
 * 00000001800477C7: lea     rcx, [rbp+9E10h+var_5A80]
 * 00000001800477CE: call    sub_18002C218
 * 00000001800477D3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800477D8: mov     rcx, rax
 * 00000001800477DB: call    sub_1800CF3A0
 * 00000001800477E0: mov     cs:byte_180218A9C, al
 * 00000001800477E6: lea     rcx, [rbp+9E10h+var_5A60]; void *
 * 00000001800477ED: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800477F2: nop
 * 00000001800477F3: lea     rcx, [rbp+9E10h+var_5A40]; void *
 * 00000001800477FA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800477FF: nop
 * 0000000180047800: lea     rcx, dword_180218AA0
 * 0000000180047807: call    _Init_thread_footer
 * 000000018004780C: mov     rax, [rdi+rbx*8]
 * 0000000180047810: mov     eax, [r15+rax]
 * 0000000180047814: cmp     cs:dword_180218AA8, eax
 * 000000018004781A: jle     loc_180047903
 * 0000000180047820: lea     rcx, dword_180218AA8
 * 0000000180047827: call    _Init_thread_header
 * 000000018004782C: cmp     cs:dword_180218AA8, r14d
 * 0000000180047833: jnz     loc_180047903
 * 0000000180047839: lea     rax, unk_180149280
 * 0000000180047840: mov     qword ptr [rbp+9E10h+var_9B10], rax
 * 0000000180047847: lea     rax, unk_18014F80C
 * 000000018004784E: mov     qword ptr [rbp+9E10h+var_9B10+8], rax
 * 0000000180047855: movups  xmm0, [rbp+9E10h+var_9B10]
 * 000000018004785C: movups  [rbp+9E10h+var_8290], xmm0
 * 0000000180047863: mov     dword ptr [rbp+9E10h+var_8280], 5
 * 000000018004786D: mov     dword ptr [rbp+9E10h+var_8280+4], esi
 * 0000000180047873: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047878: movups  xmm0, [rbp+9E10h+var_8280]
 * 000000018004787F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180047884: call    sub_180043E00
 * 0000000180047889: mov     r8, rax
 * 000000018004788C: mov     r9d, r12d
 * 000000018004788F: mov     edx, 0C8h
 * 0000000180047894: lea     rcx, [rbp+9E10h+var_59E0]; Src
 * 000000018004789B: call    sub_1800CF2C8
 * 00000001800478A0: nop
 * 00000001800478A1: mov     r8, rax
 * 00000001800478A4: mov     rdx, r13
 * 00000001800478A7: lea     rcx, [rbp+9E10h+var_5A00]
 * 00000001800478AE: call    sub_180043BDC
 * 00000001800478B3: nop
 * 00000001800478B4: lea     r8, aPixel; "/Pixel"
 * 00000001800478BB: mov     rdx, rax
 * 00000001800478BE: lea     rcx, [rbp+9E10h+var_5A20]
 * 00000001800478C5: call    sub_18002C218
 * 00000001800478CA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800478CF: mov     rcx, rax
 * 00000001800478D2: call    sub_1800CF3A0
 * 00000001800478D7: mov     cs:byte_180218AA4, al
 * 00000001800478DD: lea     rcx, [rbp+9E10h+var_5A00]; void *
 * 00000001800478E4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800478E9: nop
 * 00000001800478EA: lea     rcx, [rbp+9E10h+var_59E0]; void *
 * 00000001800478F1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800478F6: nop
 * 00000001800478F7: lea     rcx, dword_180218AA8
 * 00000001800478FE: call    _Init_thread_footer
 * 0000000180047903: mov     rax, [rdi+rbx*8]
 * 0000000180047907: mov     eax, [r15+rax]
 * 000000018004790B: cmp     cs:dword_180218AB0, eax
 * 0000000180047911: jle     loc_1800479FA
 * 0000000180047917: lea     rcx, dword_180218AB0
 * 000000018004791E: call    _Init_thread_header
 * 0000000180047923: cmp     cs:dword_180218AB0, r14d
 * 000000018004792A: jnz     loc_1800479FA
 * 0000000180047930: lea     rax, unk_180149280
 * 0000000180047937: mov     qword ptr [rbp+9E10h+var_9B00], rax
 * 000000018004793E: lea     rax, unk_18014F80C
 * 0000000180047945: mov     qword ptr [rbp+9E10h+var_9B00+8], rax
 * 000000018004794C: movups  xmm0, [rbp+9E10h+var_9B00]
 * 0000000180047953: movups  [rbp+9E10h+var_8270], xmm0
 * 000000018004795A: mov     dword ptr [rbp+9E10h+var_8260], 5
 * 0000000180047964: mov     dword ptr [rbp+9E10h+var_8260+4], esi
 * 000000018004796A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004796F: movups  xmm0, [rbp+9E10h+var_8260]
 * 0000000180047976: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004797B: call    sub_180043E00
 * 0000000180047980: mov     r8, rax
 * 0000000180047983: mov     r9d, r12d
 * 0000000180047986: mov     edx, 0CAh
 * 000000018004798B: lea     rcx, [rbp+9E10h+var_5980]; Src
 * 0000000180047992: call    sub_1800CF2C8
 * 0000000180047997: nop
 * 0000000180047998: mov     r8, rax
 * 000000018004799B: mov     rdx, r13
 * 000000018004799E: lea     rcx, [rbp+9E10h+var_59A0]
 * 00000001800479A5: call    sub_180043BDC
 * 00000001800479AA: nop
 * 00000001800479AB: lea     r8, aPixel; "/Pixel"
 * 00000001800479B2: mov     rdx, rax
 * 00000001800479B5: lea     rcx, [rbp+9E10h+var_59C0]
 * 00000001800479BC: call    sub_18002C218
 * 00000001800479C1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800479C6: mov     rcx, rax
 * 00000001800479C9: call    sub_1800CF3A0
 * 00000001800479CE: mov     cs:byte_180218AAC, al
 * 00000001800479D4: lea     rcx, [rbp+9E10h+var_59A0]; void *
 * 00000001800479DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800479E0: nop
 * 00000001800479E1: lea     rcx, [rbp+9E10h+var_5980]; void *
 * 00000001800479E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800479ED: nop
 * 00000001800479EE: lea     rcx, dword_180218AB0
 * 00000001800479F5: call    _Init_thread_footer
 * 00000001800479FA: mov     rax, [rdi+rbx*8]
 * 00000001800479FE: mov     eax, [r15+rax]
 * 0000000180047A02: cmp     cs:dword_180218AB8, eax
 * 0000000180047A08: jle     loc_180047AF1
 * 0000000180047A0E: lea     rcx, dword_180218AB8
 * 0000000180047A15: call    _Init_thread_header
 * 0000000180047A1A: cmp     cs:dword_180218AB8, r14d
 * 0000000180047A21: jnz     loc_180047AF1
 * 0000000180047A27: lea     rax, unk_1801508E0
 * 0000000180047A2E: mov     qword ptr [rbp+9E10h+var_9AF0], rax
 * 0000000180047A35: lea     rax, unk_180156E98
 * 0000000180047A3C: mov     qword ptr [rbp+9E10h+var_9AF0+8], rax
 * 0000000180047A43: movups  xmm0, [rbp+9E10h+var_9AF0]
 * 0000000180047A4A: movups  [rbp+9E10h+var_8250], xmm0
 * 0000000180047A51: mov     dword ptr [rbp+9E10h+var_8240], 5
 * 0000000180047A5B: mov     dword ptr [rbp+9E10h+var_8240+4], esi
 * 0000000180047A61: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047A66: movups  xmm0, [rbp+9E10h+var_8240]
 * 0000000180047A6D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180047A72: call    sub_180043E00
 * 0000000180047A77: mov     r8, rax
 * 0000000180047A7A: mov     r9d, r12d
 * 0000000180047A7D: mov     edx, 0D0h
 * 0000000180047A82: lea     rcx, [rbp+9E10h+var_5920]; Src
 * 0000000180047A89: call    sub_1800CF2C8
 * 0000000180047A8E: nop
 * 0000000180047A8F: mov     r8, rax
 * 0000000180047A92: mov     rdx, r13
 * 0000000180047A95: lea     rcx, [rbp+9E10h+var_5940]
 * 0000000180047A9C: call    sub_180043BDC
 * 0000000180047AA1: nop
 * 0000000180047AA2: lea     r8, aPixel; "/Pixel"
 * 0000000180047AA9: mov     rdx, rax
 * 0000000180047AAC: lea     rcx, [rbp+9E10h+var_5960]
 * 0000000180047AB3: call    sub_18002C218
 * 0000000180047AB8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047ABD: mov     rcx, rax
 * 0000000180047AC0: call    sub_1800CF3A0
 * 0000000180047AC5: mov     cs:byte_180218AB4, al
 * 0000000180047ACB: lea     rcx, [rbp+9E10h+var_5940]; void *
 * 0000000180047AD2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047AD7: nop
 * 0000000180047AD8: lea     rcx, [rbp+9E10h+var_5920]; void *
 * 0000000180047ADF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047AE4: nop
 * 0000000180047AE5: lea     rcx, dword_180218AB8
 * 0000000180047AEC: call    _Init_thread_footer
 * 0000000180047AF1: mov     rax, [rdi+rbx*8]
 * 0000000180047AF5: mov     eax, [r15+rax]
 * 0000000180047AF9: cmp     cs:dword_180218AC0, eax
 * 0000000180047AFF: jle     loc_180047BE8
 * 0000000180047B05: lea     rcx, dword_180218AC0
 * 0000000180047B0C: call    _Init_thread_header
 * 0000000180047B11: cmp     cs:dword_180218AC0, r14d
 * 0000000180047B18: jnz     loc_180047BE8
 * 0000000180047B1E: lea     rax, unk_1801508E0
 * 0000000180047B25: mov     qword ptr [rbp+9E10h+var_9AE0], rax
 * 0000000180047B2C: lea     rax, unk_180156E98
 * 0000000180047B33: mov     qword ptr [rbp+9E10h+var_9AE0+8], rax
 * 0000000180047B3A: movups  xmm0, [rbp+9E10h+var_9AE0]
 * 0000000180047B41: movups  [rbp+9E10h+var_8230], xmm0
 * 0000000180047B48: mov     dword ptr [rbp+9E10h+var_8220], 5
 * 0000000180047B52: mov     dword ptr [rbp+9E10h+var_8220+4], esi
 * 0000000180047B58: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047B5D: movups  xmm0, [rbp+9E10h+var_8220]
 * 0000000180047B64: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180047B69: call    sub_180043E00
 * 0000000180047B6E: mov     r8, rax
 * 0000000180047B71: mov     r9d, r12d
 * 0000000180047B74: mov     edx, 0D2h
 * 0000000180047B79: lea     rcx, [rbp+9E10h+var_58C0]; Src
 * 0000000180047B80: call    sub_1800CF2C8
 * 0000000180047B85: nop
 * 0000000180047B86: mov     r8, rax
 * 0000000180047B89: mov     rdx, r13
 * 0000000180047B8C: lea     rcx, [rbp+9E10h+var_58E0]
 * 0000000180047B93: call    sub_180043BDC
 * 0000000180047B98: nop
 * 0000000180047B99: lea     r8, aPixel; "/Pixel"
 * 0000000180047BA0: mov     rdx, rax
 * 0000000180047BA3: lea     rcx, [rbp+9E10h+var_5900]
 * 0000000180047BAA: call    sub_18002C218
 * 0000000180047BAF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047BB4: mov     rcx, rax
 * 0000000180047BB7: call    sub_1800CF3A0
 * 0000000180047BBC: mov     cs:byte_180218ABC, al
 * 0000000180047BC2: lea     rcx, [rbp+9E10h+var_58E0]; void *
 * 0000000180047BC9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047BCE: nop
 * 0000000180047BCF: lea     rcx, [rbp+9E10h+var_58C0]; void *
 * 0000000180047BD6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047BDB: nop
 * 0000000180047BDC: lea     rcx, dword_180218AC0
 * 0000000180047BE3: call    _Init_thread_footer
 * 0000000180047BE8: mov     rax, [rdi+rbx*8]
 * 0000000180047BEC: mov     eax, [r15+rax]
 * 0000000180047BF0: cmp     cs:dword_180218AC8, eax
 * 0000000180047BF6: jle     loc_180047CDF
 * 0000000180047BFC: lea     rcx, dword_180218AC8
 * 0000000180047C03: call    _Init_thread_header
 * 0000000180047C08: cmp     cs:dword_180218AC8, r14d
 * 0000000180047C0F: jnz     loc_180047CDF
 * 0000000180047C15: lea     rax, unk_18015A1A0
 * 0000000180047C1C: mov     qword ptr [rbp+9E10h+var_9AD0], rax
 * 0000000180047C23: lea     rax, unk_18016092C
 * 0000000180047C2A: mov     qword ptr [rbp+9E10h+var_9AD0+8], rax
 * 0000000180047C31: movups  xmm0, [rbp+9E10h+var_9AD0]
 * 0000000180047C38: movups  [rbp+9E10h+var_8210], xmm0
 * 0000000180047C3F: mov     dword ptr [rbp+9E10h+var_8200], 5
 * 0000000180047C49: mov     dword ptr [rbp+9E10h+var_8200+4], esi
 * 0000000180047C4F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047C54: movups  xmm0, [rbp+9E10h+var_8200]
 * 0000000180047C5B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180047C60: call    sub_180043E00
 * 0000000180047C65: mov     r8, rax
 * 0000000180047C68: mov     r9d, r12d
 * 0000000180047C6B: mov     edx, 0D8h
 * 0000000180047C70: lea     rcx, [rbp+9E10h+var_5860]; Src
 * 0000000180047C77: call    sub_1800CF2C8
 * 0000000180047C7C: nop
 * 0000000180047C7D: mov     r8, rax
 * 0000000180047C80: mov     rdx, r13
 * 0000000180047C83: lea     rcx, [rbp+9E10h+var_5880]
 * 0000000180047C8A: call    sub_180043BDC
 * 0000000180047C8F: nop
 * 0000000180047C90: lea     r8, aPixel; "/Pixel"
 * 0000000180047C97: mov     rdx, rax
 * 0000000180047C9A: lea     rcx, [rbp+9E10h+var_58A0]
 * 0000000180047CA1: call    sub_18002C218
 * 0000000180047CA6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047CAB: mov     rcx, rax
 * 0000000180047CAE: call    sub_1800CF3A0
 * 0000000180047CB3: mov     cs:byte_180218AC4, al
 * 0000000180047CB9: lea     rcx, [rbp+9E10h+var_5880]; void *
 * 0000000180047CC0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047CC5: nop
 * 0000000180047CC6: lea     rcx, [rbp+9E10h+var_5860]; void *
 * 0000000180047CCD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047CD2: nop
 * 0000000180047CD3: lea     rcx, dword_180218AC8
 * 0000000180047CDA: call    _Init_thread_footer
 * 0000000180047CDF: mov     rax, [rdi+rbx*8]
 * 0000000180047CE3: mov     eax, [r15+rax]
 * 0000000180047CE7: cmp     cs:dword_180218AD0, eax
 * 0000000180047CED: jle     loc_180047DD6
 * 0000000180047CF3: lea     rcx, dword_180218AD0
 * 0000000180047CFA: call    _Init_thread_header
 * 0000000180047CFF: cmp     cs:dword_180218AD0, r14d
 * 0000000180047D06: jnz     loc_180047DD6
 * 0000000180047D0C: lea     rax, unk_18015A1A0
 * 0000000180047D13: mov     qword ptr [rbp+9E10h+var_9AC0], rax
 * 0000000180047D1A: lea     rax, unk_18016092C
 * 0000000180047D21: mov     qword ptr [rbp+9E10h+var_9AC0+8], rax
 * 0000000180047D28: movups  xmm0, [rbp+9E10h+var_9AC0]
 * 0000000180047D2F: movups  [rbp+9E10h+var_81F0], xmm0
 * 0000000180047D36: mov     dword ptr [rbp+9E10h+var_81E0], 5
 * 0000000180047D40: mov     dword ptr [rbp+9E10h+var_81E0+4], esi
 * 0000000180047D46: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047D4B: movups  xmm0, [rbp+9E10h+var_81E0]
 * 0000000180047D52: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180047D57: call    sub_180043E00
 * 0000000180047D5C: mov     r8, rax
 * 0000000180047D5F: mov     r9d, r12d
 * 0000000180047D62: mov     edx, 0DAh
 * 0000000180047D67: lea     rcx, [rbp+9E10h+var_5800]; Src
 * 0000000180047D6E: call    sub_1800CF2C8
 * 0000000180047D73: nop
 * 0000000180047D74: mov     r8, rax
 * 0000000180047D77: mov     rdx, r13
 * 0000000180047D7A: lea     rcx, [rbp+9E10h+var_5820]
 * 0000000180047D81: call    sub_180043BDC
 * 0000000180047D86: nop
 * 0000000180047D87: lea     r8, aPixel; "/Pixel"
 * 0000000180047D8E: mov     rdx, rax
 * 0000000180047D91: lea     rcx, [rbp+9E10h+var_5840]
 * 0000000180047D98: call    sub_18002C218
 * 0000000180047D9D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047DA2: mov     rcx, rax
 * 0000000180047DA5: call    sub_1800CF3A0
 * 0000000180047DAA: mov     cs:byte_180218ACC, al
 * 0000000180047DB0: lea     rcx, [rbp+9E10h+var_5820]; void *
 * 0000000180047DB7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047DBC: nop
 * 0000000180047DBD: lea     rcx, [rbp+9E10h+var_5800]; void *
 * 0000000180047DC4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047DC9: nop
 * 0000000180047DCA: lea     rcx, dword_180218AD0
 * 0000000180047DD1: call    _Init_thread_footer
 * 0000000180047DD6: mov     rax, [rdi+rbx*8]
 * 0000000180047DDA: mov     eax, [r15+rax]
 * 0000000180047DDE: cmp     cs:dword_180218AD8, eax
 * 0000000180047DE4: jle     loc_180047ECD
 * 0000000180047DEA: lea     rcx, dword_180218AD8
 * 0000000180047DF1: call    _Init_thread_header
 * 0000000180047DF6: cmp     cs:dword_180218AD8, r14d
 * 0000000180047DFD: jnz     loc_180047ECD
 * 0000000180047E03: lea     rax, unk_18013E8E0
 * 0000000180047E0A: mov     qword ptr [rbp+9E10h+var_9AB0], rax
 * 0000000180047E11: lea     rax, unk_180144CC4
 * 0000000180047E18: mov     qword ptr [rbp+9E10h+var_9AB0+8], rax
 * 0000000180047E1F: movups  xmm0, [rbp+9E10h+var_9AB0]
 * 0000000180047E26: movups  [rbp+9E10h+var_81D0], xmm0
 * 0000000180047E2D: mov     dword ptr [rbp+9E10h+var_81C0], 5
 * 0000000180047E37: mov     dword ptr [rbp+9E10h+var_81C0+4], esi
 * 0000000180047E3D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047E42: movups  xmm0, [rbp+9E10h+var_81C0]
 * 0000000180047E49: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180047E4E: call    sub_180043E00
 * 0000000180047E53: mov     r8, rax
 * 0000000180047E56: mov     r9d, r12d
 * 0000000180047E59: mov     edx, 0E0h
 * 0000000180047E5E: lea     rcx, [rbp+9E10h+var_57A0]; Src
 * 0000000180047E65: call    sub_1800CF2C8
 * 0000000180047E6A: nop
 * 0000000180047E6B: mov     r8, rax
 * 0000000180047E6E: mov     rdx, r13
 * 0000000180047E71: lea     rcx, [rbp+9E10h+var_57C0]
 * 0000000180047E78: call    sub_180043BDC
 * 0000000180047E7D: nop
 * 0000000180047E7E: lea     r8, aPixel; "/Pixel"
 * 0000000180047E85: mov     rdx, rax
 * 0000000180047E88: lea     rcx, [rbp+9E10h+var_57E0]
 * 0000000180047E8F: call    sub_18002C218
 * 0000000180047E94: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047E99: mov     rcx, rax
 * 0000000180047E9C: call    sub_1800CF3A0
 * 0000000180047EA1: mov     cs:byte_180218AD4, al
 * 0000000180047EA7: lea     rcx, [rbp+9E10h+var_57C0]; void *
 * 0000000180047EAE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047EB3: nop
 * 0000000180047EB4: lea     rcx, [rbp+9E10h+var_57A0]; void *
 * 0000000180047EBB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047EC0: nop
 * 0000000180047EC1: lea     rcx, dword_180218AD8
 * 0000000180047EC8: call    _Init_thread_footer
 * 0000000180047ECD: mov     rax, [rdi+rbx*8]
 * 0000000180047ED1: mov     eax, [r15+rax]
 * 0000000180047ED5: cmp     cs:dword_180218AE0, eax
 * 0000000180047EDB: jle     loc_180047FC4
 * 0000000180047EE1: lea     rcx, dword_180218AE0
 * 0000000180047EE8: call    _Init_thread_header
 * 0000000180047EED: cmp     cs:dword_180218AE0, r14d
 * 0000000180047EF4: jnz     loc_180047FC4
 * 0000000180047EFA: lea     rax, unk_18013E8E0
 * 0000000180047F01: mov     qword ptr [rbp+9E10h+var_9AA0], rax
 * 0000000180047F08: lea     rax, unk_180144CC4
 * 0000000180047F0F: mov     qword ptr [rbp+9E10h+var_9AA0+8], rax
 * 0000000180047F16: movups  xmm0, [rbp+9E10h+var_9AA0]
 * 0000000180047F1D: movups  [rbp+9E10h+var_81B0], xmm0
 * 0000000180047F24: mov     dword ptr [rbp+9E10h+var_81A0], 5
 * 0000000180047F2E: mov     dword ptr [rbp+9E10h+var_81A0+4], esi
 * 0000000180047F34: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180047F39: movups  xmm0, [rbp+9E10h+var_81A0]
 * 0000000180047F40: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180047F45: call    sub_180043E00
 * 0000000180047F4A: mov     r8, rax
 * 0000000180047F4D: mov     r9d, r12d
 * 0000000180047F50: mov     edx, 0E2h
 * 0000000180047F55: lea     rcx, [rbp+9E10h+var_5740]; Src
 * 0000000180047F5C: call    sub_1800CF2C8
 * 0000000180047F61: nop
 * 0000000180047F62: mov     r8, rax
 * 0000000180047F65: mov     rdx, r13
 * 0000000180047F68: lea     rcx, [rbp+9E10h+var_5760]
 * 0000000180047F6F: call    sub_180043BDC
 * 0000000180047F74: nop
 * 0000000180047F75: lea     r8, aPixel; "/Pixel"
 * 0000000180047F7C: mov     rdx, rax
 * 0000000180047F7F: lea     rcx, [rbp+9E10h+var_5780]
 * 0000000180047F86: call    sub_18002C218
 * 0000000180047F8B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180047F90: mov     rcx, rax
 * 0000000180047F93: call    sub_1800CF3A0
 * 0000000180047F98: mov     cs:byte_180218ADC, al
 * 0000000180047F9E: lea     rcx, [rbp+9E10h+var_5760]; void *
 * 0000000180047FA5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047FAA: nop
 * 0000000180047FAB: lea     rcx, [rbp+9E10h+var_5740]; void *
 * 0000000180047FB2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180047FB7: nop
 * 0000000180047FB8: lea     rcx, dword_180218AE0
 * 0000000180047FBF: call    _Init_thread_footer
 * 0000000180047FC4: mov     rax, [rdi+rbx*8]
 * 0000000180047FC8: mov     eax, [r15+rax]
 * 0000000180047FCC: cmp     cs:dword_180218AE8, eax
 * 0000000180047FD2: jle     loc_1800480BB
 * 0000000180047FD8: lea     rcx, dword_180218AE8
 * 0000000180047FDF: call    _Init_thread_header
 * 0000000180047FE4: cmp     cs:dword_180218AE8, r14d
 * 0000000180047FEB: jnz     loc_1800480BB
 * 0000000180047FF1: lea     rax, unk_180149280
 * 0000000180047FF8: mov     qword ptr [rbp+9E10h+var_9A90], rax
 * 0000000180047FFF: lea     rax, unk_18014F80C
 * 0000000180048006: mov     qword ptr [rbp+9E10h+var_9A90+8], rax
 * 000000018004800D: movups  xmm0, [rbp+9E10h+var_9A90]
 * 0000000180048014: movups  [rbp+9E10h+var_8190], xmm0
 * 000000018004801B: mov     dword ptr [rbp+9E10h+var_8180], 5
 * 0000000180048025: mov     dword ptr [rbp+9E10h+var_8180+4], esi
 * 000000018004802B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048030: movups  xmm0, [rbp+9E10h+var_8180]
 * 0000000180048037: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004803C: call    sub_180043E00
 * 0000000180048041: mov     r8, rax
 * 0000000180048044: mov     r9d, r12d
 * 0000000180048047: mov     edx, 0E8h
 * 000000018004804C: lea     rcx, [rbp+9E10h+var_56E0]; Src
 * 0000000180048053: call    sub_1800CF2C8
 * 0000000180048058: nop
 * 0000000180048059: mov     r8, rax
 * 000000018004805C: mov     rdx, r13
 * 000000018004805F: lea     rcx, [rbp+9E10h+var_5700]
 * 0000000180048066: call    sub_180043BDC
 * 000000018004806B: nop
 * 000000018004806C: lea     r8, aPixel; "/Pixel"
 * 0000000180048073: mov     rdx, rax
 * 0000000180048076: lea     rcx, [rbp+9E10h+var_5720]
 * 000000018004807D: call    sub_18002C218
 * 0000000180048082: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048087: mov     rcx, rax
 * 000000018004808A: call    sub_1800CF3A0
 * 000000018004808F: mov     cs:byte_180218AE4, al
 * 0000000180048095: lea     rcx, [rbp+9E10h+var_5700]; void *
 * 000000018004809C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800480A1: nop
 * 00000001800480A2: lea     rcx, [rbp+9E10h+var_56E0]; void *
 * 00000001800480A9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800480AE: nop
 * 00000001800480AF: lea     rcx, dword_180218AE8
 * 00000001800480B6: call    _Init_thread_footer
 * 00000001800480BB: mov     rax, [rdi+rbx*8]
 * 00000001800480BF: mov     eax, [r15+rax]
 * 00000001800480C3: cmp     cs:dword_180218AF0, eax
 * 00000001800480C9: jle     loc_1800481B2
 * 00000001800480CF: lea     rcx, dword_180218AF0
 * 00000001800480D6: call    _Init_thread_header
 * 00000001800480DB: cmp     cs:dword_180218AF0, r14d
 * 00000001800480E2: jnz     loc_1800481B2
 * 00000001800480E8: lea     rax, unk_180149280
 * 00000001800480EF: mov     qword ptr [rbp+9E10h+var_9A80], rax
 * 00000001800480F6: lea     rax, unk_18014F80C
 * 00000001800480FD: mov     qword ptr [rbp+9E10h+var_9A80+8], rax
 * 0000000180048104: movups  xmm0, [rbp+9E10h+var_9A80]
 * 000000018004810B: movups  [rbp+9E10h+var_8170], xmm0
 * 0000000180048112: mov     dword ptr [rbp+9E10h+var_8160], 5
 * 000000018004811C: mov     dword ptr [rbp+9E10h+var_8160+4], esi
 * 0000000180048122: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048127: movups  xmm0, [rbp+9E10h+var_8160]
 * 000000018004812E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048133: call    sub_180043E00
 * 0000000180048138: mov     r8, rax
 * 000000018004813B: mov     r9d, r12d
 * 000000018004813E: mov     edx, 0EAh
 * 0000000180048143: lea     rcx, [rbp+9E10h+var_5680]; Src
 * 000000018004814A: call    sub_1800CF2C8
 * 000000018004814F: nop
 * 0000000180048150: mov     r8, rax
 * 0000000180048153: mov     rdx, r13
 * 0000000180048156: lea     rcx, [rbp+9E10h+var_56A0]
 * 000000018004815D: call    sub_180043BDC
 * 0000000180048162: nop
 * 0000000180048163: lea     r8, aPixel; "/Pixel"
 * 000000018004816A: mov     rdx, rax
 * 000000018004816D: lea     rcx, [rbp+9E10h+var_56C0]
 * 0000000180048174: call    sub_18002C218
 * 0000000180048179: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004817E: mov     rcx, rax
 * 0000000180048181: call    sub_1800CF3A0
 * 0000000180048186: mov     cs:byte_180218AEC, al
 * 000000018004818C: lea     rcx, [rbp+9E10h+var_56A0]; void *
 * 0000000180048193: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048198: nop
 * 0000000180048199: lea     rcx, [rbp+9E10h+var_5680]; void *
 * 00000001800481A0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800481A5: nop
 * 00000001800481A6: lea     rcx, dword_180218AF0
 * 00000001800481AD: call    _Init_thread_footer
 * 00000001800481B2: mov     rax, [rdi+rbx*8]
 * 00000001800481B6: mov     eax, [r15+rax]
 * 00000001800481BA: cmp     cs:dword_180218AF8, eax
 * 00000001800481C0: jle     loc_1800482A9
 * 00000001800481C6: lea     rcx, dword_180218AF8
 * 00000001800481CD: call    _Init_thread_header
 * 00000001800481D2: cmp     cs:dword_180218AF8, r14d
 * 00000001800481D9: jnz     loc_1800482A9
 * 00000001800481DF: lea     rax, unk_1801508E0
 * 00000001800481E6: mov     qword ptr [rbp+9E10h+var_9A70], rax
 * 00000001800481ED: lea     rax, unk_180156E98
 * 00000001800481F4: mov     qword ptr [rbp+9E10h+var_9A70+8], rax
 * 00000001800481FB: movups  xmm0, [rbp+9E10h+var_9A70]
 * 0000000180048202: movups  [rbp+9E10h+var_8150], xmm0
 * 0000000180048209: mov     dword ptr [rbp+9E10h+var_8140], 5
 * 0000000180048213: mov     dword ptr [rbp+9E10h+var_8140+4], esi
 * 0000000180048219: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004821E: movups  xmm0, [rbp+9E10h+var_8140]
 * 0000000180048225: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004822A: call    sub_180043E00
 * 000000018004822F: mov     r8, rax
 * 0000000180048232: mov     r9d, r12d
 * 0000000180048235: mov     edx, 0F0h
 * 000000018004823A: lea     rcx, [rbp+9E10h+var_5620]; Src
 * 0000000180048241: call    sub_1800CF2C8
 * 0000000180048246: nop
 * 0000000180048247: mov     r8, rax
 * 000000018004824A: mov     rdx, r13
 * 000000018004824D: lea     rcx, [rbp+9E10h+var_5640]
 * 0000000180048254: call    sub_180043BDC
 * 0000000180048259: nop
 * 000000018004825A: lea     r8, aPixel; "/Pixel"
 * 0000000180048261: mov     rdx, rax
 * 0000000180048264: lea     rcx, [rbp+9E10h+var_5660]
 * 000000018004826B: call    sub_18002C218
 * 0000000180048270: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048275: mov     rcx, rax
 * 0000000180048278: call    sub_1800CF3A0
 * 000000018004827D: mov     cs:byte_180218AF4, al
 * 0000000180048283: lea     rcx, [rbp+9E10h+var_5640]; void *
 * 000000018004828A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004828F: nop
 * 0000000180048290: lea     rcx, [rbp+9E10h+var_5620]; void *
 * 0000000180048297: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004829C: nop
 * 000000018004829D: lea     rcx, dword_180218AF8
 * 00000001800482A4: call    _Init_thread_footer
 * 00000001800482A9: mov     rax, [rdi+rbx*8]
 * 00000001800482AD: mov     eax, [r15+rax]
 * 00000001800482B1: cmp     cs:dword_180218B00, eax
 * 00000001800482B7: jle     loc_1800483A0
 * 00000001800482BD: lea     rcx, dword_180218B00
 * 00000001800482C4: call    _Init_thread_header
 * 00000001800482C9: cmp     cs:dword_180218B00, r14d
 * 00000001800482D0: jnz     loc_1800483A0
 * 00000001800482D6: lea     rax, unk_1801508E0
 * 00000001800482DD: mov     qword ptr [rbp+9E10h+var_9A60], rax
 * 00000001800482E4: lea     rax, unk_180156E98
 * 00000001800482EB: mov     qword ptr [rbp+9E10h+var_9A60+8], rax
 * 00000001800482F2: movups  xmm0, [rbp+9E10h+var_9A60]
 * 00000001800482F9: movups  [rbp+9E10h+var_8130], xmm0
 * 0000000180048300: mov     dword ptr [rbp+9E10h+var_8120], 5
 * 000000018004830A: mov     dword ptr [rbp+9E10h+var_8120+4], esi
 * 0000000180048310: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048315: movups  xmm0, [rbp+9E10h+var_8120]
 * 000000018004831C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048321: call    sub_180043E00
 * 0000000180048326: mov     r8, rax
 * 0000000180048329: mov     r9d, r12d
 * 000000018004832C: mov     edx, 0F2h
 * 0000000180048331: lea     rcx, [rbp+9E10h+var_55C0]; Src
 * 0000000180048338: call    sub_1800CF2C8
 * 000000018004833D: nop
 * 000000018004833E: mov     r8, rax
 * 0000000180048341: mov     rdx, r13
 * 0000000180048344: lea     rcx, [rbp+9E10h+var_55E0]
 * 000000018004834B: call    sub_180043BDC
 * 0000000180048350: nop
 * 0000000180048351: lea     r8, aPixel; "/Pixel"
 * 0000000180048358: mov     rdx, rax
 * 000000018004835B: lea     rcx, [rbp+9E10h+var_5600]
 * 0000000180048362: call    sub_18002C218
 * 0000000180048367: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004836C: mov     rcx, rax
 * 000000018004836F: call    sub_1800CF3A0
 * 0000000180048374: mov     cs:byte_180218AFC, al
 * 000000018004837A: lea     rcx, [rbp+9E10h+var_55E0]; void *
 * 0000000180048381: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048386: nop
 * 0000000180048387: lea     rcx, [rbp+9E10h+var_55C0]; void *
 * 000000018004838E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048393: nop
 * 0000000180048394: lea     rcx, dword_180218B00
 * 000000018004839B: call    _Init_thread_footer
 * 00000001800483A0: mov     rax, [rdi+rbx*8]
 * 00000001800483A4: mov     eax, [r15+rax]
 * 00000001800483A8: cmp     cs:dword_180218B08, eax
 * 00000001800483AE: jle     loc_180048497
 * 00000001800483B4: lea     rcx, dword_180218B08
 * 00000001800483BB: call    _Init_thread_header
 * 00000001800483C0: cmp     cs:dword_180218B08, r14d
 * 00000001800483C7: jnz     loc_180048497
 * 00000001800483CD: lea     rax, unk_18015A1A0
 * 00000001800483D4: mov     qword ptr [rbp+9E10h+var_9A50], rax
 * 00000001800483DB: lea     rax, unk_18016092C
 * 00000001800483E2: mov     qword ptr [rbp+9E10h+var_9A50+8], rax
 * 00000001800483E9: movups  xmm0, [rbp+9E10h+var_9A50]
 * 00000001800483F0: movups  [rbp+9E10h+var_8110], xmm0
 * 00000001800483F7: mov     dword ptr [rbp+9E10h+var_8100], 5
 * 0000000180048401: mov     dword ptr [rbp+9E10h+var_8100+4], esi
 * 0000000180048407: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004840C: movups  xmm0, [rbp+9E10h+var_8100]
 * 0000000180048413: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048418: call    sub_180043E00
 * 000000018004841D: mov     r8, rax
 * 0000000180048420: mov     r9d, r12d
 * 0000000180048423: mov     edx, 0F8h
 * 0000000180048428: lea     rcx, [rbp+9E10h+var_5560]; Src
 * 000000018004842F: call    sub_1800CF2C8
 * 0000000180048434: nop
 * 0000000180048435: mov     r8, rax
 * 0000000180048438: mov     rdx, r13
 * 000000018004843B: lea     rcx, [rbp+9E10h+var_5580]
 * 0000000180048442: call    sub_180043BDC
 * 0000000180048447: nop
 * 0000000180048448: lea     r8, aPixel; "/Pixel"
 * 000000018004844F: mov     rdx, rax
 * 0000000180048452: lea     rcx, [rbp+9E10h+var_55A0]
 * 0000000180048459: call    sub_18002C218
 * 000000018004845E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048463: mov     rcx, rax
 * 0000000180048466: call    sub_1800CF3A0
 * 000000018004846B: mov     cs:byte_180218B04, al
 * 0000000180048471: lea     rcx, [rbp+9E10h+var_5580]; void *
 * 0000000180048478: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004847D: nop
 * 000000018004847E: lea     rcx, [rbp+9E10h+var_5560]; void *
 * 0000000180048485: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004848A: nop
 * 000000018004848B: lea     rcx, dword_180218B08
 * 0000000180048492: call    _Init_thread_footer
 * 0000000180048497: mov     rax, [rdi+rbx*8]
 * 000000018004849B: mov     eax, [r15+rax]
 * 000000018004849F: cmp     cs:dword_180218B10, eax
 * 00000001800484A5: jle     loc_18004858E
 * 00000001800484AB: lea     rcx, dword_180218B10
 * 00000001800484B2: call    _Init_thread_header
 * 00000001800484B7: cmp     cs:dword_180218B10, r14d
 * 00000001800484BE: jnz     loc_18004858E
 * 00000001800484C4: lea     rax, unk_18015A1A0
 * 00000001800484CB: mov     qword ptr [rbp+9E10h+var_9A40], rax
 * 00000001800484D2: lea     rax, unk_18016092C
 * 00000001800484D9: mov     qword ptr [rbp+9E10h+var_9A40+8], rax
 * 00000001800484E0: movups  xmm0, [rbp+9E10h+var_9A40]
 * 00000001800484E7: movups  [rbp+9E10h+var_80F0], xmm0
 * 00000001800484EE: mov     dword ptr [rbp+9E10h+var_80E0], 5
 * 00000001800484F8: mov     dword ptr [rbp+9E10h+var_80E0+4], esi
 * 00000001800484FE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048503: movups  xmm0, [rbp+9E10h+var_80E0]
 * 000000018004850A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004850F: call    sub_180043E00
 * 0000000180048514: mov     r8, rax
 * 0000000180048517: mov     r9d, r12d
 * 000000018004851A: mov     edx, 0FAh
 * 000000018004851F: lea     rcx, [rbp+9E10h+var_5500]; Src
 * 0000000180048526: call    sub_1800CF2C8
 * 000000018004852B: nop
 * 000000018004852C: mov     r8, rax
 * 000000018004852F: mov     rdx, r13
 * 0000000180048532: lea     rcx, [rbp+9E10h+var_5520]
 * 0000000180048539: call    sub_180043BDC
 * 000000018004853E: nop
 * 000000018004853F: lea     r8, aPixel; "/Pixel"
 * 0000000180048546: mov     rdx, rax
 * 0000000180048549: lea     rcx, [rbp+9E10h+var_5540]
 * 0000000180048550: call    sub_18002C218
 * 0000000180048555: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004855A: mov     rcx, rax
 * 000000018004855D: call    sub_1800CF3A0
 * 0000000180048562: mov     cs:byte_180218B0C, al
 * 0000000180048568: lea     rcx, [rbp+9E10h+var_5520]; void *
 * 000000018004856F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048574: nop
 * 0000000180048575: lea     rcx, [rbp+9E10h+var_5500]; void *
 * 000000018004857C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048581: nop
 * 0000000180048582: lea     rcx, dword_180218B10
 * 0000000180048589: call    _Init_thread_footer
 * 000000018004858E: mov     rax, [rdi+rbx*8]
 * 0000000180048592: mov     eax, [r15+rax]
 * 0000000180048596: cmp     cs:dword_180218B18, eax
 * 000000018004859C: jle     loc_180048685
 * 00000001800485A2: lea     rcx, dword_180218B18
 * 00000001800485A9: call    _Init_thread_header
 * 00000001800485AE: cmp     cs:dword_180218B18, r14d
 * 00000001800485B5: jnz     loc_180048685
 * 00000001800485BB: lea     rax, unk_180160930
 * 00000001800485C2: mov     qword ptr [rbp+9E10h+var_9A30], rax
 * 00000001800485C9: lea     rax, unk_18016705C
 * 00000001800485D0: mov     qword ptr [rbp+9E10h+var_9A30+8], rax
 * 00000001800485D7: movups  xmm0, [rbp+9E10h+var_9A30]
 * 00000001800485DE: movups  [rbp+9E10h+var_80D0], xmm0
 * 00000001800485E5: mov     dword ptr [rbp+9E10h+var_80C0], 5
 * 00000001800485EF: mov     dword ptr [rbp+9E10h+var_80C0+4], esi
 * 00000001800485F5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800485FA: movups  xmm0, [rbp+9E10h+var_80C0]
 * 0000000180048601: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048606: call    sub_180043E00
 * 000000018004860B: mov     r8, rax
 * 000000018004860E: mov     r9d, r12d
 * 0000000180048611: mov     edx, 100h
 * 0000000180048616: lea     rcx, [rbp+9E10h+var_54A0]; Src
 * 000000018004861D: call    sub_1800CF2C8
 * 0000000180048622: nop
 * 0000000180048623: mov     r8, rax
 * 0000000180048626: mov     rdx, r13
 * 0000000180048629: lea     rcx, [rbp+9E10h+var_54C0]
 * 0000000180048630: call    sub_180043BDC
 * 0000000180048635: nop
 * 0000000180048636: lea     r8, aPixel; "/Pixel"
 * 000000018004863D: mov     rdx, rax
 * 0000000180048640: lea     rcx, [rbp+9E10h+var_54E0]
 * 0000000180048647: call    sub_18002C218
 * 000000018004864C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048651: mov     rcx, rax
 * 0000000180048654: call    sub_1800CF3A0
 * 0000000180048659: mov     cs:byte_180218B14, al
 * 000000018004865F: lea     rcx, [rbp+9E10h+var_54C0]; void *
 * 0000000180048666: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004866B: nop
 * 000000018004866C: lea     rcx, [rbp+9E10h+var_54A0]; void *
 * 0000000180048673: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048678: nop
 * 0000000180048679: lea     rcx, dword_180218B18
 * 0000000180048680: call    _Init_thread_footer
 * 0000000180048685: mov     rax, [rdi+rbx*8]
 * 0000000180048689: mov     eax, [r15+rax]
 * 000000018004868D: cmp     cs:dword_180218B20, eax
 * 0000000180048693: jle     loc_18004877C
 * 0000000180048699: lea     rcx, dword_180218B20
 * 00000001800486A0: call    _Init_thread_header
 * 00000001800486A5: cmp     cs:dword_180218B20, r14d
 * 00000001800486AC: jnz     loc_18004877C
 * 00000001800486B2: lea     rax, unk_180160930
 * 00000001800486B9: mov     qword ptr [rbp+9E10h+var_9A20], rax
 * 00000001800486C0: lea     rax, unk_18016705C
 * 00000001800486C7: mov     qword ptr [rbp+9E10h+var_9A20+8], rax
 * 00000001800486CE: movups  xmm0, [rbp+9E10h+var_9A20]
 * 00000001800486D5: movups  [rbp+9E10h+var_80B0], xmm0
 * 00000001800486DC: mov     dword ptr [rbp+9E10h+var_80A0], 5
 * 00000001800486E6: mov     dword ptr [rbp+9E10h+var_80A0+4], esi
 * 00000001800486EC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800486F1: movups  xmm0, [rbp+9E10h+var_80A0]
 * 00000001800486F8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800486FD: call    sub_180043E00
 * 0000000180048702: mov     r8, rax
 * 0000000180048705: mov     r9d, r12d
 * 0000000180048708: mov     edx, 102h
 * 000000018004870D: lea     rcx, [rbp+9E10h+var_5440]; Src
 * 0000000180048714: call    sub_1800CF2C8
 * 0000000180048719: nop
 * 000000018004871A: mov     r8, rax
 * 000000018004871D: mov     rdx, r13
 * 0000000180048720: lea     rcx, [rbp+9E10h+var_5460]
 * 0000000180048727: call    sub_180043BDC
 * 000000018004872C: nop
 * 000000018004872D: lea     r8, aPixel; "/Pixel"
 * 0000000180048734: mov     rdx, rax
 * 0000000180048737: lea     rcx, [rbp+9E10h+var_5480]
 * 000000018004873E: call    sub_18002C218
 * 0000000180048743: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048748: mov     rcx, rax
 * 000000018004874B: call    sub_1800CF3A0
 * 0000000180048750: mov     cs:byte_180218B1C, al
 * 0000000180048756: lea     rcx, [rbp+9E10h+var_5460]; void *
 * 000000018004875D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048762: nop
 * 0000000180048763: lea     rcx, [rbp+9E10h+var_5440]; void *
 * 000000018004876A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004876F: nop
 * 0000000180048770: lea     rcx, dword_180218B20
 * 0000000180048777: call    _Init_thread_footer
 * 000000018004877C: mov     rax, [rdi+rbx*8]
 * 0000000180048780: mov     eax, [r15+rax]
 * 0000000180048784: cmp     cs:dword_180218B28, eax
 * 000000018004878A: jle     loc_180048873
 * 0000000180048790: lea     rcx, dword_180218B28
 * 0000000180048797: call    _Init_thread_header
 * 000000018004879C: cmp     cs:dword_180218B28, r14d
 * 00000001800487A3: jnz     loc_180048873
 * 00000001800487A9: lea     rax, unk_180167060
 * 00000001800487B0: mov     qword ptr [rbp+9E10h+var_9A10], rax
 * 00000001800487B7: lea     rax, unk_18016A540
 * 00000001800487BE: mov     qword ptr [rbp+9E10h+var_9A10+8], rax
 * 00000001800487C5: movups  xmm0, [rbp+9E10h+var_9A10]
 * 00000001800487CC: movups  [rbp+9E10h+var_8090], xmm0
 * 00000001800487D3: mov     dword ptr [rbp+9E10h+var_8080], 5
 * 00000001800487DD: mov     dword ptr [rbp+9E10h+var_8080+4], esi
 * 00000001800487E3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800487E8: movups  xmm0, [rbp+9E10h+var_8080]
 * 00000001800487EF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800487F4: call    sub_180043E00
 * 00000001800487F9: mov     r8, rax
 * 00000001800487FC: mov     r9d, r12d
 * 00000001800487FF: mov     edx, 104h
 * 0000000180048804: lea     rcx, [rbp+9E10h+var_53E0]; Src
 * 000000018004880B: call    sub_1800CF2C8
 * 0000000180048810: nop
 * 0000000180048811: mov     r8, rax
 * 0000000180048814: mov     rdx, r13
 * 0000000180048817: lea     rcx, [rbp+9E10h+var_5400]
 * 000000018004881E: call    sub_180043BDC
 * 0000000180048823: nop
 * 0000000180048824: lea     r8, aPixel; "/Pixel"
 * 000000018004882B: mov     rdx, rax
 * 000000018004882E: lea     rcx, [rbp+9E10h+var_5420]
 * 0000000180048835: call    sub_18002C218
 * 000000018004883A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004883F: mov     rcx, rax
 * 0000000180048842: call    sub_1800CF3A0
 * 0000000180048847: mov     cs:byte_180218B24, al
 * 000000018004884D: lea     rcx, [rbp+9E10h+var_5400]; void *
 * 0000000180048854: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048859: nop
 * 000000018004885A: lea     rcx, [rbp+9E10h+var_53E0]; void *
 * 0000000180048861: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048866: nop
 * 0000000180048867: lea     rcx, dword_180218B28
 * 000000018004886E: call    _Init_thread_footer
 * 0000000180048873: mov     rax, [rdi+rbx*8]
 * 0000000180048877: mov     eax, [r15+rax]
 * 000000018004887B: cmp     cs:dword_180218B30, eax
 * 0000000180048881: jle     loc_18004896A
 * 0000000180048887: lea     rcx, dword_180218B30
 * 000000018004888E: call    _Init_thread_header
 * 0000000180048893: cmp     cs:dword_180218B30, r14d
 * 000000018004889A: jnz     loc_18004896A
 * 00000001800488A0: lea     rax, unk_180167060
 * 00000001800488A7: mov     qword ptr [rbp+9E10h+var_9A00], rax
 * 00000001800488AE: lea     rax, unk_18016A540
 * 00000001800488B5: mov     qword ptr [rbp+9E10h+var_9A00+8], rax
 * 00000001800488BC: movups  xmm0, [rbp+9E10h+var_9A00]
 * 00000001800488C3: movups  [rbp+9E10h+var_8070], xmm0
 * 00000001800488CA: mov     dword ptr [rbp+9E10h+var_8060], 5
 * 00000001800488D4: mov     dword ptr [rbp+9E10h+var_8060+4], esi
 * 00000001800488DA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800488DF: movups  xmm0, [rbp+9E10h+var_8060]
 * 00000001800488E6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800488EB: call    sub_180043E00
 * 00000001800488F0: mov     r8, rax
 * 00000001800488F3: mov     r9d, r12d
 * 00000001800488F6: mov     edx, 106h
 * 00000001800488FB: lea     rcx, [rbp+9E10h+var_5380]; Src
 * 0000000180048902: call    sub_1800CF2C8
 * 0000000180048907: nop
 * 0000000180048908: mov     r8, rax
 * 000000018004890B: mov     rdx, r13
 * 000000018004890E: lea     rcx, [rbp+9E10h+var_53A0]
 * 0000000180048915: call    sub_180043BDC
 * 000000018004891A: nop
 * 000000018004891B: lea     r8, aPixel; "/Pixel"
 * 0000000180048922: mov     rdx, rax
 * 0000000180048925: lea     rcx, [rbp+9E10h+var_53C0]
 * 000000018004892C: call    sub_18002C218
 * 0000000180048931: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048936: mov     rcx, rax
 * 0000000180048939: call    sub_1800CF3A0
 * 000000018004893E: mov     cs:byte_180218B2C, al
 * 0000000180048944: lea     rcx, [rbp+9E10h+var_53A0]; void *
 * 000000018004894B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048950: nop
 * 0000000180048951: lea     rcx, [rbp+9E10h+var_5380]; void *
 * 0000000180048958: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004895D: nop
 * 000000018004895E: lea     rcx, dword_180218B30
 * 0000000180048965: call    _Init_thread_footer
 * 000000018004896A: mov     rax, [rdi+rbx*8]
 * 000000018004896E: mov     eax, [r15+rax]
 * 0000000180048972: cmp     cs:dword_180218B38, eax
 * 0000000180048978: jle     loc_180048A61
 * 000000018004897E: lea     rcx, dword_180218B38
 * 0000000180048985: call    _Init_thread_header
 * 000000018004898A: cmp     cs:dword_180218B38, r14d
 * 0000000180048991: jnz     loc_180048A61
 * 0000000180048997: lea     rax, unk_18016A540
 * 000000018004899E: mov     qword ptr [rbp+9E10h+var_99F0], rax
 * 00000001800489A5: lea     rax, unk_180170DFC
 * 00000001800489AC: mov     qword ptr [rbp+9E10h+var_99F0+8], rax
 * 00000001800489B3: movups  xmm0, [rbp+9E10h+var_99F0]
 * 00000001800489BA: movups  [rbp+9E10h+var_8050], xmm0
 * 00000001800489C1: mov     dword ptr [rbp+9E10h+var_8040], 5
 * 00000001800489CB: mov     dword ptr [rbp+9E10h+var_8040+4], esi
 * 00000001800489D1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800489D6: movups  xmm0, [rbp+9E10h+var_8040]
 * 00000001800489DD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800489E2: call    sub_180043E00
 * 00000001800489E7: mov     r8, rax
 * 00000001800489EA: mov     r9d, r12d
 * 00000001800489ED: mov     edx, 108h
 * 00000001800489F2: lea     rcx, [rbp+9E10h+var_5320]; Src
 * 00000001800489F9: call    sub_1800CF2C8
 * 00000001800489FE: nop
 * 00000001800489FF: mov     r8, rax
 * 0000000180048A02: mov     rdx, r13
 * 0000000180048A05: lea     rcx, [rbp+9E10h+var_5340]
 * 0000000180048A0C: call    sub_180043BDC
 * 0000000180048A11: nop
 * 0000000180048A12: lea     r8, aPixel; "/Pixel"
 * 0000000180048A19: mov     rdx, rax
 * 0000000180048A1C: lea     rcx, [rbp+9E10h+var_5360]
 * 0000000180048A23: call    sub_18002C218
 * 0000000180048A28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048A2D: mov     rcx, rax
 * 0000000180048A30: call    sub_1800CF3A0
 * 0000000180048A35: mov     cs:byte_180218B34, al
 * 0000000180048A3B: lea     rcx, [rbp+9E10h+var_5340]; void *
 * 0000000180048A42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048A47: nop
 * 0000000180048A48: lea     rcx, [rbp+9E10h+var_5320]; void *
 * 0000000180048A4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048A54: nop
 * 0000000180048A55: lea     rcx, dword_180218B38
 * 0000000180048A5C: call    _Init_thread_footer
 * 0000000180048A61: mov     rax, [rdi+rbx*8]
 * 0000000180048A65: mov     eax, [r15+rax]
 * 0000000180048A69: cmp     cs:dword_180218B40, eax
 * 0000000180048A6F: jle     loc_180048B58
 * 0000000180048A75: lea     rcx, dword_180218B40
 * 0000000180048A7C: call    _Init_thread_header
 * 0000000180048A81: cmp     cs:dword_180218B40, r14d
 * 0000000180048A88: jnz     loc_180048B58
 * 0000000180048A8E: lea     rax, unk_18016A540
 * 0000000180048A95: mov     qword ptr [rbp+9E10h+var_99E0], rax
 * 0000000180048A9C: lea     rax, unk_180170DFC
 * 0000000180048AA3: mov     qword ptr [rbp+9E10h+var_99E0+8], rax
 * 0000000180048AAA: movups  xmm0, [rbp+9E10h+var_99E0]
 * 0000000180048AB1: movups  [rbp+9E10h+var_8030], xmm0
 * 0000000180048AB8: mov     dword ptr [rbp+9E10h+var_8020], 5
 * 0000000180048AC2: mov     dword ptr [rbp+9E10h+var_8020+4], esi
 * 0000000180048AC8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048ACD: movups  xmm0, [rbp+9E10h+var_8020]
 * 0000000180048AD4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048AD9: call    sub_180043E00
 * 0000000180048ADE: mov     r8, rax
 * 0000000180048AE1: mov     r9d, r12d
 * 0000000180048AE4: mov     edx, 10Ah
 * 0000000180048AE9: lea     rcx, [rbp+9E10h+var_52C0]; Src
 * 0000000180048AF0: call    sub_1800CF2C8
 * 0000000180048AF5: nop
 * 0000000180048AF6: mov     r8, rax
 * 0000000180048AF9: mov     rdx, r13
 * 0000000180048AFC: lea     rcx, [rbp+9E10h+var_52E0]
 * 0000000180048B03: call    sub_180043BDC
 * 0000000180048B08: nop
 * 0000000180048B09: lea     r8, aPixel; "/Pixel"
 * 0000000180048B10: mov     rdx, rax
 * 0000000180048B13: lea     rcx, [rbp+9E10h+var_5300]
 * 0000000180048B1A: call    sub_18002C218
 * 0000000180048B1F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048B24: mov     rcx, rax
 * 0000000180048B27: call    sub_1800CF3A0
 * 0000000180048B2C: mov     cs:byte_180218B3C, al
 * 0000000180048B32: lea     rcx, [rbp+9E10h+var_52E0]; void *
 * 0000000180048B39: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048B3E: nop
 * 0000000180048B3F: lea     rcx, [rbp+9E10h+var_52C0]; void *
 * 0000000180048B46: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048B4B: nop
 * 0000000180048B4C: lea     rcx, dword_180218B40
 * 0000000180048B53: call    _Init_thread_footer
 * 0000000180048B58: mov     rax, [rdi+rbx*8]
 * 0000000180048B5C: mov     eax, [r15+rax]
 * 0000000180048B60: cmp     cs:dword_180218B48, eax
 * 0000000180048B66: jle     loc_180048C4F
 * 0000000180048B6C: lea     rcx, dword_180218B48
 * 0000000180048B73: call    _Init_thread_header
 * 0000000180048B78: cmp     cs:dword_180218B48, r14d
 * 0000000180048B7F: jnz     loc_180048C4F
 * 0000000180048B85: lea     rax, unk_180170E00
 * 0000000180048B8C: mov     qword ptr [rbp+9E10h+var_99D0], rax
 * 0000000180048B93: lea     rax, unk_180177708
 * 0000000180048B9A: mov     qword ptr [rbp+9E10h+var_99D0+8], rax
 * 0000000180048BA1: movups  xmm0, [rbp+9E10h+var_99D0]
 * 0000000180048BA8: movups  [rbp+9E10h+var_8010], xmm0
 * 0000000180048BAF: mov     dword ptr [rbp+9E10h+var_8000], 5
 * 0000000180048BB9: mov     dword ptr [rbp+9E10h+var_8000+4], esi
 * 0000000180048BBF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048BC4: movups  xmm0, [rbp+9E10h+var_8000]
 * 0000000180048BCB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048BD0: call    sub_180043E00
 * 0000000180048BD5: mov     r8, rax
 * 0000000180048BD8: mov     r9d, r12d
 * 0000000180048BDB: mov     edx, 110h
 * 0000000180048BE0: lea     rcx, [rbp+9E10h+var_5260]; Src
 * 0000000180048BE7: call    sub_1800CF2C8
 * 0000000180048BEC: nop
 * 0000000180048BED: mov     r8, rax
 * 0000000180048BF0: mov     rdx, r13
 * 0000000180048BF3: lea     rcx, [rbp+9E10h+var_5280]
 * 0000000180048BFA: call    sub_180043BDC
 * 0000000180048BFF: nop
 * 0000000180048C00: lea     r8, aPixel; "/Pixel"
 * 0000000180048C07: mov     rdx, rax
 * 0000000180048C0A: lea     rcx, [rbp+9E10h+var_52A0]
 * 0000000180048C11: call    sub_18002C218
 * 0000000180048C16: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048C1B: mov     rcx, rax
 * 0000000180048C1E: call    sub_1800CF3A0
 * 0000000180048C23: mov     cs:byte_180218B44, al
 * 0000000180048C29: lea     rcx, [rbp+9E10h+var_5280]; void *
 * 0000000180048C30: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048C35: nop
 * 0000000180048C36: lea     rcx, [rbp+9E10h+var_5260]; void *
 * 0000000180048C3D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048C42: nop
 * 0000000180048C43: lea     rcx, dword_180218B48
 * 0000000180048C4A: call    _Init_thread_footer
 * 0000000180048C4F: mov     rax, [rdi+rbx*8]
 * 0000000180048C53: mov     eax, [r15+rax]
 * 0000000180048C57: cmp     cs:dword_180218B50, eax
 * 0000000180048C5D: jle     loc_180048D46
 * 0000000180048C63: lea     rcx, dword_180218B50
 * 0000000180048C6A: call    _Init_thread_header
 * 0000000180048C6F: cmp     cs:dword_180218B50, r14d
 * 0000000180048C76: jnz     loc_180048D46
 * 0000000180048C7C: lea     rax, unk_180170E00
 * 0000000180048C83: mov     qword ptr [rbp+9E10h+var_99C0], rax
 * 0000000180048C8A: lea     rax, unk_180177708
 * 0000000180048C91: mov     qword ptr [rbp+9E10h+var_99C0+8], rax
 * 0000000180048C98: movups  xmm0, [rbp+9E10h+var_99C0]
 * 0000000180048C9F: movups  [rbp+9E10h+var_7FF0], xmm0
 * 0000000180048CA6: mov     dword ptr [rbp+9E10h+var_7FE0], 5
 * 0000000180048CB0: mov     dword ptr [rbp+9E10h+var_7FE0+4], esi
 * 0000000180048CB6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048CBB: movups  xmm0, [rbp+9E10h+var_7FE0]
 * 0000000180048CC2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048CC7: call    sub_180043E00
 * 0000000180048CCC: mov     r8, rax
 * 0000000180048CCF: mov     r9d, r12d
 * 0000000180048CD2: mov     edx, 112h
 * 0000000180048CD7: lea     rcx, [rbp+9E10h+var_5200]; Src
 * 0000000180048CDE: call    sub_1800CF2C8
 * 0000000180048CE3: nop
 * 0000000180048CE4: mov     r8, rax
 * 0000000180048CE7: mov     rdx, r13
 * 0000000180048CEA: lea     rcx, [rbp+9E10h+var_5220]
 * 0000000180048CF1: call    sub_180043BDC
 * 0000000180048CF6: nop
 * 0000000180048CF7: lea     r8, aPixel; "/Pixel"
 * 0000000180048CFE: mov     rdx, rax
 * 0000000180048D01: lea     rcx, [rbp+9E10h+var_5240]
 * 0000000180048D08: call    sub_18002C218
 * 0000000180048D0D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048D12: mov     rcx, rax
 * 0000000180048D15: call    sub_1800CF3A0
 * 0000000180048D1A: mov     cs:byte_180218B4C, al
 * 0000000180048D20: lea     rcx, [rbp+9E10h+var_5220]; void *
 * 0000000180048D27: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048D2C: nop
 * 0000000180048D2D: lea     rcx, [rbp+9E10h+var_5200]; void *
 * 0000000180048D34: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048D39: nop
 * 0000000180048D3A: lea     rcx, dword_180218B50
 * 0000000180048D41: call    _Init_thread_footer
 * 0000000180048D46: mov     rax, [rdi+rbx*8]
 * 0000000180048D4A: mov     eax, [r15+rax]
 * 0000000180048D4E: cmp     cs:dword_180218B58, eax
 * 0000000180048D54: jle     loc_180048E3D
 * 0000000180048D5A: lea     rcx, dword_180218B58
 * 0000000180048D61: call    _Init_thread_header
 * 0000000180048D66: cmp     cs:dword_180218B58, r14d
 * 0000000180048D6D: jnz     loc_180048E3D
 * 0000000180048D73: lea     rax, unk_180177710
 * 0000000180048D7A: mov     qword ptr [rbp+9E10h+var_99B0], rax
 * 0000000180048D81: lea     rax, unk_18017AD2C
 * 0000000180048D88: mov     qword ptr [rbp+9E10h+var_99B0+8], rax
 * 0000000180048D8F: movups  xmm0, [rbp+9E10h+var_99B0]
 * 0000000180048D96: movups  [rbp+9E10h+var_7FD0], xmm0
 * 0000000180048D9D: mov     dword ptr [rbp+9E10h+var_7FC0], 5
 * 0000000180048DA7: mov     dword ptr [rbp+9E10h+var_7FC0+4], esi
 * 0000000180048DAD: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048DB2: movups  xmm0, [rbp+9E10h+var_7FC0]
 * 0000000180048DB9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048DBE: call    sub_180043E00
 * 0000000180048DC3: mov     r8, rax
 * 0000000180048DC6: mov     r9d, r12d
 * 0000000180048DC9: mov     edx, 114h
 * 0000000180048DCE: lea     rcx, [rbp+9E10h+var_51A0]; Src
 * 0000000180048DD5: call    sub_1800CF2C8
 * 0000000180048DDA: nop
 * 0000000180048DDB: mov     r8, rax
 * 0000000180048DDE: mov     rdx, r13
 * 0000000180048DE1: lea     rcx, [rbp+9E10h+var_51C0]
 * 0000000180048DE8: call    sub_180043BDC
 * 0000000180048DED: nop
 * 0000000180048DEE: lea     r8, aPixel; "/Pixel"
 * 0000000180048DF5: mov     rdx, rax
 * 0000000180048DF8: lea     rcx, [rbp+9E10h+var_51E0]
 * 0000000180048DFF: call    sub_18002C218
 * 0000000180048E04: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048E09: mov     rcx, rax
 * 0000000180048E0C: call    sub_1800CF3A0
 * 0000000180048E11: mov     cs:byte_180218B54, al
 * 0000000180048E17: lea     rcx, [rbp+9E10h+var_51C0]; void *
 * 0000000180048E1E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048E23: nop
 * 0000000180048E24: lea     rcx, [rbp+9E10h+var_51A0]; void *
 * 0000000180048E2B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048E30: nop
 * 0000000180048E31: lea     rcx, dword_180218B58
 * 0000000180048E38: call    _Init_thread_footer
 * 0000000180048E3D: mov     rax, [rdi+rbx*8]
 * 0000000180048E41: mov     eax, [r15+rax]
 * 0000000180048E45: cmp     cs:dword_180218B60, eax
 * 0000000180048E4B: jle     loc_180048F34
 * 0000000180048E51: lea     rcx, dword_180218B60
 * 0000000180048E58: call    _Init_thread_header
 * 0000000180048E5D: cmp     cs:dword_180218B60, r14d
 * 0000000180048E64: jnz     loc_180048F34
 * 0000000180048E6A: lea     rax, unk_180177710
 * 0000000180048E71: mov     qword ptr [rbp+9E10h+var_99A0], rax
 * 0000000180048E78: lea     rax, unk_18017AD2C
 * 0000000180048E7F: mov     qword ptr [rbp+9E10h+var_99A0+8], rax
 * 0000000180048E86: movups  xmm0, [rbp+9E10h+var_99A0]
 * 0000000180048E8D: movups  [rbp+9E10h+var_7FB0], xmm0
 * 0000000180048E94: mov     dword ptr [rbp+9E10h+var_7FA0], 5
 * 0000000180048E9E: mov     dword ptr [rbp+9E10h+var_7FA0+4], esi
 * 0000000180048EA4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048EA9: movups  xmm0, [rbp+9E10h+var_7FA0]
 * 0000000180048EB0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048EB5: call    sub_180043E00
 * 0000000180048EBA: mov     r8, rax
 * 0000000180048EBD: mov     r9d, r12d
 * 0000000180048EC0: mov     edx, 116h
 * 0000000180048EC5: lea     rcx, [rbp+9E10h+var_5140]; Src
 * 0000000180048ECC: call    sub_1800CF2C8
 * 0000000180048ED1: nop
 * 0000000180048ED2: mov     r8, rax
 * 0000000180048ED5: mov     rdx, r13
 * 0000000180048ED8: lea     rcx, [rbp+9E10h+var_5160]
 * 0000000180048EDF: call    sub_180043BDC
 * 0000000180048EE4: nop
 * 0000000180048EE5: lea     r8, aPixel; "/Pixel"
 * 0000000180048EEC: mov     rdx, rax
 * 0000000180048EEF: lea     rcx, [rbp+9E10h+var_5180]
 * 0000000180048EF6: call    sub_18002C218
 * 0000000180048EFB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048F00: mov     rcx, rax
 * 0000000180048F03: call    sub_1800CF3A0
 * 0000000180048F08: mov     cs:byte_180218B5C, al
 * 0000000180048F0E: lea     rcx, [rbp+9E10h+var_5160]; void *
 * 0000000180048F15: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048F1A: nop
 * 0000000180048F1B: lea     rcx, [rbp+9E10h+var_5140]; void *
 * 0000000180048F22: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180048F27: nop
 * 0000000180048F28: lea     rcx, dword_180218B60
 * 0000000180048F2F: call    _Init_thread_footer
 * 0000000180048F34: mov     rax, [rdi+rbx*8]
 * 0000000180048F38: mov     eax, [r15+rax]
 * 0000000180048F3C: cmp     cs:dword_180218B68, eax
 * 0000000180048F42: jle     loc_18004902B
 * 0000000180048F48: lea     rcx, dword_180218B68
 * 0000000180048F4F: call    _Init_thread_header
 * 0000000180048F54: cmp     cs:dword_180218B68, r14d
 * 0000000180048F5B: jnz     loc_18004902B
 * 0000000180048F61: lea     rax, unk_18017AD30
 * 0000000180048F68: mov     qword ptr [rbp+9E10h+var_9990], rax
 * 0000000180048F6F: lea     rax, unk_1801817EC
 * 0000000180048F76: mov     qword ptr [rbp+9E10h+var_9990+8], rax
 * 0000000180048F7D: movups  xmm0, [rbp+9E10h+var_9990]
 * 0000000180048F84: movups  [rbp+9E10h+var_7F90], xmm0
 * 0000000180048F8B: mov     dword ptr [rbp+9E10h+var_7F80], 5
 * 0000000180048F95: mov     dword ptr [rbp+9E10h+var_7F80+4], esi
 * 0000000180048F9B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180048FA0: movups  xmm0, [rbp+9E10h+var_7F80]
 * 0000000180048FA7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180048FAC: call    sub_180043E00
 * 0000000180048FB1: mov     r8, rax
 * 0000000180048FB4: mov     r9d, r12d
 * 0000000180048FB7: mov     edx, 118h
 * 0000000180048FBC: lea     rcx, [rbp+9E10h+var_50E0]; Src
 * 0000000180048FC3: call    sub_1800CF2C8
 * 0000000180048FC8: nop
 * 0000000180048FC9: mov     r8, rax
 * 0000000180048FCC: mov     rdx, r13
 * 0000000180048FCF: lea     rcx, [rbp+9E10h+var_5100]
 * 0000000180048FD6: call    sub_180043BDC
 * 0000000180048FDB: nop
 * 0000000180048FDC: lea     r8, aPixel; "/Pixel"
 * 0000000180048FE3: mov     rdx, rax
 * 0000000180048FE6: lea     rcx, [rbp+9E10h+var_5120]
 * 0000000180048FED: call    sub_18002C218
 * 0000000180048FF2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180048FF7: mov     rcx, rax
 * 0000000180048FFA: call    sub_1800CF3A0
 * 0000000180048FFF: mov     cs:byte_180218B64, al
 * 0000000180049005: lea     rcx, [rbp+9E10h+var_5100]; void *
 * 000000018004900C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049011: nop
 * 0000000180049012: lea     rcx, [rbp+9E10h+var_50E0]; void *
 * 0000000180049019: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004901E: nop
 * 000000018004901F: lea     rcx, dword_180218B68
 * 0000000180049026: call    _Init_thread_footer
 * 000000018004902B: mov     rax, [rdi+rbx*8]
 * 000000018004902F: mov     eax, [r15+rax]
 * 0000000180049033: cmp     cs:dword_180218B70, eax
 * 0000000180049039: jle     loc_180049122
 * 000000018004903F: lea     rcx, dword_180218B70
 * 0000000180049046: call    _Init_thread_header
 * 000000018004904B: cmp     cs:dword_180218B70, r14d
 * 0000000180049052: jnz     loc_180049122
 * 0000000180049058: lea     rax, unk_18017AD30
 * 000000018004905F: mov     qword ptr [rbp+9E10h+var_9980], rax
 * 0000000180049066: lea     rax, unk_1801817EC
 * 000000018004906D: mov     qword ptr [rbp+9E10h+var_9980+8], rax
 * 0000000180049074: movups  xmm0, [rbp+9E10h+var_9980]
 * 000000018004907B: movups  [rbp+9E10h+var_7F70], xmm0
 * 0000000180049082: mov     dword ptr [rbp+9E10h+var_7F60], 5
 * 000000018004908C: mov     dword ptr [rbp+9E10h+var_7F60+4], esi
 * 0000000180049092: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049097: movups  xmm0, [rbp+9E10h+var_7F60]
 * 000000018004909E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800490A3: call    sub_180043E00
 * 00000001800490A8: mov     r8, rax
 * 00000001800490AB: mov     r9d, r12d
 * 00000001800490AE: mov     edx, 11Ah
 * 00000001800490B3: lea     rcx, [rbp+9E10h+var_5080]; Src
 * 00000001800490BA: call    sub_1800CF2C8
 * 00000001800490BF: nop
 * 00000001800490C0: mov     r8, rax
 * 00000001800490C3: mov     rdx, r13
 * 00000001800490C6: lea     rcx, [rbp+9E10h+var_50A0]
 * 00000001800490CD: call    sub_180043BDC
 * 00000001800490D2: nop
 * 00000001800490D3: lea     r8, aPixel; "/Pixel"
 * 00000001800490DA: mov     rdx, rax
 * 00000001800490DD: lea     rcx, [rbp+9E10h+var_50C0]
 * 00000001800490E4: call    sub_18002C218
 * 00000001800490E9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800490EE: mov     rcx, rax
 * 00000001800490F1: call    sub_1800CF3A0
 * 00000001800490F6: mov     cs:byte_180218B6C, al
 * 00000001800490FC: lea     rcx, [rbp+9E10h+var_50A0]; void *
 * 0000000180049103: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049108: nop
 * 0000000180049109: lea     rcx, [rbp+9E10h+var_5080]; void *
 * 0000000180049110: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049115: nop
 * 0000000180049116: lea     rcx, dword_180218B70
 * 000000018004911D: call    _Init_thread_footer
 * 0000000180049122: mov     rax, [rdi+rbx*8]
 * 0000000180049126: mov     eax, [r15+rax]
 * 000000018004912A: cmp     cs:dword_180218B78, eax
 * 0000000180049130: jle     loc_180049219
 * 0000000180049136: lea     rcx, dword_180218B78
 * 000000018004913D: call    _Init_thread_header
 * 0000000180049142: cmp     cs:dword_180218B78, r14d
 * 0000000180049149: jnz     loc_180049219
 * 000000018004914F: lea     rax, unk_180160930
 * 0000000180049156: mov     qword ptr [rbp+9E10h+var_9970], rax
 * 000000018004915D: lea     rax, unk_18016705C
 * 0000000180049164: mov     qword ptr [rbp+9E10h+var_9970+8], rax
 * 000000018004916B: movups  xmm0, [rbp+9E10h+var_9970]
 * 0000000180049172: movups  [rbp+9E10h+var_7F50], xmm0
 * 0000000180049179: mov     dword ptr [rbp+9E10h+var_7F40], 5
 * 0000000180049183: mov     dword ptr [rbp+9E10h+var_7F40+4], esi
 * 0000000180049189: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004918E: movups  xmm0, [rbp+9E10h+var_7F40]
 * 0000000180049195: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004919A: call    sub_180043E00
 * 000000018004919F: mov     r8, rax
 * 00000001800491A2: mov     r9d, r12d
 * 00000001800491A5: mov     edx, 120h
 * 00000001800491AA: lea     rcx, [rbp+9E10h+var_5020]; Src
 * 00000001800491B1: call    sub_1800CF2C8
 * 00000001800491B6: nop
 * 00000001800491B7: mov     r8, rax
 * 00000001800491BA: mov     rdx, r13
 * 00000001800491BD: lea     rcx, [rbp+9E10h+var_5040]
 * 00000001800491C4: call    sub_180043BDC
 * 00000001800491C9: nop
 * 00000001800491CA: lea     r8, aPixel; "/Pixel"
 * 00000001800491D1: mov     rdx, rax
 * 00000001800491D4: lea     rcx, [rbp+9E10h+var_5060]
 * 00000001800491DB: call    sub_18002C218
 * 00000001800491E0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800491E5: mov     rcx, rax
 * 00000001800491E8: call    sub_1800CF3A0
 * 00000001800491ED: mov     cs:byte_180218B74, al
 * 00000001800491F3: lea     rcx, [rbp+9E10h+var_5040]; void *
 * 00000001800491FA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800491FF: nop
 * 0000000180049200: lea     rcx, [rbp+9E10h+var_5020]; void *
 * 0000000180049207: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004920C: nop
 * 000000018004920D: lea     rcx, dword_180218B78
 * 0000000180049214: call    _Init_thread_footer
 * 0000000180049219: mov     rax, [rdi+rbx*8]
 * 000000018004921D: mov     eax, [r15+rax]
 * 0000000180049221: cmp     cs:dword_180218B80, eax
 * 0000000180049227: jle     loc_180049310
 * 000000018004922D: lea     rcx, dword_180218B80
 * 0000000180049234: call    _Init_thread_header
 * 0000000180049239: cmp     cs:dword_180218B80, r14d
 * 0000000180049240: jnz     loc_180049310
 * 0000000180049246: lea     rax, unk_180160930
 * 000000018004924D: mov     qword ptr [rbp+9E10h+var_9960], rax
 * 0000000180049254: lea     rax, unk_18016705C
 * 000000018004925B: mov     qword ptr [rbp+9E10h+var_9960+8], rax
 * 0000000180049262: movups  xmm0, [rbp+9E10h+var_9960]
 * 0000000180049269: movups  [rbp+9E10h+var_7F30], xmm0
 * 0000000180049270: mov     dword ptr [rbp+9E10h+var_7F20], 5
 * 000000018004927A: mov     dword ptr [rbp+9E10h+var_7F20+4], esi
 * 0000000180049280: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049285: movups  xmm0, [rbp+9E10h+var_7F20]
 * 000000018004928C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049291: call    sub_180043E00
 * 0000000180049296: mov     r8, rax
 * 0000000180049299: mov     r9d, r12d
 * 000000018004929C: mov     edx, 122h
 * 00000001800492A1: lea     rcx, [rbp+9E10h+var_4FC0]; Src
 * 00000001800492A8: call    sub_1800CF2C8
 * 00000001800492AD: nop
 * 00000001800492AE: mov     r8, rax
 * 00000001800492B1: mov     rdx, r13
 * 00000001800492B4: lea     rcx, [rbp+9E10h+var_4FE0]
 * 00000001800492BB: call    sub_180043BDC
 * 00000001800492C0: nop
 * 00000001800492C1: lea     r8, aPixel; "/Pixel"
 * 00000001800492C8: mov     rdx, rax
 * 00000001800492CB: lea     rcx, [rbp+9E10h+var_5000]
 * 00000001800492D2: call    sub_18002C218
 * 00000001800492D7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800492DC: mov     rcx, rax
 * 00000001800492DF: call    sub_1800CF3A0
 * 00000001800492E4: mov     cs:byte_180218B7C, al
 * 00000001800492EA: lea     rcx, [rbp+9E10h+var_4FE0]; void *
 * 00000001800492F1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800492F6: nop
 * 00000001800492F7: lea     rcx, [rbp+9E10h+var_4FC0]; void *
 * 00000001800492FE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049303: nop
 * 0000000180049304: lea     rcx, dword_180218B80
 * 000000018004930B: call    _Init_thread_footer
 * 0000000180049310: mov     rax, [rdi+rbx*8]
 * 0000000180049314: mov     eax, [r15+rax]
 * 0000000180049318: cmp     cs:dword_180218B88, eax
 * 000000018004931E: jle     loc_180049407
 * 0000000180049324: lea     rcx, dword_180218B88
 * 000000018004932B: call    _Init_thread_header
 * 0000000180049330: cmp     cs:dword_180218B88, r14d
 * 0000000180049337: jnz     loc_180049407
 * 000000018004933D: lea     rax, unk_18016A540
 * 0000000180049344: mov     qword ptr [rbp+9E10h+var_9950], rax
 * 000000018004934B: lea     rax, unk_180170DFC
 * 0000000180049352: mov     qword ptr [rbp+9E10h+var_9950+8], rax
 * 0000000180049359: movups  xmm0, [rbp+9E10h+var_9950]
 * 0000000180049360: movups  [rbp+9E10h+var_7F10], xmm0
 * 0000000180049367: mov     dword ptr [rbp+9E10h+var_7F00], 5
 * 0000000180049371: mov     dword ptr [rbp+9E10h+var_7F00+4], esi
 * 0000000180049377: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004937C: movups  xmm0, [rbp+9E10h+var_7F00]
 * 0000000180049383: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049388: call    sub_180043E00
 * 000000018004938D: mov     r8, rax
 * 0000000180049390: mov     r9d, r12d
 * 0000000180049393: mov     edx, 128h
 * 0000000180049398: lea     rcx, [rbp+9E10h+var_4F60]; Src
 * 000000018004939F: call    sub_1800CF2C8
 * 00000001800493A4: nop
 * 00000001800493A5: mov     r8, rax
 * 00000001800493A8: mov     rdx, r13
 * 00000001800493AB: lea     rcx, [rbp+9E10h+var_4F80]
 * 00000001800493B2: call    sub_180043BDC
 * 00000001800493B7: nop
 * 00000001800493B8: lea     r8, aPixel; "/Pixel"
 * 00000001800493BF: mov     rdx, rax
 * 00000001800493C2: lea     rcx, [rbp+9E10h+var_4FA0]
 * 00000001800493C9: call    sub_18002C218
 * 00000001800493CE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800493D3: mov     rcx, rax
 * 00000001800493D6: call    sub_1800CF3A0
 * 00000001800493DB: mov     cs:byte_180218B84, al
 * 00000001800493E1: lea     rcx, [rbp+9E10h+var_4F80]; void *
 * 00000001800493E8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800493ED: nop
 * 00000001800493EE: lea     rcx, [rbp+9E10h+var_4F60]; void *
 * 00000001800493F5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800493FA: nop
 * 00000001800493FB: lea     rcx, dword_180218B88
 * 0000000180049402: call    _Init_thread_footer
 * 0000000180049407: mov     rax, [rdi+rbx*8]
 * 000000018004940B: mov     eax, [r15+rax]
 * 000000018004940F: cmp     cs:dword_180218B90, eax
 * 0000000180049415: jle     loc_1800494FE
 * 000000018004941B: lea     rcx, dword_180218B90
 * 0000000180049422: call    _Init_thread_header
 * 0000000180049427: cmp     cs:dword_180218B90, r14d
 * 000000018004942E: jnz     loc_1800494FE
 * 0000000180049434: lea     rax, unk_18016A540
 * 000000018004943B: mov     qword ptr [rbp+9E10h+var_9940], rax
 * 0000000180049442: lea     rax, unk_180170DFC
 * 0000000180049449: mov     qword ptr [rbp+9E10h+var_9940+8], rax
 * 0000000180049450: movups  xmm0, [rbp+9E10h+var_9940]
 * 0000000180049457: movups  [rbp+9E10h+var_7EF0], xmm0
 * 000000018004945E: mov     dword ptr [rbp+9E10h+var_7EE0], 5
 * 0000000180049468: mov     dword ptr [rbp+9E10h+var_7EE0+4], esi
 * 000000018004946E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049473: movups  xmm0, [rbp+9E10h+var_7EE0]
 * 000000018004947A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004947F: call    sub_180043E00
 * 0000000180049484: mov     r8, rax
 * 0000000180049487: mov     r9d, r12d
 * 000000018004948A: mov     edx, 12Ah
 * 000000018004948F: lea     rcx, [rbp+9E10h+var_4F00]; Src
 * 0000000180049496: call    sub_1800CF2C8
 * 000000018004949B: nop
 * 000000018004949C: mov     r8, rax
 * 000000018004949F: mov     rdx, r13
 * 00000001800494A2: lea     rcx, [rbp+9E10h+var_4F20]
 * 00000001800494A9: call    sub_180043BDC
 * 00000001800494AE: nop
 * 00000001800494AF: lea     r8, aPixel; "/Pixel"
 * 00000001800494B6: mov     rdx, rax
 * 00000001800494B9: lea     rcx, [rbp+9E10h+var_4F40]
 * 00000001800494C0: call    sub_18002C218
 * 00000001800494C5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800494CA: mov     rcx, rax
 * 00000001800494CD: call    sub_1800CF3A0
 * 00000001800494D2: mov     cs:byte_180218B8C, al
 * 00000001800494D8: lea     rcx, [rbp+9E10h+var_4F20]; void *
 * 00000001800494DF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800494E4: nop
 * 00000001800494E5: lea     rcx, [rbp+9E10h+var_4F00]; void *
 * 00000001800494EC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800494F1: nop
 * 00000001800494F2: lea     rcx, dword_180218B90
 * 00000001800494F9: call    _Init_thread_footer
 * 00000001800494FE: mov     rax, [rdi+rbx*8]
 * 0000000180049502: mov     eax, [r15+rax]
 * 0000000180049506: cmp     cs:dword_180218B98, eax
 * 000000018004950C: jle     loc_1800495F5
 * 0000000180049512: lea     rcx, dword_180218B98
 * 0000000180049519: call    _Init_thread_header
 * 000000018004951E: cmp     cs:dword_180218B98, r14d
 * 0000000180049525: jnz     loc_1800495F5
 * 000000018004952B: lea     rax, unk_180170E00
 * 0000000180049532: mov     qword ptr [rbp+9E10h+var_9930], rax
 * 0000000180049539: lea     rax, unk_180177708
 * 0000000180049540: mov     qword ptr [rbp+9E10h+var_9930+8], rax
 * 0000000180049547: movups  xmm0, [rbp+9E10h+var_9930]
 * 000000018004954E: movups  [rbp+9E10h+var_7ED0], xmm0
 * 0000000180049555: mov     dword ptr [rbp+9E10h+var_7EC0], 5
 * 000000018004955F: mov     dword ptr [rbp+9E10h+var_7EC0+4], esi
 * 0000000180049565: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004956A: movups  xmm0, [rbp+9E10h+var_7EC0]
 * 0000000180049571: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049576: call    sub_180043E00
 * 000000018004957B: mov     r8, rax
 * 000000018004957E: mov     r9d, r12d
 * 0000000180049581: mov     edx, 130h
 * 0000000180049586: lea     rcx, [rbp+9E10h+var_4EA0]; Src
 * 000000018004958D: call    sub_1800CF2C8
 * 0000000180049592: nop
 * 0000000180049593: mov     r8, rax
 * 0000000180049596: mov     rdx, r13
 * 0000000180049599: lea     rcx, [rbp+9E10h+var_4EC0]
 * 00000001800495A0: call    sub_180043BDC
 * 00000001800495A5: nop
 * 00000001800495A6: lea     r8, aPixel; "/Pixel"
 * 00000001800495AD: mov     rdx, rax
 * 00000001800495B0: lea     rcx, [rbp+9E10h+var_4EE0]
 * 00000001800495B7: call    sub_18002C218
 * 00000001800495BC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800495C1: mov     rcx, rax
 * 00000001800495C4: call    sub_1800CF3A0
 * 00000001800495C9: mov     cs:byte_180218B94, al
 * 00000001800495CF: lea     rcx, [rbp+9E10h+var_4EC0]; void *
 * 00000001800495D6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800495DB: nop
 * 00000001800495DC: lea     rcx, [rbp+9E10h+var_4EA0]; void *
 * 00000001800495E3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800495E8: nop
 * 00000001800495E9: lea     rcx, dword_180218B98
 * 00000001800495F0: call    _Init_thread_footer
 * 00000001800495F5: mov     rax, [rdi+rbx*8]
 * 00000001800495F9: mov     eax, [r15+rax]
 * 00000001800495FD: cmp     cs:dword_180218BA0, eax
 * 0000000180049603: jle     loc_1800496EC
 * 0000000180049609: lea     rcx, dword_180218BA0
 * 0000000180049610: call    _Init_thread_header
 * 0000000180049615: cmp     cs:dword_180218BA0, r14d
 * 000000018004961C: jnz     loc_1800496EC
 * 0000000180049622: lea     rax, unk_180170E00
 * 0000000180049629: mov     qword ptr [rbp+9E10h+var_9920], rax
 * 0000000180049630: lea     rax, unk_180177708
 * 0000000180049637: mov     qword ptr [rbp+9E10h+var_9920+8], rax
 * 000000018004963E: movups  xmm0, [rbp+9E10h+var_9920]
 * 0000000180049645: movups  [rbp+9E10h+var_7EB0], xmm0
 * 000000018004964C: mov     dword ptr [rbp+9E10h+var_7EA0], 5
 * 0000000180049656: mov     dword ptr [rbp+9E10h+var_7EA0+4], esi
 * 000000018004965C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049661: movups  xmm0, [rbp+9E10h+var_7EA0]
 * 0000000180049668: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004966D: call    sub_180043E00
 * 0000000180049672: mov     r8, rax
 * 0000000180049675: mov     r9d, r12d
 * 0000000180049678: mov     edx, 132h
 * 000000018004967D: lea     rcx, [rbp+9E10h+var_4E40]; Src
 * 0000000180049684: call    sub_1800CF2C8
 * 0000000180049689: nop
 * 000000018004968A: mov     r8, rax
 * 000000018004968D: mov     rdx, r13
 * 0000000180049690: lea     rcx, [rbp+9E10h+var_4E60]
 * 0000000180049697: call    sub_180043BDC
 * 000000018004969C: nop
 * 000000018004969D: lea     r8, aPixel; "/Pixel"
 * 00000001800496A4: mov     rdx, rax
 * 00000001800496A7: lea     rcx, [rbp+9E10h+var_4E80]
 * 00000001800496AE: call    sub_18002C218
 * 00000001800496B3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800496B8: mov     rcx, rax
 * 00000001800496BB: call    sub_1800CF3A0
 * 00000001800496C0: mov     cs:byte_180218B9C, al
 * 00000001800496C6: lea     rcx, [rbp+9E10h+var_4E60]; void *
 * 00000001800496CD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800496D2: nop
 * 00000001800496D3: lea     rcx, [rbp+9E10h+var_4E40]; void *
 * 00000001800496DA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800496DF: nop
 * 00000001800496E0: lea     rcx, dword_180218BA0
 * 00000001800496E7: call    _Init_thread_footer
 * 00000001800496EC: mov     rax, [rdi+rbx*8]
 * 00000001800496F0: mov     eax, [r15+rax]
 * 00000001800496F4: cmp     cs:dword_180218BA8, eax
 * 00000001800496FA: jle     loc_1800497E3
 * 0000000180049700: lea     rcx, dword_180218BA8
 * 0000000180049707: call    _Init_thread_header
 * 000000018004970C: cmp     cs:dword_180218BA8, r14d
 * 0000000180049713: jnz     loc_1800497E3
 * 0000000180049719: lea     rax, unk_18017AD30
 * 0000000180049720: mov     qword ptr [rbp+9E10h+var_9910], rax
 * 0000000180049727: lea     rax, unk_1801817EC
 * 000000018004972E: mov     qword ptr [rbp+9E10h+var_9910+8], rax
 * 0000000180049735: movups  xmm0, [rbp+9E10h+var_9910]
 * 000000018004973C: movups  [rbp+9E10h+var_7E90], xmm0
 * 0000000180049743: mov     dword ptr [rbp+9E10h+var_7E80], 5
 * 000000018004974D: mov     dword ptr [rbp+9E10h+var_7E80+4], esi
 * 0000000180049753: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049758: movups  xmm0, [rbp+9E10h+var_7E80]
 * 000000018004975F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049764: call    sub_180043E00
 * 0000000180049769: mov     r8, rax
 * 000000018004976C: mov     r9d, r12d
 * 000000018004976F: mov     edx, 138h
 * 0000000180049774: lea     rcx, [rbp+9E10h+var_4DE0]; Src
 * 000000018004977B: call    sub_1800CF2C8
 * 0000000180049780: nop
 * 0000000180049781: mov     r8, rax
 * 0000000180049784: mov     rdx, r13
 * 0000000180049787: lea     rcx, [rbp+9E10h+var_4E00]
 * 000000018004978E: call    sub_180043BDC
 * 0000000180049793: nop
 * 0000000180049794: lea     r8, aPixel; "/Pixel"
 * 000000018004979B: mov     rdx, rax
 * 000000018004979E: lea     rcx, [rbp+9E10h+var_4E20]
 * 00000001800497A5: call    sub_18002C218
 * 00000001800497AA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800497AF: mov     rcx, rax
 * 00000001800497B2: call    sub_1800CF3A0
 * 00000001800497B7: mov     cs:byte_180218BA4, al
 * 00000001800497BD: lea     rcx, [rbp+9E10h+var_4E00]; void *
 * 00000001800497C4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800497C9: nop
 * 00000001800497CA: lea     rcx, [rbp+9E10h+var_4DE0]; void *
 * 00000001800497D1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800497D6: nop
 * 00000001800497D7: lea     rcx, dword_180218BA8
 * 00000001800497DE: call    _Init_thread_footer
 * 00000001800497E3: mov     rax, [rdi+rbx*8]
 * 00000001800497E7: mov     eax, [r15+rax]
 * 00000001800497EB: cmp     cs:dword_180218BB0, eax
 * 00000001800497F1: jle     loc_1800498DA
 * 00000001800497F7: lea     rcx, dword_180218BB0
 * 00000001800497FE: call    _Init_thread_header
 * 0000000180049803: cmp     cs:dword_180218BB0, r14d
 * 000000018004980A: jnz     loc_1800498DA
 * 0000000180049810: lea     rax, unk_18017AD30
 * 0000000180049817: mov     qword ptr [rbp+9E10h+var_9900], rax
 * 000000018004981E: lea     rax, unk_1801817EC
 * 0000000180049825: mov     qword ptr [rbp+9E10h+var_9900+8], rax
 * 000000018004982C: movups  xmm0, [rbp+9E10h+var_9900]
 * 0000000180049833: movups  [rbp+9E10h+var_7E70], xmm0
 * 000000018004983A: mov     dword ptr [rbp+9E10h+var_7E60], 5
 * 0000000180049844: mov     dword ptr [rbp+9E10h+var_7E60+4], esi
 * 000000018004984A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004984F: movups  xmm0, [rbp+9E10h+var_7E60]
 * 0000000180049856: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004985B: call    sub_180043E00
 * 0000000180049860: mov     r8, rax
 * 0000000180049863: mov     r9d, r12d
 * 0000000180049866: mov     edx, 13Ah
 * 000000018004986B: lea     rcx, [rbp+9E10h+var_4D80]; Src
 * 0000000180049872: call    sub_1800CF2C8
 * 0000000180049877: nop
 * 0000000180049878: mov     r8, rax
 * 000000018004987B: mov     rdx, r13
 * 000000018004987E: lea     rcx, [rbp+9E10h+var_4DA0]
 * 0000000180049885: call    sub_180043BDC
 * 000000018004988A: nop
 * 000000018004988B: lea     r8, aPixel; "/Pixel"
 * 0000000180049892: mov     rdx, rax
 * 0000000180049895: lea     rcx, [rbp+9E10h+var_4DC0]
 * 000000018004989C: call    sub_18002C218
 * 00000001800498A1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800498A6: mov     rcx, rax
 * 00000001800498A9: call    sub_1800CF3A0
 * 00000001800498AE: mov     cs:byte_180218BAC, al
 * 00000001800498B4: lea     rcx, [rbp+9E10h+var_4DA0]; void *
 * 00000001800498BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800498C0: nop
 * 00000001800498C1: lea     rcx, [rbp+9E10h+var_4D80]; void *
 * 00000001800498C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800498CD: nop
 * 00000001800498CE: lea     rcx, dword_180218BB0
 * 00000001800498D5: call    _Init_thread_footer
 * 00000001800498DA: mov     rax, [rdi+rbx*8]
 * 00000001800498DE: mov     eax, [r15+rax]
 * 00000001800498E2: cmp     cs:dword_180218BB8, eax
 * 00000001800498E8: jle     loc_1800499D1
 * 00000001800498EE: lea     rcx, dword_180218BB8
 * 00000001800498F5: call    _Init_thread_header
 * 00000001800498FA: cmp     cs:dword_180218BB8, r14d
 * 0000000180049901: jnz     loc_1800499D1
 * 0000000180049907: lea     rax, unk_180160930
 * 000000018004990E: mov     qword ptr [rbp+9E10h+var_98F0], rax
 * 0000000180049915: lea     rax, unk_18016705C
 * 000000018004991C: mov     qword ptr [rbp+9E10h+var_98F0+8], rax
 * 0000000180049923: movups  xmm0, [rbp+9E10h+var_98F0]
 * 000000018004992A: movups  [rbp+9E10h+var_7E50], xmm0
 * 0000000180049931: mov     dword ptr [rbp+9E10h+var_7E40], 5
 * 000000018004993B: mov     dword ptr [rbp+9E10h+var_7E40+4], esi
 * 0000000180049941: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049946: movups  xmm0, [rbp+9E10h+var_7E40]
 * 000000018004994D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049952: call    sub_180043E00
 * 0000000180049957: mov     r8, rax
 * 000000018004995A: mov     r9d, r12d
 * 000000018004995D: mov     edx, 140h
 * 0000000180049962: lea     rcx, [rbp+9E10h+var_4D20]; Src
 * 0000000180049969: call    sub_1800CF2C8
 * 000000018004996E: nop
 * 000000018004996F: mov     r8, rax
 * 0000000180049972: mov     rdx, r13
 * 0000000180049975: lea     rcx, [rbp+9E10h+var_4D40]
 * 000000018004997C: call    sub_180043BDC
 * 0000000180049981: nop
 * 0000000180049982: lea     r8, aPixel; "/Pixel"
 * 0000000180049989: mov     rdx, rax
 * 000000018004998C: lea     rcx, [rbp+9E10h+var_4D60]
 * 0000000180049993: call    sub_18002C218
 * 0000000180049998: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004999D: mov     rcx, rax
 * 00000001800499A0: call    sub_1800CF3A0
 * 00000001800499A5: mov     cs:byte_180218BB4, al
 * 00000001800499AB: lea     rcx, [rbp+9E10h+var_4D40]; void *
 * 00000001800499B2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800499B7: nop
 * 00000001800499B8: lea     rcx, [rbp+9E10h+var_4D20]; void *
 * 00000001800499BF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800499C4: nop
 * 00000001800499C5: lea     rcx, dword_180218BB8
 * 00000001800499CC: call    _Init_thread_footer
 * 00000001800499D1: mov     rax, [rdi+rbx*8]
 * 00000001800499D5: mov     eax, [r15+rax]
 * 00000001800499D9: cmp     cs:dword_180218BC0, eax
 * 00000001800499DF: jle     loc_180049AC8
 * 00000001800499E5: lea     rcx, dword_180218BC0
 * 00000001800499EC: call    _Init_thread_header
 * 00000001800499F1: cmp     cs:dword_180218BC0, r14d
 * 00000001800499F8: jnz     loc_180049AC8
 * 00000001800499FE: lea     rax, unk_180160930
 * 0000000180049A05: mov     qword ptr [rbp+9E10h+var_98E0], rax
 * 0000000180049A0C: lea     rax, unk_18016705C
 * 0000000180049A13: mov     qword ptr [rbp+9E10h+var_98E0+8], rax
 * 0000000180049A1A: movups  xmm0, [rbp+9E10h+var_98E0]
 * 0000000180049A21: movups  [rbp+9E10h+var_7E30], xmm0
 * 0000000180049A28: mov     dword ptr [rbp+9E10h+var_7E20], 5
 * 0000000180049A32: mov     dword ptr [rbp+9E10h+var_7E20+4], esi
 * 0000000180049A38: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049A3D: movups  xmm0, [rbp+9E10h+var_7E20]
 * 0000000180049A44: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049A49: call    sub_180043E00
 * 0000000180049A4E: mov     r8, rax
 * 0000000180049A51: mov     r9d, r12d
 * 0000000180049A54: mov     edx, 142h
 * 0000000180049A59: lea     rcx, [rbp+9E10h+var_4CC0]; Src
 * 0000000180049A60: call    sub_1800CF2C8
 * 0000000180049A65: nop
 * 0000000180049A66: mov     r8, rax
 * 0000000180049A69: mov     rdx, r13
 * 0000000180049A6C: lea     rcx, [rbp+9E10h+var_4CE0]
 * 0000000180049A73: call    sub_180043BDC
 * 0000000180049A78: nop
 * 0000000180049A79: lea     r8, aPixel; "/Pixel"
 * 0000000180049A80: mov     rdx, rax
 * 0000000180049A83: lea     rcx, [rbp+9E10h+var_4D00]
 * 0000000180049A8A: call    sub_18002C218
 * 0000000180049A8F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049A94: mov     rcx, rax
 * 0000000180049A97: call    sub_1800CF3A0
 * 0000000180049A9C: mov     cs:byte_180218BBC, al
 * 0000000180049AA2: lea     rcx, [rbp+9E10h+var_4CE0]; void *
 * 0000000180049AA9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049AAE: nop
 * 0000000180049AAF: lea     rcx, [rbp+9E10h+var_4CC0]; void *
 * 0000000180049AB6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049ABB: nop
 * 0000000180049ABC: lea     rcx, dword_180218BC0
 * 0000000180049AC3: call    _Init_thread_footer
 * 0000000180049AC8: mov     rax, [rdi+rbx*8]
 * 0000000180049ACC: mov     eax, [r15+rax]
 * 0000000180049AD0: cmp     cs:dword_180218BC8, eax
 * 0000000180049AD6: jle     loc_180049BBF
 * 0000000180049ADC: lea     rcx, dword_180218BC8
 * 0000000180049AE3: call    _Init_thread_header
 * 0000000180049AE8: cmp     cs:dword_180218BC8, r14d
 * 0000000180049AEF: jnz     loc_180049BBF
 * 0000000180049AF5: lea     rax, unk_18016A540
 * 0000000180049AFC: mov     qword ptr [rbp+9E10h+var_98D0], rax
 * 0000000180049B03: lea     rax, unk_180170DFC
 * 0000000180049B0A: mov     qword ptr [rbp+9E10h+var_98D0+8], rax
 * 0000000180049B11: movups  xmm0, [rbp+9E10h+var_98D0]
 * 0000000180049B18: movups  [rbp+9E10h+var_7E10], xmm0
 * 0000000180049B1F: mov     dword ptr [rbp+9E10h+var_7E00], 5
 * 0000000180049B29: mov     dword ptr [rbp+9E10h+var_7E00+4], esi
 * 0000000180049B2F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049B34: movups  xmm0, [rbp+9E10h+var_7E00]
 * 0000000180049B3B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049B40: call    sub_180043E00
 * 0000000180049B45: mov     r8, rax
 * 0000000180049B48: mov     r9d, r12d
 * 0000000180049B4B: mov     edx, 148h
 * 0000000180049B50: lea     rcx, [rbp+9E10h+var_4C60]; Src
 * 0000000180049B57: call    sub_1800CF2C8
 * 0000000180049B5C: nop
 * 0000000180049B5D: mov     r8, rax
 * 0000000180049B60: mov     rdx, r13
 * 0000000180049B63: lea     rcx, [rbp+9E10h+var_4C80]
 * 0000000180049B6A: call    sub_180043BDC
 * 0000000180049B6F: nop
 * 0000000180049B70: lea     r8, aPixel; "/Pixel"
 * 0000000180049B77: mov     rdx, rax
 * 0000000180049B7A: lea     rcx, [rbp+9E10h+var_4CA0]
 * 0000000180049B81: call    sub_18002C218
 * 0000000180049B86: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049B8B: mov     rcx, rax
 * 0000000180049B8E: call    sub_1800CF3A0
 * 0000000180049B93: mov     cs:byte_180218BC4, al
 * 0000000180049B99: lea     rcx, [rbp+9E10h+var_4C80]; void *
 * 0000000180049BA0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049BA5: nop
 * 0000000180049BA6: lea     rcx, [rbp+9E10h+var_4C60]; void *
 * 0000000180049BAD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049BB2: nop
 * 0000000180049BB3: lea     rcx, dword_180218BC8
 * 0000000180049BBA: call    _Init_thread_footer
 * 0000000180049BBF: mov     rax, [rdi+rbx*8]
 * 0000000180049BC3: mov     eax, [r15+rax]
 * 0000000180049BC7: cmp     cs:dword_180218BD0, eax
 * 0000000180049BCD: jle     loc_180049CB6
 * 0000000180049BD3: lea     rcx, dword_180218BD0
 * 0000000180049BDA: call    _Init_thread_header
 * 0000000180049BDF: cmp     cs:dword_180218BD0, r14d
 * 0000000180049BE6: jnz     loc_180049CB6
 * 0000000180049BEC: lea     rax, unk_18016A540
 * 0000000180049BF3: mov     qword ptr [rbp+9E10h+var_98C0], rax
 * 0000000180049BFA: lea     rax, unk_180170DFC
 * 0000000180049C01: mov     qword ptr [rbp+9E10h+var_98C0+8], rax
 * 0000000180049C08: movups  xmm0, [rbp+9E10h+var_98C0]
 * 0000000180049C0F: movups  [rbp+9E10h+var_7DF0], xmm0
 * 0000000180049C16: mov     dword ptr [rbp+9E10h+var_7DE0], 5
 * 0000000180049C20: mov     dword ptr [rbp+9E10h+var_7DE0+4], esi
 * 0000000180049C26: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049C2B: movups  xmm0, [rbp+9E10h+var_7DE0]
 * 0000000180049C32: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049C37: call    sub_180043E00
 * 0000000180049C3C: mov     r8, rax
 * 0000000180049C3F: mov     r9d, r12d
 * 0000000180049C42: mov     edx, 14Ah
 * 0000000180049C47: lea     rcx, [rbp+9E10h+var_4C00]; Src
 * 0000000180049C4E: call    sub_1800CF2C8
 * 0000000180049C53: nop
 * 0000000180049C54: mov     r8, rax
 * 0000000180049C57: mov     rdx, r13
 * 0000000180049C5A: lea     rcx, [rbp+9E10h+var_4C20]
 * 0000000180049C61: call    sub_180043BDC
 * 0000000180049C66: nop
 * 0000000180049C67: lea     r8, aPixel; "/Pixel"
 * 0000000180049C6E: mov     rdx, rax
 * 0000000180049C71: lea     rcx, [rbp+9E10h+var_4C40]
 * 0000000180049C78: call    sub_18002C218
 * 0000000180049C7D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049C82: mov     rcx, rax
 * 0000000180049C85: call    sub_1800CF3A0
 * 0000000180049C8A: mov     cs:byte_180218BCC, al
 * 0000000180049C90: lea     rcx, [rbp+9E10h+var_4C20]; void *
 * 0000000180049C97: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049C9C: nop
 * 0000000180049C9D: lea     rcx, [rbp+9E10h+var_4C00]; void *
 * 0000000180049CA4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049CA9: nop
 * 0000000180049CAA: lea     rcx, dword_180218BD0
 * 0000000180049CB1: call    _Init_thread_footer
 * 0000000180049CB6: mov     rax, [rdi+rbx*8]
 * 0000000180049CBA: mov     eax, [r15+rax]
 * 0000000180049CBE: cmp     cs:dword_180218BD8, eax
 * 0000000180049CC4: jle     loc_180049DAD
 * 0000000180049CCA: lea     rcx, dword_180218BD8
 * 0000000180049CD1: call    _Init_thread_header
 * 0000000180049CD6: cmp     cs:dword_180218BD8, r14d
 * 0000000180049CDD: jnz     loc_180049DAD
 * 0000000180049CE3: lea     rax, unk_180170E00
 * 0000000180049CEA: mov     qword ptr [rbp+9E10h+var_98B0], rax
 * 0000000180049CF1: lea     rax, unk_180177708
 * 0000000180049CF8: mov     qword ptr [rbp+9E10h+var_98B0+8], rax
 * 0000000180049CFF: movups  xmm0, [rbp+9E10h+var_98B0]
 * 0000000180049D06: movups  [rbp+9E10h+var_7DD0], xmm0
 * 0000000180049D0D: mov     dword ptr [rbp+9E10h+var_7DC0], 5
 * 0000000180049D17: mov     dword ptr [rbp+9E10h+var_7DC0+4], esi
 * 0000000180049D1D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049D22: movups  xmm0, [rbp+9E10h+var_7DC0]
 * 0000000180049D29: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049D2E: call    sub_180043E00
 * 0000000180049D33: mov     r8, rax
 * 0000000180049D36: mov     r9d, r12d
 * 0000000180049D39: mov     edx, 150h
 * 0000000180049D3E: lea     rcx, [rbp+9E10h+var_4BA0]; Src
 * 0000000180049D45: call    sub_1800CF2C8
 * 0000000180049D4A: nop
 * 0000000180049D4B: mov     r8, rax
 * 0000000180049D4E: mov     rdx, r13
 * 0000000180049D51: lea     rcx, [rbp+9E10h+var_4BC0]
 * 0000000180049D58: call    sub_180043BDC
 * 0000000180049D5D: nop
 * 0000000180049D5E: lea     r8, aPixel; "/Pixel"
 * 0000000180049D65: mov     rdx, rax
 * 0000000180049D68: lea     rcx, [rbp+9E10h+var_4BE0]
 * 0000000180049D6F: call    sub_18002C218
 * 0000000180049D74: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049D79: mov     rcx, rax
 * 0000000180049D7C: call    sub_1800CF3A0
 * 0000000180049D81: mov     cs:byte_180218BD4, al
 * 0000000180049D87: lea     rcx, [rbp+9E10h+var_4BC0]; void *
 * 0000000180049D8E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049D93: nop
 * 0000000180049D94: lea     rcx, [rbp+9E10h+var_4BA0]; void *
 * 0000000180049D9B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049DA0: nop
 * 0000000180049DA1: lea     rcx, dword_180218BD8
 * 0000000180049DA8: call    _Init_thread_footer
 * 0000000180049DAD: mov     rax, [rdi+rbx*8]
 * 0000000180049DB1: mov     eax, [r15+rax]
 * 0000000180049DB5: cmp     cs:dword_180218BE0, eax
 * 0000000180049DBB: jle     loc_180049EA4
 * 0000000180049DC1: lea     rcx, dword_180218BE0
 * 0000000180049DC8: call    _Init_thread_header
 * 0000000180049DCD: cmp     cs:dword_180218BE0, r14d
 * 0000000180049DD4: jnz     loc_180049EA4
 * 0000000180049DDA: lea     rax, unk_180170E00
 * 0000000180049DE1: mov     qword ptr [rbp+9E10h+var_98A0], rax
 * 0000000180049DE8: lea     rax, unk_180177708
 * 0000000180049DEF: mov     qword ptr [rbp+9E10h+var_98A0+8], rax
 * 0000000180049DF6: movups  xmm0, [rbp+9E10h+var_98A0]
 * 0000000180049DFD: movups  [rbp+9E10h+var_7DB0], xmm0
 * 0000000180049E04: mov     dword ptr [rbp+9E10h+var_7DA0], 5
 * 0000000180049E0E: mov     dword ptr [rbp+9E10h+var_7DA0+4], esi
 * 0000000180049E14: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049E19: movups  xmm0, [rbp+9E10h+var_7DA0]
 * 0000000180049E20: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049E25: call    sub_180043E00
 * 0000000180049E2A: mov     r8, rax
 * 0000000180049E2D: mov     r9d, r12d
 * 0000000180049E30: mov     edx, 152h
 * 0000000180049E35: lea     rcx, [rbp+9E10h+var_4B40]; Src
 * 0000000180049E3C: call    sub_1800CF2C8
 * 0000000180049E41: nop
 * 0000000180049E42: mov     r8, rax
 * 0000000180049E45: mov     rdx, r13
 * 0000000180049E48: lea     rcx, [rbp+9E10h+var_4B60]
 * 0000000180049E4F: call    sub_180043BDC
 * 0000000180049E54: nop
 * 0000000180049E55: lea     r8, aPixel; "/Pixel"
 * 0000000180049E5C: mov     rdx, rax
 * 0000000180049E5F: lea     rcx, [rbp+9E10h+var_4B80]
 * 0000000180049E66: call    sub_18002C218
 * 0000000180049E6B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049E70: mov     rcx, rax
 * 0000000180049E73: call    sub_1800CF3A0
 * 0000000180049E78: mov     cs:byte_180218BDC, al
 * 0000000180049E7E: lea     rcx, [rbp+9E10h+var_4B60]; void *
 * 0000000180049E85: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049E8A: nop
 * 0000000180049E8B: lea     rcx, [rbp+9E10h+var_4B40]; void *
 * 0000000180049E92: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049E97: nop
 * 0000000180049E98: lea     rcx, dword_180218BE0
 * 0000000180049E9F: call    _Init_thread_footer
 * 0000000180049EA4: mov     rax, [rdi+rbx*8]
 * 0000000180049EA8: mov     eax, [r15+rax]
 * 0000000180049EAC: cmp     cs:dword_180218BE8, eax
 * 0000000180049EB2: jle     loc_180049F9B
 * 0000000180049EB8: lea     rcx, dword_180218BE8
 * 0000000180049EBF: call    _Init_thread_header
 * 0000000180049EC4: cmp     cs:dword_180218BE8, r14d
 * 0000000180049ECB: jnz     loc_180049F9B
 * 0000000180049ED1: lea     rax, unk_18017AD30
 * 0000000180049ED8: mov     qword ptr [rbp+9E10h+var_9890], rax
 * 0000000180049EDF: lea     rax, unk_1801817EC
 * 0000000180049EE6: mov     qword ptr [rbp+9E10h+var_9890+8], rax
 * 0000000180049EED: movups  xmm0, [rbp+9E10h+var_9890]
 * 0000000180049EF4: movups  [rbp+9E10h+var_7D90], xmm0
 * 0000000180049EFB: mov     dword ptr [rbp+9E10h+var_7D80], 5
 * 0000000180049F05: mov     dword ptr [rbp+9E10h+var_7D80+4], esi
 * 0000000180049F0B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049F10: movups  xmm0, [rbp+9E10h+var_7D80]
 * 0000000180049F17: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049F1C: call    sub_180043E00
 * 0000000180049F21: mov     r8, rax
 * 0000000180049F24: mov     r9d, r12d
 * 0000000180049F27: mov     edx, 158h
 * 0000000180049F2C: lea     rcx, [rbp+9E10h+var_4AE0]; Src
 * 0000000180049F33: call    sub_1800CF2C8
 * 0000000180049F38: nop
 * 0000000180049F39: mov     r8, rax
 * 0000000180049F3C: mov     rdx, r13
 * 0000000180049F3F: lea     rcx, [rbp+9E10h+var_4B00]
 * 0000000180049F46: call    sub_180043BDC
 * 0000000180049F4B: nop
 * 0000000180049F4C: lea     r8, aPixel; "/Pixel"
 * 0000000180049F53: mov     rdx, rax
 * 0000000180049F56: lea     rcx, [rbp+9E10h+var_4B20]
 * 0000000180049F5D: call    sub_18002C218
 * 0000000180049F62: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049F67: mov     rcx, rax
 * 0000000180049F6A: call    sub_1800CF3A0
 * 0000000180049F6F: mov     cs:byte_180218BE4, al
 * 0000000180049F75: lea     rcx, [rbp+9E10h+var_4B00]; void *
 * 0000000180049F7C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049F81: nop
 * 0000000180049F82: lea     rcx, [rbp+9E10h+var_4AE0]; void *
 * 0000000180049F89: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049F8E: nop
 * 0000000180049F8F: lea     rcx, dword_180218BE8
 * 0000000180049F96: call    _Init_thread_footer
 * 0000000180049F9B: mov     rax, [rdi+rbx*8]
 * 0000000180049F9F: mov     eax, [r15+rax]
 * 0000000180049FA3: cmp     cs:dword_180218BF0, eax
 * 0000000180049FA9: jle     loc_18004A092
 * 0000000180049FAF: lea     rcx, dword_180218BF0
 * 0000000180049FB6: call    _Init_thread_header
 * 0000000180049FBB: cmp     cs:dword_180218BF0, r14d
 * 0000000180049FC2: jnz     loc_18004A092
 * 0000000180049FC8: lea     rax, unk_18017AD30
 * 0000000180049FCF: mov     qword ptr [rbp+9E10h+var_9880], rax
 * 0000000180049FD6: lea     rax, unk_1801817EC
 * 0000000180049FDD: mov     qword ptr [rbp+9E10h+var_9880+8], rax
 * 0000000180049FE4: movups  xmm0, [rbp+9E10h+var_9880]
 * 0000000180049FEB: movups  [rbp+9E10h+var_7D70], xmm0
 * 0000000180049FF2: mov     dword ptr [rbp+9E10h+var_7D60], 5
 * 0000000180049FFC: mov     dword ptr [rbp+9E10h+var_7D60+4], esi
 * 000000018004A002: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A007: movups  xmm0, [rbp+9E10h+var_7D60]
 * 000000018004A00E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A013: call    sub_180043E00
 * 000000018004A018: mov     r8, rax
 * 000000018004A01B: mov     r9d, r12d
 * 000000018004A01E: mov     edx, 15Ah
 * 000000018004A023: lea     rcx, [rbp+9E10h+var_4A80]; Src
 * 000000018004A02A: call    sub_1800CF2C8
 * 000000018004A02F: nop
 * 000000018004A030: mov     r8, rax
 * 000000018004A033: mov     rdx, r13
 * 000000018004A036: lea     rcx, [rbp+9E10h+var_4AA0]
 * 000000018004A03D: call    sub_180043BDC
 * 000000018004A042: nop
 * 000000018004A043: lea     r8, aPixel; "/Pixel"
 * 000000018004A04A: mov     rdx, rax
 * 000000018004A04D: lea     rcx, [rbp+9E10h+var_4AC0]
 * 000000018004A054: call    sub_18002C218
 * 000000018004A059: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A05E: mov     rcx, rax
 * 000000018004A061: call    sub_1800CF3A0
 * 000000018004A066: mov     cs:byte_180218BEC, al
 * 000000018004A06C: lea     rcx, [rbp+9E10h+var_4AA0]; void *
 * 000000018004A073: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A078: nop
 * 000000018004A079: lea     rcx, [rbp+9E10h+var_4A80]; void *
 * 000000018004A080: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A085: nop
 * 000000018004A086: lea     rcx, dword_180218BF0
 * 000000018004A08D: call    _Init_thread_footer
 * 000000018004A092: mov     rax, [rdi+rbx*8]
 * 000000018004A096: mov     eax, [r15+rax]
 * 000000018004A09A: cmp     cs:dword_180218BF8, eax
 * 000000018004A0A0: jle     loc_18004A189
 * 000000018004A0A6: lea     rcx, dword_180218BF8
 * 000000018004A0AD: call    _Init_thread_header
 * 000000018004A0B2: cmp     cs:dword_180218BF8, r14d
 * 000000018004A0B9: jnz     loc_18004A189
 * 000000018004A0BF: lea     rax, unk_180160930
 * 000000018004A0C6: mov     qword ptr [rbp+9E10h+var_9870], rax
 * 000000018004A0CD: lea     rax, unk_18016705C
 * 000000018004A0D4: mov     qword ptr [rbp+9E10h+var_9870+8], rax
 * 000000018004A0DB: movups  xmm0, [rbp+9E10h+var_9870]
 * 000000018004A0E2: movups  [rbp+9E10h+var_7D50], xmm0
 * 000000018004A0E9: mov     dword ptr [rbp+9E10h+var_7D40], 5
 * 000000018004A0F3: mov     dword ptr [rbp+9E10h+var_7D40+4], esi
 * 000000018004A0F9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A0FE: movups  xmm0, [rbp+9E10h+var_7D40]
 * 000000018004A105: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A10A: call    sub_180043E00
 * 000000018004A10F: mov     r8, rax
 * 000000018004A112: mov     r9d, r12d
 * 000000018004A115: mov     edx, 160h
 * 000000018004A11A: lea     rcx, [rbp+9E10h+var_4A20]; Src
 * 000000018004A121: call    sub_1800CF2C8
 * 000000018004A126: nop
 * 000000018004A127: mov     r8, rax
 * 000000018004A12A: mov     rdx, r13
 * 000000018004A12D: lea     rcx, [rbp+9E10h+var_4A40]
 * 000000018004A134: call    sub_180043BDC
 * 000000018004A139: nop
 * 000000018004A13A: lea     r8, aPixel; "/Pixel"
 * 000000018004A141: mov     rdx, rax
 * 000000018004A144: lea     rcx, [rbp+9E10h+var_4A60]
 * 000000018004A14B: call    sub_18002C218
 * 000000018004A150: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A155: mov     rcx, rax
 * 000000018004A158: call    sub_1800CF3A0
 * 000000018004A15D: mov     cs:byte_180218BF4, al
 * 000000018004A163: lea     rcx, [rbp+9E10h+var_4A40]; void *
 * 000000018004A16A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A16F: nop
 * 000000018004A170: lea     rcx, [rbp+9E10h+var_4A20]; void *
 * 000000018004A177: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A17C: nop
 * 000000018004A17D: lea     rcx, dword_180218BF8
 * 000000018004A184: call    _Init_thread_footer
 * 000000018004A189: mov     rax, [rdi+rbx*8]
 * 000000018004A18D: mov     eax, [r15+rax]
 * 000000018004A191: cmp     cs:dword_180218C00, eax
 * 000000018004A197: jle     loc_18004A280
 * 000000018004A19D: lea     rcx, dword_180218C00
 * 000000018004A1A4: call    _Init_thread_header
 * 000000018004A1A9: cmp     cs:dword_180218C00, r14d
 * 000000018004A1B0: jnz     loc_18004A280
 * 000000018004A1B6: lea     rax, unk_180160930
 * 000000018004A1BD: mov     qword ptr [rbp+9E10h+var_9860], rax
 * 000000018004A1C4: lea     rax, unk_18016705C
 * 000000018004A1CB: mov     qword ptr [rbp+9E10h+var_9860+8], rax
 * 000000018004A1D2: movups  xmm0, [rbp+9E10h+var_9860]
 * 000000018004A1D9: movups  [rbp+9E10h+var_7D30], xmm0
 * 000000018004A1E0: mov     dword ptr [rbp+9E10h+var_7D20], 5
 * 000000018004A1EA: mov     dword ptr [rbp+9E10h+var_7D20+4], esi
 * 000000018004A1F0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A1F5: movups  xmm0, [rbp+9E10h+var_7D20]
 * 000000018004A1FC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A201: call    sub_180043E00
 * 000000018004A206: mov     r8, rax
 * 000000018004A209: mov     r9d, r12d
 * 000000018004A20C: mov     edx, 162h
 * 000000018004A211: lea     rcx, [rbp+9E10h+var_49C0]; Src
 * 000000018004A218: call    sub_1800CF2C8
 * 000000018004A21D: nop
 * 000000018004A21E: mov     r8, rax
 * 000000018004A221: mov     rdx, r13
 * 000000018004A224: lea     rcx, [rbp+9E10h+var_49E0]
 * 000000018004A22B: call    sub_180043BDC
 * 000000018004A230: nop
 * 000000018004A231: lea     r8, aPixel; "/Pixel"
 * 000000018004A238: mov     rdx, rax
 * 000000018004A23B: lea     rcx, [rbp+9E10h+var_4A00]
 * 000000018004A242: call    sub_18002C218
 * 000000018004A247: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A24C: mov     rcx, rax
 * 000000018004A24F: call    sub_1800CF3A0
 * 000000018004A254: mov     cs:byte_180218BFC, al
 * 000000018004A25A: lea     rcx, [rbp+9E10h+var_49E0]; void *
 * 000000018004A261: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A266: nop
 * 000000018004A267: lea     rcx, [rbp+9E10h+var_49C0]; void *
 * 000000018004A26E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A273: nop
 * 000000018004A274: lea     rcx, dword_180218C00
 * 000000018004A27B: call    _Init_thread_footer
 * 000000018004A280: mov     rax, [rdi+rbx*8]
 * 000000018004A284: mov     eax, [r15+rax]
 * 000000018004A288: cmp     cs:dword_180218C08, eax
 * 000000018004A28E: jle     loc_18004A377
 * 000000018004A294: lea     rcx, dword_180218C08
 * 000000018004A29B: call    _Init_thread_header
 * 000000018004A2A0: cmp     cs:dword_180218C08, r14d
 * 000000018004A2A7: jnz     loc_18004A377
 * 000000018004A2AD: lea     rax, unk_18016A540
 * 000000018004A2B4: mov     qword ptr [rbp+9E10h+var_9850], rax
 * 000000018004A2BB: lea     rax, unk_180170DFC
 * 000000018004A2C2: mov     qword ptr [rbp+9E10h+var_9850+8], rax
 * 000000018004A2C9: movups  xmm0, [rbp+9E10h+var_9850]
 * 000000018004A2D0: movups  [rbp+9E10h+var_7D10], xmm0
 * 000000018004A2D7: mov     dword ptr [rbp+9E10h+var_7D00], 5
 * 000000018004A2E1: mov     dword ptr [rbp+9E10h+var_7D00+4], esi
 * 000000018004A2E7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A2EC: movups  xmm0, [rbp+9E10h+var_7D00]
 * 000000018004A2F3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A2F8: call    sub_180043E00
 * 000000018004A2FD: mov     r8, rax
 * 000000018004A300: mov     r9d, r12d
 * 000000018004A303: mov     edx, 168h
 * 000000018004A308: lea     rcx, [rbp+9E10h+var_4960]; Src
 * 000000018004A30F: call    sub_1800CF2C8
 * 000000018004A314: nop
 * 000000018004A315: mov     r8, rax
 * 000000018004A318: mov     rdx, r13
 * 000000018004A31B: lea     rcx, [rbp+9E10h+var_4980]
 * 000000018004A322: call    sub_180043BDC
 * 000000018004A327: nop
 * 000000018004A328: lea     r8, aPixel; "/Pixel"
 * 000000018004A32F: mov     rdx, rax
 * 000000018004A332: lea     rcx, [rbp+9E10h+var_49A0]
 * 000000018004A339: call    sub_18002C218
 * 000000018004A33E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A343: mov     rcx, rax
 * 000000018004A346: call    sub_1800CF3A0
 * 000000018004A34B: mov     cs:byte_180218C04, al
 * 000000018004A351: lea     rcx, [rbp+9E10h+var_4980]; void *
 * 000000018004A358: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A35D: nop
 * 000000018004A35E: lea     rcx, [rbp+9E10h+var_4960]; void *
 * 000000018004A365: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A36A: nop
 * 000000018004A36B: lea     rcx, dword_180218C08
 * 000000018004A372: call    _Init_thread_footer
 * 000000018004A377: mov     rax, [rdi+rbx*8]
 * 000000018004A37B: mov     eax, [r15+rax]
 * 000000018004A37F: cmp     cs:dword_180218C10, eax
 * 000000018004A385: jle     loc_18004A46E
 * 000000018004A38B: lea     rcx, dword_180218C10
 * 000000018004A392: call    _Init_thread_header
 * 000000018004A397: cmp     cs:dword_180218C10, r14d
 * 000000018004A39E: jnz     loc_18004A46E
 * 000000018004A3A4: lea     rax, unk_18016A540
 * 000000018004A3AB: mov     qword ptr [rbp+9E10h+var_9840], rax
 * 000000018004A3B2: lea     rax, unk_180170DFC
 * 000000018004A3B9: mov     qword ptr [rbp+9E10h+var_9840+8], rax
 * 000000018004A3C0: movups  xmm0, [rbp+9E10h+var_9840]
 * 000000018004A3C7: movups  [rbp+9E10h+var_7CF0], xmm0
 * 000000018004A3CE: mov     dword ptr [rbp+9E10h+var_7CE0], 5
 * 000000018004A3D8: mov     dword ptr [rbp+9E10h+var_7CE0+4], esi
 * 000000018004A3DE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A3E3: movups  xmm0, [rbp+9E10h+var_7CE0]
 * 000000018004A3EA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A3EF: call    sub_180043E00
 * 000000018004A3F4: mov     r8, rax
 * 000000018004A3F7: mov     r9d, r12d
 * 000000018004A3FA: mov     edx, 16Ah
 * 000000018004A3FF: lea     rcx, [rbp+9E10h+var_4900]; Src
 * 000000018004A406: call    sub_1800CF2C8
 * 000000018004A40B: nop
 * 000000018004A40C: mov     r8, rax
 * 000000018004A40F: mov     rdx, r13
 * 000000018004A412: lea     rcx, [rbp+9E10h+var_4920]
 * 000000018004A419: call    sub_180043BDC
 * 000000018004A41E: nop
 * 000000018004A41F: lea     r8, aPixel; "/Pixel"
 * 000000018004A426: mov     rdx, rax
 * 000000018004A429: lea     rcx, [rbp+9E10h+var_4940]
 * 000000018004A430: call    sub_18002C218
 * 000000018004A435: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A43A: mov     rcx, rax
 * 000000018004A43D: call    sub_1800CF3A0
 * 000000018004A442: mov     cs:byte_180218C0C, al
 * 000000018004A448: lea     rcx, [rbp+9E10h+var_4920]; void *
 * 000000018004A44F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A454: nop
 * 000000018004A455: lea     rcx, [rbp+9E10h+var_4900]; void *
 * 000000018004A45C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A461: nop
 * 000000018004A462: lea     rcx, dword_180218C10
 * 000000018004A469: call    _Init_thread_footer
 * 000000018004A46E: mov     rax, [rdi+rbx*8]
 * 000000018004A472: mov     eax, [r15+rax]
 * 000000018004A476: cmp     cs:dword_180218C18, eax
 * 000000018004A47C: jle     loc_18004A565
 * 000000018004A482: lea     rcx, dword_180218C18
 * 000000018004A489: call    _Init_thread_header
 * 000000018004A48E: cmp     cs:dword_180218C18, r14d
 * 000000018004A495: jnz     loc_18004A565
 * 000000018004A49B: lea     rax, unk_180170E00
 * 000000018004A4A2: mov     qword ptr [rbp+9E10h+var_9830], rax
 * 000000018004A4A9: lea     rax, unk_180177708
 * 000000018004A4B0: mov     qword ptr [rbp+9E10h+var_9830+8], rax
 * 000000018004A4B7: movups  xmm0, [rbp+9E10h+var_9830]
 * 000000018004A4BE: movups  [rbp+9E10h+var_7CD0], xmm0
 * 000000018004A4C5: mov     dword ptr [rbp+9E10h+var_7CC0], 5
 * 000000018004A4CF: mov     dword ptr [rbp+9E10h+var_7CC0+4], esi
 * 000000018004A4D5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A4DA: movups  xmm0, [rbp+9E10h+var_7CC0]
 * 000000018004A4E1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A4E6: call    sub_180043E00
 * 000000018004A4EB: mov     r8, rax
 * 000000018004A4EE: mov     r9d, r12d
 * 000000018004A4F1: mov     edx, 170h
 * 000000018004A4F6: lea     rcx, [rbp+9E10h+var_48A0]; Src
 * 000000018004A4FD: call    sub_1800CF2C8
 * 000000018004A502: nop
 * 000000018004A503: mov     r8, rax
 * 000000018004A506: mov     rdx, r13
 * 000000018004A509: lea     rcx, [rbp+9E10h+var_48C0]
 * 000000018004A510: call    sub_180043BDC
 * 000000018004A515: nop
 * 000000018004A516: lea     r8, aPixel; "/Pixel"
 * 000000018004A51D: mov     rdx, rax
 * 000000018004A520: lea     rcx, [rbp+9E10h+var_48E0]
 * 000000018004A527: call    sub_18002C218
 * 000000018004A52C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A531: mov     rcx, rax
 * 000000018004A534: call    sub_1800CF3A0
 * 000000018004A539: mov     cs:byte_180218C14, al
 * 000000018004A53F: lea     rcx, [rbp+9E10h+var_48C0]; void *
 * 000000018004A546: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A54B: nop
 * 000000018004A54C: lea     rcx, [rbp+9E10h+var_48A0]; void *
 * 000000018004A553: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A558: nop
 * 000000018004A559: lea     rcx, dword_180218C18
 * 000000018004A560: call    _Init_thread_footer
 * 000000018004A565: mov     rax, [rdi+rbx*8]
 * 000000018004A569: mov     eax, [r15+rax]
 * 000000018004A56D: cmp     cs:dword_180218C20, eax
 * 000000018004A573: jle     loc_18004A65C
 * 000000018004A579: lea     rcx, dword_180218C20
 * 000000018004A580: call    _Init_thread_header
 * 000000018004A585: cmp     cs:dword_180218C20, r14d
 * 000000018004A58C: jnz     loc_18004A65C
 * 000000018004A592: lea     rax, unk_180170E00
 * 000000018004A599: mov     qword ptr [rbp+9E10h+var_9820], rax
 * 000000018004A5A0: lea     rax, unk_180177708
 * 000000018004A5A7: mov     qword ptr [rbp+9E10h+var_9820+8], rax
 * 000000018004A5AE: movups  xmm0, [rbp+9E10h+var_9820]
 * 000000018004A5B5: movups  [rbp+9E10h+var_7CB0], xmm0
 * 000000018004A5BC: mov     dword ptr [rbp+9E10h+var_7CA0], 5
 * 000000018004A5C6: mov     dword ptr [rbp+9E10h+var_7CA0+4], esi
 * 000000018004A5CC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A5D1: movups  xmm0, [rbp+9E10h+var_7CA0]
 * 000000018004A5D8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A5DD: call    sub_180043E00
 * 000000018004A5E2: mov     r8, rax
 * 000000018004A5E5: mov     r9d, r12d
 * 000000018004A5E8: mov     edx, 172h
 * 000000018004A5ED: lea     rcx, [rbp+9E10h+var_4840]; Src
 * 000000018004A5F4: call    sub_1800CF2C8
 * 000000018004A5F9: nop
 * 000000018004A5FA: mov     r8, rax
 * 000000018004A5FD: mov     rdx, r13
 * 000000018004A600: lea     rcx, [rbp+9E10h+var_4860]
 * 000000018004A607: call    sub_180043BDC
 * 000000018004A60C: nop
 * 000000018004A60D: lea     r8, aPixel; "/Pixel"
 * 000000018004A614: mov     rdx, rax
 * 000000018004A617: lea     rcx, [rbp+9E10h+var_4880]
 * 000000018004A61E: call    sub_18002C218
 * 000000018004A623: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A628: mov     rcx, rax
 * 000000018004A62B: call    sub_1800CF3A0
 * 000000018004A630: mov     cs:byte_180218C1C, al
 * 000000018004A636: lea     rcx, [rbp+9E10h+var_4860]; void *
 * 000000018004A63D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A642: nop
 * 000000018004A643: lea     rcx, [rbp+9E10h+var_4840]; void *
 * 000000018004A64A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A64F: nop
 * 000000018004A650: lea     rcx, dword_180218C20
 * 000000018004A657: call    _Init_thread_footer
 * 000000018004A65C: mov     rax, [rdi+rbx*8]
 * 000000018004A660: mov     eax, [r15+rax]
 * 000000018004A664: cmp     cs:dword_180218C28, eax
 * 000000018004A66A: jle     loc_18004A753
 * 000000018004A670: lea     rcx, dword_180218C28
 * 000000018004A677: call    _Init_thread_header
 * 000000018004A67C: cmp     cs:dword_180218C28, r14d
 * 000000018004A683: jnz     loc_18004A753
 * 000000018004A689: lea     rax, unk_18017AD30
 * 000000018004A690: mov     qword ptr [rbp+9E10h+var_9810], rax
 * 000000018004A697: lea     rax, unk_1801817EC
 * 000000018004A69E: mov     qword ptr [rbp+9E10h+var_9810+8], rax
 * 000000018004A6A5: movups  xmm0, [rbp+9E10h+var_9810]
 * 000000018004A6AC: movups  [rbp+9E10h+var_7C90], xmm0
 * 000000018004A6B3: mov     dword ptr [rbp+9E10h+var_7C80], 5
 * 000000018004A6BD: mov     dword ptr [rbp+9E10h+var_7C80+4], esi
 * 000000018004A6C3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A6C8: movups  xmm0, [rbp+9E10h+var_7C80]
 * 000000018004A6CF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A6D4: call    sub_180043E00
 * 000000018004A6D9: mov     r8, rax
 * 000000018004A6DC: mov     r9d, r12d
 * 000000018004A6DF: mov     edx, 178h
 * 000000018004A6E4: lea     rcx, [rbp+9E10h+var_47E0]; Src
 * 000000018004A6EB: call    sub_1800CF2C8
 * 000000018004A6F0: nop
 * 000000018004A6F1: mov     r8, rax
 * 000000018004A6F4: mov     rdx, r13
 * 000000018004A6F7: lea     rcx, [rbp+9E10h+var_4800]
 * 000000018004A6FE: call    sub_180043BDC
 * 000000018004A703: nop
 * 000000018004A704: lea     r8, aPixel; "/Pixel"
 * 000000018004A70B: mov     rdx, rax
 * 000000018004A70E: lea     rcx, [rbp+9E10h+var_4820]
 * 000000018004A715: call    sub_18002C218
 * 000000018004A71A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A71F: mov     rcx, rax
 * 000000018004A722: call    sub_1800CF3A0
 * 000000018004A727: mov     cs:byte_180218C24, al
 * 000000018004A72D: lea     rcx, [rbp+9E10h+var_4800]; void *
 * 000000018004A734: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A739: nop
 * 000000018004A73A: lea     rcx, [rbp+9E10h+var_47E0]; void *
 * 000000018004A741: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A746: nop
 * 000000018004A747: lea     rcx, dword_180218C28
 * 000000018004A74E: call    _Init_thread_footer
 * 000000018004A753: mov     rax, [rdi+rbx*8]
 * 000000018004A757: mov     eax, [r15+rax]
 * 000000018004A75B: cmp     cs:dword_180218C30, eax
 * 000000018004A761: jle     loc_18004A84A
 * 000000018004A767: lea     rcx, dword_180218C30
 * 000000018004A76E: call    _Init_thread_header
 * 000000018004A773: cmp     cs:dword_180218C30, r14d
 * 000000018004A77A: jnz     loc_18004A84A
 * 000000018004A780: lea     rax, unk_18017AD30
 * 000000018004A787: mov     qword ptr [rbp+9E10h+var_9800], rax
 * 000000018004A78E: lea     rax, unk_1801817EC
 * 000000018004A795: mov     qword ptr [rbp+9E10h+var_9800+8], rax
 * 000000018004A79C: movups  xmm0, [rbp+9E10h+var_9800]
 * 000000018004A7A3: movups  [rbp+9E10h+var_7C70], xmm0
 * 000000018004A7AA: mov     dword ptr [rbp+9E10h+var_7C60], 5
 * 000000018004A7B4: mov     dword ptr [rbp+9E10h+var_7C60+4], esi
 * 000000018004A7BA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A7BF: movups  xmm0, [rbp+9E10h+var_7C60]
 * 000000018004A7C6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A7CB: call    sub_180043E00
 * 000000018004A7D0: mov     r8, rax
 * 000000018004A7D3: mov     r9d, r12d
 * 000000018004A7D6: mov     edx, 17Ah
 * 000000018004A7DB: lea     rcx, [rbp+9E10h+var_4780]; Src
 * 000000018004A7E2: call    sub_1800CF2C8
 * 000000018004A7E7: nop
 * 000000018004A7E8: mov     r8, rax
 * 000000018004A7EB: mov     rdx, r13
 * 000000018004A7EE: lea     rcx, [rbp+9E10h+var_47A0]
 * 000000018004A7F5: call    sub_180043BDC
 * 000000018004A7FA: nop
 * 000000018004A7FB: lea     r8, aPixel; "/Pixel"
 * 000000018004A802: mov     rdx, rax
 * 000000018004A805: lea     rcx, [rbp+9E10h+var_47C0]
 * 000000018004A80C: call    sub_18002C218
 * 000000018004A811: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A816: mov     rcx, rax
 * 000000018004A819: call    sub_1800CF3A0
 * 000000018004A81E: mov     cs:byte_180218C2C, al
 * 000000018004A824: lea     rcx, [rbp+9E10h+var_47A0]; void *
 * 000000018004A82B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A830: nop
 * 000000018004A831: lea     rcx, [rbp+9E10h+var_4780]; void *
 * 000000018004A838: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A83D: nop
 * 000000018004A83E: lea     rcx, dword_180218C30
 * 000000018004A845: call    _Init_thread_footer
 * 000000018004A84A: mov     rax, [rdi+rbx*8]
 * 000000018004A84E: mov     eax, [r15+rax]
 * 000000018004A852: cmp     cs:dword_180218C38, eax
 * 000000018004A858: jle     loc_18004A941
 * 000000018004A85E: lea     rcx, dword_180218C38
 * 000000018004A865: call    _Init_thread_header
 * 000000018004A86A: cmp     cs:dword_180218C38, r14d
 * 000000018004A871: jnz     loc_18004A941
 * 000000018004A877: lea     rax, unk_180160930
 * 000000018004A87E: mov     qword ptr [rbp+9E10h+var_97F0], rax
 * 000000018004A885: lea     rax, unk_18016705C
 * 000000018004A88C: mov     qword ptr [rbp+9E10h+var_97F0+8], rax
 * 000000018004A893: movups  xmm0, [rbp+9E10h+var_97F0]
 * 000000018004A89A: movups  [rbp+9E10h+var_7C50], xmm0
 * 000000018004A8A1: mov     dword ptr [rbp+9E10h+var_7C40], 5
 * 000000018004A8AB: mov     dword ptr [rbp+9E10h+var_7C40+4], esi
 * 000000018004A8B1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A8B6: movups  xmm0, [rbp+9E10h+var_7C40]
 * 000000018004A8BD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A8C2: call    sub_180043E00
 * 000000018004A8C7: mov     r8, rax
 * 000000018004A8CA: mov     r9d, r12d
 * 000000018004A8CD: mov     edx, 180h
 * 000000018004A8D2: lea     rcx, [rbp+9E10h+var_4720]; Src
 * 000000018004A8D9: call    sub_1800CF2C8
 * 000000018004A8DE: nop
 * 000000018004A8DF: mov     r8, rax
 * 000000018004A8E2: mov     rdx, r13
 * 000000018004A8E5: lea     rcx, [rbp+9E10h+var_4740]
 * 000000018004A8EC: call    sub_180043BDC
 * 000000018004A8F1: nop
 * 000000018004A8F2: lea     r8, aPixel; "/Pixel"
 * 000000018004A8F9: mov     rdx, rax
 * 000000018004A8FC: lea     rcx, [rbp+9E10h+var_4760]
 * 000000018004A903: call    sub_18002C218
 * 000000018004A908: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A90D: mov     rcx, rax
 * 000000018004A910: call    sub_1800CF3A0
 * 000000018004A915: mov     cs:byte_180218C34, al
 * 000000018004A91B: lea     rcx, [rbp+9E10h+var_4740]; void *
 * 000000018004A922: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A927: nop
 * 000000018004A928: lea     rcx, [rbp+9E10h+var_4720]; void *
 * 000000018004A92F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A934: nop
 * 000000018004A935: lea     rcx, dword_180218C38
 * 000000018004A93C: call    _Init_thread_footer
 * 000000018004A941: mov     rax, [rdi+rbx*8]
 * 000000018004A945: mov     eax, [r15+rax]
 * 000000018004A949: cmp     cs:dword_180218C40, eax
 * 000000018004A94F: jle     loc_18004AA38
 * 000000018004A955: lea     rcx, dword_180218C40
 * 000000018004A95C: call    _Init_thread_header
 * 000000018004A961: cmp     cs:dword_180218C40, r14d
 * 000000018004A968: jnz     loc_18004AA38
 * 000000018004A96E: lea     rax, unk_180160930
 * 000000018004A975: mov     qword ptr [rbp+9E10h+var_97E0], rax
 * 000000018004A97C: lea     rax, unk_18016705C
 * 000000018004A983: mov     qword ptr [rbp+9E10h+var_97E0+8], rax
 * 000000018004A98A: movups  xmm0, [rbp+9E10h+var_97E0]
 * 000000018004A991: movups  [rbp+9E10h+var_7C30], xmm0
 * 000000018004A998: mov     dword ptr [rbp+9E10h+var_7C20], 5
 * 000000018004A9A2: mov     dword ptr [rbp+9E10h+var_7C20+4], esi
 * 000000018004A9A8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A9AD: movups  xmm0, [rbp+9E10h+var_7C20]
 * 000000018004A9B4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A9B9: call    sub_180043E00
 * 000000018004A9BE: mov     r8, rax
 * 000000018004A9C1: mov     r9d, r12d
 * 000000018004A9C4: mov     edx, 182h
 * 000000018004A9C9: lea     rcx, [rbp+9E10h+var_46C0]; Src
 * 000000018004A9D0: call    sub_1800CF2C8
 * 000000018004A9D5: nop
 * 000000018004A9D6: mov     r8, rax
 * 000000018004A9D9: mov     rdx, r13
 * 000000018004A9DC: lea     rcx, [rbp+9E10h+var_46E0]
 * 000000018004A9E3: call    sub_180043BDC
 * 000000018004A9E8: nop
 * 000000018004A9E9: lea     r8, aPixel; "/Pixel"
 * 000000018004A9F0: mov     rdx, rax
 * 000000018004A9F3: lea     rcx, [rbp+9E10h+var_4700]
 * 000000018004A9FA: call    sub_18002C218
 * 000000018004A9FF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004AA04: mov     rcx, rax
 * 000000018004AA07: call    sub_1800CF3A0
 * 000000018004AA0C: mov     cs:byte_180218C3C, al
 * 000000018004AA12: lea     rcx, [rbp+9E10h+var_46E0]; void *
 * 000000018004AA19: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AA1E: nop
 * 000000018004AA1F: lea     rcx, [rbp+9E10h+var_46C0]; void *
 * 000000018004AA26: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AA2B: nop
 * 000000018004AA2C: lea     rcx, dword_180218C40
 * 000000018004AA33: call    _Init_thread_footer
 * 000000018004AA38: mov     rax, [rdi+rbx*8]
 * 000000018004AA3C: mov     eax, [r15+rax]
 * 000000018004AA40: cmp     cs:dword_180218C48, eax
 * 000000018004AA46: jle     loc_18004AB2F
 * 000000018004AA4C: lea     rcx, dword_180218C48
 * 000000018004AA53: call    _Init_thread_header
 * 000000018004AA58: cmp     cs:dword_180218C48, r14d
 * 000000018004AA5F: jnz     loc_18004AB2F
 * 000000018004AA65: lea     rax, unk_18016A540
 * 000000018004AA6C: mov     qword ptr [rbp+9E10h+var_97D0], rax
 * 000000018004AA73: lea     rax, unk_180170DFC
 * 000000018004AA7A: mov     qword ptr [rbp+9E10h+var_97D0+8], rax
 * 000000018004AA81: movups  xmm0, [rbp+9E10h+var_97D0]
 * 000000018004AA88: movups  [rbp+9E10h+var_7C10], xmm0
 * 000000018004AA8F: mov     dword ptr [rbp+9E10h+var_7C00], 5
 * 000000018004AA99: mov     dword ptr [rbp+9E10h+var_7C00+4], esi
 * 000000018004AA9F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AAA4: movups  xmm0, [rbp+9E10h+var_7C00]
 * 000000018004AAAB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004AAB0: call    sub_180043E00
 * 000000018004AAB5: mov     r8, rax
 * 000000018004AAB8: mov     r9d, r12d
 * 000000018004AABB: mov     edx, 188h
 * 000000018004AAC0: lea     rcx, [rbp+9E10h+var_4660]; Src
 * 000000018004AAC7: call    sub_1800CF2C8
 * 000000018004AACC: nop
 * 000000018004AACD: mov     r8, rax
 * 000000018004AAD0: mov     rdx, r13
 * 000000018004AAD3: lea     rcx, [rbp+9E10h+var_4680]
 * 000000018004AADA: call    sub_180043BDC
 * 000000018004AADF: nop
 * 000000018004AAE0: lea     r8, aPixel; "/Pixel"
 * 000000018004AAE7: mov     rdx, rax
 * 000000018004AAEA: lea     rcx, [rbp+9E10h+var_46A0]
 * 000000018004AAF1: call    sub_18002C218
 * 000000018004AAF6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004AAFB: mov     rcx, rax
 * 000000018004AAFE: call    sub_1800CF3A0
 * 000000018004AB03: mov     cs:byte_180218C44, al
 * 000000018004AB09: lea     rcx, [rbp+9E10h+var_4680]; void *
 * 000000018004AB10: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AB15: nop
 * 000000018004AB16: lea     rcx, [rbp+9E10h+var_4660]; void *
 * 000000018004AB1D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AB22: nop
 * 000000018004AB23: lea     rcx, dword_180218C48
 * 000000018004AB2A: call    _Init_thread_footer
 * 000000018004AB2F: mov     rax, [rdi+rbx*8]
 * 000000018004AB33: mov     eax, [r15+rax]
 * 000000018004AB37: cmp     cs:dword_180218C50, eax
 * 000000018004AB3D: jle     loc_18004AC26
 * 000000018004AB43: lea     rcx, dword_180218C50
 * 000000018004AB4A: call    _Init_thread_header
 * 000000018004AB4F: cmp     cs:dword_180218C50, r14d
 * 000000018004AB56: jnz     loc_18004AC26
 * 000000018004AB5C: lea     rax, unk_18016A540
 * 000000018004AB63: mov     qword ptr [rbp+9E10h+var_97C0], rax
 * 000000018004AB6A: lea     rax, unk_180170DFC
 * 000000018004AB71: mov     qword ptr [rbp+9E10h+var_97C0+8], rax
 * 000000018004AB78: movups  xmm0, [rbp+9E10h+var_97C0]
 * 000000018004AB7F: movups  [rbp+9E10h+var_7BF0], xmm0
 * 000000018004AB86: mov     dword ptr [rbp+9E10h+var_7BE0], 5
 * 000000018004AB90: mov     dword ptr [rbp+9E10h+var_7BE0+4], esi
 * 000000018004AB96: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AB9B: movups  xmm0, [rbp+9E10h+var_7BE0]
 * 000000018004ABA2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004ABA7: call    sub_180043E00
 * 000000018004ABAC: mov     r8, rax
 * 000000018004ABAF: mov     r9d, r12d
 * 000000018004ABB2: mov     edx, 18Ah
 * 000000018004ABB7: lea     rcx, [rbp+9E10h+var_4600]; Src
 * 000000018004ABBE: call    sub_1800CF2C8
 * 000000018004ABC3: nop
 * 000000018004ABC4: mov     r8, rax
 * 000000018004ABC7: mov     rdx, r13
 * 000000018004ABCA: lea     rcx, [rbp+9E10h+var_4620]
 * 000000018004ABD1: call    sub_180043BDC
 * 000000018004ABD6: nop
 * 000000018004ABD7: lea     r8, aPixel; "/Pixel"
 * 000000018004ABDE: mov     rdx, rax
 * 000000018004ABE1: lea     rcx, [rbp+9E10h+var_4640]
 * 000000018004ABE8: call    sub_18002C218
 * 000000018004ABED: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ABF2: mov     rcx, rax
 * 000000018004ABF5: call    sub_1800CF3A0
 * 000000018004ABFA: mov     cs:byte_180218C4C, al
 * 000000018004AC00: lea     rcx, [rbp+9E10h+var_4620]; void *
 * 000000018004AC07: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AC0C: nop
 * 000000018004AC0D: lea     rcx, [rbp+9E10h+var_4600]; void *
 * 000000018004AC14: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AC19: nop
 * 000000018004AC1A: lea     rcx, dword_180218C50
 * 000000018004AC21: call    _Init_thread_footer
 * 000000018004AC26: mov     rax, [rdi+rbx*8]
 * 000000018004AC2A: mov     eax, [r15+rax]
 * 000000018004AC2E: cmp     cs:dword_180218C58, eax
 * 000000018004AC34: jle     loc_18004AD1D
 * 000000018004AC3A: lea     rcx, dword_180218C58
 * 000000018004AC41: call    _Init_thread_header
 * 000000018004AC46: cmp     cs:dword_180218C58, r14d
 * 000000018004AC4D: jnz     loc_18004AD1D
 * 000000018004AC53: lea     rax, unk_180170E00
 * 000000018004AC5A: mov     qword ptr [rbp+9E10h+var_97B0], rax
 * 000000018004AC61: lea     rax, unk_180177708
 * 000000018004AC68: mov     qword ptr [rbp+9E10h+var_97B0+8], rax
 * 000000018004AC6F: movups  xmm0, [rbp+9E10h+var_97B0]
 * 000000018004AC76: movups  [rbp+9E10h+var_7BD0], xmm0
 * 000000018004AC7D: mov     dword ptr [rbp+9E10h+var_7BC0], 5
 * 000000018004AC87: mov     dword ptr [rbp+9E10h+var_7BC0+4], esi
 * 000000018004AC8D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AC92: movups  xmm0, [rbp+9E10h+var_7BC0]
 * 000000018004AC99: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004AC9E: call    sub_180043E00
 * 000000018004ACA3: mov     r8, rax
 * 000000018004ACA6: mov     r9d, r12d
 * 000000018004ACA9: mov     edx, 190h
 * 000000018004ACAE: lea     rcx, [rbp+9E10h+var_45A0]; Src
 * 000000018004ACB5: call    sub_1800CF2C8
 * 000000018004ACBA: nop
 * 000000018004ACBB: mov     r8, rax
 * 000000018004ACBE: mov     rdx, r13
 * 000000018004ACC1: lea     rcx, [rbp+9E10h+var_45C0]
 * 000000018004ACC8: call    sub_180043BDC
 * 000000018004ACCD: nop
 * 000000018004ACCE: lea     r8, aPixel; "/Pixel"
 * 000000018004ACD5: mov     rdx, rax
 * 000000018004ACD8: lea     rcx, [rbp+9E10h+var_45E0]
 * 000000018004ACDF: call    sub_18002C218
 * 000000018004ACE4: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ACE9: mov     rcx, rax
 * 000000018004ACEC: call    sub_1800CF3A0
 * 000000018004ACF1: mov     cs:byte_180218C54, al
 * 000000018004ACF7: lea     rcx, [rbp+9E10h+var_45C0]; void *
 * 000000018004ACFE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AD03: nop
 * 000000018004AD04: lea     rcx, [rbp+9E10h+var_45A0]; void *
 * 000000018004AD0B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AD10: nop
 * 000000018004AD11: lea     rcx, dword_180218C58
 * 000000018004AD18: call    _Init_thread_footer
 * 000000018004AD1D: mov     rax, [rdi+rbx*8]
 * 000000018004AD21: mov     eax, [r15+rax]
 * 000000018004AD25: cmp     cs:dword_180218C60, eax
 * 000000018004AD2B: jle     loc_18004AE14
 * 000000018004AD31: lea     rcx, dword_180218C60
 * 000000018004AD38: call    _Init_thread_header
 * 000000018004AD3D: cmp     cs:dword_180218C60, r14d
 * 000000018004AD44: jnz     loc_18004AE14
 * 000000018004AD4A: lea     rax, unk_180170E00
 * 000000018004AD51: mov     qword ptr [rbp+9E10h+var_97A0], rax
 * 000000018004AD58: lea     rax, unk_180177708
 * 000000018004AD5F: mov     qword ptr [rbp+9E10h+var_97A0+8], rax
 * 000000018004AD66: movups  xmm0, [rbp+9E10h+var_97A0]
 * 000000018004AD6D: movups  [rbp+9E10h+var_7BB0], xmm0
 * 000000018004AD74: mov     dword ptr [rbp+9E10h+var_7BA0], 5
 * 000000018004AD7E: mov     dword ptr [rbp+9E10h+var_7BA0+4], esi
 * 000000018004AD84: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AD89: movups  xmm0, [rbp+9E10h+var_7BA0]
 * 000000018004AD90: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004AD95: call    sub_180043E00
 * 000000018004AD9A: mov     r8, rax
 * 000000018004AD9D: mov     r9d, r12d
 * 000000018004ADA0: mov     edx, 192h
 * 000000018004ADA5: lea     rcx, [rbp+9E10h+var_4540]; Src
 * 000000018004ADAC: call    sub_1800CF2C8
 * 000000018004ADB1: nop
 * 000000018004ADB2: mov     r8, rax
 * 000000018004ADB5: mov     rdx, r13
 * 000000018004ADB8: lea     rcx, [rbp+9E10h+var_4560]
 * 000000018004ADBF: call    sub_180043BDC
 * 000000018004ADC4: nop
 * 000000018004ADC5: lea     r8, aPixel; "/Pixel"
 * 000000018004ADCC: mov     rdx, rax
 * 000000018004ADCF: lea     rcx, [rbp+9E10h+var_4580]
 * 000000018004ADD6: call    sub_18002C218
 * 000000018004ADDB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ADE0: mov     rcx, rax
 * 000000018004ADE3: call    sub_1800CF3A0
 * 000000018004ADE8: mov     cs:byte_180218C5C, al
 * 000000018004ADEE: lea     rcx, [rbp+9E10h+var_4560]; void *
 * 000000018004ADF5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ADFA: nop
 * 000000018004ADFB: lea     rcx, [rbp+9E10h+var_4540]; void *
 * 000000018004AE02: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AE07: nop
 * 000000018004AE08: lea     rcx, dword_180218C60
 * 000000018004AE0F: call    _Init_thread_footer
 * 000000018004AE14: mov     rax, [rdi+rbx*8]
 * 000000018004AE18: mov     eax, [r15+rax]
 * 000000018004AE1C: cmp     cs:dword_180218C68, eax
 * 000000018004AE22: jle     loc_18004AF0B
 * 000000018004AE28: lea     rcx, dword_180218C68
 * 000000018004AE2F: call    _Init_thread_header
 * 000000018004AE34: cmp     cs:dword_180218C68, r14d
 * 000000018004AE3B: jnz     loc_18004AF0B
 * 000000018004AE41: lea     rax, unk_18017AD30
 * 000000018004AE48: mov     qword ptr [rbp+9E10h+var_9790], rax
 * 000000018004AE4F: lea     rax, unk_1801817EC
 * 000000018004AE56: mov     qword ptr [rbp+9E10h+var_9790+8], rax
 * 000000018004AE5D: movups  xmm0, [rbp+9E10h+var_9790]
 * 000000018004AE64: movups  [rbp+9E10h+var_7B90], xmm0
 * 000000018004AE6B: mov     dword ptr [rbp+9E10h+var_7B80], 5
 * 000000018004AE75: mov     dword ptr [rbp+9E10h+var_7B80+4], esi
 * 000000018004AE7B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AE80: movups  xmm0, [rbp+9E10h+var_7B80]
 * 000000018004AE87: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004AE8C: call    sub_180043E00
 * 000000018004AE91: mov     r8, rax
 * 000000018004AE94: mov     r9d, r12d
 * 000000018004AE97: mov     edx, 198h
 * 000000018004AE9C: lea     rcx, [rbp+9E10h+var_44E0]; Src
 * 000000018004AEA3: call    sub_1800CF2C8
 * 000000018004AEA8: nop
 * 000000018004AEA9: mov     r8, rax
 * 000000018004AEAC: mov     rdx, r13
 * 000000018004AEAF: lea     rcx, [rbp+9E10h+var_4500]
 * 000000018004AEB6: call    sub_180043BDC
 * 000000018004AEBB: nop
 * 000000018004AEBC: lea     r8, aPixel; "/Pixel"
 * 000000018004AEC3: mov     rdx, rax
 * 000000018004AEC6: lea     rcx, [rbp+9E10h+var_4520]
 * 000000018004AECD: call    sub_18002C218
 * 000000018004AED2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004AED7: mov     rcx, rax
 * 000000018004AEDA: call    sub_1800CF3A0
 * 000000018004AEDF: mov     cs:byte_180218C64, al
 * 000000018004AEE5: lea     rcx, [rbp+9E10h+var_4500]; void *
 * 000000018004AEEC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AEF1: nop
 * 000000018004AEF2: lea     rcx, [rbp+9E10h+var_44E0]; void *
 * 000000018004AEF9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AEFE: nop
 * 000000018004AEFF: lea     rcx, dword_180218C68
 * 000000018004AF06: call    _Init_thread_footer
 * 000000018004AF0B: mov     rax, [rdi+rbx*8]
 * 000000018004AF0F: mov     eax, [r15+rax]
 * 000000018004AF13: cmp     cs:dword_180218C70, eax
 * 000000018004AF19: jle     loc_18004B002
 * 000000018004AF1F: lea     rcx, dword_180218C70
 * 000000018004AF26: call    _Init_thread_header
 * 000000018004AF2B: cmp     cs:dword_180218C70, r14d
 * 000000018004AF32: jnz     loc_18004B002
 * 000000018004AF38: lea     rax, unk_18017AD30
 * 000000018004AF3F: mov     qword ptr [rbp+9E10h+var_9780], rax
 * 000000018004AF46: lea     rax, unk_1801817EC
 * 000000018004AF4D: mov     qword ptr [rbp+9E10h+var_9780+8], rax
 * 000000018004AF54: movups  xmm0, [rbp+9E10h+var_9780]
 * 000000018004AF5B: movups  [rbp+9E10h+var_7B70], xmm0
 * 000000018004AF62: mov     dword ptr [rbp+9E10h+var_7B60], 5
 * 000000018004AF6C: mov     dword ptr [rbp+9E10h+var_7B60+4], esi
 * 000000018004AF72: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AF77: movups  xmm0, [rbp+9E10h+var_7B60]
 * 000000018004AF7E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004AF83: call    sub_180043E00
 * 000000018004AF88: mov     r8, rax
 * 000000018004AF8B: mov     r9d, r12d
 * 000000018004AF8E: mov     edx, 19Ah
 * 000000018004AF93: lea     rcx, [rbp+9E10h+var_4480]; Src
 * 000000018004AF9A: call    sub_1800CF2C8
 * 000000018004AF9F: nop
 * 000000018004AFA0: mov     r8, rax
 * 000000018004AFA3: mov     rdx, r13
 * 000000018004AFA6: lea     rcx, [rbp+9E10h+var_44A0]
 * 000000018004AFAD: call    sub_180043BDC
 * 000000018004AFB2: nop
 * 000000018004AFB3: lea     r8, aPixel; "/Pixel"
 * 000000018004AFBA: mov     rdx, rax
 * 000000018004AFBD: lea     rcx, [rbp+9E10h+var_44C0]
 * 000000018004AFC4: call    sub_18002C218
 * 000000018004AFC9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004AFCE: mov     rcx, rax
 * 000000018004AFD1: call    sub_1800CF3A0
 * 000000018004AFD6: mov     cs:byte_180218C6C, al
 * 000000018004AFDC: lea     rcx, [rbp+9E10h+var_44A0]; void *
 * 000000018004AFE3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AFE8: nop
 * 000000018004AFE9: lea     rcx, [rbp+9E10h+var_4480]; void *
 * 000000018004AFF0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AFF5: nop
 * 000000018004AFF6: lea     rcx, dword_180218C70
 * 000000018004AFFD: call    _Init_thread_footer
 * 000000018004B002: mov     rax, [rdi+rbx*8]
 * 000000018004B006: mov     eax, [r15+rax]
 * 000000018004B00A: cmp     cs:dword_180218C78, eax
 * 000000018004B010: jle     loc_18004B0F9
 * 000000018004B016: lea     rcx, dword_180218C78
 * 000000018004B01D: call    _Init_thread_header
 * 000000018004B022: cmp     cs:dword_180218C78, r14d
 * 000000018004B029: jnz     loc_18004B0F9
 * 000000018004B02F: lea     rax, unk_180160930
 * 000000018004B036: mov     qword ptr [rbp+9E10h+var_9770], rax
 * 000000018004B03D: lea     rax, unk_18016705C
 * 000000018004B044: mov     qword ptr [rbp+9E10h+var_9770+8], rax
 * 000000018004B04B: movups  xmm0, [rbp+9E10h+var_9770]
 * 000000018004B052: movups  [rbp+9E10h+var_7B50], xmm0
 * 000000018004B059: mov     dword ptr [rbp+9E10h+var_7B40], 5
 * 000000018004B063: mov     dword ptr [rbp+9E10h+var_7B40+4], esi
 * 000000018004B069: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B06E: movups  xmm0, [rbp+9E10h+var_7B40]
 * 000000018004B075: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B07A: call    sub_180043E00
 * 000000018004B07F: mov     r8, rax
 * 000000018004B082: mov     r9d, r12d
 * 000000018004B085: mov     edx, 1A0h
 * 000000018004B08A: lea     rcx, [rbp+9E10h+var_4420]; Src
 * 000000018004B091: call    sub_1800CF2C8
 * 000000018004B096: nop
 * 000000018004B097: mov     r8, rax
 * 000000018004B09A: mov     rdx, r13
 * 000000018004B09D: lea     rcx, [rbp+9E10h+var_4440]
 * 000000018004B0A4: call    sub_180043BDC
 * 000000018004B0A9: nop
 * 000000018004B0AA: lea     r8, aPixel; "/Pixel"
 * 000000018004B0B1: mov     rdx, rax
 * 000000018004B0B4: lea     rcx, [rbp+9E10h+var_4460]
 * 000000018004B0BB: call    sub_18002C218
 * 000000018004B0C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B0C5: mov     rcx, rax
 * 000000018004B0C8: call    sub_1800CF3A0
 * 000000018004B0CD: mov     cs:byte_180218C74, al
 * 000000018004B0D3: lea     rcx, [rbp+9E10h+var_4440]; void *
 * 000000018004B0DA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B0DF: nop
 * 000000018004B0E0: lea     rcx, [rbp+9E10h+var_4420]; void *
 * 000000018004B0E7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B0EC: nop
 * 000000018004B0ED: lea     rcx, dword_180218C78
 * 000000018004B0F4: call    _Init_thread_footer
 * 000000018004B0F9: mov     rax, [rdi+rbx*8]
 * 000000018004B0FD: mov     eax, [r15+rax]
 * 000000018004B101: cmp     cs:dword_180218C80, eax
 * 000000018004B107: jle     loc_18004B1F0
 * 000000018004B10D: lea     rcx, dword_180218C80
 * 000000018004B114: call    _Init_thread_header
 * 000000018004B119: cmp     cs:dword_180218C80, r14d
 * 000000018004B120: jnz     loc_18004B1F0
 * 000000018004B126: lea     rax, unk_180160930
 * 000000018004B12D: mov     qword ptr [rbp+9E10h+var_9760], rax
 * 000000018004B134: lea     rax, unk_18016705C
 * 000000018004B13B: mov     qword ptr [rbp+9E10h+var_9760+8], rax
 * 000000018004B142: movups  xmm0, [rbp+9E10h+var_9760]
 * 000000018004B149: movups  [rbp+9E10h+var_7B30], xmm0
 * 000000018004B150: mov     dword ptr [rbp+9E10h+var_7B20], 5
 * 000000018004B15A: mov     dword ptr [rbp+9E10h+var_7B20+4], esi
 * 000000018004B160: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B165: movups  xmm0, [rbp+9E10h+var_7B20]
 * 000000018004B16C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B171: call    sub_180043E00
 * 000000018004B176: mov     r8, rax
 * 000000018004B179: mov     r9d, r12d
 * 000000018004B17C: mov     edx, 1A2h
 * 000000018004B181: lea     rcx, [rbp+9E10h+var_43C0]; Src
 * 000000018004B188: call    sub_1800CF2C8
 * 000000018004B18D: nop
 * 000000018004B18E: mov     r8, rax
 * 000000018004B191: mov     rdx, r13
 * 000000018004B194: lea     rcx, [rbp+9E10h+var_43E0]
 * 000000018004B19B: call    sub_180043BDC
 * 000000018004B1A0: nop
 * 000000018004B1A1: lea     r8, aPixel; "/Pixel"
 * 000000018004B1A8: mov     rdx, rax
 * 000000018004B1AB: lea     rcx, [rbp+9E10h+var_4400]
 * 000000018004B1B2: call    sub_18002C218
 * 000000018004B1B7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B1BC: mov     rcx, rax
 * 000000018004B1BF: call    sub_1800CF3A0
 * 000000018004B1C4: mov     cs:byte_180218C7C, al
 * 000000018004B1CA: lea     rcx, [rbp+9E10h+var_43E0]; void *
 * 000000018004B1D1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B1D6: nop
 * 000000018004B1D7: lea     rcx, [rbp+9E10h+var_43C0]; void *
 * 000000018004B1DE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B1E3: nop
 * 000000018004B1E4: lea     rcx, dword_180218C80
 * 000000018004B1EB: call    _Init_thread_footer
 * 000000018004B1F0: mov     rax, [rdi+rbx*8]
 * 000000018004B1F4: mov     eax, [r15+rax]
 * 000000018004B1F8: cmp     cs:dword_180218C88, eax
 * 000000018004B1FE: jle     loc_18004B2E7
 * 000000018004B204: lea     rcx, dword_180218C88
 * 000000018004B20B: call    _Init_thread_header
 * 000000018004B210: cmp     cs:dword_180218C88, r14d
 * 000000018004B217: jnz     loc_18004B2E7
 * 000000018004B21D: lea     rax, unk_18016A540
 * 000000018004B224: mov     qword ptr [rbp+9E10h+var_9750], rax
 * 000000018004B22B: lea     rax, unk_180170DFC
 * 000000018004B232: mov     qword ptr [rbp+9E10h+var_9750+8], rax
 * 000000018004B239: movups  xmm0, [rbp+9E10h+var_9750]
 * 000000018004B240: movups  [rbp+9E10h+var_7B10], xmm0
 * 000000018004B247: mov     dword ptr [rbp+9E10h+var_7B00], 5
 * 000000018004B251: mov     dword ptr [rbp+9E10h+var_7B00+4], esi
 * 000000018004B257: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B25C: movups  xmm0, [rbp+9E10h+var_7B00]
 * 000000018004B263: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B268: call    sub_180043E00
 * 000000018004B26D: mov     r8, rax
 * 000000018004B270: mov     r9d, r12d
 * 000000018004B273: mov     edx, 1A8h
 * 000000018004B278: lea     rcx, [rbp+9E10h+var_4360]; Src
 * 000000018004B27F: call    sub_1800CF2C8
 * 000000018004B284: nop
 * 000000018004B285: mov     r8, rax
 * 000000018004B288: mov     rdx, r13
 * 000000018004B28B: lea     rcx, [rbp+9E10h+var_4380]
 * 000000018004B292: call    sub_180043BDC
 * 000000018004B297: nop
 * 000000018004B298: lea     r8, aPixel; "/Pixel"
 * 000000018004B29F: mov     rdx, rax
 * 000000018004B2A2: lea     rcx, [rbp+9E10h+var_43A0]
 * 000000018004B2A9: call    sub_18002C218
 * 000000018004B2AE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B2B3: mov     rcx, rax
 * 000000018004B2B6: call    sub_1800CF3A0
 * 000000018004B2BB: mov     cs:byte_180218C84, al
 * 000000018004B2C1: lea     rcx, [rbp+9E10h+var_4380]; void *
 * 000000018004B2C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B2CD: nop
 * 000000018004B2CE: lea     rcx, [rbp+9E10h+var_4360]; void *
 * 000000018004B2D5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B2DA: nop
 * 000000018004B2DB: lea     rcx, dword_180218C88
 * 000000018004B2E2: call    _Init_thread_footer
 * 000000018004B2E7: mov     rax, [rdi+rbx*8]
 * 000000018004B2EB: mov     eax, [r15+rax]
 * 000000018004B2EF: cmp     cs:dword_180218C90, eax
 * 000000018004B2F5: jle     loc_18004B3DE
 * 000000018004B2FB: lea     rcx, dword_180218C90
 * 000000018004B302: call    _Init_thread_header
 * 000000018004B307: cmp     cs:dword_180218C90, r14d
 * 000000018004B30E: jnz     loc_18004B3DE
 * 000000018004B314: lea     rax, unk_18016A540
 * 000000018004B31B: mov     qword ptr [rbp+9E10h+var_9740], rax
 * 000000018004B322: lea     rax, unk_180170DFC
 * 000000018004B329: mov     qword ptr [rbp+9E10h+var_9740+8], rax
 * 000000018004B330: movups  xmm0, [rbp+9E10h+var_9740]
 * 000000018004B337: movups  [rbp+9E10h+var_7AF0], xmm0
 * 000000018004B33E: mov     dword ptr [rbp+9E10h+var_7AE0], 5
 * 000000018004B348: mov     dword ptr [rbp+9E10h+var_7AE0+4], esi
 * 000000018004B34E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B353: movups  xmm0, [rbp+9E10h+var_7AE0]
 * 000000018004B35A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B35F: call    sub_180043E00
 * 000000018004B364: mov     r8, rax
 * 000000018004B367: mov     r9d, r12d
 * 000000018004B36A: mov     edx, 1AAh
 * 000000018004B36F: lea     rcx, [rbp+9E10h+var_4300]; Src
 * 000000018004B376: call    sub_1800CF2C8
 * 000000018004B37B: nop
 * 000000018004B37C: mov     r8, rax
 * 000000018004B37F: mov     rdx, r13
 * 000000018004B382: lea     rcx, [rbp+9E10h+var_4320]
 * 000000018004B389: call    sub_180043BDC
 * 000000018004B38E: nop
 * 000000018004B38F: lea     r8, aPixel; "/Pixel"
 * 000000018004B396: mov     rdx, rax
 * 000000018004B399: lea     rcx, [rbp+9E10h+var_4340]
 * 000000018004B3A0: call    sub_18002C218
 * 000000018004B3A5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B3AA: mov     rcx, rax
 * 000000018004B3AD: call    sub_1800CF3A0
 * 000000018004B3B2: mov     cs:byte_180218C8C, al
 * 000000018004B3B8: lea     rcx, [rbp+9E10h+var_4320]; void *
 * 000000018004B3BF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B3C4: nop
 * 000000018004B3C5: lea     rcx, [rbp+9E10h+var_4300]; void *
 * 000000018004B3CC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B3D1: nop
 * 000000018004B3D2: lea     rcx, dword_180218C90
 * 000000018004B3D9: call    _Init_thread_footer
 * 000000018004B3DE: mov     rax, [rdi+rbx*8]
 * 000000018004B3E2: mov     eax, [r15+rax]
 * 000000018004B3E6: cmp     cs:dword_180218C98, eax
 * 000000018004B3EC: jle     loc_18004B4D5
 * 000000018004B3F2: lea     rcx, dword_180218C98
 * 000000018004B3F9: call    _Init_thread_header
 * 000000018004B3FE: cmp     cs:dword_180218C98, r14d
 * 000000018004B405: jnz     loc_18004B4D5
 * 000000018004B40B: lea     rax, unk_180170E00
 * 000000018004B412: mov     qword ptr [rbp+9E10h+var_9730], rax
 * 000000018004B419: lea     rax, unk_180177708
 * 000000018004B420: mov     qword ptr [rbp+9E10h+var_9730+8], rax
 * 000000018004B427: movups  xmm0, [rbp+9E10h+var_9730]
 * 000000018004B42E: movups  [rbp+9E10h+var_7AD0], xmm0
 * 000000018004B435: mov     dword ptr [rbp+9E10h+var_7AC0], 5
 * 000000018004B43F: mov     dword ptr [rbp+9E10h+var_7AC0+4], esi
 * 000000018004B445: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B44A: movups  xmm0, [rbp+9E10h+var_7AC0]
 * 000000018004B451: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B456: call    sub_180043E00
 * 000000018004B45B: mov     r8, rax
 * 000000018004B45E: mov     r9d, r12d
 * 000000018004B461: mov     edx, 1B0h
 * 000000018004B466: lea     rcx, [rbp+9E10h+var_42A0]; Src
 * 000000018004B46D: call    sub_1800CF2C8
 * 000000018004B472: nop
 * 000000018004B473: mov     r8, rax
 * 000000018004B476: mov     rdx, r13
 * 000000018004B479: lea     rcx, [rbp+9E10h+var_42C0]
 * 000000018004B480: call    sub_180043BDC
 * 000000018004B485: nop
 * 000000018004B486: lea     r8, aPixel; "/Pixel"
 * 000000018004B48D: mov     rdx, rax
 * 000000018004B490: lea     rcx, [rbp+9E10h+var_42E0]
 * 000000018004B497: call    sub_18002C218
 * 000000018004B49C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B4A1: mov     rcx, rax
 * 000000018004B4A4: call    sub_1800CF3A0
 * 000000018004B4A9: mov     cs:byte_180218C94, al
 * 000000018004B4AF: lea     rcx, [rbp+9E10h+var_42C0]; void *
 * 000000018004B4B6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B4BB: nop
 * 000000018004B4BC: lea     rcx, [rbp+9E10h+var_42A0]; void *
 * 000000018004B4C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B4C8: nop
 * 000000018004B4C9: lea     rcx, dword_180218C98
 * 000000018004B4D0: call    _Init_thread_footer
 * 000000018004B4D5: mov     rax, [rdi+rbx*8]
 * 000000018004B4D9: mov     eax, [r15+rax]
 * 000000018004B4DD: cmp     cs:dword_180218CA0, eax
 * 000000018004B4E3: jle     loc_18004B5CC
 * 000000018004B4E9: lea     rcx, dword_180218CA0
 * 000000018004B4F0: call    _Init_thread_header
 * 000000018004B4F5: cmp     cs:dword_180218CA0, r14d
 * 000000018004B4FC: jnz     loc_18004B5CC
 * 000000018004B502: lea     rax, unk_180170E00
 * 000000018004B509: mov     qword ptr [rbp+9E10h+var_9720], rax
 * 000000018004B510: lea     rax, unk_180177708
 * 000000018004B517: mov     qword ptr [rbp+9E10h+var_9720+8], rax
 * 000000018004B51E: movups  xmm0, [rbp+9E10h+var_9720]
 * 000000018004B525: movups  [rbp+9E10h+var_7AB0], xmm0
 * 000000018004B52C: mov     dword ptr [rbp+9E10h+var_7AA0], 5
 * 000000018004B536: mov     dword ptr [rbp+9E10h+var_7AA0+4], esi
 * 000000018004B53C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B541: movups  xmm0, [rbp+9E10h+var_7AA0]
 * 000000018004B548: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B54D: call    sub_180043E00
 * 000000018004B552: mov     r8, rax
 * 000000018004B555: mov     r9d, r12d
 * 000000018004B558: mov     edx, 1B2h
 * 000000018004B55D: lea     rcx, [rbp+9E10h+var_4240]; Src
 * 000000018004B564: call    sub_1800CF2C8
 * 000000018004B569: nop
 * 000000018004B56A: mov     r8, rax
 * 000000018004B56D: mov     rdx, r13
 * 000000018004B570: lea     rcx, [rbp+9E10h+var_4260]
 * 000000018004B577: call    sub_180043BDC
 * 000000018004B57C: nop
 * 000000018004B57D: lea     r8, aPixel; "/Pixel"
 * 000000018004B584: mov     rdx, rax
 * 000000018004B587: lea     rcx, [rbp+9E10h+var_4280]
 * 000000018004B58E: call    sub_18002C218
 * 000000018004B593: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B598: mov     rcx, rax
 * 000000018004B59B: call    sub_1800CF3A0
 * 000000018004B5A0: mov     cs:byte_180218C9C, al
 * 000000018004B5A6: lea     rcx, [rbp+9E10h+var_4260]; void *
 * 000000018004B5AD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B5B2: nop
 * 000000018004B5B3: lea     rcx, [rbp+9E10h+var_4240]; void *
 * 000000018004B5BA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B5BF: nop
 * 000000018004B5C0: lea     rcx, dword_180218CA0
 * 000000018004B5C7: call    _Init_thread_footer
 * 000000018004B5CC: mov     rax, [rdi+rbx*8]
 * 000000018004B5D0: mov     eax, [r15+rax]
 * 000000018004B5D4: cmp     cs:dword_180218CA8, eax
 * 000000018004B5DA: jle     loc_18004B6C3
 * 000000018004B5E0: lea     rcx, dword_180218CA8
 * 000000018004B5E7: call    _Init_thread_header
 * 000000018004B5EC: cmp     cs:dword_180218CA8, r14d
 * 000000018004B5F3: jnz     loc_18004B6C3
 * 000000018004B5F9: lea     rax, unk_18017AD30
 * 000000018004B600: mov     qword ptr [rbp+9E10h+var_9710], rax
 * 000000018004B607: lea     rax, unk_1801817EC
 * 000000018004B60E: mov     qword ptr [rbp+9E10h+var_9710+8], rax
 * 000000018004B615: movups  xmm0, [rbp+9E10h+var_9710]
 * 000000018004B61C: movups  [rbp+9E10h+var_7A90], xmm0
 * 000000018004B623: mov     dword ptr [rbp+9E10h+var_7A80], 5
 * 000000018004B62D: mov     dword ptr [rbp+9E10h+var_7A80+4], esi
 * 000000018004B633: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B638: movups  xmm0, [rbp+9E10h+var_7A80]
 * 000000018004B63F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B644: call    sub_180043E00
 * 000000018004B649: mov     r8, rax
 * 000000018004B64C: mov     r9d, r12d
 * 000000018004B64F: mov     edx, 1B8h
 * 000000018004B654: lea     rcx, [rbp+9E10h+var_41E0]; Src
 * 000000018004B65B: call    sub_1800CF2C8
 * 000000018004B660: nop
 * 000000018004B661: mov     r8, rax
 * 000000018004B664: mov     rdx, r13
 * 000000018004B667: lea     rcx, [rbp+9E10h+var_4200]
 * 000000018004B66E: call    sub_180043BDC
 * 000000018004B673: nop
 * 000000018004B674: lea     r8, aPixel; "/Pixel"
 * 000000018004B67B: mov     rdx, rax
 * 000000018004B67E: lea     rcx, [rbp+9E10h+var_4220]
 * 000000018004B685: call    sub_18002C218
 * 000000018004B68A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B68F: mov     rcx, rax
 * 000000018004B692: call    sub_1800CF3A0
 * 000000018004B697: mov     cs:byte_180218CA4, al
 * 000000018004B69D: lea     rcx, [rbp+9E10h+var_4200]; void *
 * 000000018004B6A4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B6A9: nop
 * 000000018004B6AA: lea     rcx, [rbp+9E10h+var_41E0]; void *
 * 000000018004B6B1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B6B6: nop
 * 000000018004B6B7: lea     rcx, dword_180218CA8
 * 000000018004B6BE: call    _Init_thread_footer
 * 000000018004B6C3: mov     rax, [rdi+rbx*8]
 * 000000018004B6C7: mov     eax, [r15+rax]
 * 000000018004B6CB: cmp     cs:dword_180218CB0, eax
 * 000000018004B6D1: jle     loc_18004B7BA
 * 000000018004B6D7: lea     rcx, dword_180218CB0
 * 000000018004B6DE: call    _Init_thread_header
 * 000000018004B6E3: cmp     cs:dword_180218CB0, r14d
 * 000000018004B6EA: jnz     loc_18004B7BA
 * 000000018004B6F0: lea     rax, unk_18017AD30
 * 000000018004B6F7: mov     qword ptr [rbp+9E10h+var_9700], rax
 * 000000018004B6FE: lea     rax, unk_1801817EC
 * 000000018004B705: mov     qword ptr [rbp+9E10h+var_9700+8], rax
 * 000000018004B70C: movups  xmm0, [rbp+9E10h+var_9700]
 * 000000018004B713: movups  [rbp+9E10h+var_7A70], xmm0
 * 000000018004B71A: mov     dword ptr [rbp+9E10h+var_7A60], 5
 * 000000018004B724: mov     dword ptr [rbp+9E10h+var_7A60+4], esi
 * 000000018004B72A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B72F: movups  xmm0, [rbp+9E10h+var_7A60]
 * 000000018004B736: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B73B: call    sub_180043E00
 * 000000018004B740: mov     r8, rax
 * 000000018004B743: mov     r9d, r12d
 * 000000018004B746: mov     edx, 1BAh
 * 000000018004B74B: lea     rcx, [rbp+9E10h+var_4180]; Src
 * 000000018004B752: call    sub_1800CF2C8
 * 000000018004B757: nop
 * 000000018004B758: mov     r8, rax
 * 000000018004B75B: mov     rdx, r13
 * 000000018004B75E: lea     rcx, [rbp+9E10h+var_41A0]
 * 000000018004B765: call    sub_180043BDC
 * 000000018004B76A: nop
 * 000000018004B76B: lea     r8, aPixel; "/Pixel"
 * 000000018004B772: mov     rdx, rax
 * 000000018004B775: lea     rcx, [rbp+9E10h+var_41C0]
 * 000000018004B77C: call    sub_18002C218
 * 000000018004B781: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B786: mov     rcx, rax
 * 000000018004B789: call    sub_1800CF3A0
 * 000000018004B78E: mov     cs:byte_180218CAC, al
 * 000000018004B794: lea     rcx, [rbp+9E10h+var_41A0]; void *
 * 000000018004B79B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B7A0: nop
 * 000000018004B7A1: lea     rcx, [rbp+9E10h+var_4180]; void *
 * 000000018004B7A8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B7AD: nop
 * 000000018004B7AE: lea     rcx, dword_180218CB0
 * 000000018004B7B5: call    _Init_thread_footer
 * 000000018004B7BA: mov     rax, [rdi+rbx*8]
 * 000000018004B7BE: mov     eax, [r15+rax]
 * 000000018004B7C2: cmp     cs:dword_180218CB8, eax
 * 000000018004B7C8: jle     loc_18004B8B1
 * 000000018004B7CE: lea     rcx, dword_180218CB8
 * 000000018004B7D5: call    _Init_thread_header
 * 000000018004B7DA: cmp     cs:dword_180218CB8, r14d
 * 000000018004B7E1: jnz     loc_18004B8B1
 * 000000018004B7E7: lea     rax, unk_180160930
 * 000000018004B7EE: mov     qword ptr [rbp+9E10h+var_96F0], rax
 * 000000018004B7F5: lea     rax, unk_18016705C
 * 000000018004B7FC: mov     qword ptr [rbp+9E10h+var_96F0+8], rax
 * 000000018004B803: movups  xmm0, [rbp+9E10h+var_96F0]
 * 000000018004B80A: movups  [rbp+9E10h+var_7A50], xmm0
 * 000000018004B811: mov     dword ptr [rbp+9E10h+var_7A40], 5
 * 000000018004B81B: mov     dword ptr [rbp+9E10h+var_7A40+4], esi
 * 000000018004B821: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B826: movups  xmm0, [rbp+9E10h+var_7A40]
 * 000000018004B82D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B832: call    sub_180043E00
 * 000000018004B837: mov     r8, rax
 * 000000018004B83A: mov     r9d, r12d
 * 000000018004B83D: mov     edx, 1C0h
 * 000000018004B842: lea     rcx, [rbp+9E10h+var_4120]; Src
 * 000000018004B849: call    sub_1800CF2C8
 * 000000018004B84E: nop
 * 000000018004B84F: mov     r8, rax
 * 000000018004B852: mov     rdx, r13
 * 000000018004B855: lea     rcx, [rbp+9E10h+var_4140]
 * 000000018004B85C: call    sub_180043BDC
 * 000000018004B861: nop
 * 000000018004B862: lea     r8, aPixel; "/Pixel"
 * 000000018004B869: mov     rdx, rax
 * 000000018004B86C: lea     rcx, [rbp+9E10h+var_4160]
 * 000000018004B873: call    sub_18002C218
 * 000000018004B878: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B87D: mov     rcx, rax
 * 000000018004B880: call    sub_1800CF3A0
 * 000000018004B885: mov     cs:byte_180218CB4, al
 * 000000018004B88B: lea     rcx, [rbp+9E10h+var_4140]; void *
 * 000000018004B892: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B897: nop
 * 000000018004B898: lea     rcx, [rbp+9E10h+var_4120]; void *
 * 000000018004B89F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B8A4: nop
 * 000000018004B8A5: lea     rcx, dword_180218CB8
 * 000000018004B8AC: call    _Init_thread_footer
 * 000000018004B8B1: mov     rax, [rdi+rbx*8]
 * 000000018004B8B5: mov     eax, [r15+rax]
 * 000000018004B8B9: cmp     cs:dword_180218CC0, eax
 * 000000018004B8BF: jle     loc_18004B9A8
 * 000000018004B8C5: lea     rcx, dword_180218CC0
 * 000000018004B8CC: call    _Init_thread_header
 * 000000018004B8D1: cmp     cs:dword_180218CC0, r14d
 * 000000018004B8D8: jnz     loc_18004B9A8
 * 000000018004B8DE: lea     rax, unk_180160930
 * 000000018004B8E5: mov     qword ptr [rbp+9E10h+var_96E0], rax
 * 000000018004B8EC: lea     rax, unk_18016705C
 * 000000018004B8F3: mov     qword ptr [rbp+9E10h+var_96E0+8], rax
 * 000000018004B8FA: movups  xmm0, [rbp+9E10h+var_96E0]
 * 000000018004B901: movups  [rbp+9E10h+var_7A30], xmm0
 * 000000018004B908: mov     dword ptr [rbp+9E10h+var_7A20], 5
 * 000000018004B912: mov     dword ptr [rbp+9E10h+var_7A20+4], esi
 * 000000018004B918: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B91D: movups  xmm0, [rbp+9E10h+var_7A20]
 * 000000018004B924: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B929: call    sub_180043E00
 * 000000018004B92E: mov     r8, rax
 * 000000018004B931: mov     r9d, r12d
 * 000000018004B934: mov     edx, 1C2h
 * 000000018004B939: lea     rcx, [rbp+9E10h+var_40C0]; Src
 * 000000018004B940: call    sub_1800CF2C8
 * 000000018004B945: nop
 * 000000018004B946: mov     r8, rax
 * 000000018004B949: mov     rdx, r13
 * 000000018004B94C: lea     rcx, [rbp+9E10h+var_40E0]
 * 000000018004B953: call    sub_180043BDC
 * 000000018004B958: nop
 * 000000018004B959: lea     r8, aPixel; "/Pixel"
 * 000000018004B960: mov     rdx, rax
 * 000000018004B963: lea     rcx, [rbp+9E10h+var_4100]
 * 000000018004B96A: call    sub_18002C218
 * 000000018004B96F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B974: mov     rcx, rax
 * 000000018004B977: call    sub_1800CF3A0
 * 000000018004B97C: mov     cs:byte_180218CBC, al
 * 000000018004B982: lea     rcx, [rbp+9E10h+var_40E0]; void *
 * 000000018004B989: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B98E: nop
 * 000000018004B98F: lea     rcx, [rbp+9E10h+var_40C0]; void *
 * 000000018004B996: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B99B: nop
 * 000000018004B99C: lea     rcx, dword_180218CC0
 * 000000018004B9A3: call    _Init_thread_footer
 * 000000018004B9A8: mov     rax, [rdi+rbx*8]
 * 000000018004B9AC: mov     eax, [r15+rax]
 * 000000018004B9B0: cmp     cs:dword_180218CC8, eax
 * 000000018004B9B6: jle     loc_18004BA9F
 * 000000018004B9BC: lea     rcx, dword_180218CC8
 * 000000018004B9C3: call    _Init_thread_header
 * 000000018004B9C8: cmp     cs:dword_180218CC8, r14d
 * 000000018004B9CF: jnz     loc_18004BA9F
 * 000000018004B9D5: lea     rax, unk_18016A540
 * 000000018004B9DC: mov     qword ptr [rbp+9E10h+var_96D0], rax
 * 000000018004B9E3: lea     rax, unk_180170DFC
 * 000000018004B9EA: mov     qword ptr [rbp+9E10h+var_96D0+8], rax
 * 000000018004B9F1: movups  xmm0, [rbp+9E10h+var_96D0]
 * 000000018004B9F8: movups  [rbp+9E10h+var_7A10], xmm0
 * 000000018004B9FF: mov     dword ptr [rbp+9E10h+var_7A00], 5
 * 000000018004BA09: mov     dword ptr [rbp+9E10h+var_7A00+4], esi
 * 000000018004BA0F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BA14: movups  xmm0, [rbp+9E10h+var_7A00]
 * 000000018004BA1B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BA20: call    sub_180043E00
 * 000000018004BA25: mov     r8, rax
 * 000000018004BA28: mov     r9d, r12d
 * 000000018004BA2B: mov     edx, 1C8h
 * 000000018004BA30: lea     rcx, [rbp+9E10h+var_4060]; Src
 * 000000018004BA37: call    sub_1800CF2C8
 * 000000018004BA3C: nop
 * 000000018004BA3D: mov     r8, rax
 * 000000018004BA40: mov     rdx, r13
 * 000000018004BA43: lea     rcx, [rbp+9E10h+var_4080]
 * 000000018004BA4A: call    sub_180043BDC
 * 000000018004BA4F: nop
 * 000000018004BA50: lea     r8, aPixel; "/Pixel"
 * 000000018004BA57: mov     rdx, rax
 * 000000018004BA5A: lea     rcx, [rbp+9E10h+var_40A0]
 * 000000018004BA61: call    sub_18002C218
 * 000000018004BA66: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BA6B: mov     rcx, rax
 * 000000018004BA6E: call    sub_1800CF3A0
 * 000000018004BA73: mov     cs:byte_180218CC4, al
 * 000000018004BA79: lea     rcx, [rbp+9E10h+var_4080]; void *
 * 000000018004BA80: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BA85: nop
 * 000000018004BA86: lea     rcx, [rbp+9E10h+var_4060]; void *
 * 000000018004BA8D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BA92: nop
 * 000000018004BA93: lea     rcx, dword_180218CC8
 * 000000018004BA9A: call    _Init_thread_footer
 * 000000018004BA9F: mov     rax, [rdi+rbx*8]
 * 000000018004BAA3: mov     eax, [r15+rax]
 * 000000018004BAA7: cmp     cs:dword_180218CD0, eax
 * 000000018004BAAD: jle     loc_18004BB96
 * 000000018004BAB3: lea     rcx, dword_180218CD0
 * 000000018004BABA: call    _Init_thread_header
 * 000000018004BABF: cmp     cs:dword_180218CD0, r14d
 * 000000018004BAC6: jnz     loc_18004BB96
 * 000000018004BACC: lea     rax, unk_18016A540
 * 000000018004BAD3: mov     qword ptr [rbp+9E10h+var_96C0], rax
 * 000000018004BADA: lea     rax, unk_180170DFC
 * 000000018004BAE1: mov     qword ptr [rbp+9E10h+var_96C0+8], rax
 * 000000018004BAE8: movups  xmm0, [rbp+9E10h+var_96C0]
 * 000000018004BAEF: movups  [rbp+9E10h+var_79F0], xmm0
 * 000000018004BAF6: mov     dword ptr [rbp+9E10h+var_79E0], 5
 * 000000018004BB00: mov     dword ptr [rbp+9E10h+var_79E0+4], esi
 * 000000018004BB06: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BB0B: movups  xmm0, [rbp+9E10h+var_79E0]
 * 000000018004BB12: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BB17: call    sub_180043E00
 * 000000018004BB1C: mov     r8, rax
 * 000000018004BB1F: mov     r9d, r12d
 * 000000018004BB22: mov     edx, 1CAh
 * 000000018004BB27: lea     rcx, [rbp+9E10h+var_4000]; Src
 * 000000018004BB2E: call    sub_1800CF2C8
 * 000000018004BB33: nop
 * 000000018004BB34: mov     r8, rax
 * 000000018004BB37: mov     rdx, r13
 * 000000018004BB3A: lea     rcx, [rbp+9E10h+var_4020]
 * 000000018004BB41: call    sub_180043BDC
 * 000000018004BB46: nop
 * 000000018004BB47: lea     r8, aPixel; "/Pixel"
 * 000000018004BB4E: mov     rdx, rax
 * 000000018004BB51: lea     rcx, [rbp+9E10h+var_4040]
 * 000000018004BB58: call    sub_18002C218
 * 000000018004BB5D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BB62: mov     rcx, rax
 * 000000018004BB65: call    sub_1800CF3A0
 * 000000018004BB6A: mov     cs:byte_180218CCC, al
 * 000000018004BB70: lea     rcx, [rbp+9E10h+var_4020]; void *
 * 000000018004BB77: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BB7C: nop
 * 000000018004BB7D: lea     rcx, [rbp+9E10h+var_4000]; void *
 * 000000018004BB84: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BB89: nop
 * 000000018004BB8A: lea     rcx, dword_180218CD0
 * 000000018004BB91: call    _Init_thread_footer
 * 000000018004BB96: mov     rax, [rdi+rbx*8]
 * 000000018004BB9A: mov     eax, [r15+rax]
 * 000000018004BB9E: cmp     cs:dword_180218CD8, eax
 * 000000018004BBA4: jle     loc_18004BC8D
 * 000000018004BBAA: lea     rcx, dword_180218CD8
 * 000000018004BBB1: call    _Init_thread_header
 * 000000018004BBB6: cmp     cs:dword_180218CD8, r14d
 * 000000018004BBBD: jnz     loc_18004BC8D
 * 000000018004BBC3: lea     rax, unk_180170E00
 * 000000018004BBCA: mov     qword ptr [rbp+9E10h+var_96B0], rax
 * 000000018004BBD1: lea     rax, unk_180177708
 * 000000018004BBD8: mov     qword ptr [rbp+9E10h+var_96B0+8], rax
 * 000000018004BBDF: movups  xmm0, [rbp+9E10h+var_96B0]
 * 000000018004BBE6: movups  [rbp+9E10h+var_79D0], xmm0
 * 000000018004BBED: mov     dword ptr [rbp+9E10h+var_79C0], 5
 * 000000018004BBF7: mov     dword ptr [rbp+9E10h+var_79C0+4], esi
 * 000000018004BBFD: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BC02: movups  xmm0, [rbp+9E10h+var_79C0]
 * 000000018004BC09: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BC0E: call    sub_180043E00
 * 000000018004BC13: mov     r8, rax
 * 000000018004BC16: mov     r9d, r12d
 * 000000018004BC19: mov     edx, 1D0h
 * 000000018004BC1E: lea     rcx, [rbp+9E10h+var_3FA0]; Src
 * 000000018004BC25: call    sub_1800CF2C8
 * 000000018004BC2A: nop
 * 000000018004BC2B: mov     r8, rax
 * 000000018004BC2E: mov     rdx, r13
 * 000000018004BC31: lea     rcx, [rbp+9E10h+var_3FC0]
 * 000000018004BC38: call    sub_180043BDC
 * 000000018004BC3D: nop
 * 000000018004BC3E: lea     r8, aPixel; "/Pixel"
 * 000000018004BC45: mov     rdx, rax
 * 000000018004BC48: lea     rcx, [rbp+9E10h+var_3FE0]
 * 000000018004BC4F: call    sub_18002C218
 * 000000018004BC54: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BC59: mov     rcx, rax
 * 000000018004BC5C: call    sub_1800CF3A0
 * 000000018004BC61: mov     cs:byte_180218CD4, al
 * 000000018004BC67: lea     rcx, [rbp+9E10h+var_3FC0]; void *
 * 000000018004BC6E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BC73: nop
 * 000000018004BC74: lea     rcx, [rbp+9E10h+var_3FA0]; void *
 * 000000018004BC7B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BC80: nop
 * 000000018004BC81: lea     rcx, dword_180218CD8
 * 000000018004BC88: call    _Init_thread_footer
 * 000000018004BC8D: mov     rax, [rdi+rbx*8]
 * 000000018004BC91: mov     eax, [r15+rax]
 * 000000018004BC95: cmp     cs:dword_180218CE0, eax
 * 000000018004BC9B: jle     loc_18004BD84
 * 000000018004BCA1: lea     rcx, dword_180218CE0
 * 000000018004BCA8: call    _Init_thread_header
 * 000000018004BCAD: cmp     cs:dword_180218CE0, r14d
 * 000000018004BCB4: jnz     loc_18004BD84
 * 000000018004BCBA: lea     rax, unk_180170E00
 * 000000018004BCC1: mov     qword ptr [rbp+9E10h+var_96A0], rax
 * 000000018004BCC8: lea     rax, unk_180177708
 * 000000018004BCCF: mov     qword ptr [rbp+9E10h+var_96A0+8], rax
 * 000000018004BCD6: movups  xmm0, [rbp+9E10h+var_96A0]
 * 000000018004BCDD: movups  [rbp+9E10h+var_79B0], xmm0
 * 000000018004BCE4: mov     dword ptr [rbp+9E10h+var_79A0], 5
 * 000000018004BCEE: mov     dword ptr [rbp+9E10h+var_79A0+4], esi
 * 000000018004BCF4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BCF9: movups  xmm0, [rbp+9E10h+var_79A0]
 * 000000018004BD00: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BD05: call    sub_180043E00
 * 000000018004BD0A: mov     r8, rax
 * 000000018004BD0D: mov     r9d, r12d
 * 000000018004BD10: mov     edx, 1D2h
 * 000000018004BD15: lea     rcx, [rbp+9E10h+var_3F40]; Src
 * 000000018004BD1C: call    sub_1800CF2C8
 * 000000018004BD21: nop
 * 000000018004BD22: mov     r8, rax
 * 000000018004BD25: mov     rdx, r13
 * 000000018004BD28: lea     rcx, [rbp+9E10h+var_3F60]
 * 000000018004BD2F: call    sub_180043BDC
 * 000000018004BD34: nop
 * 000000018004BD35: lea     r8, aPixel; "/Pixel"
 * 000000018004BD3C: mov     rdx, rax
 * 000000018004BD3F: lea     rcx, [rbp+9E10h+var_3F80]
 * 000000018004BD46: call    sub_18002C218
 * 000000018004BD4B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BD50: mov     rcx, rax
 * 000000018004BD53: call    sub_1800CF3A0
 * 000000018004BD58: mov     cs:byte_180218CDC, al
 * 000000018004BD5E: lea     rcx, [rbp+9E10h+var_3F60]; void *
 * 000000018004BD65: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BD6A: nop
 * 000000018004BD6B: lea     rcx, [rbp+9E10h+var_3F40]; void *
 * 000000018004BD72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BD77: nop
 * 000000018004BD78: lea     rcx, dword_180218CE0
 * 000000018004BD7F: call    _Init_thread_footer
 * 000000018004BD84: mov     rax, [rdi+rbx*8]
 * 000000018004BD88: mov     eax, [r15+rax]
 * 000000018004BD8C: cmp     cs:dword_180218CE8, eax
 * 000000018004BD92: jle     loc_18004BE7B
 * 000000018004BD98: lea     rcx, dword_180218CE8
 * 000000018004BD9F: call    _Init_thread_header
 * 000000018004BDA4: cmp     cs:dword_180218CE8, r14d
 * 000000018004BDAB: jnz     loc_18004BE7B
 * 000000018004BDB1: lea     rax, unk_18017AD30
 * 000000018004BDB8: mov     qword ptr [rbp+9E10h+var_9690], rax
 * 000000018004BDBF: lea     rax, unk_1801817EC
 * 000000018004BDC6: mov     qword ptr [rbp+9E10h+var_9690+8], rax
 * 000000018004BDCD: movups  xmm0, [rbp+9E10h+var_9690]
 * 000000018004BDD4: movups  [rbp+9E10h+var_7990], xmm0
 * 000000018004BDDB: mov     dword ptr [rbp+9E10h+var_7980], 5
 * 000000018004BDE5: mov     dword ptr [rbp+9E10h+var_7980+4], esi
 * 000000018004BDEB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BDF0: movups  xmm0, [rbp+9E10h+var_7980]
 * 000000018004BDF7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BDFC: call    sub_180043E00
 * 000000018004BE01: mov     r8, rax
 * 000000018004BE04: mov     r9d, r12d
 * 000000018004BE07: mov     edx, 1D8h
 * 000000018004BE0C: lea     rcx, [rbp+9E10h+var_3EE0]; Src
 * 000000018004BE13: call    sub_1800CF2C8
 * 000000018004BE18: nop
 * 000000018004BE19: mov     r8, rax
 * 000000018004BE1C: mov     rdx, r13
 * 000000018004BE1F: lea     rcx, [rbp+9E10h+var_3F00]
 * 000000018004BE26: call    sub_180043BDC
 * 000000018004BE2B: nop
 * 000000018004BE2C: lea     r8, aPixel; "/Pixel"
 * 000000018004BE33: mov     rdx, rax
 * 000000018004BE36: lea     rcx, [rbp+9E10h+var_3F20]
 * 000000018004BE3D: call    sub_18002C218
 * 000000018004BE42: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BE47: mov     rcx, rax
 * 000000018004BE4A: call    sub_1800CF3A0
 * 000000018004BE4F: mov     cs:byte_180218CE4, al
 * 000000018004BE55: lea     rcx, [rbp+9E10h+var_3F00]; void *
 * 000000018004BE5C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BE61: nop
 * 000000018004BE62: lea     rcx, [rbp+9E10h+var_3EE0]; void *
 * 000000018004BE69: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BE6E: nop
 * 000000018004BE6F: lea     rcx, dword_180218CE8
 * 000000018004BE76: call    _Init_thread_footer
 * 000000018004BE7B: mov     rax, [rdi+rbx*8]
 * 000000018004BE7F: mov     eax, [r15+rax]
 * 000000018004BE83: cmp     cs:dword_180218CF0, eax
 * 000000018004BE89: jle     loc_18004BF72
 * 000000018004BE8F: lea     rcx, dword_180218CF0
 * 000000018004BE96: call    _Init_thread_header
 * 000000018004BE9B: cmp     cs:dword_180218CF0, r14d
 * 000000018004BEA2: jnz     loc_18004BF72
 * 000000018004BEA8: lea     rax, unk_18017AD30
 * 000000018004BEAF: mov     qword ptr [rbp+9E10h+var_9680], rax
 * 000000018004BEB6: lea     rax, unk_1801817EC
 * 000000018004BEBD: mov     qword ptr [rbp+9E10h+var_9680+8], rax
 * 000000018004BEC4: movups  xmm0, [rbp+9E10h+var_9680]
 * 000000018004BECB: movups  [rbp+9E10h+var_7970], xmm0
 * 000000018004BED2: mov     dword ptr [rbp+9E10h+var_7960], 5
 * 000000018004BEDC: mov     dword ptr [rbp+9E10h+var_7960+4], esi
 * 000000018004BEE2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BEE7: movups  xmm0, [rbp+9E10h+var_7960]
 * 000000018004BEEE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BEF3: call    sub_180043E00
 * 000000018004BEF8: mov     r8, rax
 * 000000018004BEFB: mov     r9d, r12d
 * 000000018004BEFE: mov     edx, 1DAh
 * 000000018004BF03: lea     rcx, [rbp+9E10h+var_3E80]; Src
 * 000000018004BF0A: call    sub_1800CF2C8
 * 000000018004BF0F: nop
 * 000000018004BF10: mov     r8, rax
 * 000000018004BF13: mov     rdx, r13
 * 000000018004BF16: lea     rcx, [rbp+9E10h+var_3EA0]
 * 000000018004BF1D: call    sub_180043BDC
 * 000000018004BF22: nop
 * 000000018004BF23: lea     r8, aPixel; "/Pixel"
 * 000000018004BF2A: mov     rdx, rax
 * 000000018004BF2D: lea     rcx, [rbp+9E10h+var_3EC0]
 * 000000018004BF34: call    sub_18002C218
 * 000000018004BF39: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BF3E: mov     rcx, rax
 * 000000018004BF41: call    sub_1800CF3A0
 * 000000018004BF46: mov     cs:byte_180218CEC, al
 * 000000018004BF4C: lea     rcx, [rbp+9E10h+var_3EA0]; void *
 * 000000018004BF53: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BF58: nop
 * 000000018004BF59: lea     rcx, [rbp+9E10h+var_3E80]; void *
 * 000000018004BF60: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BF65: nop
 * 000000018004BF66: lea     rcx, dword_180218CF0
 * 000000018004BF6D: call    _Init_thread_footer
 * 000000018004BF72: mov     rax, [rdi+rbx*8]
 * 000000018004BF76: mov     eax, [r15+rax]
 * 000000018004BF7A: cmp     cs:dword_180218CF8, eax
 * 000000018004BF80: jle     loc_18004C069
 * 000000018004BF86: lea     rcx, dword_180218CF8
 * 000000018004BF8D: call    _Init_thread_header
 * 000000018004BF92: cmp     cs:dword_180218CF8, r14d
 * 000000018004BF99: jnz     loc_18004C069
 * 000000018004BF9F: lea     rax, unk_180160930
 * 000000018004BFA6: mov     qword ptr [rbp+9E10h+var_9670], rax
 * 000000018004BFAD: lea     rax, unk_18016705C
 * 000000018004BFB4: mov     qword ptr [rbp+9E10h+var_9670+8], rax
 * 000000018004BFBB: movups  xmm0, [rbp+9E10h+var_9670]
 * 000000018004BFC2: movups  [rbp+9E10h+var_7950], xmm0
 * 000000018004BFC9: mov     dword ptr [rbp+9E10h+var_7940], 5
 * 000000018004BFD3: mov     dword ptr [rbp+9E10h+var_7940+4], esi
 * 000000018004BFD9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BFDE: movups  xmm0, [rbp+9E10h+var_7940]
 * 000000018004BFE5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BFEA: call    sub_180043E00
 * 000000018004BFEF: mov     r8, rax
 * 000000018004BFF2: mov     r9d, r12d
 * 000000018004BFF5: mov     edx, 1E0h
 * 000000018004BFFA: lea     rcx, [rbp+9E10h+var_3E20]; Src
 * 000000018004C001: call    sub_1800CF2C8
 * 000000018004C006: nop
 * 000000018004C007: mov     r8, rax
 * 000000018004C00A: mov     rdx, r13
 * 000000018004C00D: lea     rcx, [rbp+9E10h+var_3E40]
 * 000000018004C014: call    sub_180043BDC
 * 000000018004C019: nop
 * 000000018004C01A: lea     r8, aPixel; "/Pixel"
 * 000000018004C021: mov     rdx, rax
 * 000000018004C024: lea     rcx, [rbp+9E10h+var_3E60]
 * 000000018004C02B: call    sub_18002C218
 * 000000018004C030: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C035: mov     rcx, rax
 * 000000018004C038: call    sub_1800CF3A0
 * 000000018004C03D: mov     cs:byte_180218CF4, al
 * 000000018004C043: lea     rcx, [rbp+9E10h+var_3E40]; void *
 * 000000018004C04A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C04F: nop
 * 000000018004C050: lea     rcx, [rbp+9E10h+var_3E20]; void *
 * 000000018004C057: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C05C: nop
 * 000000018004C05D: lea     rcx, dword_180218CF8
 * 000000018004C064: call    _Init_thread_footer
 * 000000018004C069: mov     rax, [rdi+rbx*8]
 * 000000018004C06D: mov     eax, [r15+rax]
 * 000000018004C071: cmp     cs:dword_180218D00, eax
 * 000000018004C077: jle     loc_18004C160
 * 000000018004C07D: lea     rcx, dword_180218D00
 * 000000018004C084: call    _Init_thread_header
 * 000000018004C089: cmp     cs:dword_180218D00, r14d
 * 000000018004C090: jnz     loc_18004C160
 * 000000018004C096: lea     rax, unk_180160930
 * 000000018004C09D: mov     qword ptr [rbp+9E10h+var_9660], rax
 * 000000018004C0A4: lea     rax, unk_18016705C
 * 000000018004C0AB: mov     qword ptr [rbp+9E10h+var_9660+8], rax
 * 000000018004C0B2: movups  xmm0, [rbp+9E10h+var_9660]
 * 000000018004C0B9: movups  [rbp+9E10h+var_7930], xmm0
 * 000000018004C0C0: mov     dword ptr [rbp+9E10h+var_7920], 5
 * 000000018004C0CA: mov     dword ptr [rbp+9E10h+var_7920+4], esi
 * 000000018004C0D0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C0D5: movups  xmm0, [rbp+9E10h+var_7920]
 * 000000018004C0DC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C0E1: call    sub_180043E00
 * 000000018004C0E6: mov     r8, rax
 * 000000018004C0E9: mov     r9d, r12d
 * 000000018004C0EC: mov     edx, 1E2h
 * 000000018004C0F1: lea     rcx, [rbp+9E10h+var_3DC0]; Src
 * 000000018004C0F8: call    sub_1800CF2C8
 * 000000018004C0FD: nop
 * 000000018004C0FE: mov     r8, rax
 * 000000018004C101: mov     rdx, r13
 * 000000018004C104: lea     rcx, [rbp+9E10h+var_3DE0]
 * 000000018004C10B: call    sub_180043BDC
 * 000000018004C110: nop
 * 000000018004C111: lea     r8, aPixel; "/Pixel"
 * 000000018004C118: mov     rdx, rax
 * 000000018004C11B: lea     rcx, [rbp+9E10h+var_3E00]
 * 000000018004C122: call    sub_18002C218
 * 000000018004C127: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C12C: mov     rcx, rax
 * 000000018004C12F: call    sub_1800CF3A0
 * 000000018004C134: mov     cs:byte_180218CFC, al
 * 000000018004C13A: lea     rcx, [rbp+9E10h+var_3DE0]; void *
 * 000000018004C141: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C146: nop
 * 000000018004C147: lea     rcx, [rbp+9E10h+var_3DC0]; void *
 * 000000018004C14E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C153: nop
 * 000000018004C154: lea     rcx, dword_180218D00
 * 000000018004C15B: call    _Init_thread_footer
 * 000000018004C160: mov     rax, [rdi+rbx*8]
 * 000000018004C164: mov     eax, [r15+rax]
 * 000000018004C168: cmp     cs:dword_180218D08, eax
 * 000000018004C16E: jle     loc_18004C257
 * 000000018004C174: lea     rcx, dword_180218D08
 * 000000018004C17B: call    _Init_thread_header
 * 000000018004C180: cmp     cs:dword_180218D08, r14d
 * 000000018004C187: jnz     loc_18004C257
 * 000000018004C18D: lea     rax, unk_18016A540
 * 000000018004C194: mov     qword ptr [rbp+9E10h+var_9650], rax
 * 000000018004C19B: lea     rax, unk_180170DFC
 * 000000018004C1A2: mov     qword ptr [rbp+9E10h+var_9650+8], rax
 * 000000018004C1A9: movups  xmm0, [rbp+9E10h+var_9650]
 * 000000018004C1B0: movups  [rbp+9E10h+var_7910], xmm0
 * 000000018004C1B7: mov     dword ptr [rbp+9E10h+var_7900], 5
 * 000000018004C1C1: mov     dword ptr [rbp+9E10h+var_7900+4], esi
 * 000000018004C1C7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C1CC: movups  xmm0, [rbp+9E10h+var_7900]
 * 000000018004C1D3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C1D8: call    sub_180043E00
 * 000000018004C1DD: mov     r8, rax
 * 000000018004C1E0: mov     r9d, r12d
 * 000000018004C1E3: mov     edx, 1E8h
 * 000000018004C1E8: lea     rcx, [rbp+9E10h+var_3D60]; Src
 * 000000018004C1EF: call    sub_1800CF2C8
 * 000000018004C1F4: nop
 * 000000018004C1F5: mov     r8, rax
 * 000000018004C1F8: mov     rdx, r13
 * 000000018004C1FB: lea     rcx, [rbp+9E10h+var_3D80]
 * 000000018004C202: call    sub_180043BDC
 * 000000018004C207: nop
 * 000000018004C208: lea     r8, aPixel; "/Pixel"
 * 000000018004C20F: mov     rdx, rax
 * 000000018004C212: lea     rcx, [rbp+9E10h+var_3DA0]
 * 000000018004C219: call    sub_18002C218
 * 000000018004C21E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C223: mov     rcx, rax
 * 000000018004C226: call    sub_1800CF3A0
 * 000000018004C22B: mov     cs:byte_180218D04, al
 * 000000018004C231: lea     rcx, [rbp+9E10h+var_3D80]; void *
 * 000000018004C238: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C23D: nop
 * 000000018004C23E: lea     rcx, [rbp+9E10h+var_3D60]; void *
 * 000000018004C245: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C24A: nop
 * 000000018004C24B: lea     rcx, dword_180218D08
 * 000000018004C252: call    _Init_thread_footer
 * 000000018004C257: mov     rax, [rdi+rbx*8]
 * 000000018004C25B: mov     eax, [r15+rax]
 * 000000018004C25F: cmp     cs:dword_180218D10, eax
 * 000000018004C265: jle     loc_18004C34E
 * 000000018004C26B: lea     rcx, dword_180218D10
 * 000000018004C272: call    _Init_thread_header
 * 000000018004C277: cmp     cs:dword_180218D10, r14d
 * 000000018004C27E: jnz     loc_18004C34E
 * 000000018004C284: lea     rax, unk_18016A540
 * 000000018004C28B: mov     qword ptr [rbp+9E10h+var_9640], rax
 * 000000018004C292: lea     rax, unk_180170DFC
 * 000000018004C299: mov     qword ptr [rbp+9E10h+var_9640+8], rax
 * 000000018004C2A0: movups  xmm0, [rbp+9E10h+var_9640]
 * 000000018004C2A7: movups  [rbp+9E10h+var_78F0], xmm0
 * 000000018004C2AE: mov     dword ptr [rbp+9E10h+var_78E0], 5
 * 000000018004C2B8: mov     dword ptr [rbp+9E10h+var_78E0+4], esi
 * 000000018004C2BE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C2C3: movups  xmm0, [rbp+9E10h+var_78E0]
 * 000000018004C2CA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C2CF: call    sub_180043E00
 * 000000018004C2D4: mov     r8, rax
 * 000000018004C2D7: mov     r9d, r12d
 * 000000018004C2DA: mov     edx, 1EAh
 * 000000018004C2DF: lea     rcx, [rbp+9E10h+var_3D00]; Src
 * 000000018004C2E6: call    sub_1800CF2C8
 * 000000018004C2EB: nop
 * 000000018004C2EC: mov     r8, rax
 * 000000018004C2EF: mov     rdx, r13
 * 000000018004C2F2: lea     rcx, [rbp+9E10h+var_3D20]
 * 000000018004C2F9: call    sub_180043BDC
 * 000000018004C2FE: nop
 * 000000018004C2FF: lea     r8, aPixel; "/Pixel"
 * 000000018004C306: mov     rdx, rax
 * 000000018004C309: lea     rcx, [rbp+9E10h+var_3D40]
 * 000000018004C310: call    sub_18002C218
 * 000000018004C315: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C31A: mov     rcx, rax
 * 000000018004C31D: call    sub_1800CF3A0
 * 000000018004C322: mov     cs:byte_180218D0C, al
 * 000000018004C328: lea     rcx, [rbp+9E10h+var_3D20]; void *
 * 000000018004C32F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C334: nop
 * 000000018004C335: lea     rcx, [rbp+9E10h+var_3D00]; void *
 * 000000018004C33C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C341: nop
 * 000000018004C342: lea     rcx, dword_180218D10
 * 000000018004C349: call    _Init_thread_footer
 * 000000018004C34E: mov     rax, [rdi+rbx*8]
 * 000000018004C352: mov     eax, [r15+rax]
 * 000000018004C356: cmp     cs:dword_180218D18, eax
 * 000000018004C35C: jle     loc_18004C445
 * 000000018004C362: lea     rcx, dword_180218D18
 * 000000018004C369: call    _Init_thread_header
 * 000000018004C36E: cmp     cs:dword_180218D18, r14d
 * 000000018004C375: jnz     loc_18004C445
 * 000000018004C37B: lea     rax, unk_180170E00
 * 000000018004C382: mov     qword ptr [rbp+9E10h+var_9630], rax
 * 000000018004C389: lea     rax, unk_180177708
 * 000000018004C390: mov     qword ptr [rbp+9E10h+var_9630+8], rax
 * 000000018004C397: movups  xmm0, [rbp+9E10h+var_9630]
 * 000000018004C39E: movups  [rbp+9E10h+var_78D0], xmm0
 * 000000018004C3A5: mov     dword ptr [rbp+9E10h+var_78C0], 5
 * 000000018004C3AF: mov     dword ptr [rbp+9E10h+var_78C0+4], esi
 * 000000018004C3B5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C3BA: movups  xmm0, [rbp+9E10h+var_78C0]
 * 000000018004C3C1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C3C6: call    sub_180043E00
 * 000000018004C3CB: mov     r8, rax
 * 000000018004C3CE: mov     r9d, r12d
 * 000000018004C3D1: mov     edx, 1F0h
 * 000000018004C3D6: lea     rcx, [rbp+9E10h+var_3CA0]; Src
 * 000000018004C3DD: call    sub_1800CF2C8
 * 000000018004C3E2: nop
 * 000000018004C3E3: mov     r8, rax
 * 000000018004C3E6: mov     rdx, r13
 * 000000018004C3E9: lea     rcx, [rbp+9E10h+var_3CC0]
 * 000000018004C3F0: call    sub_180043BDC
 * 000000018004C3F5: nop
 * 000000018004C3F6: lea     r8, aPixel; "/Pixel"
 * 000000018004C3FD: mov     rdx, rax
 * 000000018004C400: lea     rcx, [rbp+9E10h+var_3CE0]
 * 000000018004C407: call    sub_18002C218
 * 000000018004C40C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C411: mov     rcx, rax
 * 000000018004C414: call    sub_1800CF3A0
 * 000000018004C419: mov     cs:byte_180218D14, al
 * 000000018004C41F: lea     rcx, [rbp+9E10h+var_3CC0]; void *
 * 000000018004C426: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C42B: nop
 * 000000018004C42C: lea     rcx, [rbp+9E10h+var_3CA0]; void *
 * 000000018004C433: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C438: nop
 * 000000018004C439: lea     rcx, dword_180218D18
 * 000000018004C440: call    _Init_thread_footer
 * 000000018004C445: mov     rax, [rdi+rbx*8]
 * 000000018004C449: mov     eax, [r15+rax]
 * 000000018004C44D: cmp     cs:dword_180218D20, eax
 * 000000018004C453: jle     loc_18004C53C
 * 000000018004C459: lea     rcx, dword_180218D20
 * 000000018004C460: call    _Init_thread_header
 * 000000018004C465: cmp     cs:dword_180218D20, r14d
 * 000000018004C46C: jnz     loc_18004C53C
 * 000000018004C472: lea     rax, unk_180170E00
 * 000000018004C479: mov     qword ptr [rbp+9E10h+var_9620], rax
 * 000000018004C480: lea     rax, unk_180177708
 * 000000018004C487: mov     qword ptr [rbp+9E10h+var_9620+8], rax
 * 000000018004C48E: movups  xmm0, [rbp+9E10h+var_9620]
 * 000000018004C495: movups  [rbp+9E10h+var_78B0], xmm0
 * 000000018004C49C: mov     dword ptr [rbp+9E10h+var_78A0], 5
 * 000000018004C4A6: mov     dword ptr [rbp+9E10h+var_78A0+4], esi
 * 000000018004C4AC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C4B1: movups  xmm0, [rbp+9E10h+var_78A0]
 * 000000018004C4B8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C4BD: call    sub_180043E00
 * 000000018004C4C2: mov     r8, rax
 * 000000018004C4C5: mov     r9d, r12d
 * 000000018004C4C8: mov     edx, 1F2h
 * 000000018004C4CD: lea     rcx, [rbp+9E10h+var_3C40]; Src
 * 000000018004C4D4: call    sub_1800CF2C8
 * 000000018004C4D9: nop
 * 000000018004C4DA: mov     r8, rax
 * 000000018004C4DD: mov     rdx, r13
 * 000000018004C4E0: lea     rcx, [rbp+9E10h+var_3C60]
 * 000000018004C4E7: call    sub_180043BDC
 * 000000018004C4EC: nop
 * 000000018004C4ED: lea     r8, aPixel; "/Pixel"
 * 000000018004C4F4: mov     rdx, rax
 * 000000018004C4F7: lea     rcx, [rbp+9E10h+var_3C80]
 * 000000018004C4FE: call    sub_18002C218
 * 000000018004C503: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C508: mov     rcx, rax
 * 000000018004C50B: call    sub_1800CF3A0
 * 000000018004C510: mov     cs:byte_180218D1C, al
 * 000000018004C516: lea     rcx, [rbp+9E10h+var_3C60]; void *
 * 000000018004C51D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C522: nop
 * 000000018004C523: lea     rcx, [rbp+9E10h+var_3C40]; void *
 * 000000018004C52A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C52F: nop
 * 000000018004C530: lea     rcx, dword_180218D20
 * 000000018004C537: call    _Init_thread_footer
 * 000000018004C53C: mov     rax, [rdi+rbx*8]
 * 000000018004C540: mov     eax, [r15+rax]
 * 000000018004C544: cmp     cs:dword_180218D28, eax
 * 000000018004C54A: jle     loc_18004C633
 * 000000018004C550: lea     rcx, dword_180218D28
 * 000000018004C557: call    _Init_thread_header
 * 000000018004C55C: cmp     cs:dword_180218D28, r14d
 * 000000018004C563: jnz     loc_18004C633
 * 000000018004C569: lea     rax, unk_18017AD30
 * 000000018004C570: mov     qword ptr [rbp+9E10h+var_9610], rax
 * 000000018004C577: lea     rax, unk_1801817EC
 * 000000018004C57E: mov     qword ptr [rbp+9E10h+var_9610+8], rax
 * 000000018004C585: movups  xmm0, [rbp+9E10h+var_9610]
 * 000000018004C58C: movups  [rbp+9E10h+var_7890], xmm0
 * 000000018004C593: mov     dword ptr [rbp+9E10h+var_7880], 5
 * 000000018004C59D: mov     dword ptr [rbp+9E10h+var_7880+4], esi
 * 000000018004C5A3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C5A8: movups  xmm0, [rbp+9E10h+var_7880]
 * 000000018004C5AF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C5B4: call    sub_180043E00
 * 000000018004C5B9: mov     r8, rax
 * 000000018004C5BC: mov     r9d, r12d
 * 000000018004C5BF: mov     edx, 1F8h
 * 000000018004C5C4: lea     rcx, [rbp+9E10h+var_3BE0]; Src
 * 000000018004C5CB: call    sub_1800CF2C8
 * 000000018004C5D0: nop
 * 000000018004C5D1: mov     r8, rax
 * 000000018004C5D4: mov     rdx, r13
 * 000000018004C5D7: lea     rcx, [rbp+9E10h+var_3C00]
 * 000000018004C5DE: call    sub_180043BDC
 * 000000018004C5E3: nop
 * 000000018004C5E4: lea     r8, aPixel; "/Pixel"
 * 000000018004C5EB: mov     rdx, rax
 * 000000018004C5EE: lea     rcx, [rbp+9E10h+var_3C20]
 * 000000018004C5F5: call    sub_18002C218
 * 000000018004C5FA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C5FF: mov     rcx, rax
 * 000000018004C602: call    sub_1800CF3A0
 * 000000018004C607: mov     cs:byte_180218D24, al
 * 000000018004C60D: lea     rcx, [rbp+9E10h+var_3C00]; void *
 * 000000018004C614: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C619: nop
 * 000000018004C61A: lea     rcx, [rbp+9E10h+var_3BE0]; void *
 * 000000018004C621: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C626: nop
 * 000000018004C627: lea     rcx, dword_180218D28
 * 000000018004C62E: call    _Init_thread_footer
 * 000000018004C633: mov     rax, [rdi+rbx*8]
 * 000000018004C637: mov     eax, [r15+rax]
 * 000000018004C63B: cmp     cs:dword_180218D30, eax
 * 000000018004C641: jle     loc_18004C72A
 * 000000018004C647: lea     rcx, dword_180218D30
 * 000000018004C64E: call    _Init_thread_header
 * 000000018004C653: cmp     cs:dword_180218D30, r14d
 * 000000018004C65A: jnz     loc_18004C72A
 * 000000018004C660: lea     rax, unk_18017AD30
 * 000000018004C667: mov     qword ptr [rbp+9E10h+var_9600], rax
 * 000000018004C66E: lea     rax, unk_1801817EC
 * 000000018004C675: mov     qword ptr [rbp+9E10h+var_9600+8], rax
 * 000000018004C67C: movups  xmm0, [rbp+9E10h+var_9600]
 * 000000018004C683: movups  [rbp+9E10h+var_7870], xmm0
 * 000000018004C68A: mov     dword ptr [rbp+9E10h+var_7860], 5
 * 000000018004C694: mov     dword ptr [rbp+9E10h+var_7860+4], esi
 * 000000018004C69A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C69F: movups  xmm0, [rbp+9E10h+var_7860]
 * 000000018004C6A6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C6AB: call    sub_180043E00
 * 000000018004C6B0: mov     r8, rax
 * 000000018004C6B3: mov     r9d, r12d
 * 000000018004C6B6: mov     edx, 1FAh
 * 000000018004C6BB: lea     rcx, [rbp+9E10h+var_3B80]; Src
 * 000000018004C6C2: call    sub_1800CF2C8
 * 000000018004C6C7: nop
 * 000000018004C6C8: mov     r8, rax
 * 000000018004C6CB: mov     rdx, r13
 * 000000018004C6CE: lea     rcx, [rbp+9E10h+var_3BA0]
 * 000000018004C6D5: call    sub_180043BDC
 * 000000018004C6DA: nop
 * 000000018004C6DB: lea     r8, aPixel; "/Pixel"
 * 000000018004C6E2: mov     rdx, rax
 * 000000018004C6E5: lea     rcx, [rbp+9E10h+var_3BC0]
 * 000000018004C6EC: call    sub_18002C218
 * 000000018004C6F1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C6F6: mov     rcx, rax
 * 000000018004C6F9: call    sub_1800CF3A0
 * 000000018004C6FE: mov     cs:byte_180218D2C, al
 * 000000018004C704: lea     rcx, [rbp+9E10h+var_3BA0]; void *
 * 000000018004C70B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C710: nop
 * 000000018004C711: lea     rcx, [rbp+9E10h+var_3B80]; void *
 * 000000018004C718: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C71D: nop
 * 000000018004C71E: lea     rcx, dword_180218D30
 * 000000018004C725: call    _Init_thread_footer
 * 000000018004C72A: mov     rax, [rdi+rbx*8]
 * 000000018004C72E: mov     eax, [r15+rax]
 * 000000018004C732: cmp     cs:dword_180218D38, eax
 * 000000018004C738: jle     loc_18004C81A
 * 000000018004C73E: lea     rcx, dword_180218D38
 * 000000018004C745: call    _Init_thread_header
 * 000000018004C74A: cmp     cs:dword_180218D38, r14d
 * 000000018004C751: jnz     loc_18004C81A
 * 000000018004C757: lea     rax, unk_1801817F0
 * 000000018004C75E: mov     qword ptr [rbp+9E10h+var_95F0], rax
 * 000000018004C765: lea     rax, unk_180182808
 * 000000018004C76C: mov     qword ptr [rbp+9E10h+var_95F0+8], rax
 * 000000018004C773: movups  xmm0, [rbp+9E10h+var_95F0]
 * 000000018004C77A: movups  [rbp+9E10h+var_7850], xmm0
 * 000000018004C781: mov     dword ptr [rbp+9E10h+var_7840], esi
 * 000000018004C787: mov     dword ptr [rbp+9E10h+var_7840+4], esi
 * 000000018004C78D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C792: movups  xmm0, [rbp+9E10h+var_7840]
 * 000000018004C799: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C79E: call    sub_180043E00
 * 000000018004C7A3: mov     r8, rax
 * 000000018004C7A6: mov     r9d, r12d
 * 000000018004C7A9: xor     edx, edx
 * 000000018004C7AB: lea     rcx, [rbp+9E10h+var_3B20]; Src
 * 000000018004C7B2: call    sub_1800CF2C8
 * 000000018004C7B7: nop
 * 000000018004C7B8: mov     r8, rax
 * 000000018004C7BB: mov     rdx, r13
 * 000000018004C7BE: lea     rcx, [rbp+9E10h+var_3B40]
 * 000000018004C7C5: call    sub_180043BDC
 * 000000018004C7CA: nop
 * 000000018004C7CB: lea     r8, aVertex; "/Vertex"
 * 000000018004C7D2: mov     rdx, rax
 * 000000018004C7D5: lea     rcx, [rbp+9E10h+var_3B60]
 * 000000018004C7DC: call    sub_18002C218
 * 000000018004C7E1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C7E6: mov     rcx, rax
 * 000000018004C7E9: call    sub_1800CF3A0
 * 000000018004C7EE: mov     cs:byte_180218D34, al
 * 000000018004C7F4: lea     rcx, [rbp+9E10h+var_3B40]; void *
 * 000000018004C7FB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C800: nop
 * 000000018004C801: lea     rcx, [rbp+9E10h+var_3B20]; void *
 * 000000018004C808: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C80D: nop
 * 000000018004C80E: lea     rcx, dword_180218D38
 * 000000018004C815: call    _Init_thread_footer
 * 000000018004C81A: mov     rax, [rdi+rbx*8]
 * 000000018004C81E: mov     eax, [r15+rax]
 * 000000018004C822: cmp     cs:dword_180218D40, eax
 * 000000018004C828: jle     loc_18004C90B
 * 000000018004C82E: lea     rcx, dword_180218D40
 * 000000018004C835: call    _Init_thread_header
 * 000000018004C83A: cmp     cs:dword_180218D40, r14d
 * 000000018004C841: jnz     loc_18004C90B
 * 000000018004C847: lea     rax, unk_180182810
 * 000000018004C84E: mov     qword ptr [rbp+9E10h+var_95E0], rax
 * 000000018004C855: lea     rax, unk_180182D94
 * 000000018004C85C: mov     qword ptr [rbp+9E10h+var_95E0+8], rax
 * 000000018004C863: movups  xmm0, [rbp+9E10h+var_95E0]
 * 000000018004C86A: movups  [rbp+9E10h+var_7830], xmm0
 * 000000018004C871: mov     dword ptr [rbp+9E10h+var_7820], esi
 * 000000018004C877: mov     dword ptr [rbp+9E10h+var_7820+4], esi
 * 000000018004C87D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C882: movups  xmm0, [rbp+9E10h+var_7820]
 * 000000018004C889: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C88E: call    sub_180043E00
 * 000000018004C893: mov     r8, rax
 * 000000018004C896: mov     r9d, r12d
 * 000000018004C899: mov     rdx, rsi
 * 000000018004C89C: lea     rcx, [rbp+9E10h+var_3AC0]; Src
 * 000000018004C8A3: call    sub_1800CF2C8
 * 000000018004C8A8: nop
 * 000000018004C8A9: mov     r8, rax
 * 000000018004C8AC: mov     rdx, r13
 * 000000018004C8AF: lea     rcx, [rbp+9E10h+var_3AE0]
 * 000000018004C8B6: call    sub_180043BDC
 * 000000018004C8BB: nop
 * 000000018004C8BC: lea     r8, aVertex; "/Vertex"
 * 000000018004C8C3: mov     rdx, rax
 * 000000018004C8C6: lea     rcx, [rbp+9E10h+var_3B00]
 * 000000018004C8CD: call    sub_18002C218
 * 000000018004C8D2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C8D7: mov     rcx, rax
 * 000000018004C8DA: call    sub_1800CF3A0
 * 000000018004C8DF: mov     cs:byte_180218D3C, al
 * 000000018004C8E5: lea     rcx, [rbp+9E10h+var_3AE0]; void *
 * 000000018004C8EC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C8F1: nop
 * 000000018004C8F2: lea     rcx, [rbp+9E10h+var_3AC0]; void *
 * 000000018004C8F9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C8FE: nop
 * 000000018004C8FF: lea     rcx, dword_180218D40
 * 000000018004C906: call    _Init_thread_footer
 * 000000018004C90B: mov     rax, [rdi+rbx*8]
 * 000000018004C90F: mov     ecx, [r15+rax]
 * 000000018004C913: cmp     cs:dword_180218D48, ecx
 * 000000018004C919: jle     loc_18004C9FE
 * 000000018004C91F: lea     rcx, dword_180218D48
 * 000000018004C926: call    _Init_thread_header
 * 000000018004C92B: cmp     cs:dword_180218D48, r14d
 * 000000018004C932: jnz     loc_18004C9FE
 * 000000018004C938: lea     rax, unk_1801817F0
 * 000000018004C93F: mov     qword ptr [rbp+9E10h+var_95D0], rax
 * 000000018004C946: lea     rax, unk_180182808
 * 000000018004C94D: mov     qword ptr [rbp+9E10h+var_95D0+8], rax
 * 000000018004C954: movups  xmm0, [rbp+9E10h+var_95D0]
 * 000000018004C95B: movups  [rbp+9E10h+var_7810], xmm0
 * 000000018004C962: mov     dword ptr [rbp+9E10h+var_7800], esi
 * 000000018004C968: mov     dword ptr [rbp+9E10h+var_7800+4], esi
 * 000000018004C96E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C973: movups  xmm0, [rbp+9E10h+var_7800]
 * 000000018004C97A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C97F: call    sub_180043E00
 * 000000018004C984: mov     r8, rax
 * 000000018004C987: mov     r9d, r12d
 * 000000018004C98A: mov     edx, 2
 * 000000018004C98F: lea     rcx, [rbp+9E10h+var_3A60]; Src
 * 000000018004C996: call    sub_1800CF2C8
 * 000000018004C99B: nop
 * 000000018004C99C: mov     r8, rax
 * 000000018004C99F: mov     rdx, r13
 * 000000018004C9A2: lea     rcx, [rbp+9E10h+var_3A80]
 * 000000018004C9A9: call    sub_180043BDC
 * 000000018004C9AE: nop
 * 000000018004C9AF: lea     r8, aVertex; "/Vertex"
 * 000000018004C9B6: mov     rdx, rax
 * 000000018004C9B9: lea     rcx, [rbp+9E10h+var_3AA0]
 * 000000018004C9C0: call    sub_18002C218
 * 000000018004C9C5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C9CA: mov     rcx, rax
 * 000000018004C9CD: call    sub_1800CF3A0
 * 000000018004C9D2: mov     cs:byte_180218D44, al
 * 000000018004C9D8: lea     rcx, [rbp+9E10h+var_3A80]; void *
 * 000000018004C9DF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C9E4: nop
 * 000000018004C9E5: lea     rcx, [rbp+9E10h+var_3A60]; void *
 * 000000018004C9EC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C9F1: nop
 * 000000018004C9F2: lea     rcx, dword_180218D48
 * 000000018004C9F9: call    _Init_thread_footer
 * 000000018004C9FE: mov     rax, [rdi+rbx*8]
 * 000000018004CA02: mov     ecx, [r15+rax]
 * 000000018004CA06: cmp     cs:dword_180218D50, ecx
 * 000000018004CA0C: jle     loc_18004CAF1
 * 000000018004CA12: lea     rcx, dword_180218D50
 * 000000018004CA19: call    _Init_thread_header
 * 000000018004CA1E: cmp     cs:dword_180218D50, r14d
 * 000000018004CA25: jnz     loc_18004CAF1
 * 000000018004CA2B: lea     rax, unk_1801817F0
 * 000000018004CA32: mov     qword ptr [rbp+9E10h+var_95C0], rax
 * 000000018004CA39: lea     rax, unk_180182808
 * 000000018004CA40: mov     qword ptr [rbp+9E10h+var_95C0+8], rax
 * 000000018004CA47: movups  xmm0, [rbp+9E10h+var_95C0]
 * 000000018004CA4E: movups  [rbp+9E10h+var_77F0], xmm0
 * 000000018004CA55: mov     dword ptr [rbp+9E10h+var_77E0], esi
 * 000000018004CA5B: mov     dword ptr [rbp+9E10h+var_77E0+4], esi
 * 000000018004CA61: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CA66: movups  xmm0, [rbp+9E10h+var_77E0]
 * 000000018004CA6D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CA72: call    sub_180043E00
 * 000000018004CA77: mov     r8, rax
 * 000000018004CA7A: mov     r9d, r12d
 * 000000018004CA7D: mov     edx, 4
 * 000000018004CA82: lea     rcx, [rbp+9E10h+var_3A00]; Src
 * 000000018004CA89: call    sub_1800CF2C8
 * 000000018004CA8E: nop
 * 000000018004CA8F: mov     r8, rax
 * 000000018004CA92: mov     rdx, r13
 * 000000018004CA95: lea     rcx, [rbp+9E10h+var_3A20]
 * 000000018004CA9C: call    sub_180043BDC
 * 000000018004CAA1: nop
 * 000000018004CAA2: lea     r8, aVertex; "/Vertex"
 * 000000018004CAA9: mov     rdx, rax
 * 000000018004CAAC: lea     rcx, [rbp+9E10h+var_3A40]
 * 000000018004CAB3: call    sub_18002C218
 * 000000018004CAB8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CABD: mov     rcx, rax
 * 000000018004CAC0: call    sub_1800CF3A0
 * 000000018004CAC5: mov     cs:byte_180218D4C, al
 * 000000018004CACB: lea     rcx, [rbp+9E10h+var_3A20]; void *
 * 000000018004CAD2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CAD7: nop
 * 000000018004CAD8: lea     rcx, [rbp+9E10h+var_3A00]; void *
 * 000000018004CADF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CAE4: nop
 * 000000018004CAE5: lea     rcx, dword_180218D50
 * 000000018004CAEC: call    _Init_thread_footer
 * 000000018004CAF1: mov     rax, [rdi+rbx*8]
 * 000000018004CAF5: mov     ecx, [r15+rax]
 * 000000018004CAF9: cmp     cs:dword_180218D58, ecx
 * 000000018004CAFF: jle     loc_18004CBE4
 * 000000018004CB05: lea     rcx, dword_180218D58
 * 000000018004CB0C: call    _Init_thread_header
 * 000000018004CB11: cmp     cs:dword_180218D58, r14d
 * 000000018004CB18: jnz     loc_18004CBE4
 * 000000018004CB1E: lea     rax, unk_180182810
 * 000000018004CB25: mov     qword ptr [rbp+9E10h+var_95B0], rax
 * 000000018004CB2C: lea     rax, unk_180182D94
 * 000000018004CB33: mov     qword ptr [rbp+9E10h+var_95B0+8], rax
 * 000000018004CB3A: movups  xmm0, [rbp+9E10h+var_95B0]
 * 000000018004CB41: movups  [rbp+9E10h+var_77D0], xmm0
 * 000000018004CB48: mov     dword ptr [rbp+9E10h+var_77C0], esi
 * 000000018004CB4E: mov     dword ptr [rbp+9E10h+var_77C0+4], esi
 * 000000018004CB54: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CB59: movups  xmm0, [rbp+9E10h+var_77C0]
 * 000000018004CB60: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CB65: call    sub_180043E00
 * 000000018004CB6A: mov     r8, rax
 * 000000018004CB6D: mov     r9d, r12d
 * 000000018004CB70: mov     edx, 5
 * 000000018004CB75: lea     rcx, [rbp+9E10h+var_39A0]; Src
 * 000000018004CB7C: call    sub_1800CF2C8
 * 000000018004CB81: nop
 * 000000018004CB82: mov     r8, rax
 * 000000018004CB85: mov     rdx, r13
 * 000000018004CB88: lea     rcx, [rbp+9E10h+var_39C0]
 * 000000018004CB8F: call    sub_180043BDC
 * 000000018004CB94: nop
 * 000000018004CB95: lea     r8, aVertex; "/Vertex"
 * 000000018004CB9C: mov     rdx, rax
 * 000000018004CB9F: lea     rcx, [rbp+9E10h+var_39E0]
 * 000000018004CBA6: call    sub_18002C218
 * 000000018004CBAB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CBB0: mov     rcx, rax
 * 000000018004CBB3: call    sub_1800CF3A0
 * 000000018004CBB8: mov     cs:byte_180218D54, al
 * 000000018004CBBE: lea     rcx, [rbp+9E10h+var_39C0]; void *
 * 000000018004CBC5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CBCA: nop
 * 000000018004CBCB: lea     rcx, [rbp+9E10h+var_39A0]; void *
 * 000000018004CBD2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CBD7: nop
 * 000000018004CBD8: lea     rcx, dword_180218D58
 * 000000018004CBDF: call    _Init_thread_footer
 * 000000018004CBE4: mov     rax, [rdi+rbx*8]
 * 000000018004CBE8: mov     ecx, [r15+rax]
 * 000000018004CBEC: cmp     cs:dword_180218D60, ecx
 * 000000018004CBF2: jle     loc_18004CCD7
 * 000000018004CBF8: lea     rcx, dword_180218D60
 * 000000018004CBFF: call    _Init_thread_header
 * 000000018004CC04: cmp     cs:dword_180218D60, r14d
 * 000000018004CC0B: jnz     loc_18004CCD7
 * 000000018004CC11: lea     rax, unk_1801817F0
 * 000000018004CC18: mov     qword ptr [rbp+9E10h+var_95A0], rax
 * 000000018004CC1F: lea     rax, unk_180182808
 * 000000018004CC26: mov     qword ptr [rbp+9E10h+var_95A0+8], rax
 * 000000018004CC2D: movups  xmm0, [rbp+9E10h+var_95A0]
 * 000000018004CC34: movups  [rbp+9E10h+var_77B0], xmm0
 * 000000018004CC3B: mov     dword ptr [rbp+9E10h+var_77A0], esi
 * 000000018004CC41: mov     dword ptr [rbp+9E10h+var_77A0+4], esi
 * 000000018004CC47: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CC4C: movups  xmm0, [rbp+9E10h+var_77A0]
 * 000000018004CC53: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CC58: call    sub_180043E00
 * 000000018004CC5D: mov     r8, rax
 * 000000018004CC60: mov     r9d, r12d
 * 000000018004CC63: mov     edx, 6
 * 000000018004CC68: lea     rcx, [rbp+9E10h+var_3940]; Src
 * 000000018004CC6F: call    sub_1800CF2C8
 * 000000018004CC74: nop
 * 000000018004CC75: mov     r8, rax
 * 000000018004CC78: mov     rdx, r13
 * 000000018004CC7B: lea     rcx, [rbp+9E10h+var_3960]
 * 000000018004CC82: call    sub_180043BDC
 * 000000018004CC87: nop
 * 000000018004CC88: lea     r8, aVertex; "/Vertex"
 * 000000018004CC8F: mov     rdx, rax
 * 000000018004CC92: lea     rcx, [rbp+9E10h+var_3980]
 * 000000018004CC99: call    sub_18002C218
 * 000000018004CC9E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CCA3: mov     rcx, rax
 * 000000018004CCA6: call    sub_1800CF3A0
 * 000000018004CCAB: mov     cs:byte_180218D5C, al
 * 000000018004CCB1: lea     rcx, [rbp+9E10h+var_3960]; void *
 * 000000018004CCB8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CCBD: nop
 * 000000018004CCBE: lea     rcx, [rbp+9E10h+var_3940]; void *
 * 000000018004CCC5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CCCA: nop
 * 000000018004CCCB: lea     rcx, dword_180218D60
 * 000000018004CCD2: call    _Init_thread_footer
 * 000000018004CCD7: mov     rax, [rdi+rbx*8]
 * 000000018004CCDB: mov     ecx, [r15+rax]
 * 000000018004CCDF: cmp     cs:dword_180218D68, ecx
 * 000000018004CCE5: jle     loc_18004CDCA
 * 000000018004CCEB: lea     rcx, dword_180218D68
 * 000000018004CCF2: call    _Init_thread_header
 * 000000018004CCF7: cmp     cs:dword_180218D68, r14d
 * 000000018004CCFE: jnz     loc_18004CDCA
 * 000000018004CD04: lea     rax, unk_1801817F0
 * 000000018004CD0B: mov     qword ptr [rbp+9E10h+var_9590], rax
 * 000000018004CD12: lea     rax, unk_180182808
 * 000000018004CD19: mov     qword ptr [rbp+9E10h+var_9590+8], rax
 * 000000018004CD20: movups  xmm0, [rbp+9E10h+var_9590]
 * 000000018004CD27: movups  [rbp+9E10h+var_7790], xmm0
 * 000000018004CD2E: mov     dword ptr [rbp+9E10h+var_7780], esi
 * 000000018004CD34: mov     dword ptr [rbp+9E10h+var_7780+4], esi
 * 000000018004CD3A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CD3F: movups  xmm0, [rbp+9E10h+var_7780]
 * 000000018004CD46: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CD4B: call    sub_180043E00
 * 000000018004CD50: mov     r8, rax
 * 000000018004CD53: mov     r9d, r12d
 * 000000018004CD56: mov     edx, 8
 * 000000018004CD5B: lea     rcx, [rbp+9E10h+var_38E0]; Src
 * 000000018004CD62: call    sub_1800CF2C8
 * 000000018004CD67: nop
 * 000000018004CD68: mov     r8, rax
 * 000000018004CD6B: mov     rdx, r13
 * 000000018004CD6E: lea     rcx, [rbp+9E10h+var_3900]
 * 000000018004CD75: call    sub_180043BDC
 * 000000018004CD7A: nop
 * 000000018004CD7B: lea     r8, aVertex; "/Vertex"
 * 000000018004CD82: mov     rdx, rax
 * 000000018004CD85: lea     rcx, [rbp+9E10h+var_3920]
 * 000000018004CD8C: call    sub_18002C218
 * 000000018004CD91: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CD96: mov     rcx, rax
 * 000000018004CD99: call    sub_1800CF3A0
 * 000000018004CD9E: mov     cs:byte_180218D64, al
 * 000000018004CDA4: lea     rcx, [rbp+9E10h+var_3900]; void *
 * 000000018004CDAB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CDB0: nop
 * 000000018004CDB1: lea     rcx, [rbp+9E10h+var_38E0]; void *
 * 000000018004CDB8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CDBD: nop
 * 000000018004CDBE: lea     rcx, dword_180218D68
 * 000000018004CDC5: call    _Init_thread_footer
 * 000000018004CDCA: mov     rax, [rdi+rbx*8]
 * 000000018004CDCE: mov     ecx, [r15+rax]
 * 000000018004CDD2: cmp     cs:dword_180218D70, ecx
 * 000000018004CDD8: jle     loc_18004CEBB
 * 000000018004CDDE: lea     rcx, dword_180218D70
 * 000000018004CDE5: call    _Init_thread_header
 * 000000018004CDEA: cmp     cs:dword_180218D70, r14d
 * 000000018004CDF1: jnz     loc_18004CEBB
 * 000000018004CDF7: lea     rax, unk_180182DA0
 * 000000018004CDFE: mov     qword ptr [rbp+9E10h+var_9580], rax
 * 000000018004CE05: lea     rax, unk_1801834AC
 * 000000018004CE0C: mov     qword ptr [rbp+9E10h+var_9580+8], rax
 * 000000018004CE13: movups  xmm0, [rbp+9E10h+var_9580]
 * 000000018004CE1A: movups  [rbp+9E10h+var_7770], xmm0
 * 000000018004CE21: mov     dword ptr [rbp+9E10h+var_7760], esi
 * 000000018004CE27: mov     dword ptr [rbp+9E10h+var_7760+4], esi
 * 000000018004CE2D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CE32: movups  xmm0, [rbp+9E10h+var_7760]
 * 000000018004CE39: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CE3E: call    sub_180043E00
 * 000000018004CE43: mov     r8, rax
 * 000000018004CE46: mov     r9d, r12d
 * 000000018004CE49: mov     rdx, r12
 * 000000018004CE4C: lea     rcx, [rbp+9E10h+var_3880]; Src
 * 000000018004CE53: call    sub_1800CF2C8
 * 000000018004CE58: nop
 * 000000018004CE59: mov     r8, rax
 * 000000018004CE5C: mov     rdx, r13
 * 000000018004CE5F: lea     rcx, [rbp+9E10h+var_38A0]
 * 000000018004CE66: call    sub_180043BDC
 * 000000018004CE6B: nop
 * 000000018004CE6C: lea     r8, aVertex; "/Vertex"
 * 000000018004CE73: mov     rdx, rax
 * 000000018004CE76: lea     rcx, [rbp+9E10h+var_38C0]
 * 000000018004CE7D: call    sub_18002C218
 * 000000018004CE82: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CE87: mov     rcx, rax
 * 000000018004CE8A: call    sub_1800CF3A0
 * 000000018004CE8F: mov     cs:byte_180218D6C, al
 * 000000018004CE95: lea     rcx, [rbp+9E10h+var_38A0]; void *
 * 000000018004CE9C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CEA1: nop
 * 000000018004CEA2: lea     rcx, [rbp+9E10h+var_3880]; void *
 * 000000018004CEA9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CEAE: nop
 * 000000018004CEAF: lea     rcx, dword_180218D70
 * 000000018004CEB6: call    _Init_thread_footer
 * 000000018004CEBB: mov     rax, [rdi+rbx*8]
 * 000000018004CEBF: mov     ecx, [r15+rax]
 * 000000018004CEC3: cmp     cs:dword_180218D78, ecx
 * 000000018004CEC9: jle     loc_18004CFAE
 * 000000018004CECF: lea     rcx, dword_180218D78
 * 000000018004CED6: call    _Init_thread_header
 * 000000018004CEDB: cmp     cs:dword_180218D78, r14d
 * 000000018004CEE2: jnz     loc_18004CFAE
 * 000000018004CEE8: lea     rax, unk_1801817F0
 * 000000018004CEEF: mov     qword ptr [rbp+9E10h+var_9570], rax
 * 000000018004CEF6: lea     rax, unk_180182808
 * 000000018004CEFD: mov     qword ptr [rbp+9E10h+var_9570+8], rax
 * 000000018004CF04: movups  xmm0, [rbp+9E10h+var_9570]
 * 000000018004CF0B: movups  [rbp+9E10h+var_7750], xmm0
 * 000000018004CF12: mov     dword ptr [rbp+9E10h+var_7740], esi
 * 000000018004CF18: mov     dword ptr [rbp+9E10h+var_7740+4], esi
 * 000000018004CF1E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CF23: movups  xmm0, [rbp+9E10h+var_7740]
 * 000000018004CF2A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CF2F: call    sub_180043E00
 * 000000018004CF34: mov     r8, rax
 * 000000018004CF37: mov     r9d, r12d
 * 000000018004CF3A: mov     edx, 0Ah
 * 000000018004CF3F: lea     rcx, [rbp+9E10h+var_3820]; Src
 * 000000018004CF46: call    sub_1800CF2C8
 * 000000018004CF4B: nop
 * 000000018004CF4C: mov     r8, rax
 * 000000018004CF4F: mov     rdx, r13
 * 000000018004CF52: lea     rcx, [rbp+9E10h+var_3840]
 * 000000018004CF59: call    sub_180043BDC
 * 000000018004CF5E: nop
 * 000000018004CF5F: lea     r8, aVertex; "/Vertex"
 * 000000018004CF66: mov     rdx, rax
 * 000000018004CF69: lea     rcx, [rbp+9E10h+var_3860]
 * 000000018004CF70: call    sub_18002C218
 * 000000018004CF75: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CF7A: mov     rcx, rax
 * 000000018004CF7D: call    sub_1800CF3A0
 * 000000018004CF82: mov     cs:byte_180218D74, al
 * 000000018004CF88: lea     rcx, [rbp+9E10h+var_3840]; void *
 * 000000018004CF8F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CF94: nop
 * 000000018004CF95: lea     rcx, [rbp+9E10h+var_3820]; void *
 * 000000018004CF9C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CFA1: nop
 * 000000018004CFA2: lea     rcx, dword_180218D78
 * 000000018004CFA9: call    _Init_thread_footer
 * 000000018004CFAE: mov     rax, [rdi+rbx*8]
 * 000000018004CFB2: mov     ecx, [r15+rax]
 * 000000018004CFB6: cmp     cs:dword_180218D80, ecx
 * 000000018004CFBC: jle     loc_18004D0A1
 * 000000018004CFC2: lea     rcx, dword_180218D80
 * 000000018004CFC9: call    _Init_thread_header
 * 000000018004CFCE: cmp     cs:dword_180218D80, r14d
 * 000000018004CFD5: jnz     loc_18004D0A1
 * 000000018004CFDB: lea     rax, unk_1801817F0
 * 000000018004CFE2: mov     qword ptr [rbp+9E10h+var_9560], rax
 * 000000018004CFE9: lea     rax, unk_180182808
 * 000000018004CFF0: mov     qword ptr [rbp+9E10h+var_9560+8], rax
 * 000000018004CFF7: movups  xmm0, [rbp+9E10h+var_9560]
 * 000000018004CFFE: movups  [rbp+9E10h+var_7730], xmm0
 * 000000018004D005: mov     dword ptr [rbp+9E10h+var_7720], esi
 * 000000018004D00B: mov     dword ptr [rbp+9E10h+var_7720+4], esi
 * 000000018004D011: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D016: movups  xmm0, [rbp+9E10h+var_7720]
 * 000000018004D01D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D022: call    sub_180043E00
 * 000000018004D027: mov     r8, rax
 * 000000018004D02A: mov     r9d, r12d
 * 000000018004D02D: mov     edx, 10h
 * 000000018004D032: lea     rcx, [rbp+9E10h+var_37C0]; Src
 * 000000018004D039: call    sub_1800CF2C8
 * 000000018004D03E: nop
 * 000000018004D03F: mov     r8, rax
 * 000000018004D042: mov     rdx, r13
 * 000000018004D045: lea     rcx, [rbp+9E10h+var_37E0]
 * 000000018004D04C: call    sub_180043BDC
 * 000000018004D051: nop
 * 000000018004D052: lea     r8, aVertex; "/Vertex"
 * 000000018004D059: mov     rdx, rax
 * 000000018004D05C: lea     rcx, [rbp+9E10h+var_3800]
 * 000000018004D063: call    sub_18002C218
 * 000000018004D068: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D06D: mov     rcx, rax
 * 000000018004D070: call    sub_1800CF3A0
 * 000000018004D075: mov     cs:byte_180218D7C, al
 * 000000018004D07B: lea     rcx, [rbp+9E10h+var_37E0]; void *
 * 000000018004D082: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D087: nop
 * 000000018004D088: lea     rcx, [rbp+9E10h+var_37C0]; void *
 * 000000018004D08F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D094: nop
 * 000000018004D095: lea     rcx, dword_180218D80
 * 000000018004D09C: call    _Init_thread_footer
 * 000000018004D0A1: mov     rax, [rdi+rbx*8]
 * 000000018004D0A5: mov     ecx, [r15+rax]
 * 000000018004D0A9: cmp     cs:dword_180218D88, ecx
 * 000000018004D0AF: jle     loc_18004D194
 * 000000018004D0B5: lea     rcx, dword_180218D88
 * 000000018004D0BC: call    _Init_thread_header
 * 000000018004D0C1: cmp     cs:dword_180218D88, r14d
 * 000000018004D0C8: jnz     loc_18004D194
 * 000000018004D0CE: lea     rax, unk_1801817F0
 * 000000018004D0D5: mov     qword ptr [rbp+9E10h+var_9550], rax
 * 000000018004D0DC: lea     rax, unk_180182808
 * 000000018004D0E3: mov     qword ptr [rbp+9E10h+var_9550+8], rax
 * 000000018004D0EA: movups  xmm0, [rbp+9E10h+var_9550]
 * 000000018004D0F1: movups  [rbp+9E10h+var_7710], xmm0
 * 000000018004D0F8: mov     dword ptr [rbp+9E10h+var_7700], esi
 * 000000018004D0FE: mov     dword ptr [rbp+9E10h+var_7700+4], esi
 * 000000018004D104: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D109: movups  xmm0, [rbp+9E10h+var_7700]
 * 000000018004D110: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D115: call    sub_180043E00
 * 000000018004D11A: mov     r8, rax
 * 000000018004D11D: mov     r9d, r12d
 * 000000018004D120: mov     edx, 12h
 * 000000018004D125: lea     rcx, [rbp+9E10h+var_3760]; Src
 * 000000018004D12C: call    sub_1800CF2C8
 * 000000018004D131: nop
 * 000000018004D132: mov     r8, rax
 * 000000018004D135: mov     rdx, r13
 * 000000018004D138: lea     rcx, [rbp+9E10h+var_3780]
 * 000000018004D13F: call    sub_180043BDC
 * 000000018004D144: nop
 * 000000018004D145: lea     r8, aVertex; "/Vertex"
 * 000000018004D14C: mov     rdx, rax
 * 000000018004D14F: lea     rcx, [rbp+9E10h+var_37A0]
 * 000000018004D156: call    sub_18002C218
 * 000000018004D15B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D160: mov     rcx, rax
 * 000000018004D163: call    sub_1800CF3A0
 * 000000018004D168: mov     cs:byte_180218D84, al
 * 000000018004D16E: lea     rcx, [rbp+9E10h+var_3780]; void *
 * 000000018004D175: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D17A: nop
 * 000000018004D17B: lea     rcx, [rbp+9E10h+var_3760]; void *
 * 000000018004D182: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D187: nop
 * 000000018004D188: lea     rcx, dword_180218D88
 * 000000018004D18F: call    _Init_thread_footer
 * 000000018004D194: mov     rax, [rdi+rbx*8]
 * 000000018004D198: mov     ecx, [r15+rax]
 * 000000018004D19C: cmp     cs:dword_180218D90, ecx
 * 000000018004D1A2: jle     loc_18004D287
 * 000000018004D1A8: lea     rcx, dword_180218D90
 * 000000018004D1AF: call    _Init_thread_header
 * 000000018004D1B4: cmp     cs:dword_180218D90, r14d
 * 000000018004D1BB: jnz     loc_18004D287
 * 000000018004D1C1: lea     rax, unk_1801817F0
 * 000000018004D1C8: mov     qword ptr [rbp+9E10h+var_9540], rax
 * 000000018004D1CF: lea     rax, unk_180182808
 * 000000018004D1D6: mov     qword ptr [rbp+9E10h+var_9540+8], rax
 * 000000018004D1DD: movups  xmm0, [rbp+9E10h+var_9540]
 * 000000018004D1E4: movups  [rbp+9E10h+var_76F0], xmm0
 * 000000018004D1EB: mov     dword ptr [rbp+9E10h+var_76E0], esi
 * 000000018004D1F1: mov     dword ptr [rbp+9E10h+var_76E0+4], esi
 * 000000018004D1F7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D1FC: movups  xmm0, [rbp+9E10h+var_76E0]
 * 000000018004D203: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D208: call    sub_180043E00
 * 000000018004D20D: mov     r8, rax
 * 000000018004D210: mov     r9d, r12d
 * 000000018004D213: mov     edx, 14h
 * 000000018004D218: lea     rcx, [rbp+9E10h+var_3700]; Src
 * 000000018004D21F: call    sub_1800CF2C8
 * 000000018004D224: nop
 * 000000018004D225: mov     r8, rax
 * 000000018004D228: mov     rdx, r13
 * 000000018004D22B: lea     rcx, [rbp+9E10h+var_3720]
 * 000000018004D232: call    sub_180043BDC
 * 000000018004D237: nop
 * 000000018004D238: lea     r8, aVertex; "/Vertex"
 * 000000018004D23F: mov     rdx, rax
 * 000000018004D242: lea     rcx, [rbp+9E10h+var_3740]
 * 000000018004D249: call    sub_18002C218
 * 000000018004D24E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D253: mov     rcx, rax
 * 000000018004D256: call    sub_1800CF3A0
 * 000000018004D25B: mov     cs:byte_180218D8C, al
 * 000000018004D261: lea     rcx, [rbp+9E10h+var_3720]; void *
 * 000000018004D268: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D26D: nop
 * 000000018004D26E: lea     rcx, [rbp+9E10h+var_3700]; void *
 * 000000018004D275: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D27A: nop
 * 000000018004D27B: lea     rcx, dword_180218D90
 * 000000018004D282: call    _Init_thread_footer
 * 000000018004D287: mov     rax, [rdi+rbx*8]
 * 000000018004D28B: mov     ecx, [r15+rax]
 * 000000018004D28F: cmp     cs:dword_180218D98, ecx
 * 000000018004D295: jle     loc_18004D37A
 * 000000018004D29B: lea     rcx, dword_180218D98
 * 000000018004D2A2: call    _Init_thread_header
 * 000000018004D2A7: cmp     cs:dword_180218D98, r14d
 * 000000018004D2AE: jnz     loc_18004D37A
 * 000000018004D2B4: lea     rax, unk_1801817F0
 * 000000018004D2BB: mov     qword ptr [rbp+9E10h+var_9530], rax
 * 000000018004D2C2: lea     rax, unk_180182808
 * 000000018004D2C9: mov     qword ptr [rbp+9E10h+var_9530+8], rax
 * 000000018004D2D0: movups  xmm0, [rbp+9E10h+var_9530]
 * 000000018004D2D7: movups  [rbp+9E10h+var_76D0], xmm0
 * 000000018004D2DE: mov     dword ptr [rbp+9E10h+var_76C0], esi
 * 000000018004D2E4: mov     dword ptr [rbp+9E10h+var_76C0+4], esi
 * 000000018004D2EA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D2EF: movups  xmm0, [rbp+9E10h+var_76C0]
 * 000000018004D2F6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D2FB: call    sub_180043E00
 * 000000018004D300: mov     r8, rax
 * 000000018004D303: mov     r9d, r12d
 * 000000018004D306: mov     edx, 16h
 * 000000018004D30B: lea     rcx, [rbp+9E10h+var_36A0]; Src
 * 000000018004D312: call    sub_1800CF2C8
 * 000000018004D317: nop
 * 000000018004D318: mov     r8, rax
 * 000000018004D31B: mov     rdx, r13
 * 000000018004D31E: lea     rcx, [rbp+9E10h+var_36C0]
 * 000000018004D325: call    sub_180043BDC
 * 000000018004D32A: nop
 * 000000018004D32B: lea     r8, aVertex; "/Vertex"
 * 000000018004D332: mov     rdx, rax
 * 000000018004D335: lea     rcx, [rbp+9E10h+var_36E0]
 * 000000018004D33C: call    sub_18002C218
 * 000000018004D341: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D346: mov     rcx, rax
 * 000000018004D349: call    sub_1800CF3A0
 * 000000018004D34E: mov     cs:byte_180218D94, al
 * 000000018004D354: lea     rcx, [rbp+9E10h+var_36C0]; void *
 * 000000018004D35B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D360: nop
 * 000000018004D361: lea     rcx, [rbp+9E10h+var_36A0]; void *
 * 000000018004D368: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D36D: nop
 * 000000018004D36E: lea     rcx, dword_180218D98
 * 000000018004D375: call    _Init_thread_footer
 * 000000018004D37A: mov     rax, [rdi+rbx*8]
 * 000000018004D37E: mov     ecx, [r15+rax]
 * 000000018004D382: cmp     cs:dword_180218DA0, ecx
 * 000000018004D388: jle     loc_18004D46D
 * 000000018004D38E: lea     rcx, dword_180218DA0
 * 000000018004D395: call    _Init_thread_header
 * 000000018004D39A: cmp     cs:dword_180218DA0, r14d
 * 000000018004D3A1: jnz     loc_18004D46D
 * 000000018004D3A7: lea     rax, unk_1801817F0
 * 000000018004D3AE: mov     qword ptr [rbp+9E10h+var_9520], rax
 * 000000018004D3B5: lea     rax, unk_180182808
 * 000000018004D3BC: mov     qword ptr [rbp+9E10h+var_9520+8], rax
 * 000000018004D3C3: movups  xmm0, [rbp+9E10h+var_9520]
 * 000000018004D3CA: movups  [rbp+9E10h+var_76B0], xmm0
 * 000000018004D3D1: mov     dword ptr [rbp+9E10h+var_76A0], esi
 * 000000018004D3D7: mov     dword ptr [rbp+9E10h+var_76A0+4], esi
 * 000000018004D3DD: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D3E2: movups  xmm0, [rbp+9E10h+var_76A0]
 * 000000018004D3E9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D3EE: call    sub_180043E00
 * 000000018004D3F3: mov     r8, rax
 * 000000018004D3F6: mov     r9d, r12d
 * 000000018004D3F9: mov     edx, 18h
 * 000000018004D3FE: lea     rcx, [rbp+9E10h+var_3640]; Src
 * 000000018004D405: call    sub_1800CF2C8
 * 000000018004D40A: nop
 * 000000018004D40B: mov     r8, rax
 * 000000018004D40E: mov     rdx, r13
 * 000000018004D411: lea     rcx, [rbp+9E10h+var_3660]
 * 000000018004D418: call    sub_180043BDC
 * 000000018004D41D: nop
 * 000000018004D41E: lea     r8, aVertex; "/Vertex"
 * 000000018004D425: mov     rdx, rax
 * 000000018004D428: lea     rcx, [rbp+9E10h+var_3680]
 * 000000018004D42F: call    sub_18002C218
 * 000000018004D434: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D439: mov     rcx, rax
 * 000000018004D43C: call    sub_1800CF3A0
 * 000000018004D441: mov     cs:byte_180218D9C, al
 * 000000018004D447: lea     rcx, [rbp+9E10h+var_3660]; void *
 * 000000018004D44E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D453: nop
 * 000000018004D454: lea     rcx, [rbp+9E10h+var_3640]; void *
 * 000000018004D45B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D460: nop
 * 000000018004D461: lea     rcx, dword_180218DA0
 * 000000018004D468: call    _Init_thread_footer
 * 000000018004D46D: mov     rax, [rdi+rbx*8]
 * 000000018004D471: mov     ecx, [r15+rax]
 * 000000018004D475: cmp     cs:dword_180218DA8, ecx
 * 000000018004D47B: jle     loc_18004D560
 * 000000018004D481: lea     rcx, dword_180218DA8
 * 000000018004D488: call    _Init_thread_header
 * 000000018004D48D: cmp     cs:dword_180218DA8, r14d
 * 000000018004D494: jnz     loc_18004D560
 * 000000018004D49A: lea     rax, unk_1801817F0
 * 000000018004D4A1: mov     qword ptr [rbp+9E10h+var_9510], rax
 * 000000018004D4A8: lea     rax, unk_180182808
 * 000000018004D4AF: mov     qword ptr [rbp+9E10h+var_9510+8], rax
 * 000000018004D4B6: movups  xmm0, [rbp+9E10h+var_9510]
 * 000000018004D4BD: movups  [rbp+9E10h+var_7690], xmm0
 * 000000018004D4C4: mov     dword ptr [rbp+9E10h+var_7680], esi
 * 000000018004D4CA: mov     dword ptr [rbp+9E10h+var_7680+4], esi
 * 000000018004D4D0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D4D5: movups  xmm0, [rbp+9E10h+var_7680]
 * 000000018004D4DC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D4E1: call    sub_180043E00
 * 000000018004D4E6: mov     r8, rax
 * 000000018004D4E9: mov     r9d, r12d
 * 000000018004D4EC: mov     edx, 1Ah
 * 000000018004D4F1: lea     rcx, [rbp+9E10h+var_35E0]; Src
 * 000000018004D4F8: call    sub_1800CF2C8
 * 000000018004D4FD: nop
 * 000000018004D4FE: mov     r8, rax
 * 000000018004D501: mov     rdx, r13
 * 000000018004D504: lea     rcx, [rbp+9E10h+var_3600]
 * 000000018004D50B: call    sub_180043BDC
 * 000000018004D510: nop
 * 000000018004D511: lea     r8, aVertex; "/Vertex"
 * 000000018004D518: mov     rdx, rax
 * 000000018004D51B: lea     rcx, [rbp+9E10h+var_3620]
 * 000000018004D522: call    sub_18002C218
 * 000000018004D527: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D52C: mov     rcx, rax
 * 000000018004D52F: call    sub_1800CF3A0
 * 000000018004D534: mov     cs:byte_180218DA4, al
 * 000000018004D53A: lea     rcx, [rbp+9E10h+var_3600]; void *
 * 000000018004D541: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D546: nop
 * 000000018004D547: lea     rcx, [rbp+9E10h+var_35E0]; void *
 * 000000018004D54E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D553: nop
 * 000000018004D554: lea     rcx, dword_180218DA8
 * 000000018004D55B: call    _Init_thread_footer
 * 000000018004D560: mov     rax, [rdi+rbx*8]
 * 000000018004D564: mov     eax, [r15+rax]
 * 000000018004D568: cmp     cs:dword_180218DB0, eax
 * 000000018004D56E: jle     loc_18004D653
 * 000000018004D574: lea     rcx, dword_180218DB0
 * 000000018004D57B: call    _Init_thread_header
 * 000000018004D580: cmp     cs:dword_180218DB0, r14d
 * 000000018004D587: jnz     loc_18004D653
 * 000000018004D58D: lea     rax, unk_1801834B0
 * 000000018004D594: mov     qword ptr [rbp+9E10h+var_9500], rax
 * 000000018004D59B: lea     rax, unk_180184EC8
 * 000000018004D5A2: mov     qword ptr [rbp+9E10h+var_9500+8], rax
 * 000000018004D5A9: movups  xmm0, [rbp+9E10h+var_9500]
 * 000000018004D5B0: movups  [rbp+9E10h+var_7670], xmm0
 * 000000018004D5B7: mov     dword ptr [rbp+9E10h+var_7660], esi
 * 000000018004D5BD: mov     dword ptr [rbp+9E10h+var_7660+4], esi
 * 000000018004D5C3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D5C8: movups  xmm0, [rbp+9E10h+var_7660]
 * 000000018004D5CF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D5D4: call    sub_180043E00
 * 000000018004D5D9: mov     r8, rax
 * 000000018004D5DC: mov     r9d, r12d
 * 000000018004D5DF: mov     edx, 20h ; ' '
 * 000000018004D5E4: lea     rcx, [rbp+9E10h+var_3580]; Src
 * 000000018004D5EB: call    sub_1800CF2C8
 * 000000018004D5F0: nop
 * 000000018004D5F1: mov     r8, rax
 * 000000018004D5F4: mov     rdx, r13
 * 000000018004D5F7: lea     rcx, [rbp+9E10h+var_35A0]
 * 000000018004D5FE: call    sub_180043BDC
 * 000000018004D603: nop
 * 000000018004D604: lea     r8, aVertex; "/Vertex"
 * 000000018004D60B: mov     rdx, rax
 * 000000018004D60E: lea     rcx, [rbp+9E10h+var_35C0]
 * 000000018004D615: call    sub_18002C218
 * 000000018004D61A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D61F: mov     rcx, rax
 * 000000018004D622: call    sub_1800CF3A0
 * 000000018004D627: mov     cs:byte_180218DAC, al
 * 000000018004D62D: lea     rcx, [rbp+9E10h+var_35A0]; void *
 * 000000018004D634: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D639: nop
 * 000000018004D63A: lea     rcx, [rbp+9E10h+var_3580]; void *
 * 000000018004D641: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D646: nop
 * 000000018004D647: lea     rcx, dword_180218DB0
 * 000000018004D64E: call    _Init_thread_footer
 * 000000018004D653: mov     rax, [rdi+rbx*8]
 * 000000018004D657: mov     ecx, [r15+rax]
 * 000000018004D65B: cmp     cs:dword_180218DB8, ecx
 * 000000018004D661: jle     loc_18004D746
 * 000000018004D667: lea     rcx, dword_180218DB8
 * 000000018004D66E: call    _Init_thread_header
 * 000000018004D673: cmp     cs:dword_180218DB8, r14d
 * 000000018004D67A: jnz     loc_18004D746
 * 000000018004D680: lea     rax, unk_180184ED0
 * 000000018004D687: mov     qword ptr [rbp+9E10h+var_94F0], rax
 * 000000018004D68E: lea     rax, unk_180185878
 * 000000018004D695: mov     qword ptr [rbp+9E10h+var_94F0+8], rax
 * 000000018004D69C: movups  xmm0, [rbp+9E10h+var_94F0]
 * 000000018004D6A3: movups  [rbp+9E10h+var_7650], xmm0
 * 000000018004D6AA: mov     dword ptr [rbp+9E10h+var_7640], esi
 * 000000018004D6B0: mov     dword ptr [rbp+9E10h+var_7640+4], esi
 * 000000018004D6B6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D6BB: movups  xmm0, [rbp+9E10h+var_7640]
 * 000000018004D6C2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D6C7: call    sub_180043E00
 * 000000018004D6CC: mov     r8, rax
 * 000000018004D6CF: mov     r9d, r12d
 * 000000018004D6D2: mov     edx, 21h ; '!'
 * 000000018004D6D7: lea     rcx, [rbp+9E10h+var_3520]; Src
 * 000000018004D6DE: call    sub_1800CF2C8
 * 000000018004D6E3: nop
 * 000000018004D6E4: mov     r8, rax
 * 000000018004D6E7: mov     rdx, r13
 * 000000018004D6EA: lea     rcx, [rbp+9E10h+var_3540]
 * 000000018004D6F1: call    sub_180043BDC
 * 000000018004D6F6: nop
 * 000000018004D6F7: lea     r8, aVertex; "/Vertex"
 * 000000018004D6FE: mov     rdx, rax
 * 000000018004D701: lea     rcx, [rbp+9E10h+var_3560]
 * 000000018004D708: call    sub_18002C218
 * 000000018004D70D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D712: mov     rcx, rax
 * 000000018004D715: call    sub_1800CF3A0
 * 000000018004D71A: mov     cs:byte_180218DB4, al
 * 000000018004D720: lea     rcx, [rbp+9E10h+var_3540]; void *
 * 000000018004D727: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D72C: nop
 * 000000018004D72D: lea     rcx, [rbp+9E10h+var_3520]; void *
 * 000000018004D734: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D739: nop
 * 000000018004D73A: lea     rcx, dword_180218DB8
 * 000000018004D741: call    _Init_thread_footer
 * 000000018004D746: mov     rax, [rdi+rbx*8]
 * 000000018004D74A: mov     ecx, [r15+rax]
 * 000000018004D74E: cmp     cs:dword_180218DC0, ecx
 * 000000018004D754: jle     loc_18004D839
 * 000000018004D75A: lea     rcx, dword_180218DC0
 * 000000018004D761: call    _Init_thread_header
 * 000000018004D766: cmp     cs:dword_180218DC0, r14d
 * 000000018004D76D: jnz     loc_18004D839
 * 000000018004D773: lea     rax, unk_1801834B0
 * 000000018004D77A: mov     qword ptr [rbp+9E10h+var_94E0], rax
 * 000000018004D781: lea     rax, unk_180184EC8
 * 000000018004D788: mov     qword ptr [rbp+9E10h+var_94E0+8], rax
 * 000000018004D78F: movups  xmm0, [rbp+9E10h+var_94E0]
 * 000000018004D796: movups  [rbp+9E10h+var_7630], xmm0
 * 000000018004D79D: mov     dword ptr [rbp+9E10h+var_7620], esi
 * 000000018004D7A3: mov     dword ptr [rbp+9E10h+var_7620+4], esi
 * 000000018004D7A9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D7AE: movups  xmm0, [rbp+9E10h+var_7620]
 * 000000018004D7B5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D7BA: call    sub_180043E00
 * 000000018004D7BF: mov     r8, rax
 * 000000018004D7C2: mov     r9d, r12d
 * 000000018004D7C5: mov     edx, 22h ; '"'
 * 000000018004D7CA: lea     rcx, [rbp+9E10h+var_34C0]; Src
 * 000000018004D7D1: call    sub_1800CF2C8
 * 000000018004D7D6: nop
 * 000000018004D7D7: mov     r8, rax
 * 000000018004D7DA: mov     rdx, r13
 * 000000018004D7DD: lea     rcx, [rbp+9E10h+var_34E0]
 * 000000018004D7E4: call    sub_180043BDC
 * 000000018004D7E9: nop
 * 000000018004D7EA: lea     r8, aVertex; "/Vertex"
 * 000000018004D7F1: mov     rdx, rax
 * 000000018004D7F4: lea     rcx, [rbp+9E10h+var_3500]
 * 000000018004D7FB: call    sub_18002C218
 * 000000018004D800: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D805: mov     rcx, rax
 * 000000018004D808: call    sub_1800CF3A0
 * 000000018004D80D: mov     cs:byte_180218DBC, al
 * 000000018004D813: lea     rcx, [rbp+9E10h+var_34E0]; void *
 * 000000018004D81A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D81F: nop
 * 000000018004D820: lea     rcx, [rbp+9E10h+var_34C0]; void *
 * 000000018004D827: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D82C: nop
 * 000000018004D82D: lea     rcx, dword_180218DC0
 * 000000018004D834: call    _Init_thread_footer
 * 000000018004D839: mov     rax, [rdi+rbx*8]
 * 000000018004D83D: mov     ecx, [r15+rax]
 * 000000018004D841: cmp     cs:dword_180218DC8, ecx
 * 000000018004D847: jle     loc_18004D92C
 * 000000018004D84D: lea     rcx, dword_180218DC8
 * 000000018004D854: call    _Init_thread_header
 * 000000018004D859: cmp     cs:dword_180218DC8, r14d
 * 000000018004D860: jnz     loc_18004D92C
 * 000000018004D866: lea     rax, unk_1801834B0
 * 000000018004D86D: mov     qword ptr [rbp+9E10h+var_94D0], rax
 * 000000018004D874: lea     rax, unk_180184EC8
 * 000000018004D87B: mov     qword ptr [rbp+9E10h+var_94D0+8], rax
 * 000000018004D882: movups  xmm0, [rbp+9E10h+var_94D0]
 * 000000018004D889: movups  [rbp+9E10h+var_7610], xmm0
 * 000000018004D890: mov     dword ptr [rbp+9E10h+var_7600], esi
 * 000000018004D896: mov     dword ptr [rbp+9E10h+var_7600+4], esi
 * 000000018004D89C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D8A1: movups  xmm0, [rbp+9E10h+var_7600]
 * 000000018004D8A8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D8AD: call    sub_180043E00
 * 000000018004D8B2: mov     r8, rax
 * 000000018004D8B5: mov     r9d, r12d
 * 000000018004D8B8: mov     edx, 28h ; '('
 * 000000018004D8BD: lea     rcx, [rbp+9E10h+var_3460]; Src
 * 000000018004D8C4: call    sub_1800CF2C8
 * 000000018004D8C9: nop
 * 000000018004D8CA: mov     r8, rax
 * 000000018004D8CD: mov     rdx, r13
 * 000000018004D8D0: lea     rcx, [rbp+9E10h+var_3480]
 * 000000018004D8D7: call    sub_180043BDC
 * 000000018004D8DC: nop
 * 000000018004D8DD: lea     r8, aVertex; "/Vertex"
 * 000000018004D8E4: mov     rdx, rax
 * 000000018004D8E7: lea     rcx, [rbp+9E10h+var_34A0]
 * 000000018004D8EE: call    sub_18002C218
 * 000000018004D8F3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D8F8: mov     rcx, rax
 * 000000018004D8FB: call    sub_1800CF3A0
 * 000000018004D900: mov     cs:byte_180218DC4, al
 * 000000018004D906: lea     rcx, [rbp+9E10h+var_3480]; void *
 * 000000018004D90D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D912: nop
 * 000000018004D913: lea     rcx, [rbp+9E10h+var_3460]; void *
 * 000000018004D91A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D91F: nop
 * 000000018004D920: lea     rcx, dword_180218DC8
 * 000000018004D927: call    _Init_thread_footer
 * 000000018004D92C: mov     rax, [rdi+rbx*8]
 * 000000018004D930: mov     ecx, [r15+rax]
 * 000000018004D934: cmp     cs:dword_180218DD0, ecx
 * 000000018004D93A: jle     loc_18004DA1F
 * 000000018004D940: lea     rcx, dword_180218DD0
 * 000000018004D947: call    _Init_thread_header
 * 000000018004D94C: cmp     cs:dword_180218DD0, r14d
 * 000000018004D953: jnz     loc_18004DA1F
 * 000000018004D959: lea     rax, unk_180185880
 * 000000018004D960: mov     qword ptr [rbp+9E10h+var_94C0], rax
 * 000000018004D967: lea     rax, unk_1801863BC
 * 000000018004D96E: mov     qword ptr [rbp+9E10h+var_94C0+8], rax
 * 000000018004D975: movups  xmm0, [rbp+9E10h+var_94C0]
 * 000000018004D97C: movups  [rbp+9E10h+var_75F0], xmm0
 * 000000018004D983: mov     dword ptr [rbp+9E10h+var_75E0], esi
 * 000000018004D989: mov     dword ptr [rbp+9E10h+var_75E0+4], esi
 * 000000018004D98F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D994: movups  xmm0, [rbp+9E10h+var_75E0]
 * 000000018004D99B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D9A0: call    sub_180043E00
 * 000000018004D9A5: mov     r8, rax
 * 000000018004D9A8: mov     r9d, r12d
 * 000000018004D9AB: mov     edx, 29h ; ')'
 * 000000018004D9B0: lea     rcx, [rbp+9E10h+var_3400]; Src
 * 000000018004D9B7: call    sub_1800CF2C8
 * 000000018004D9BC: nop
 * 000000018004D9BD: mov     r8, rax
 * 000000018004D9C0: mov     rdx, r13
 * 000000018004D9C3: lea     rcx, [rbp+9E10h+var_3420]
 * 000000018004D9CA: call    sub_180043BDC
 * 000000018004D9CF: nop
 * 000000018004D9D0: lea     r8, aVertex; "/Vertex"
 * 000000018004D9D7: mov     rdx, rax
 * 000000018004D9DA: lea     rcx, [rbp+9E10h+var_3440]
 * 000000018004D9E1: call    sub_18002C218
 * 000000018004D9E6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D9EB: mov     rcx, rax
 * 000000018004D9EE: call    sub_1800CF3A0
 * 000000018004D9F3: mov     cs:byte_180218DCC, al
 * 000000018004D9F9: lea     rcx, [rbp+9E10h+var_3420]; void *
 * 000000018004DA00: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DA05: nop
 * 000000018004DA06: lea     rcx, [rbp+9E10h+var_3400]; void *
 * 000000018004DA0D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DA12: nop
 * 000000018004DA13: lea     rcx, dword_180218DD0
 * 000000018004DA1A: call    _Init_thread_footer
 * 000000018004DA1F: mov     rax, [rdi+rbx*8]
 * 000000018004DA23: mov     ecx, [r15+rax]
 * 000000018004DA27: cmp     cs:dword_180218DD8, ecx
 * 000000018004DA2D: jle     loc_18004DB12
 * 000000018004DA33: lea     rcx, dword_180218DD8
 * 000000018004DA3A: call    _Init_thread_header
 * 000000018004DA3F: cmp     cs:dword_180218DD8, r14d
 * 000000018004DA46: jnz     loc_18004DB12
 * 000000018004DA4C: lea     rax, unk_1801834B0
 * 000000018004DA53: mov     qword ptr [rbp+9E10h+var_94B0], rax
 * 000000018004DA5A: lea     rax, unk_180184EC8
 * 000000018004DA61: mov     qword ptr [rbp+9E10h+var_94B0+8], rax
 * 000000018004DA68: movups  xmm0, [rbp+9E10h+var_94B0]
 * 000000018004DA6F: movups  [rbp+9E10h+var_75D0], xmm0
 * 000000018004DA76: mov     dword ptr [rbp+9E10h+var_75C0], esi
 * 000000018004DA7C: mov     dword ptr [rbp+9E10h+var_75C0+4], esi
 * 000000018004DA82: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DA87: movups  xmm0, [rbp+9E10h+var_75C0]
 * 000000018004DA8E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DA93: call    sub_180043E00
 * 000000018004DA98: mov     r8, rax
 * 000000018004DA9B: mov     r9d, r12d
 * 000000018004DA9E: mov     edx, 2Ah ; '*'
 * 000000018004DAA3: lea     rcx, [rbp+9E10h+var_33A0]; Src
 * 000000018004DAAA: call    sub_1800CF2C8
 * 000000018004DAAF: nop
 * 000000018004DAB0: mov     r8, rax
 * 000000018004DAB3: mov     rdx, r13
 * 000000018004DAB6: lea     rcx, [rbp+9E10h+var_33C0]
 * 000000018004DABD: call    sub_180043BDC
 * 000000018004DAC2: nop
 * 000000018004DAC3: lea     r8, aVertex; "/Vertex"
 * 000000018004DACA: mov     rdx, rax
 * 000000018004DACD: lea     rcx, [rbp+9E10h+var_33E0]
 * 000000018004DAD4: call    sub_18002C218
 * 000000018004DAD9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DADE: mov     rcx, rax
 * 000000018004DAE1: call    sub_1800CF3A0
 * 000000018004DAE6: mov     cs:byte_180218DD4, al
 * 000000018004DAEC: lea     rcx, [rbp+9E10h+var_33C0]; void *
 * 000000018004DAF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DAF8: nop
 * 000000018004DAF9: lea     rcx, [rbp+9E10h+var_33A0]; void *
 * 000000018004DB00: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DB05: nop
 * 000000018004DB06: lea     rcx, dword_180218DD8
 * 000000018004DB0D: call    _Init_thread_footer
 * 000000018004DB12: mov     rax, [rdi+rbx*8]
 * 000000018004DB16: mov     ecx, [r15+rax]
 * 000000018004DB1A: cmp     cs:dword_180218DE0, ecx
 * 000000018004DB20: jle     loc_18004DC05
 * 000000018004DB26: lea     rcx, dword_180218DE0
 * 000000018004DB2D: call    _Init_thread_header
 * 000000018004DB32: cmp     cs:dword_180218DE0, r14d
 * 000000018004DB39: jnz     loc_18004DC05
 * 000000018004DB3F: lea     rax, unk_1801834B0
 * 000000018004DB46: mov     qword ptr [rbp+9E10h+var_94A0], rax
 * 000000018004DB4D: lea     rax, unk_180184EC8
 * 000000018004DB54: mov     qword ptr [rbp+9E10h+var_94A0+8], rax
 * 000000018004DB5B: movups  xmm0, [rbp+9E10h+var_94A0]
 * 000000018004DB62: movups  [rbp+9E10h+var_75B0], xmm0
 * 000000018004DB69: mov     dword ptr [rbp+9E10h+var_75A0], esi
 * 000000018004DB6F: mov     dword ptr [rbp+9E10h+var_75A0+4], esi
 * 000000018004DB75: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DB7A: movups  xmm0, [rbp+9E10h+var_75A0]
 * 000000018004DB81: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DB86: call    sub_180043E00
 * 000000018004DB8B: mov     r8, rax
 * 000000018004DB8E: mov     r9d, r12d
 * 000000018004DB91: mov     edx, 30h ; '0'
 * 000000018004DB96: lea     rcx, [rbp+9E10h+var_3340]; Src
 * 000000018004DB9D: call    sub_1800CF2C8
 * 000000018004DBA2: nop
 * 000000018004DBA3: mov     r8, rax
 * 000000018004DBA6: mov     rdx, r13
 * 000000018004DBA9: lea     rcx, [rbp+9E10h+var_3360]
 * 000000018004DBB0: call    sub_180043BDC
 * 000000018004DBB5: nop
 * 000000018004DBB6: lea     r8, aVertex; "/Vertex"
 * 000000018004DBBD: mov     rdx, rax
 * 000000018004DBC0: lea     rcx, [rbp+9E10h+var_3380]
 * 000000018004DBC7: call    sub_18002C218
 * 000000018004DBCC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DBD1: mov     rcx, rax
 * 000000018004DBD4: call    sub_1800CF3A0
 * 000000018004DBD9: mov     cs:byte_180218DDC, al
 * 000000018004DBDF: lea     rcx, [rbp+9E10h+var_3360]; void *
 * 000000018004DBE6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DBEB: nop
 * 000000018004DBEC: lea     rcx, [rbp+9E10h+var_3340]; void *
 * 000000018004DBF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DBF8: nop
 * 000000018004DBF9: lea     rcx, dword_180218DE0
 * 000000018004DC00: call    _Init_thread_footer
 * 000000018004DC05: mov     rax, [rdi+rbx*8]
 * 000000018004DC09: mov     ecx, [r15+rax]
 * 000000018004DC0D: cmp     cs:dword_180218DE8, ecx
 * 000000018004DC13: jle     loc_18004DCF8
 * 000000018004DC19: lea     rcx, dword_180218DE8
 * 000000018004DC20: call    _Init_thread_header
 * 000000018004DC25: cmp     cs:dword_180218DE8, r14d
 * 000000018004DC2C: jnz     loc_18004DCF8
 * 000000018004DC32: lea     rax, unk_1801834B0
 * 000000018004DC39: mov     qword ptr [rbp+9E10h+var_9490], rax
 * 000000018004DC40: lea     rax, unk_180184EC8
 * 000000018004DC47: mov     qword ptr [rbp+9E10h+var_9490+8], rax
 * 000000018004DC4E: movups  xmm0, [rbp+9E10h+var_9490]
 * 000000018004DC55: movups  [rbp+9E10h+var_7590], xmm0
 * 000000018004DC5C: mov     dword ptr [rbp+9E10h+var_7580], esi
 * 000000018004DC62: mov     dword ptr [rbp+9E10h+var_7580+4], esi
 * 000000018004DC68: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DC6D: movups  xmm0, [rbp+9E10h+var_7580]
 * 000000018004DC74: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DC79: call    sub_180043E00
 * 000000018004DC7E: mov     r8, rax
 * 000000018004DC81: mov     r9d, r12d
 * 000000018004DC84: mov     edx, 32h ; '2'
 * 000000018004DC89: lea     rcx, [rbp+9E10h+var_32E0]; Src
 * 000000018004DC90: call    sub_1800CF2C8
 * 000000018004DC95: nop
 * 000000018004DC96: mov     r8, rax
 * 000000018004DC99: mov     rdx, r13
 * 000000018004DC9C: lea     rcx, [rbp+9E10h+var_3300]
 * 000000018004DCA3: call    sub_180043BDC
 * 000000018004DCA8: nop
 * 000000018004DCA9: lea     r8, aVertex; "/Vertex"
 * 000000018004DCB0: mov     rdx, rax
 * 000000018004DCB3: lea     rcx, [rbp+9E10h+var_3320]
 * 000000018004DCBA: call    sub_18002C218
 * 000000018004DCBF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DCC4: mov     rcx, rax
 * 000000018004DCC7: call    sub_1800CF3A0
 * 000000018004DCCC: mov     cs:byte_180218DE4, al
 * 000000018004DCD2: lea     rcx, [rbp+9E10h+var_3300]; void *
 * 000000018004DCD9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DCDE: nop
 * 000000018004DCDF: lea     rcx, [rbp+9E10h+var_32E0]; void *
 * 000000018004DCE6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DCEB: nop
 * 000000018004DCEC: lea     rcx, dword_180218DE8
 * 000000018004DCF3: call    _Init_thread_footer
 * 000000018004DCF8: mov     rax, [rdi+rbx*8]
 * 000000018004DCFC: mov     ecx, [r15+rax]
 * 000000018004DD00: cmp     cs:dword_180218DF0, ecx
 * 000000018004DD06: jle     loc_18004DDEB
 * 000000018004DD0C: lea     rcx, dword_180218DF0
 * 000000018004DD13: call    _Init_thread_header
 * 000000018004DD18: cmp     cs:dword_180218DF0, r14d
 * 000000018004DD1F: jnz     loc_18004DDEB
 * 000000018004DD25: lea     rax, unk_1801834B0
 * 000000018004DD2C: mov     qword ptr [rbp+9E10h+var_9480], rax
 * 000000018004DD33: lea     rax, unk_180184EC8
 * 000000018004DD3A: mov     qword ptr [rbp+9E10h+var_9480+8], rax
 * 000000018004DD41: movups  xmm0, [rbp+9E10h+var_9480]
 * 000000018004DD48: movups  [rbp+9E10h+var_7570], xmm0
 * 000000018004DD4F: mov     dword ptr [rbp+9E10h+var_7560], esi
 * 000000018004DD55: mov     dword ptr [rbp+9E10h+var_7560+4], esi
 * 000000018004DD5B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DD60: movups  xmm0, [rbp+9E10h+var_7560]
 * 000000018004DD67: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DD6C: call    sub_180043E00
 * 000000018004DD71: mov     r8, rax
 * 000000018004DD74: mov     r9d, r12d
 * 000000018004DD77: mov     edx, 38h ; '8'
 * 000000018004DD7C: lea     rcx, [rbp+9E10h+var_3280]; Src
 * 000000018004DD83: call    sub_1800CF2C8
 * 000000018004DD88: nop
 * 000000018004DD89: mov     r8, rax
 * 000000018004DD8C: mov     rdx, r13
 * 000000018004DD8F: lea     rcx, [rbp+9E10h+var_32A0]
 * 000000018004DD96: call    sub_180043BDC
 * 000000018004DD9B: nop
 * 000000018004DD9C: lea     r8, aVertex; "/Vertex"
 * 000000018004DDA3: mov     rdx, rax
 * 000000018004DDA6: lea     rcx, [rbp+9E10h+var_32C0]
 * 000000018004DDAD: call    sub_18002C218
 * 000000018004DDB2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DDB7: mov     rcx, rax
 * 000000018004DDBA: call    sub_1800CF3A0
 * 000000018004DDBF: mov     cs:byte_180218DEC, al
 * 000000018004DDC5: lea     rcx, [rbp+9E10h+var_32A0]; void *
 * 000000018004DDCC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DDD1: nop
 * 000000018004DDD2: lea     rcx, [rbp+9E10h+var_3280]; void *
 * 000000018004DDD9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DDDE: nop
 * 000000018004DDDF: lea     rcx, dword_180218DF0
 * 000000018004DDE6: call    _Init_thread_footer
 * 000000018004DDEB: mov     rax, [rdi+rbx*8]
 * 000000018004DDEF: mov     ecx, [r15+rax]
 * 000000018004DDF3: cmp     cs:dword_180218DF8, ecx
 * 000000018004DDF9: jle     loc_18004DEDE
 * 000000018004DDFF: lea     rcx, dword_180218DF8
 * 000000018004DE06: call    _Init_thread_header
 * 000000018004DE0B: cmp     cs:dword_180218DF8, r14d
 * 000000018004DE12: jnz     loc_18004DEDE
 * 000000018004DE18: lea     rax, unk_1801834B0
 * 000000018004DE1F: mov     qword ptr [rbp+9E10h+var_9470], rax
 * 000000018004DE26: lea     rax, unk_180184EC8
 * 000000018004DE2D: mov     qword ptr [rbp+9E10h+var_9470+8], rax
 * 000000018004DE34: movups  xmm0, [rbp+9E10h+var_9470]
 * 000000018004DE3B: movups  [rbp+9E10h+var_7550], xmm0
 * 000000018004DE42: mov     dword ptr [rbp+9E10h+var_7540], esi
 * 000000018004DE48: mov     dword ptr [rbp+9E10h+var_7540+4], esi
 * 000000018004DE4E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DE53: movups  xmm0, [rbp+9E10h+var_7540]
 * 000000018004DE5A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DE5F: call    sub_180043E00
 * 000000018004DE64: mov     r8, rax
 * 000000018004DE67: mov     r9d, r12d
 * 000000018004DE6A: mov     edx, 3Ah ; ':'
 * 000000018004DE6F: lea     rcx, [rbp+9E10h+var_3220]; Src
 * 000000018004DE76: call    sub_1800CF2C8
 * 000000018004DE7B: nop
 * 000000018004DE7C: mov     r8, rax
 * 000000018004DE7F: mov     rdx, r13
 * 000000018004DE82: lea     rcx, [rbp+9E10h+var_3240]
 * 000000018004DE89: call    sub_180043BDC
 * 000000018004DE8E: nop
 * 000000018004DE8F: lea     r8, aVertex; "/Vertex"
 * 000000018004DE96: mov     rdx, rax
 * 000000018004DE99: lea     rcx, [rbp+9E10h+var_3260]
 * 000000018004DEA0: call    sub_18002C218
 * 000000018004DEA5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DEAA: mov     rcx, rax
 * 000000018004DEAD: call    sub_1800CF3A0
 * 000000018004DEB2: mov     cs:byte_180218DF4, al
 * 000000018004DEB8: lea     rcx, [rbp+9E10h+var_3240]; void *
 * 000000018004DEBF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DEC4: nop
 * 000000018004DEC5: lea     rcx, [rbp+9E10h+var_3220]; void *
 * 000000018004DECC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DED1: nop
 * 000000018004DED2: lea     rcx, dword_180218DF8
 * 000000018004DED9: call    _Init_thread_footer
 * 000000018004DEDE: mov     rax, [rdi+rbx*8]
 * 000000018004DEE2: mov     eax, [r15+rax]
 * 000000018004DEE6: cmp     cs:dword_180218E00, eax
 * 000000018004DEEC: jle     loc_18004DFD1
 * 000000018004DEF2: lea     rcx, dword_180218E00
 * 000000018004DEF9: call    _Init_thread_header
 * 000000018004DEFE: cmp     cs:dword_180218E00, r14d
 * 000000018004DF05: jnz     loc_18004DFD1
 * 000000018004DF0B: lea     rax, unk_1801863C0
 * 000000018004DF12: mov     qword ptr [rbp+9E10h+var_9460], rax
 * 000000018004DF19: lea     rax, unk_180187410
 * 000000018004DF20: mov     qword ptr [rbp+9E10h+var_9460+8], rax
 * 000000018004DF27: movups  xmm0, [rbp+9E10h+var_9460]
 * 000000018004DF2E: movups  [rbp+9E10h+var_7530], xmm0
 * 000000018004DF35: mov     dword ptr [rbp+9E10h+var_7520], esi
 * 000000018004DF3B: mov     dword ptr [rbp+9E10h+var_7520+4], esi
 * 000000018004DF41: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DF46: movups  xmm0, [rbp+9E10h+var_7520]
 * 000000018004DF4D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DF52: call    sub_180043E00
 * 000000018004DF57: mov     r8, rax
 * 000000018004DF5A: mov     r9d, r12d
 * 000000018004DF5D: mov     edx, 40h ; '@'
 * 000000018004DF62: lea     rcx, [rbp+9E10h+var_31C0]; Src
 * 000000018004DF69: call    sub_1800CF2C8
 * 000000018004DF6E: nop
 * 000000018004DF6F: mov     r8, rax
 * 000000018004DF72: mov     rdx, r13
 * 000000018004DF75: lea     rcx, [rbp+9E10h+var_31E0]
 * 000000018004DF7C: call    sub_180043BDC
 * 000000018004DF81: nop
 * 000000018004DF82: lea     r8, aVertex; "/Vertex"
 * 000000018004DF89: mov     rdx, rax
 * 000000018004DF8C: lea     rcx, [rbp+9E10h+var_3200]
 * 000000018004DF93: call    sub_18002C218
 * 000000018004DF98: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DF9D: mov     rcx, rax
 * 000000018004DFA0: call    sub_1800CF3A0
 * 000000018004DFA5: mov     cs:byte_180218DFC, al
 * 000000018004DFAB: lea     rcx, [rbp+9E10h+var_31E0]; void *
 * 000000018004DFB2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DFB7: nop
 * 000000018004DFB8: lea     rcx, [rbp+9E10h+var_31C0]; void *
 * 000000018004DFBF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DFC4: nop
 * 000000018004DFC5: lea     rcx, dword_180218E00
 * 000000018004DFCC: call    _Init_thread_footer
 * 000000018004DFD1: mov     rax, [rdi+rbx*8]
 * 000000018004DFD5: mov     ecx, [r15+rax]
 * 000000018004DFD9: cmp     cs:dword_180218E08, ecx
 * 000000018004DFDF: jle     loc_18004E0C4
 * 000000018004DFE5: lea     rcx, dword_180218E08
 * 000000018004DFEC: call    _Init_thread_header
 * 000000018004DFF1: cmp     cs:dword_180218E08, r14d
 * 000000018004DFF8: jnz     loc_18004E0C4
 * 000000018004DFFE: lea     rax, unk_1801863C0
 * 000000018004E005: mov     qword ptr [rbp+9E10h+var_9450], rax
 * 000000018004E00C: lea     rax, unk_180187410
 * 000000018004E013: mov     qword ptr [rbp+9E10h+var_9450+8], rax
 * 000000018004E01A: movups  xmm0, [rbp+9E10h+var_9450]
 * 000000018004E021: movups  [rbp+9E10h+var_7510], xmm0
 * 000000018004E028: mov     dword ptr [rbp+9E10h+var_7500], esi
 * 000000018004E02E: mov     dword ptr [rbp+9E10h+var_7500+4], esi
 * 000000018004E034: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E039: movups  xmm0, [rbp+9E10h+var_7500]
 * 000000018004E040: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E045: call    sub_180043E00
 * 000000018004E04A: mov     r8, rax
 * 000000018004E04D: mov     r9d, r12d
 * 000000018004E050: mov     edx, 42h ; 'B'
 * 000000018004E055: lea     rcx, [rbp+9E10h+var_3160]; Src
 * 000000018004E05C: call    sub_1800CF2C8
 * 000000018004E061: nop
 * 000000018004E062: mov     r8, rax
 * 000000018004E065: mov     rdx, r13
 * 000000018004E068: lea     rcx, [rbp+9E10h+var_3180]
 * 000000018004E06F: call    sub_180043BDC
 * 000000018004E074: nop
 * 000000018004E075: lea     r8, aVertex; "/Vertex"
 * 000000018004E07C: mov     rdx, rax
 * 000000018004E07F: lea     rcx, [rbp+9E10h+var_31A0]
 * 000000018004E086: call    sub_18002C218
 * 000000018004E08B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E090: mov     rcx, rax
 * 000000018004E093: call    sub_1800CF3A0
 * 000000018004E098: mov     cs:byte_180218E04, al
 * 000000018004E09E: lea     rcx, [rbp+9E10h+var_3180]; void *
 * 000000018004E0A5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E0AA: nop
 * 000000018004E0AB: lea     rcx, [rbp+9E10h+var_3160]; void *
 * 000000018004E0B2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E0B7: nop
 * 000000018004E0B8: lea     rcx, dword_180218E08
 * 000000018004E0BF: call    _Init_thread_footer
 * 000000018004E0C4: mov     rax, [rdi+rbx*8]
 * 000000018004E0C8: mov     ecx, [r15+rax]
 * 000000018004E0CC: cmp     cs:dword_180218E10, ecx
 * 000000018004E0D2: jle     loc_18004E1B7
 * 000000018004E0D8: lea     rcx, dword_180218E10
 * 000000018004E0DF: call    _Init_thread_header
 * 000000018004E0E4: cmp     cs:dword_180218E10, r14d
 * 000000018004E0EB: jnz     loc_18004E1B7
 * 000000018004E0F1: lea     rax, unk_1801863C0
 * 000000018004E0F8: mov     qword ptr [rbp+9E10h+var_9440], rax
 * 000000018004E0FF: lea     rax, unk_180187410
 * 000000018004E106: mov     qword ptr [rbp+9E10h+var_9440+8], rax
 * 000000018004E10D: movups  xmm0, [rbp+9E10h+var_9440]
 * 000000018004E114: movups  [rbp+9E10h+var_74F0], xmm0
 * 000000018004E11B: mov     dword ptr [rbp+9E10h+var_74E0], esi
 * 000000018004E121: mov     dword ptr [rbp+9E10h+var_74E0+4], esi
 * 000000018004E127: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E12C: movups  xmm0, [rbp+9E10h+var_74E0]
 * 000000018004E133: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E138: call    sub_180043E00
 * 000000018004E13D: mov     r8, rax
 * 000000018004E140: mov     r9d, r12d
 * 000000018004E143: mov     edx, 48h ; 'H'
 * 000000018004E148: lea     rcx, [rbp+9E10h+var_3100]; Src
 * 000000018004E14F: call    sub_1800CF2C8
 * 000000018004E154: nop
 * 000000018004E155: mov     r8, rax
 * 000000018004E158: mov     rdx, r13
 * 000000018004E15B: lea     rcx, [rbp+9E10h+var_3120]
 * 000000018004E162: call    sub_180043BDC
 * 000000018004E167: nop
 * 000000018004E168: lea     r8, aVertex; "/Vertex"
 * 000000018004E16F: mov     rdx, rax
 * 000000018004E172: lea     rcx, [rbp+9E10h+var_3140]
 * 000000018004E179: call    sub_18002C218
 * 000000018004E17E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E183: mov     rcx, rax
 * 000000018004E186: call    sub_1800CF3A0
 * 000000018004E18B: mov     cs:byte_180218E0C, al
 * 000000018004E191: lea     rcx, [rbp+9E10h+var_3120]; void *
 * 000000018004E198: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E19D: nop
 * 000000018004E19E: lea     rcx, [rbp+9E10h+var_3100]; void *
 * 000000018004E1A5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E1AA: nop
 * 000000018004E1AB: lea     rcx, dword_180218E10
 * 000000018004E1B2: call    _Init_thread_footer
 * 000000018004E1B7: mov     rax, [rdi+rbx*8]
 * 000000018004E1BB: mov     ecx, [r15+rax]
 * 000000018004E1BF: cmp     cs:dword_180218E18, ecx
 * 000000018004E1C5: jle     loc_18004E2AA
 * 000000018004E1CB: lea     rcx, dword_180218E18
 * 000000018004E1D2: call    _Init_thread_header
 * 000000018004E1D7: cmp     cs:dword_180218E18, r14d
 * 000000018004E1DE: jnz     loc_18004E2AA
 * 000000018004E1E4: lea     rax, unk_1801863C0
 * 000000018004E1EB: mov     qword ptr [rbp+9E10h+var_9430], rax
 * 000000018004E1F2: lea     rax, unk_180187410
 * 000000018004E1F9: mov     qword ptr [rbp+9E10h+var_9430+8], rax
 * 000000018004E200: movups  xmm0, [rbp+9E10h+var_9430]
 * 000000018004E207: movups  [rbp+9E10h+var_74D0], xmm0
 * 000000018004E20E: mov     dword ptr [rbp+9E10h+var_74C0], esi
 * 000000018004E214: mov     dword ptr [rbp+9E10h+var_74C0+4], esi
 * 000000018004E21A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E21F: movups  xmm0, [rbp+9E10h+var_74C0]
 * 000000018004E226: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E22B: call    sub_180043E00
 * 000000018004E230: mov     r8, rax
 * 000000018004E233: mov     r9d, r12d
 * 000000018004E236: mov     edx, 4Ah ; 'J'
 * 000000018004E23B: lea     rcx, [rbp+9E10h+var_30A0]; Src
 * 000000018004E242: call    sub_1800CF2C8
 * 000000018004E247: nop
 * 000000018004E248: mov     r8, rax
 * 000000018004E24B: mov     rdx, r13
 * 000000018004E24E: lea     rcx, [rbp+9E10h+var_30C0]
 * 000000018004E255: call    sub_180043BDC
 * 000000018004E25A: nop
 * 000000018004E25B: lea     r8, aVertex; "/Vertex"
 * 000000018004E262: mov     rdx, rax
 * 000000018004E265: lea     rcx, [rbp+9E10h+var_30E0]
 * 000000018004E26C: call    sub_18002C218
 * 000000018004E271: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E276: mov     rcx, rax
 * 000000018004E279: call    sub_1800CF3A0
 * 000000018004E27E: mov     cs:byte_180218E14, al
 * 000000018004E284: lea     rcx, [rbp+9E10h+var_30C0]; void *
 * 000000018004E28B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E290: nop
 * 000000018004E291: lea     rcx, [rbp+9E10h+var_30A0]; void *
 * 000000018004E298: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E29D: nop
 * 000000018004E29E: lea     rcx, dword_180218E18
 * 000000018004E2A5: call    _Init_thread_footer
 * 000000018004E2AA: mov     rax, [rdi+rbx*8]
 * 000000018004E2AE: mov     ecx, [r15+rax]
 * 000000018004E2B2: cmp     cs:dword_180218E20, ecx
 * 000000018004E2B8: jle     loc_18004E39D
 * 000000018004E2BE: lea     rcx, dword_180218E20
 * 000000018004E2C5: call    _Init_thread_header
 * 000000018004E2CA: cmp     cs:dword_180218E20, r14d
 * 000000018004E2D1: jnz     loc_18004E39D
 * 000000018004E2D7: lea     rax, unk_1801863C0
 * 000000018004E2DE: mov     qword ptr [rbp+9E10h+var_9420], rax
 * 000000018004E2E5: lea     rax, unk_180187410
 * 000000018004E2EC: mov     qword ptr [rbp+9E10h+var_9420+8], rax
 * 000000018004E2F3: movups  xmm0, [rbp+9E10h+var_9420]
 * 000000018004E2FA: movups  [rbp+9E10h+var_74B0], xmm0
 * 000000018004E301: mov     dword ptr [rbp+9E10h+var_74A0], esi
 * 000000018004E307: mov     dword ptr [rbp+9E10h+var_74A0+4], esi
 * 000000018004E30D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E312: movups  xmm0, [rbp+9E10h+var_74A0]
 * 000000018004E319: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E31E: call    sub_180043E00
 * 000000018004E323: mov     r8, rax
 * 000000018004E326: mov     r9d, r12d
 * 000000018004E329: mov     edx, 50h ; 'P'
 * 000000018004E32E: lea     rcx, [rbp+9E10h+var_3040]; Src
 * 000000018004E335: call    sub_1800CF2C8
 * 000000018004E33A: nop
 * 000000018004E33B: mov     r8, rax
 * 000000018004E33E: mov     rdx, r13
 * 000000018004E341: lea     rcx, [rbp+9E10h+var_3060]
 * 000000018004E348: call    sub_180043BDC
 * 000000018004E34D: nop
 * 000000018004E34E: lea     r8, aVertex; "/Vertex"
 * 000000018004E355: mov     rdx, rax
 * 000000018004E358: lea     rcx, [rbp+9E10h+var_3080]
 * 000000018004E35F: call    sub_18002C218
 * 000000018004E364: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E369: mov     rcx, rax
 * 000000018004E36C: call    sub_1800CF3A0
 * 000000018004E371: mov     cs:byte_180218E1C, al
 * 000000018004E377: lea     rcx, [rbp+9E10h+var_3060]; void *
 * 000000018004E37E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E383: nop
 * 000000018004E384: lea     rcx, [rbp+9E10h+var_3040]; void *
 * 000000018004E38B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E390: nop
 * 000000018004E391: lea     rcx, dword_180218E20
 * 000000018004E398: call    _Init_thread_footer
 * 000000018004E39D: mov     rax, [rdi+rbx*8]
 * 000000018004E3A1: mov     ecx, [r15+rax]
 * 000000018004E3A5: cmp     cs:dword_180218E28, ecx
 * 000000018004E3AB: jle     loc_18004E490
 * 000000018004E3B1: lea     rcx, dword_180218E28
 * 000000018004E3B8: call    _Init_thread_header
 * 000000018004E3BD: cmp     cs:dword_180218E28, r14d
 * 000000018004E3C4: jnz     loc_18004E490
 * 000000018004E3CA: lea     rax, unk_1801863C0
 * 000000018004E3D1: mov     qword ptr [rbp+9E10h+var_9410], rax
 * 000000018004E3D8: lea     rax, unk_180187410
 * 000000018004E3DF: mov     qword ptr [rbp+9E10h+var_9410+8], rax
 * 000000018004E3E6: movups  xmm0, [rbp+9E10h+var_9410]
 * 000000018004E3ED: movups  [rbp+9E10h+var_7490], xmm0
 * 000000018004E3F4: mov     dword ptr [rbp+9E10h+var_7480], esi
 * 000000018004E3FA: mov     dword ptr [rbp+9E10h+var_7480+4], esi
 * 000000018004E400: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E405: movups  xmm0, [rbp+9E10h+var_7480]
 * 000000018004E40C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E411: call    sub_180043E00
 * 000000018004E416: mov     r8, rax
 * 000000018004E419: mov     r9d, r12d
 * 000000018004E41C: mov     edx, 52h ; 'R'
 * 000000018004E421: lea     rcx, [rbp+9E10h+var_2FE0]; Src
 * 000000018004E428: call    sub_1800CF2C8
 * 000000018004E42D: nop
 * 000000018004E42E: mov     r8, rax
 * 000000018004E431: mov     rdx, r13
 * 000000018004E434: lea     rcx, [rbp+9E10h+var_3000]
 * 000000018004E43B: call    sub_180043BDC
 * 000000018004E440: nop
 * 000000018004E441: lea     r8, aVertex; "/Vertex"
 * 000000018004E448: mov     rdx, rax
 * 000000018004E44B: lea     rcx, [rbp+9E10h+var_3020]
 * 000000018004E452: call    sub_18002C218
 * 000000018004E457: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E45C: mov     rcx, rax
 * 000000018004E45F: call    sub_1800CF3A0
 * 000000018004E464: mov     cs:byte_180218E24, al
 * 000000018004E46A: lea     rcx, [rbp+9E10h+var_3000]; void *
 * 000000018004E471: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E476: nop
 * 000000018004E477: lea     rcx, [rbp+9E10h+var_2FE0]; void *
 * 000000018004E47E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E483: nop
 * 000000018004E484: lea     rcx, dword_180218E28
 * 000000018004E48B: call    _Init_thread_footer
 * 000000018004E490: mov     rax, [rdi+rbx*8]
 * 000000018004E494: mov     ecx, [r15+rax]
 * 000000018004E498: cmp     cs:dword_180218E30, ecx
 * 000000018004E49E: jle     loc_18004E583
 * 000000018004E4A4: lea     rcx, dword_180218E30
 * 000000018004E4AB: call    _Init_thread_header
 * 000000018004E4B0: cmp     cs:dword_180218E30, r14d
 * 000000018004E4B7: jnz     loc_18004E583
 * 000000018004E4BD: lea     rax, unk_1801863C0
 * 000000018004E4C4: mov     qword ptr [rbp+9E10h+var_9400], rax
 * 000000018004E4CB: lea     rax, unk_180187410
 * 000000018004E4D2: mov     qword ptr [rbp+9E10h+var_9400+8], rax
 * 000000018004E4D9: movups  xmm0, [rbp+9E10h+var_9400]
 * 000000018004E4E0: movups  [rbp+9E10h+var_7470], xmm0
 * 000000018004E4E7: mov     dword ptr [rbp+9E10h+var_7460], esi
 * 000000018004E4ED: mov     dword ptr [rbp+9E10h+var_7460+4], esi
 * 000000018004E4F3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E4F8: movups  xmm0, [rbp+9E10h+var_7460]
 * 000000018004E4FF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E504: call    sub_180043E00
 * 000000018004E509: mov     r8, rax
 * 000000018004E50C: mov     r9d, r12d
 * 000000018004E50F: mov     edx, 58h ; 'X'
 * 000000018004E514: lea     rcx, [rbp+9E10h+var_2F80]; Src
 * 000000018004E51B: call    sub_1800CF2C8
 * 000000018004E520: nop
 * 000000018004E521: mov     r8, rax
 * 000000018004E524: mov     rdx, r13
 * 000000018004E527: lea     rcx, [rbp+9E10h+var_2FA0]
 * 000000018004E52E: call    sub_180043BDC
 * 000000018004E533: nop
 * 000000018004E534: lea     r8, aVertex; "/Vertex"
 * 000000018004E53B: mov     rdx, rax
 * 000000018004E53E: lea     rcx, [rbp+9E10h+var_2FC0]
 * 000000018004E545: call    sub_18002C218
 * 000000018004E54A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E54F: mov     rcx, rax
 * 000000018004E552: call    sub_1800CF3A0
 * 000000018004E557: mov     cs:byte_180218E2C, al
 * 000000018004E55D: lea     rcx, [rbp+9E10h+var_2FA0]; void *
 * 000000018004E564: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E569: nop
 * 000000018004E56A: lea     rcx, [rbp+9E10h+var_2F80]; void *
 * 000000018004E571: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E576: nop
 * 000000018004E577: lea     rcx, dword_180218E30
 * 000000018004E57E: call    _Init_thread_footer
 * 000000018004E583: mov     rax, [rdi+rbx*8]
 * 000000018004E587: mov     ecx, [r15+rax]
 * 000000018004E58B: cmp     cs:dword_180218E38, ecx
 * 000000018004E591: jle     loc_18004E676
 * 000000018004E597: lea     rcx, dword_180218E38
 * 000000018004E59E: call    _Init_thread_header
 * 000000018004E5A3: cmp     cs:dword_180218E38, r14d
 * 000000018004E5AA: jnz     loc_18004E676
 * 000000018004E5B0: lea     rax, unk_1801863C0
 * 000000018004E5B7: mov     qword ptr [rbp+9E10h+var_93F0], rax
 * 000000018004E5BE: lea     rax, unk_180187410
 * 000000018004E5C5: mov     qword ptr [rbp+9E10h+var_93F0+8], rax
 * 000000018004E5CC: movups  xmm0, [rbp+9E10h+var_93F0]
 * 000000018004E5D3: movups  [rbp+9E10h+var_7450], xmm0
 * 000000018004E5DA: mov     dword ptr [rbp+9E10h+var_7440], esi
 * 000000018004E5E0: mov     dword ptr [rbp+9E10h+var_7440+4], esi
 * 000000018004E5E6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E5EB: movups  xmm0, [rbp+9E10h+var_7440]
 * 000000018004E5F2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E5F7: call    sub_180043E00
 * 000000018004E5FC: mov     r8, rax
 * 000000018004E5FF: mov     r9d, r12d
 * 000000018004E602: mov     edx, 5Ah ; 'Z'
 * 000000018004E607: lea     rcx, [rbp+9E10h+var_2F20]; Src
 * 000000018004E60E: call    sub_1800CF2C8
 * 000000018004E613: nop
 * 000000018004E614: mov     r8, rax
 * 000000018004E617: mov     rdx, r13
 * 000000018004E61A: lea     rcx, [rbp+9E10h+var_2F40]
 * 000000018004E621: call    sub_180043BDC
 * 000000018004E626: nop
 * 000000018004E627: lea     r8, aVertex; "/Vertex"
 * 000000018004E62E: mov     rdx, rax
 * 000000018004E631: lea     rcx, [rbp+9E10h+var_2F60]
 * 000000018004E638: call    sub_18002C218
 * 000000018004E63D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E642: mov     rcx, rax
 * 000000018004E645: call    sub_1800CF3A0
 * 000000018004E64A: mov     cs:byte_180218E34, al
 * 000000018004E650: lea     rcx, [rbp+9E10h+var_2F40]; void *
 * 000000018004E657: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E65C: nop
 * 000000018004E65D: lea     rcx, [rbp+9E10h+var_2F20]; void *
 * 000000018004E664: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E669: nop
 * 000000018004E66A: lea     rcx, dword_180218E38
 * 000000018004E671: call    _Init_thread_footer
 * 000000018004E676: mov     rax, [rdi+rbx*8]
 * 000000018004E67A: mov     eax, [r15+rax]
 * 000000018004E67E: cmp     cs:dword_180218E40, eax
 * 000000018004E684: jle     loc_18004E769
 * 000000018004E68A: lea     rcx, dword_180218E40
 * 000000018004E691: call    _Init_thread_header
 * 000000018004E696: cmp     cs:dword_180218E40, r14d
 * 000000018004E69D: jnz     loc_18004E769
 * 000000018004E6A3: lea     rax, unk_180187410
 * 000000018004E6AA: mov     qword ptr [rbp+9E10h+var_9060], rax
 * 000000018004E6B1: lea     rax, aPixel; "/Pixel"
 * 000000018004E6B8: mov     qword ptr [rbp+9E10h+var_9060+8], rax
 * 000000018004E6BF: movups  xmm0, [rbp+9E10h+var_9060]
 * 000000018004E6C6: movups  [rbp+9E10h+var_7430], xmm0
 * 000000018004E6CD: mov     dword ptr [rbp+9E10h+var_7420], esi
 * 000000018004E6D3: mov     dword ptr [rbp+9E10h+var_7420+4], esi
 * 000000018004E6D9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E6DE: movups  xmm0, [rbp+9E10h+var_7420]
 * 000000018004E6E5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E6EA: call    sub_180043E00
 * 000000018004E6EF: mov     r8, rax
 * 000000018004E6F2: mov     r9d, r12d
 * 000000018004E6F5: mov     edx, 60h ; '`'
 * 000000018004E6FA: lea     rcx, [rbp+9E10h+var_2EC0]; Src
 * 000000018004E701: call    sub_1800CF2C8
 * 000000018004E706: nop
 * 000000018004E707: mov     r8, rax
 * 000000018004E70A: mov     rdx, r13
 * 000000018004E70D: lea     rcx, [rbp+9E10h+var_2EE0]
 * 000000018004E714: call    sub_180043BDC
 * 000000018004E719: nop
 * 000000018004E71A: lea     r8, aVertex; "/Vertex"
 * 000000018004E721: mov     rdx, rax
 * 000000018004E724: lea     rcx, [rbp+9E10h+var_2F00]
 * 000000018004E72B: call    sub_18002C218
 * 000000018004E730: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E735: mov     rcx, rax
 * 000000018004E738: call    sub_1800CF3A0
 * 000000018004E73D: mov     cs:byte_180218E3C, al
 * 000000018004E743: lea     rcx, [rbp+9E10h+var_2EE0]; void *
 * 000000018004E74A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E74F: nop
 * 000000018004E750: lea     rcx, [rbp+9E10h+var_2EC0]; void *
 * 000000018004E757: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E75C: nop
 * 000000018004E75D: lea     rcx, dword_180218E40
 * 000000018004E764: call    _Init_thread_footer
 * 000000018004E769: mov     rax, [rdi+rbx*8]
 * 000000018004E76D: mov     ecx, [r15+rax]
 * 000000018004E771: cmp     cs:dword_180218E48, ecx
 * 000000018004E777: jle     loc_18004E85C
 * 000000018004E77D: lea     rcx, dword_180218E48
 * 000000018004E784: call    _Init_thread_header
 * 000000018004E789: cmp     cs:dword_180218E48, r14d
 * 000000018004E790: jnz     loc_18004E85C
 * 000000018004E796: lea     rax, unk_180187410
 * 000000018004E79D: mov     qword ptr [rbp+9E10h+var_93E0], rax
 * 000000018004E7A4: lea     rax, aPixel; "/Pixel"
 * 000000018004E7AB: mov     qword ptr [rbp+9E10h+var_93E0+8], rax
 * 000000018004E7B2: movups  xmm0, [rbp+9E10h+var_93E0]
 * 000000018004E7B9: movups  [rbp+9E10h+var_7410], xmm0
 * 000000018004E7C0: mov     dword ptr [rbp+9E10h+var_7400], esi
 * 000000018004E7C6: mov     dword ptr [rbp+9E10h+var_7400+4], esi
 * 000000018004E7CC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E7D1: movups  xmm0, [rbp+9E10h+var_7400]
 * 000000018004E7D8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E7DD: call    sub_180043E00
 * 000000018004E7E2: mov     r8, rax
 * 000000018004E7E5: mov     r9d, r12d
 * 000000018004E7E8: mov     edx, 62h ; 'b'
 * 000000018004E7ED: lea     rcx, [rbp+9E10h+var_2E60]; Src
 * 000000018004E7F4: call    sub_1800CF2C8
 * 000000018004E7F9: nop
 * 000000018004E7FA: mov     r8, rax
 * 000000018004E7FD: mov     rdx, r13
 * 000000018004E800: lea     rcx, [rbp+9E10h+var_2E80]
 * 000000018004E807: call    sub_180043BDC
 * 000000018004E80C: nop
 * 000000018004E80D: lea     r8, aVertex; "/Vertex"
 * 000000018004E814: mov     rdx, rax
 * 000000018004E817: lea     rcx, [rbp+9E10h+var_2EA0]
 * 000000018004E81E: call    sub_18002C218
 * 000000018004E823: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E828: mov     rcx, rax
 * 000000018004E82B: call    sub_1800CF3A0
 * 000000018004E830: mov     cs:byte_180218E44, al
 * 000000018004E836: lea     rcx, [rbp+9E10h+var_2E80]; void *
 * 000000018004E83D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E842: nop
 * 000000018004E843: lea     rcx, [rbp+9E10h+var_2E60]; void *
 * 000000018004E84A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E84F: nop
 * 000000018004E850: lea     rcx, dword_180218E48
 * 000000018004E857: call    _Init_thread_footer
 * 000000018004E85C: mov     rax, [rdi+rbx*8]
 * 000000018004E860: mov     ecx, [r15+rax]
 * 000000018004E864: cmp     cs:dword_180218E50, ecx
 * 000000018004E86A: jle     loc_18004E94F
 * 000000018004E870: lea     rcx, dword_180218E50
 * 000000018004E877: call    _Init_thread_header
 * 000000018004E87C: cmp     cs:dword_180218E50, r14d
 * 000000018004E883: jnz     loc_18004E94F
 * 000000018004E889: lea     rax, unk_180187410
 * 000000018004E890: mov     qword ptr [rbp+9E10h+var_93D0], rax
 * 000000018004E897: lea     rax, aPixel; "/Pixel"
 * 000000018004E89E: mov     qword ptr [rbp+9E10h+var_93D0+8], rax
 * 000000018004E8A5: movups  xmm0, [rbp+9E10h+var_93D0]
 * 000000018004E8AC: movups  [rbp+9E10h+var_73F0], xmm0
 * 000000018004E8B3: mov     dword ptr [rbp+9E10h+var_73E0], esi
 * 000000018004E8B9: mov     dword ptr [rbp+9E10h+var_73E0+4], esi
 * 000000018004E8BF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E8C4: movups  xmm0, [rbp+9E10h+var_73E0]
 * 000000018004E8CB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E8D0: call    sub_180043E00
 * 000000018004E8D5: mov     r8, rax
 * 000000018004E8D8: mov     r9d, r12d
 * 000000018004E8DB: mov     edx, 68h ; 'h'
 * 000000018004E8E0: lea     rcx, [rbp+9E10h+var_2E00]; Src
 * 000000018004E8E7: call    sub_1800CF2C8
 * 000000018004E8EC: nop
 * 000000018004E8ED: mov     r8, rax
 * 000000018004E8F0: mov     rdx, r13
 * 000000018004E8F3: lea     rcx, [rbp+9E10h+var_2E20]
 * 000000018004E8FA: call    sub_180043BDC
 * 000000018004E8FF: nop
 * 000000018004E900: lea     r8, aVertex; "/Vertex"
 * 000000018004E907: mov     rdx, rax
 * 000000018004E90A: lea     rcx, [rbp+9E10h+var_2E40]
 * 000000018004E911: call    sub_18002C218
 * 000000018004E916: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E91B: mov     rcx, rax
 * 000000018004E91E: call    sub_1800CF3A0
 * 000000018004E923: mov     cs:byte_180218E4C, al
 * 000000018004E929: lea     rcx, [rbp+9E10h+var_2E20]; void *
 * 000000018004E930: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E935: nop
 * 000000018004E936: lea     rcx, [rbp+9E10h+var_2E00]; void *
 * 000000018004E93D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E942: nop
 * 000000018004E943: lea     rcx, dword_180218E50
 * 000000018004E94A: call    _Init_thread_footer
 * 000000018004E94F: mov     rax, [rdi+rbx*8]
 * 000000018004E953: mov     ecx, [r15+rax]
 * 000000018004E957: cmp     cs:dword_180218E58, ecx
 * 000000018004E95D: jle     loc_18004EA42
 * 000000018004E963: lea     rcx, dword_180218E58
 * 000000018004E96A: call    _Init_thread_header
 * 000000018004E96F: cmp     cs:dword_180218E58, r14d
 * 000000018004E976: jnz     loc_18004EA42
 * 000000018004E97C: lea     rax, unk_180187410
 * 000000018004E983: mov     qword ptr [rbp+9E10h+var_93C0], rax
 * 000000018004E98A: lea     rax, aPixel; "/Pixel"
 * 000000018004E991: mov     qword ptr [rbp+9E10h+var_93C0+8], rax
 * 000000018004E998: movups  xmm0, [rbp+9E10h+var_93C0]
 * 000000018004E99F: movups  [rbp+9E10h+var_73D0], xmm0
 * 000000018004E9A6: mov     dword ptr [rbp+9E10h+var_73C0], esi
 * 000000018004E9AC: mov     dword ptr [rbp+9E10h+var_73C0+4], esi
 * 000000018004E9B2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E9B7: movups  xmm0, [rbp+9E10h+var_73C0]
 * 000000018004E9BE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E9C3: call    sub_180043E00
 * 000000018004E9C8: mov     r8, rax
 * 000000018004E9CB: mov     r9d, r12d
 * 000000018004E9CE: mov     edx, 6Ah ; 'j'
 * 000000018004E9D3: lea     rcx, [rbp+9E10h+var_2DA0]; Src
 * 000000018004E9DA: call    sub_1800CF2C8
 * 000000018004E9DF: nop
 * 000000018004E9E0: mov     r8, rax
 * 000000018004E9E3: mov     rdx, r13
 * 000000018004E9E6: lea     rcx, [rbp+9E10h+var_2DC0]
 * 000000018004E9ED: call    sub_180043BDC
 * 000000018004E9F2: nop
 * 000000018004E9F3: lea     r8, aVertex; "/Vertex"
 * 000000018004E9FA: mov     rdx, rax
 * 000000018004E9FD: lea     rcx, [rbp+9E10h+var_2DE0]
 * 000000018004EA04: call    sub_18002C218
 * 000000018004EA09: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EA0E: mov     rcx, rax
 * 000000018004EA11: call    sub_1800CF3A0
 * 000000018004EA16: mov     cs:byte_180218E54, al
 * 000000018004EA1C: lea     rcx, [rbp+9E10h+var_2DC0]; void *
 * 000000018004EA23: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EA28: nop
 * 000000018004EA29: lea     rcx, [rbp+9E10h+var_2DA0]; void *
 * 000000018004EA30: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EA35: nop
 * 000000018004EA36: lea     rcx, dword_180218E58
 * 000000018004EA3D: call    _Init_thread_footer
 * 000000018004EA42: mov     rax, [rdi+rbx*8]
 * 000000018004EA46: mov     ecx, [r15+rax]
 * 000000018004EA4A: cmp     cs:dword_180218E60, ecx
 * 000000018004EA50: jle     loc_18004EB35
 * 000000018004EA56: lea     rcx, dword_180218E60
 * 000000018004EA5D: call    _Init_thread_header
 * 000000018004EA62: cmp     cs:dword_180218E60, r14d
 * 000000018004EA69: jnz     loc_18004EB35
 * 000000018004EA6F: lea     rax, unk_180187410
 * 000000018004EA76: mov     qword ptr [rbp+9E10h+var_93B0], rax
 * 000000018004EA7D: lea     rax, aPixel; "/Pixel"
 * 000000018004EA84: mov     qword ptr [rbp+9E10h+var_93B0+8], rax
 * 000000018004EA8B: movups  xmm0, [rbp+9E10h+var_93B0]
 * 000000018004EA92: movups  [rbp+9E10h+var_73B0], xmm0
 * 000000018004EA99: mov     dword ptr [rbp+9E10h+var_73A0], esi
 * 000000018004EA9F: mov     dword ptr [rbp+9E10h+var_73A0+4], esi
 * 000000018004EAA5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EAAA: movups  xmm0, [rbp+9E10h+var_73A0]
 * 000000018004EAB1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EAB6: call    sub_180043E00
 * 000000018004EABB: mov     r8, rax
 * 000000018004EABE: mov     r9d, r12d
 * 000000018004EAC1: mov     edx, 70h ; 'p'
 * 000000018004EAC6: lea     rcx, [rbp+9E10h+var_2D40]; Src
 * 000000018004EACD: call    sub_1800CF2C8
 * 000000018004EAD2: nop
 * 000000018004EAD3: mov     r8, rax
 * 000000018004EAD6: mov     rdx, r13
 * 000000018004EAD9: lea     rcx, [rbp+9E10h+var_2D60]
 * 000000018004EAE0: call    sub_180043BDC
 * 000000018004EAE5: nop
 * 000000018004EAE6: lea     r8, aVertex; "/Vertex"
 * 000000018004EAED: mov     rdx, rax
 * 000000018004EAF0: lea     rcx, [rbp+9E10h+var_2D80]
 * 000000018004EAF7: call    sub_18002C218
 * 000000018004EAFC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EB01: mov     rcx, rax
 * 000000018004EB04: call    sub_1800CF3A0
 * 000000018004EB09: mov     cs:byte_180218E5C, al
 * 000000018004EB0F: lea     rcx, [rbp+9E10h+var_2D60]; void *
 * 000000018004EB16: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EB1B: nop
 * 000000018004EB1C: lea     rcx, [rbp+9E10h+var_2D40]; void *
 * 000000018004EB23: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EB28: nop
 * 000000018004EB29: lea     rcx, dword_180218E60
 * 000000018004EB30: call    _Init_thread_footer
 * 000000018004EB35: mov     rax, [rdi+rbx*8]
 * 000000018004EB39: mov     ecx, [r15+rax]
 * 000000018004EB3D: cmp     cs:dword_180218E68, ecx
 * 000000018004EB43: jle     loc_18004EC28
 * 000000018004EB49: lea     rcx, dword_180218E68
 * 000000018004EB50: call    _Init_thread_header
 * 000000018004EB55: cmp     cs:dword_180218E68, r14d
 * 000000018004EB5C: jnz     loc_18004EC28
 * 000000018004EB62: lea     rax, unk_180187410
 * 000000018004EB69: mov     qword ptr [rbp+9E10h+var_93A0], rax
 * 000000018004EB70: lea     rax, aPixel; "/Pixel"
 * 000000018004EB77: mov     qword ptr [rbp+9E10h+var_93A0+8], rax
 * 000000018004EB7E: movups  xmm0, [rbp+9E10h+var_93A0]
 * 000000018004EB85: movups  [rbp+9E10h+var_7390], xmm0
 * 000000018004EB8C: mov     dword ptr [rbp+9E10h+var_7380], esi
 * 000000018004EB92: mov     dword ptr [rbp+9E10h+var_7380+4], esi
 * 000000018004EB98: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EB9D: movups  xmm0, [rbp+9E10h+var_7380]
 * 000000018004EBA4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EBA9: call    sub_180043E00
 * 000000018004EBAE: mov     r8, rax
 * 000000018004EBB1: mov     r9d, r12d
 * 000000018004EBB4: mov     edx, 72h ; 'r'
 * 000000018004EBB9: lea     rcx, [rbp+9E10h+var_2CE0]; Src
 * 000000018004EBC0: call    sub_1800CF2C8
 * 000000018004EBC5: nop
 * 000000018004EBC6: mov     r8, rax
 * 000000018004EBC9: mov     rdx, r13
 * 000000018004EBCC: lea     rcx, [rbp+9E10h+var_2D00]
 * 000000018004EBD3: call    sub_180043BDC
 * 000000018004EBD8: nop
 * 000000018004EBD9: lea     r8, aVertex; "/Vertex"
 * 000000018004EBE0: mov     rdx, rax
 * 000000018004EBE3: lea     rcx, [rbp+9E10h+var_2D20]
 * 000000018004EBEA: call    sub_18002C218
 * 000000018004EBEF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EBF4: mov     rcx, rax
 * 000000018004EBF7: call    sub_1800CF3A0
 * 000000018004EBFC: mov     cs:byte_180218E64, al
 * 000000018004EC02: lea     rcx, [rbp+9E10h+var_2D00]; void *
 * 000000018004EC09: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EC0E: nop
 * 000000018004EC0F: lea     rcx, [rbp+9E10h+var_2CE0]; void *
 * 000000018004EC16: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EC1B: nop
 * 000000018004EC1C: lea     rcx, dword_180218E68
 * 000000018004EC23: call    _Init_thread_footer
 * 000000018004EC28: mov     rax, [rdi+rbx*8]
 * 000000018004EC2C: mov     ecx, [r15+rax]
 * 000000018004EC30: cmp     cs:dword_180218E70, ecx
 * 000000018004EC36: jle     loc_18004ED1B
 * 000000018004EC3C: lea     rcx, dword_180218E70
 * 000000018004EC43: call    _Init_thread_header
 * 000000018004EC48: cmp     cs:dword_180218E70, r14d
 * 000000018004EC4F: jnz     loc_18004ED1B
 * 000000018004EC55: lea     rax, unk_180187410
 * 000000018004EC5C: mov     qword ptr [rbp+9E10h+var_9390], rax
 * 000000018004EC63: lea     rax, aPixel; "/Pixel"
 * 000000018004EC6A: mov     qword ptr [rbp+9E10h+var_9390+8], rax
 * 000000018004EC71: movups  xmm0, [rbp+9E10h+var_9390]
 * 000000018004EC78: movups  [rbp+9E10h+var_9050], xmm0
 * 000000018004EC7F: mov     dword ptr [rbp+9E10h+var_9040], esi
 * 000000018004EC85: mov     dword ptr [rbp+9E10h+var_9040+4], esi
 * 000000018004EC8B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EC90: movups  xmm0, [rbp+9E10h+var_9040]
 * 000000018004EC97: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EC9C: call    sub_180043E00
 * 000000018004ECA1: mov     r8, rax
 * 000000018004ECA4: mov     r9d, r12d
 * 000000018004ECA7: mov     edx, 78h ; 'x'
 * 000000018004ECAC: lea     rcx, [rbp+9E10h+var_2C80]; Src
 * 000000018004ECB3: call    sub_1800CF2C8
 * 000000018004ECB8: nop
 * 000000018004ECB9: mov     r8, rax
 * 000000018004ECBC: mov     rdx, r13
 * 000000018004ECBF: lea     rcx, [rbp+9E10h+var_2CA0]
 * 000000018004ECC6: call    sub_180043BDC
 * 000000018004ECCB: nop
 * 000000018004ECCC: lea     r8, aVertex; "/Vertex"
 * 000000018004ECD3: mov     rdx, rax
 * 000000018004ECD6: lea     rcx, [rbp+9E10h+var_2CC0]
 * 000000018004ECDD: call    sub_18002C218
 * 000000018004ECE2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ECE7: mov     rcx, rax
 * 000000018004ECEA: call    sub_1800CF3A0
 * 000000018004ECEF: mov     cs:byte_180218E6C, al
 * 000000018004ECF5: lea     rcx, [rbp+9E10h+var_2CA0]; void *
 * 000000018004ECFC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ED01: nop
 * 000000018004ED02: lea     rcx, [rbp+9E10h+var_2C80]; void *
 * 000000018004ED09: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ED0E: nop
 * 000000018004ED0F: lea     rcx, dword_180218E70
 * 000000018004ED16: call    _Init_thread_footer
 * 000000018004ED1B: mov     rax, [rdi+rbx*8]
 * 000000018004ED1F: mov     ecx, [r15+rax]
 * 000000018004ED23: cmp     cs:dword_180218E78, ecx
 * 000000018004ED29: jle     loc_18004EE0E
 * 000000018004ED2F: lea     rcx, dword_180218E78
 * 000000018004ED36: call    _Init_thread_header
 * 000000018004ED3B: cmp     cs:dword_180218E78, r14d
 * 000000018004ED42: jnz     loc_18004EE0E
 * 000000018004ED48: lea     rax, unk_180187410
 * 000000018004ED4F: mov     qword ptr [rbp+9E10h+var_9380], rax
 * 000000018004ED56: lea     rax, aPixel; "/Pixel"
 * 000000018004ED5D: mov     qword ptr [rbp+9E10h+var_9380+8], rax
 * 000000018004ED64: movups  xmm0, [rbp+9E10h+var_9380]
 * 000000018004ED6B: movups  [rbp+9E10h+var_9030], xmm0
 * 000000018004ED72: mov     dword ptr [rbp+9E10h+var_9020], esi
 * 000000018004ED78: mov     dword ptr [rbp+9E10h+var_9020+4], esi
 * 000000018004ED7E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004ED83: movups  xmm0, [rbp+9E10h+var_9020]
 * 000000018004ED8A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004ED8F: call    sub_180043E00
 * 000000018004ED94: mov     r8, rax
 * 000000018004ED97: mov     r9d, r12d
 * 000000018004ED9A: mov     edx, 7Ah ; 'z'
 * 000000018004ED9F: lea     rcx, [rbp+9E10h+var_2C20]; Src
 * 000000018004EDA6: call    sub_1800CF2C8
 * 000000018004EDAB: nop
 * 000000018004EDAC: mov     r8, rax
 * 000000018004EDAF: mov     rdx, r13
 * 000000018004EDB2: lea     rcx, [rbp+9E10h+var_2C40]
 * 000000018004EDB9: call    sub_180043BDC
 * 000000018004EDBE: nop
 * 000000018004EDBF: lea     r8, aVertex; "/Vertex"
 * 000000018004EDC6: mov     rdx, rax
 * 000000018004EDC9: lea     rcx, [rbp+9E10h+var_2C60]
 * 000000018004EDD0: call    sub_18002C218
 * 000000018004EDD5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EDDA: mov     rcx, rax
 * 000000018004EDDD: call    sub_1800CF3A0
 * 000000018004EDE2: mov     cs:byte_180218E74, al
 * 000000018004EDE8: lea     rcx, [rbp+9E10h+var_2C40]; void *
 * 000000018004EDEF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EDF4: nop
 * 000000018004EDF5: lea     rcx, [rbp+9E10h+var_2C20]; void *
 * 000000018004EDFC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EE01: nop
 * 000000018004EE02: lea     rcx, dword_180218E78
 * 000000018004EE09: call    _Init_thread_footer
 * 000000018004EE0E: mov     rax, [rdi+rbx*8]
 * 000000018004EE12: mov     ecx, [r15+rax]
 * 000000018004EE16: cmp     cs:dword_180218E80, ecx
 * 000000018004EE1C: jle     loc_18004EF01
 * 000000018004EE22: lea     rcx, dword_180218E80
 * 000000018004EE29: call    _Init_thread_header
 * 000000018004EE2E: cmp     cs:dword_180218E80, r14d
 * 000000018004EE35: jnz     loc_18004EF01
 * 000000018004EE3B: lea     rax, unk_1801863C0
 * 000000018004EE42: mov     qword ptr [rbp+9E10h+var_9370], rax
 * 000000018004EE49: lea     rax, unk_180187410
 * 000000018004EE50: mov     qword ptr [rbp+9E10h+var_9370+8], rax
 * 000000018004EE57: movups  xmm0, [rbp+9E10h+var_9370]
 * 000000018004EE5E: movups  [rbp+9E10h+var_9010], xmm0
 * 000000018004EE65: mov     dword ptr [rbp+9E10h+var_9000], esi
 * 000000018004EE6B: mov     dword ptr [rbp+9E10h+var_9000+4], esi
 * 000000018004EE71: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EE76: movups  xmm0, [rbp+9E10h+var_9000]
 * 000000018004EE7D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EE82: call    sub_180043E00
 * 000000018004EE87: mov     r8, rax
 * 000000018004EE8A: mov     r9d, r12d
 * 000000018004EE8D: mov     edx, 80h
 * 000000018004EE92: lea     rcx, [rbp+9E10h+var_2BC0]; Src
 * 000000018004EE99: call    sub_1800CF2C8
 * 000000018004EE9E: nop
 * 000000018004EE9F: mov     r8, rax
 * 000000018004EEA2: mov     rdx, r13
 * 000000018004EEA5: lea     rcx, [rbp+9E10h+var_2BE0]
 * 000000018004EEAC: call    sub_180043BDC
 * 000000018004EEB1: nop
 * 000000018004EEB2: lea     r8, aVertex; "/Vertex"
 * 000000018004EEB9: mov     rdx, rax
 * 000000018004EEBC: lea     rcx, [rbp+9E10h+var_2C00]
 * 000000018004EEC3: call    sub_18002C218
 * 000000018004EEC8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EECD: mov     rcx, rax
 * 000000018004EED0: call    sub_1800CF3A0
 * 000000018004EED5: mov     cs:byte_180218E7C, al
 * 000000018004EEDB: lea     rcx, [rbp+9E10h+var_2BE0]; void *
 * 000000018004EEE2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EEE7: nop
 * 000000018004EEE8: lea     rcx, [rbp+9E10h+var_2BC0]; void *
 * 000000018004EEEF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EEF4: nop
 * 000000018004EEF5: lea     rcx, dword_180218E80
 * 000000018004EEFC: call    _Init_thread_footer
 * 000000018004EF01: mov     rax, [rdi+rbx*8]
 * 000000018004EF05: mov     ecx, [r15+rax]
 * 000000018004EF09: cmp     cs:dword_180218E88, ecx
 * 000000018004EF0F: jle     loc_18004EFF4
 * 000000018004EF15: lea     rcx, dword_180218E88
 * 000000018004EF1C: call    _Init_thread_header
 * 000000018004EF21: cmp     cs:dword_180218E88, r14d
 * 000000018004EF28: jnz     loc_18004EFF4
 * 000000018004EF2E: lea     rax, unk_1801863C0
 * 000000018004EF35: mov     qword ptr [rbp+9E10h+var_9360], rax
 * 000000018004EF3C: lea     rax, unk_180187410
 * 000000018004EF43: mov     qword ptr [rbp+9E10h+var_9360+8], rax
 * 000000018004EF4A: movups  xmm0, [rbp+9E10h+var_9360]
 * 000000018004EF51: movups  [rbp+9E10h+var_8FF0], xmm0
 * 000000018004EF58: mov     dword ptr [rbp+9E10h+var_8FE0], esi
 * 000000018004EF5E: mov     dword ptr [rbp+9E10h+var_8FE0+4], esi
 * 000000018004EF64: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EF69: movups  xmm0, [rbp+9E10h+var_8FE0]
 * 000000018004EF70: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EF75: call    sub_180043E00
 * 000000018004EF7A: mov     r8, rax
 * 000000018004EF7D: mov     r9d, r12d
 * 000000018004EF80: mov     edx, 82h
 * 000000018004EF85: lea     rcx, [rbp+9E10h+var_2B60]; Src
 * 000000018004EF8C: call    sub_1800CF2C8
 * 000000018004EF91: nop
 * 000000018004EF92: mov     r8, rax
 * 000000018004EF95: mov     rdx, r13
 * 000000018004EF98: lea     rcx, [rbp+9E10h+var_2B80]
 * 000000018004EF9F: call    sub_180043BDC
 * 000000018004EFA4: nop
 * 000000018004EFA5: lea     r8, aVertex; "/Vertex"
 * 000000018004EFAC: mov     rdx, rax
 * 000000018004EFAF: lea     rcx, [rbp+9E10h+var_2BA0]
 * 000000018004EFB6: call    sub_18002C218
 * 000000018004EFBB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EFC0: mov     rcx, rax
 * 000000018004EFC3: call    sub_1800CF3A0
 * 000000018004EFC8: mov     cs:byte_180218E84, al
 * 000000018004EFCE: lea     rcx, [rbp+9E10h+var_2B80]; void *
 * 000000018004EFD5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EFDA: nop
 * 000000018004EFDB: lea     rcx, [rbp+9E10h+var_2B60]; void *
 * 000000018004EFE2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EFE7: nop
 * 000000018004EFE8: lea     rcx, dword_180218E88
 * 000000018004EFEF: call    _Init_thread_footer
 * 000000018004EFF4: mov     rax, [rdi+rbx*8]
 * 000000018004EFF8: mov     ecx, [r15+rax]
 * 000000018004EFFC: cmp     cs:dword_180218E90, ecx
 * 000000018004F002: jle     loc_18004F0E7
 * 000000018004F008: lea     rcx, dword_180218E90
 * 000000018004F00F: call    _Init_thread_header
 * 000000018004F014: cmp     cs:dword_180218E90, r14d
 * 000000018004F01B: jnz     loc_18004F0E7
 * 000000018004F021: lea     rax, unk_1801863C0
 * 000000018004F028: mov     qword ptr [rbp+9E10h+var_9350], rax
 * 000000018004F02F: lea     rax, unk_180187410
 * 000000018004F036: mov     qword ptr [rbp+9E10h+var_9350+8], rax
 * 000000018004F03D: movups  xmm0, [rbp+9E10h+var_9350]
 * 000000018004F044: movups  [rbp+9E10h+var_8FD0], xmm0
 * 000000018004F04B: mov     dword ptr [rbp+9E10h+var_8FC0], esi
 * 000000018004F051: mov     dword ptr [rbp+9E10h+var_8FC0+4], esi
 * 000000018004F057: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F05C: movups  xmm0, [rbp+9E10h+var_8FC0]
 * 000000018004F063: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F068: call    sub_180043E00
 * 000000018004F06D: mov     r8, rax
 * 000000018004F070: mov     r9d, r12d
 * 000000018004F073: mov     edx, 88h
 * 000000018004F078: lea     rcx, [rbp+9E10h+var_2B00]; Src
 * 000000018004F07F: call    sub_1800CF2C8
 * 000000018004F084: nop
 * 000000018004F085: mov     r8, rax
 * 000000018004F088: mov     rdx, r13
 * 000000018004F08B: lea     rcx, [rbp+9E10h+var_2B20]
 * 000000018004F092: call    sub_180043BDC
 * 000000018004F097: nop
 * 000000018004F098: lea     r8, aVertex; "/Vertex"
 * 000000018004F09F: mov     rdx, rax
 * 000000018004F0A2: lea     rcx, [rbp+9E10h+var_2B40]
 * 000000018004F0A9: call    sub_18002C218
 * 000000018004F0AE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F0B3: mov     rcx, rax
 * 000000018004F0B6: call    sub_1800CF3A0
 * 000000018004F0BB: mov     cs:byte_180218E8C, al
 * 000000018004F0C1: lea     rcx, [rbp+9E10h+var_2B20]; void *
 * 000000018004F0C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F0CD: nop
 * 000000018004F0CE: lea     rcx, [rbp+9E10h+var_2B00]; void *
 * 000000018004F0D5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F0DA: nop
 * 000000018004F0DB: lea     rcx, dword_180218E90
 * 000000018004F0E2: call    _Init_thread_footer
 * 000000018004F0E7: mov     rax, [rdi+rbx*8]
 * 000000018004F0EB: mov     ecx, [r15+rax]
 * 000000018004F0EF: cmp     cs:dword_180218E98, ecx
 * 000000018004F0F5: jle     loc_18004F1DA
 * 000000018004F0FB: lea     rcx, dword_180218E98
 * 000000018004F102: call    _Init_thread_header
 * 000000018004F107: cmp     cs:dword_180218E98, r14d
 * 000000018004F10E: jnz     loc_18004F1DA
 * 000000018004F114: lea     rax, unk_1801863C0
 * 000000018004F11B: mov     qword ptr [rbp+9E10h+var_9340], rax
 * 000000018004F122: lea     rax, unk_180187410
 * 000000018004F129: mov     qword ptr [rbp+9E10h+var_9340+8], rax
 * 000000018004F130: movups  xmm0, [rbp+9E10h+var_9340]
 * 000000018004F137: movups  [rbp+9E10h+var_8FB0], xmm0
 * 000000018004F13E: mov     dword ptr [rbp+9E10h+var_8FA0], esi
 * 000000018004F144: mov     dword ptr [rbp+9E10h+var_8FA0+4], esi
 * 000000018004F14A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F14F: movups  xmm0, [rbp+9E10h+var_8FA0]
 * 000000018004F156: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F15B: call    sub_180043E00
 * 000000018004F160: mov     r8, rax
 * 000000018004F163: mov     r9d, r12d
 * 000000018004F166: mov     edx, 8Ah
 * 000000018004F16B: lea     rcx, [rbp+9E10h+var_2AA0]; Src
 * 000000018004F172: call    sub_1800CF2C8
 * 000000018004F177: nop
 * 000000018004F178: mov     r8, rax
 * 000000018004F17B: mov     rdx, r13
 * 000000018004F17E: lea     rcx, [rbp+9E10h+var_2AC0]
 * 000000018004F185: call    sub_180043BDC
 * 000000018004F18A: nop
 * 000000018004F18B: lea     r8, aVertex; "/Vertex"
 * 000000018004F192: mov     rdx, rax
 * 000000018004F195: lea     rcx, [rbp+9E10h+var_2AE0]
 * 000000018004F19C: call    sub_18002C218
 * 000000018004F1A1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F1A6: mov     rcx, rax
 * 000000018004F1A9: call    sub_1800CF3A0
 * 000000018004F1AE: mov     cs:byte_180218E94, al
 * 000000018004F1B4: lea     rcx, [rbp+9E10h+var_2AC0]; void *
 * 000000018004F1BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F1C0: nop
 * 000000018004F1C1: lea     rcx, [rbp+9E10h+var_2AA0]; void *
 * 000000018004F1C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F1CD: nop
 * 000000018004F1CE: lea     rcx, dword_180218E98
 * 000000018004F1D5: call    _Init_thread_footer
 * 000000018004F1DA: mov     rax, [rdi+rbx*8]
 * 000000018004F1DE: mov     ecx, [r15+rax]
 * 000000018004F1E2: cmp     cs:dword_180218EA0, ecx
 * 000000018004F1E8: jle     loc_18004F2CD
 * 000000018004F1EE: lea     rcx, dword_180218EA0
 * 000000018004F1F5: call    _Init_thread_header
 * 000000018004F1FA: cmp     cs:dword_180218EA0, r14d
 * 000000018004F201: jnz     loc_18004F2CD
 * 000000018004F207: lea     rax, unk_1801863C0
 * 000000018004F20E: mov     qword ptr [rbp+9E10h+var_9330], rax
 * 000000018004F215: lea     rax, unk_180187410
 * 000000018004F21C: mov     qword ptr [rbp+9E10h+var_9330+8], rax
 * 000000018004F223: movups  xmm0, [rbp+9E10h+var_9330]
 * 000000018004F22A: movups  [rbp+9E10h+var_8F90], xmm0
 * 000000018004F231: mov     dword ptr [rbp+9E10h+var_8F80], esi
 * 000000018004F237: mov     dword ptr [rbp+9E10h+var_8F80+4], esi
 * 000000018004F23D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F242: movups  xmm0, [rbp+9E10h+var_8F80]
 * 000000018004F249: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F24E: call    sub_180043E00
 * 000000018004F253: mov     r8, rax
 * 000000018004F256: mov     r9d, r12d
 * 000000018004F259: mov     edx, 90h
 * 000000018004F25E: lea     rcx, [rbp+9E10h+var_2A40]; Src
 * 000000018004F265: call    sub_1800CF2C8
 * 000000018004F26A: nop
 * 000000018004F26B: mov     r8, rax
 * 000000018004F26E: mov     rdx, r13
 * 000000018004F271: lea     rcx, [rbp+9E10h+var_2A60]
 * 000000018004F278: call    sub_180043BDC
 * 000000018004F27D: nop
 * 000000018004F27E: lea     r8, aVertex; "/Vertex"
 * 000000018004F285: mov     rdx, rax
 * 000000018004F288: lea     rcx, [rbp+9E10h+var_2A80]
 * 000000018004F28F: call    sub_18002C218
 * 000000018004F294: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F299: mov     rcx, rax
 * 000000018004F29C: call    sub_1800CF3A0
 * 000000018004F2A1: mov     cs:byte_180218E9C, al
 * 000000018004F2A7: lea     rcx, [rbp+9E10h+var_2A60]; void *
 * 000000018004F2AE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F2B3: nop
 * 000000018004F2B4: lea     rcx, [rbp+9E10h+var_2A40]; void *
 * 000000018004F2BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F2C0: nop
 * 000000018004F2C1: lea     rcx, dword_180218EA0
 * 000000018004F2C8: call    _Init_thread_footer
 * 000000018004F2CD: mov     rax, [rdi+rbx*8]
 * 000000018004F2D1: mov     ecx, [r15+rax]
 * 000000018004F2D5: cmp     cs:dword_180218EA8, ecx
 * 000000018004F2DB: jle     loc_18004F3C0
 * 000000018004F2E1: lea     rcx, dword_180218EA8
 * 000000018004F2E8: call    _Init_thread_header
 * 000000018004F2ED: cmp     cs:dword_180218EA8, r14d
 * 000000018004F2F4: jnz     loc_18004F3C0
 * 000000018004F2FA: lea     rax, unk_1801863C0
 * 000000018004F301: mov     qword ptr [rbp+9E10h+var_9320], rax
 * 000000018004F308: lea     rax, unk_180187410
 * 000000018004F30F: mov     qword ptr [rbp+9E10h+var_9320+8], rax
 * 000000018004F316: movups  xmm0, [rbp+9E10h+var_9320]
 * 000000018004F31D: movups  [rbp+9E10h+var_8F70], xmm0
 * 000000018004F324: mov     dword ptr [rbp+9E10h+var_8F60], esi
 * 000000018004F32A: mov     dword ptr [rbp+9E10h+var_8F60+4], esi
 * 000000018004F330: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F335: movups  xmm0, [rbp+9E10h+var_8F60]
 * 000000018004F33C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F341: call    sub_180043E00
 * 000000018004F346: mov     r8, rax
 * 000000018004F349: mov     r9d, r12d
 * 000000018004F34C: mov     edx, 92h
 * 000000018004F351: lea     rcx, [rbp+9E10h+var_29E0]; Src
 * 000000018004F358: call    sub_1800CF2C8
 * 000000018004F35D: nop
 * 000000018004F35E: mov     r8, rax
 * 000000018004F361: mov     rdx, r13
 * 000000018004F364: lea     rcx, [rbp+9E10h+var_2A00]
 * 000000018004F36B: call    sub_180043BDC
 * 000000018004F370: nop
 * 000000018004F371: lea     r8, aVertex; "/Vertex"
 * 000000018004F378: mov     rdx, rax
 * 000000018004F37B: lea     rcx, [rbp+9E10h+var_2A20]
 * 000000018004F382: call    sub_18002C218
 * 000000018004F387: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F38C: mov     rcx, rax
 * 000000018004F38F: call    sub_1800CF3A0
 * 000000018004F394: mov     cs:byte_180218EA4, al
 * 000000018004F39A: lea     rcx, [rbp+9E10h+var_2A00]; void *
 * 000000018004F3A1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F3A6: nop
 * 000000018004F3A7: lea     rcx, [rbp+9E10h+var_29E0]; void *
 * 000000018004F3AE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F3B3: nop
 * 000000018004F3B4: lea     rcx, dword_180218EA8
 * 000000018004F3BB: call    _Init_thread_footer
 * 000000018004F3C0: mov     rax, [rdi+rbx*8]
 * 000000018004F3C4: mov     ecx, [r15+rax]
 * 000000018004F3C8: cmp     cs:dword_180218EB0, ecx
 * 000000018004F3CE: jle     loc_18004F4B3
 * 000000018004F3D4: lea     rcx, dword_180218EB0
 * 000000018004F3DB: call    _Init_thread_header
 * 000000018004F3E0: cmp     cs:dword_180218EB0, r14d
 * 000000018004F3E7: jnz     loc_18004F4B3
 * 000000018004F3ED: lea     rax, unk_1801863C0
 * 000000018004F3F4: mov     qword ptr [rbp+9E10h+var_9310], rax
 * 000000018004F3FB: lea     rax, unk_180187410
 * 000000018004F402: mov     qword ptr [rbp+9E10h+var_9310+8], rax
 * 000000018004F409: movups  xmm0, [rbp+9E10h+var_9310]
 * 000000018004F410: movups  [rbp+9E10h+var_8F50], xmm0
 * 000000018004F417: mov     dword ptr [rbp+9E10h+var_8F40], esi
 * 000000018004F41D: mov     dword ptr [rbp+9E10h+var_8F40+4], esi
 * 000000018004F423: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F428: movups  xmm0, [rbp+9E10h+var_8F40]
 * 000000018004F42F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F434: call    sub_180043E00
 * 000000018004F439: mov     r8, rax
 * 000000018004F43C: mov     r9d, r12d
 * 000000018004F43F: mov     edx, 98h
 * 000000018004F444: lea     rcx, [rbp+9E10h+var_2980]; Src
 * 000000018004F44B: call    sub_1800CF2C8
 * 000000018004F450: nop
 * 000000018004F451: mov     r8, rax
 * 000000018004F454: mov     rdx, r13
 * 000000018004F457: lea     rcx, [rbp+9E10h+var_29A0]
 * 000000018004F45E: call    sub_180043BDC
 * 000000018004F463: nop
 * 000000018004F464: lea     r8, aVertex; "/Vertex"
 * 000000018004F46B: mov     rdx, rax
 * 000000018004F46E: lea     rcx, [rbp+9E10h+var_29C0]
 * 000000018004F475: call    sub_18002C218
 * 000000018004F47A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F47F: mov     rcx, rax
 * 000000018004F482: call    sub_1800CF3A0
 * 000000018004F487: mov     cs:byte_180218EAC, al
 * 000000018004F48D: lea     rcx, [rbp+9E10h+var_29A0]; void *
 * 000000018004F494: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F499: nop
 * 000000018004F49A: lea     rcx, [rbp+9E10h+var_2980]; void *
 * 000000018004F4A1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F4A6: nop
 * 000000018004F4A7: lea     rcx, dword_180218EB0
 * 000000018004F4AE: call    _Init_thread_footer
 * 000000018004F4B3: mov     rax, [rdi+rbx*8]
 * 000000018004F4B7: mov     ecx, [r15+rax]
 * 000000018004F4BB: cmp     cs:dword_180218EB8, ecx
 * 000000018004F4C1: jle     loc_18004F5A6
 * 000000018004F4C7: lea     rcx, dword_180218EB8
 * 000000018004F4CE: call    _Init_thread_header
 * 000000018004F4D3: cmp     cs:dword_180218EB8, r14d
 * 000000018004F4DA: jnz     loc_18004F5A6
 * 000000018004F4E0: lea     rax, unk_1801863C0
 * 000000018004F4E7: mov     qword ptr [rbp+9E10h+var_9300], rax
 * 000000018004F4EE: lea     rax, unk_180187410
 * 000000018004F4F5: mov     qword ptr [rbp+9E10h+var_9300+8], rax
 * 000000018004F4FC: movups  xmm0, [rbp+9E10h+var_9300]
 * 000000018004F503: movups  [rbp+9E10h+var_8F30], xmm0
 * 000000018004F50A: mov     dword ptr [rbp+9E10h+var_8F20], esi
 * 000000018004F510: mov     dword ptr [rbp+9E10h+var_8F20+4], esi
 * 000000018004F516: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F51B: movups  xmm0, [rbp+9E10h+var_8F20]
 * 000000018004F522: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F527: call    sub_180043E00
 * 000000018004F52C: mov     r8, rax
 * 000000018004F52F: mov     r9d, r12d
 * 000000018004F532: mov     edx, 9Ah
 * 000000018004F537: lea     rcx, [rbp+9E10h+var_2920]; Src
 * 000000018004F53E: call    sub_1800CF2C8
 * 000000018004F543: nop
 * 000000018004F544: mov     r8, rax
 * 000000018004F547: mov     rdx, r13
 * 000000018004F54A: lea     rcx, [rbp+9E10h+var_2940]
 * 000000018004F551: call    sub_180043BDC
 * 000000018004F556: nop
 * 000000018004F557: lea     r8, aVertex; "/Vertex"
 * 000000018004F55E: mov     rdx, rax
 * 000000018004F561: lea     rcx, [rbp+9E10h+var_2960]
 * 000000018004F568: call    sub_18002C218
 * 000000018004F56D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F572: mov     rcx, rax
 * 000000018004F575: call    sub_1800CF3A0
 * 000000018004F57A: mov     cs:byte_180218EB4, al
 * 000000018004F580: lea     rcx, [rbp+9E10h+var_2940]; void *
 * 000000018004F587: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F58C: nop
 * 000000018004F58D: lea     rcx, [rbp+9E10h+var_2920]; void *
 * 000000018004F594: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F599: nop
 * 000000018004F59A: lea     rcx, dword_180218EB8
 * 000000018004F5A1: call    _Init_thread_footer
 * 000000018004F5A6: mov     rax, [rdi+rbx*8]
 * 000000018004F5AA: mov     ecx, [r15+rax]
 * 000000018004F5AE: cmp     cs:dword_180218EC0, ecx
 * 000000018004F5B4: jle     loc_18004F699
 * 000000018004F5BA: lea     rcx, dword_180218EC0
 * 000000018004F5C1: call    _Init_thread_header
 * 000000018004F5C6: cmp     cs:dword_180218EC0, r14d
 * 000000018004F5CD: jnz     loc_18004F699
 * 000000018004F5D3: lea     rax, unk_180187410
 * 000000018004F5DA: mov     qword ptr [rbp+9E10h+var_92F0], rax
 * 000000018004F5E1: lea     rax, aPixel; "/Pixel"
 * 000000018004F5E8: mov     qword ptr [rbp+9E10h+var_92F0+8], rax
 * 000000018004F5EF: movups  xmm0, [rbp+9E10h+var_92F0]
 * 000000018004F5F6: movups  [rbp+9E10h+var_8F10], xmm0
 * 000000018004F5FD: mov     dword ptr [rbp+9E10h+var_8F00], esi
 * 000000018004F603: mov     dword ptr [rbp+9E10h+var_8F00+4], esi
 * 000000018004F609: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F60E: movups  xmm0, [rbp+9E10h+var_8F00]
 * 000000018004F615: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F61A: call    sub_180043E00
 * 000000018004F61F: mov     r8, rax
 * 000000018004F622: mov     r9d, r12d
 * 000000018004F625: mov     edx, 0A0h
 * 000000018004F62A: lea     rcx, [rbp+9E10h+var_28C0]; Src
 * 000000018004F631: call    sub_1800CF2C8
 * 000000018004F636: nop
 * 000000018004F637: mov     r8, rax
 * 000000018004F63A: mov     rdx, r13
 * 000000018004F63D: lea     rcx, [rbp+9E10h+var_28E0]
 * 000000018004F644: call    sub_180043BDC
 * 000000018004F649: nop
 * 000000018004F64A: lea     r8, aVertex; "/Vertex"
 * 000000018004F651: mov     rdx, rax
 * 000000018004F654: lea     rcx, [rbp+9E10h+var_2900]
 * 000000018004F65B: call    sub_18002C218
 * 000000018004F660: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F665: mov     rcx, rax
 * 000000018004F668: call    sub_1800CF3A0
 * 000000018004F66D: mov     cs:byte_180218EBC, al
 * 000000018004F673: lea     rcx, [rbp+9E10h+var_28E0]; void *
 * 000000018004F67A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F67F: nop
 * 000000018004F680: lea     rcx, [rbp+9E10h+var_28C0]; void *
 * 000000018004F687: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F68C: nop
 * 000000018004F68D: lea     rcx, dword_180218EC0
 * 000000018004F694: call    _Init_thread_footer
 * 000000018004F699: mov     rax, [rdi+rbx*8]
 * 000000018004F69D: mov     ecx, [r15+rax]
 * 000000018004F6A1: cmp     cs:dword_180218EC8, ecx
 * 000000018004F6A7: jle     loc_18004F78C
 * 000000018004F6AD: lea     rcx, dword_180218EC8
 * 000000018004F6B4: call    _Init_thread_header
 * 000000018004F6B9: cmp     cs:dword_180218EC8, r14d
 * 000000018004F6C0: jnz     loc_18004F78C
 * 000000018004F6C6: lea     rax, unk_180187410
 * 000000018004F6CD: mov     qword ptr [rbp+9E10h+var_92E0], rax
 * 000000018004F6D4: lea     rax, aPixel; "/Pixel"
 * 000000018004F6DB: mov     qword ptr [rbp+9E10h+var_92E0+8], rax
 * 000000018004F6E2: movups  xmm0, [rbp+9E10h+var_92E0]
 * 000000018004F6E9: movups  [rbp+9E10h+var_8EF0], xmm0
 * 000000018004F6F0: mov     dword ptr [rbp+9E10h+var_8EE0], esi
 * 000000018004F6F6: mov     dword ptr [rbp+9E10h+var_8EE0+4], esi
 * 000000018004F6FC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F701: movups  xmm0, [rbp+9E10h+var_8EE0]
 * 000000018004F708: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F70D: call    sub_180043E00
 * 000000018004F712: mov     r8, rax
 * 000000018004F715: mov     r9d, r12d
 * 000000018004F718: mov     edx, 0A2h
 * 000000018004F71D: lea     rcx, [rbp+9E10h+var_2860]; Src
 * 000000018004F724: call    sub_1800CF2C8
 * 000000018004F729: nop
 * 000000018004F72A: mov     r8, rax
 * 000000018004F72D: mov     rdx, r13
 * 000000018004F730: lea     rcx, [rbp+9E10h+var_2880]
 * 000000018004F737: call    sub_180043BDC
 * 000000018004F73C: nop
 * 000000018004F73D: lea     r8, aVertex; "/Vertex"
 * 000000018004F744: mov     rdx, rax
 * 000000018004F747: lea     rcx, [rbp+9E10h+var_28A0]
 * 000000018004F74E: call    sub_18002C218
 * 000000018004F753: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F758: mov     rcx, rax
 * 000000018004F75B: call    sub_1800CF3A0
 * 000000018004F760: mov     cs:byte_180218EC4, al
 * 000000018004F766: lea     rcx, [rbp+9E10h+var_2880]; void *
 * 000000018004F76D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F772: nop
 * 000000018004F773: lea     rcx, [rbp+9E10h+var_2860]; void *
 * 000000018004F77A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F77F: nop
 * 000000018004F780: lea     rcx, dword_180218EC8
 * 000000018004F787: call    _Init_thread_footer
 * 000000018004F78C: mov     rax, [rdi+rbx*8]
 * 000000018004F790: mov     ecx, [r15+rax]
 * 000000018004F794: cmp     cs:dword_180218ED0, ecx
 * 000000018004F79A: jle     loc_18004F87F
 * 000000018004F7A0: lea     rcx, dword_180218ED0
 * 000000018004F7A7: call    _Init_thread_header
 * 000000018004F7AC: cmp     cs:dword_180218ED0, r14d
 * 000000018004F7B3: jnz     loc_18004F87F
 * 000000018004F7B9: lea     rax, unk_180187410
 * 000000018004F7C0: mov     qword ptr [rbp+9E10h+var_92D0], rax
 * 000000018004F7C7: lea     rax, aPixel; "/Pixel"
 * 000000018004F7CE: mov     qword ptr [rbp+9E10h+var_92D0+8], rax
 * 000000018004F7D5: movups  xmm0, [rbp+9E10h+var_92D0]
 * 000000018004F7DC: movups  [rbp+9E10h+var_8ED0], xmm0
 * 000000018004F7E3: mov     dword ptr [rbp+9E10h+var_8EC0], esi
 * 000000018004F7E9: mov     dword ptr [rbp+9E10h+var_8EC0+4], esi
 * 000000018004F7EF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F7F4: movups  xmm0, [rbp+9E10h+var_8EC0]
 * 000000018004F7FB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F800: call    sub_180043E00
 * 000000018004F805: mov     r8, rax
 * 000000018004F808: mov     r9d, r12d
 * 000000018004F80B: mov     edx, 0A8h
 * 000000018004F810: lea     rcx, [rbp+9E10h+var_2800]; Src
 * 000000018004F817: call    sub_1800CF2C8
 * 000000018004F81C: nop
 * 000000018004F81D: mov     r8, rax
 * 000000018004F820: mov     rdx, r13
 * 000000018004F823: lea     rcx, [rbp+9E10h+var_2820]
 * 000000018004F82A: call    sub_180043BDC
 * 000000018004F82F: nop
 * 000000018004F830: lea     r8, aVertex; "/Vertex"
 * 000000018004F837: mov     rdx, rax
 * 000000018004F83A: lea     rcx, [rbp+9E10h+var_2840]
 * 000000018004F841: call    sub_18002C218
 * 000000018004F846: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F84B: mov     rcx, rax
 * 000000018004F84E: call    sub_1800CF3A0
 * 000000018004F853: mov     cs:byte_180218ECC, al
 * 000000018004F859: lea     rcx, [rbp+9E10h+var_2820]; void *
 * 000000018004F860: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F865: nop
 * 000000018004F866: lea     rcx, [rbp+9E10h+var_2800]; void *
 * 000000018004F86D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F872: nop
 * 000000018004F873: lea     rcx, dword_180218ED0
 * 000000018004F87A: call    _Init_thread_footer
 * 000000018004F87F: mov     rax, [rdi+rbx*8]
 * 000000018004F883: mov     ecx, [r15+rax]
 * 000000018004F887: cmp     cs:dword_180218ED8, ecx
 * 000000018004F88D: jle     loc_18004F972
 * 000000018004F893: lea     rcx, dword_180218ED8
 * 000000018004F89A: call    _Init_thread_header
 * 000000018004F89F: cmp     cs:dword_180218ED8, r14d
 * 000000018004F8A6: jnz     loc_18004F972
 * 000000018004F8AC: lea     rax, unk_180187410
 * 000000018004F8B3: mov     qword ptr [rbp+9E10h+var_92C0], rax
 * 000000018004F8BA: lea     rax, aPixel; "/Pixel"
 * 000000018004F8C1: mov     qword ptr [rbp+9E10h+var_92C0+8], rax
 * 000000018004F8C8: movups  xmm0, [rbp+9E10h+var_92C0]
 * 000000018004F8CF: movups  [rbp+9E10h+var_8EB0], xmm0
 * 000000018004F8D6: mov     dword ptr [rbp+9E10h+var_8EA0], esi
 * 000000018004F8DC: mov     dword ptr [rbp+9E10h+var_8EA0+4], esi
 * 000000018004F8E2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F8E7: movups  xmm0, [rbp+9E10h+var_8EA0]
 * 000000018004F8EE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F8F3: call    sub_180043E00
 * 000000018004F8F8: mov     r8, rax
 * 000000018004F8FB: mov     r9d, r12d
 * 000000018004F8FE: mov     edx, 0AAh
 * 000000018004F903: lea     rcx, [rbp+9E10h+var_27A0]; Src
 * 000000018004F90A: call    sub_1800CF2C8
 * 000000018004F90F: nop
 * 000000018004F910: mov     r8, rax
 * 000000018004F913: mov     rdx, r13
 * 000000018004F916: lea     rcx, [rbp+9E10h+var_27C0]
 * 000000018004F91D: call    sub_180043BDC
 * 000000018004F922: nop
 * 000000018004F923: lea     r8, aVertex; "/Vertex"
 * 000000018004F92A: mov     rdx, rax
 * 000000018004F92D: lea     rcx, [rbp+9E10h+var_27E0]
 * 000000018004F934: call    sub_18002C218
 * 000000018004F939: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F93E: mov     rcx, rax
 * 000000018004F941: call    sub_1800CF3A0
 * 000000018004F946: mov     cs:byte_180218ED4, al
 * 000000018004F94C: lea     rcx, [rbp+9E10h+var_27C0]; void *
 * 000000018004F953: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F958: nop
 * 000000018004F959: lea     rcx, [rbp+9E10h+var_27A0]; void *
 * 000000018004F960: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F965: nop
 * 000000018004F966: lea     rcx, dword_180218ED8
 * 000000018004F96D: call    _Init_thread_footer
 * 000000018004F972: mov     rax, [rdi+rbx*8]
 * 000000018004F976: mov     ecx, [r15+rax]
 * 000000018004F97A: cmp     cs:dword_180218EE0, ecx
 * 000000018004F980: jle     loc_18004FA65
 * 000000018004F986: lea     rcx, dword_180218EE0
 * 000000018004F98D: call    _Init_thread_header
 * 000000018004F992: cmp     cs:dword_180218EE0, r14d
 * 000000018004F999: jnz     loc_18004FA65
 * 000000018004F99F: lea     rax, unk_180187410
 * 000000018004F9A6: mov     qword ptr [rbp+9E10h+var_92B0], rax
 * 000000018004F9AD: lea     rax, aPixel; "/Pixel"
 * 000000018004F9B4: mov     qword ptr [rbp+9E10h+var_92B0+8], rax
 * 000000018004F9BB: movups  xmm0, [rbp+9E10h+var_92B0]
 * 000000018004F9C2: movups  [rbp+9E10h+var_8E90], xmm0
 * 000000018004F9C9: mov     dword ptr [rbp+9E10h+var_8E80], esi
 * 000000018004F9CF: mov     dword ptr [rbp+9E10h+var_8E80+4], esi
 * 000000018004F9D5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F9DA: movups  xmm0, [rbp+9E10h+var_8E80]
 * 000000018004F9E1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F9E6: call    sub_180043E00
 * 000000018004F9EB: mov     r8, rax
 * 000000018004F9EE: mov     r9d, r12d
 * 000000018004F9F1: mov     edx, 0B0h
 * 000000018004F9F6: lea     rcx, [rbp+9E10h+var_2740]; Src
 * 000000018004F9FD: call    sub_1800CF2C8
 * 000000018004FA02: nop
 * 000000018004FA03: mov     r8, rax
 * 000000018004FA06: mov     rdx, r13
 * 000000018004FA09: lea     rcx, [rbp+9E10h+var_2760]
 * 000000018004FA10: call    sub_180043BDC
 * 000000018004FA15: nop
 * 000000018004FA16: lea     r8, aVertex; "/Vertex"
 * 000000018004FA1D: mov     rdx, rax
 * 000000018004FA20: lea     rcx, [rbp+9E10h+var_2780]
 * 000000018004FA27: call    sub_18002C218
 * 000000018004FA2C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FA31: mov     rcx, rax
 * 000000018004FA34: call    sub_1800CF3A0
 * 000000018004FA39: mov     cs:byte_180218EDC, al
 * 000000018004FA3F: lea     rcx, [rbp+9E10h+var_2760]; void *
 * 000000018004FA46: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FA4B: nop
 * 000000018004FA4C: lea     rcx, [rbp+9E10h+var_2740]; void *
 * 000000018004FA53: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FA58: nop
 * 000000018004FA59: lea     rcx, dword_180218EE0
 * 000000018004FA60: call    _Init_thread_footer
 * 000000018004FA65: mov     rax, [rdi+rbx*8]
 * 000000018004FA69: mov     ecx, [r15+rax]
 * 000000018004FA6D: cmp     cs:dword_180218EE8, ecx
 * 000000018004FA73: jle     loc_18004FB58
 * 000000018004FA79: lea     rcx, dword_180218EE8
 * 000000018004FA80: call    _Init_thread_header
 * 000000018004FA85: cmp     cs:dword_180218EE8, r14d
 * 000000018004FA8C: jnz     loc_18004FB58
 * 000000018004FA92: lea     rax, unk_180187410
 * 000000018004FA99: mov     qword ptr [rbp+9E10h+var_92A0], rax
 * 000000018004FAA0: lea     rax, aPixel; "/Pixel"
 * 000000018004FAA7: mov     qword ptr [rbp+9E10h+var_92A0+8], rax
 * 000000018004FAAE: movups  xmm0, [rbp+9E10h+var_92A0]
 * 000000018004FAB5: movups  [rbp+9E10h+var_8E70], xmm0
 * 000000018004FABC: mov     dword ptr [rbp+9E10h+var_8E60], esi
 * 000000018004FAC2: mov     dword ptr [rbp+9E10h+var_8E60+4], esi
 * 000000018004FAC8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FACD: movups  xmm0, [rbp+9E10h+var_8E60]
 * 000000018004FAD4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FAD9: call    sub_180043E00
 * 000000018004FADE: mov     r8, rax
 * 000000018004FAE1: mov     r9d, r12d
 * 000000018004FAE4: mov     edx, 0B2h
 * 000000018004FAE9: lea     rcx, [rbp+9E10h+var_26E0]; Src
 * 000000018004FAF0: call    sub_1800CF2C8
 * 000000018004FAF5: nop
 * 000000018004FAF6: mov     r8, rax
 * 000000018004FAF9: mov     rdx, r13
 * 000000018004FAFC: lea     rcx, [rbp+9E10h+var_2700]
 * 000000018004FB03: call    sub_180043BDC
 * 000000018004FB08: nop
 * 000000018004FB09: lea     r8, aVertex; "/Vertex"
 * 000000018004FB10: mov     rdx, rax
 * 000000018004FB13: lea     rcx, [rbp+9E10h+var_2720]
 * 000000018004FB1A: call    sub_18002C218
 * 000000018004FB1F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FB24: mov     rcx, rax
 * 000000018004FB27: call    sub_1800CF3A0
 * 000000018004FB2C: mov     cs:byte_180218EE4, al
 * 000000018004FB32: lea     rcx, [rbp+9E10h+var_2700]; void *
 * 000000018004FB39: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FB3E: nop
 * 000000018004FB3F: lea     rcx, [rbp+9E10h+var_26E0]; void *
 * 000000018004FB46: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FB4B: nop
 * 000000018004FB4C: lea     rcx, dword_180218EE8
 * 000000018004FB53: call    _Init_thread_footer
 * 000000018004FB58: mov     rax, [rdi+rbx*8]
 * 000000018004FB5C: mov     ecx, [r15+rax]
 * 000000018004FB60: cmp     cs:dword_180218EF0, ecx
 * 000000018004FB66: jle     loc_18004FC4B
 * 000000018004FB6C: lea     rcx, dword_180218EF0
 * 000000018004FB73: call    _Init_thread_header
 * 000000018004FB78: cmp     cs:dword_180218EF0, r14d
 * 000000018004FB7F: jnz     loc_18004FC4B
 * 000000018004FB85: lea     rax, unk_180187410
 * 000000018004FB8C: mov     qword ptr [rbp+9E10h+var_9290], rax
 * 000000018004FB93: lea     rax, aPixel; "/Pixel"
 * 000000018004FB9A: mov     qword ptr [rbp+9E10h+var_9290+8], rax
 * 000000018004FBA1: movups  xmm0, [rbp+9E10h+var_9290]
 * 000000018004FBA8: movups  [rbp+9E10h+var_8E50], xmm0
 * 000000018004FBAF: mov     dword ptr [rbp+9E10h+var_8E40], esi
 * 000000018004FBB5: mov     dword ptr [rbp+9E10h+var_8E40+4], esi
 * 000000018004FBBB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FBC0: movups  xmm0, [rbp+9E10h+var_8E40]
 * 000000018004FBC7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FBCC: call    sub_180043E00
 * 000000018004FBD1: mov     r8, rax
 * 000000018004FBD4: mov     r9d, r12d
 * 000000018004FBD7: mov     edx, 0B8h
 * 000000018004FBDC: lea     rcx, [rbp+9E10h+var_2680]; Src
 * 000000018004FBE3: call    sub_1800CF2C8
 * 000000018004FBE8: nop
 * 000000018004FBE9: mov     r8, rax
 * 000000018004FBEC: mov     rdx, r13
 * 000000018004FBEF: lea     rcx, [rbp+9E10h+var_26A0]
 * 000000018004FBF6: call    sub_180043BDC
 * 000000018004FBFB: nop
 * 000000018004FBFC: lea     r8, aVertex; "/Vertex"
 * 000000018004FC03: mov     rdx, rax
 * 000000018004FC06: lea     rcx, [rbp+9E10h+var_26C0]
 * 000000018004FC0D: call    sub_18002C218
 * 000000018004FC12: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FC17: mov     rcx, rax
 * 000000018004FC1A: call    sub_1800CF3A0
 * 000000018004FC1F: mov     cs:byte_180218EEC, al
 * 000000018004FC25: lea     rcx, [rbp+9E10h+var_26A0]; void *
 * 000000018004FC2C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FC31: nop
 * 000000018004FC32: lea     rcx, [rbp+9E10h+var_2680]; void *
 * 000000018004FC39: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FC3E: nop
 * 000000018004FC3F: lea     rcx, dword_180218EF0
 * 000000018004FC46: call    _Init_thread_footer
 * 000000018004FC4B: mov     rax, [rdi+rbx*8]
 * 000000018004FC4F: mov     ecx, [r15+rax]
 * 000000018004FC53: cmp     cs:dword_180218EF8, ecx
 * 000000018004FC59: jle     loc_18004FD3E
 * 000000018004FC5F: lea     rcx, dword_180218EF8
 * 000000018004FC66: call    _Init_thread_header
 * 000000018004FC6B: cmp     cs:dword_180218EF8, r14d
 * 000000018004FC72: jnz     loc_18004FD3E
 * 000000018004FC78: lea     rax, unk_180187410
 * 000000018004FC7F: mov     qword ptr [rbp+9E10h+var_9280], rax
 * 000000018004FC86: lea     rax, aPixel; "/Pixel"
 * 000000018004FC8D: mov     qword ptr [rbp+9E10h+var_9280+8], rax
 * 000000018004FC94: movups  xmm0, [rbp+9E10h+var_9280]
 * 000000018004FC9B: movups  [rbp+9E10h+var_8E30], xmm0
 * 000000018004FCA2: mov     dword ptr [rbp+9E10h+var_8E20], esi
 * 000000018004FCA8: mov     dword ptr [rbp+9E10h+var_8E20+4], esi
 * 000000018004FCAE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FCB3: movups  xmm0, [rbp+9E10h+var_8E20]
 * 000000018004FCBA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FCBF: call    sub_180043E00
 * 000000018004FCC4: mov     r8, rax
 * 000000018004FCC7: mov     r9d, r12d
 * 000000018004FCCA: mov     edx, 0BAh
 * 000000018004FCCF: lea     rcx, [rbp+9E10h+var_2620]; Src
 * 000000018004FCD6: call    sub_1800CF2C8
 * 000000018004FCDB: nop
 * 000000018004FCDC: mov     r8, rax
 * 000000018004FCDF: mov     rdx, r13
 * 000000018004FCE2: lea     rcx, [rbp+9E10h+var_2640]
 * 000000018004FCE9: call    sub_180043BDC
 * 000000018004FCEE: nop
 * 000000018004FCEF: lea     r8, aVertex; "/Vertex"
 * 000000018004FCF6: mov     rdx, rax
 * 000000018004FCF9: lea     rcx, [rbp+9E10h+var_2660]
 * 000000018004FD00: call    sub_18002C218
 * 000000018004FD05: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FD0A: mov     rcx, rax
 * 000000018004FD0D: call    sub_1800CF3A0
 * 000000018004FD12: mov     cs:byte_180218EF4, al
 * 000000018004FD18: lea     rcx, [rbp+9E10h+var_2640]; void *
 * 000000018004FD1F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FD24: nop
 * 000000018004FD25: lea     rcx, [rbp+9E10h+var_2620]; void *
 * 000000018004FD2C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FD31: nop
 * 000000018004FD32: lea     rcx, dword_180218EF8
 * 000000018004FD39: call    _Init_thread_footer
 * 000000018004FD3E: mov     rax, [rdi+rbx*8]
 * 000000018004FD42: mov     ecx, [r15+rax]
 * 000000018004FD46: cmp     cs:dword_180218F00, ecx
 * 000000018004FD4C: jle     loc_18004FE31
 * 000000018004FD52: lea     rcx, dword_180218F00
 * 000000018004FD59: call    _Init_thread_header
 * 000000018004FD5E: cmp     cs:dword_180218F00, r14d
 * 000000018004FD65: jnz     loc_18004FE31
 * 000000018004FD6B: lea     rax, unk_1801863C0
 * 000000018004FD72: mov     qword ptr [rbp+9E10h+var_9270], rax
 * 000000018004FD79: lea     rax, unk_180187410
 * 000000018004FD80: mov     qword ptr [rbp+9E10h+var_9270+8], rax
 * 000000018004FD87: movups  xmm0, [rbp+9E10h+var_9270]
 * 000000018004FD8E: movups  [rbp+9E10h+var_8E10], xmm0
 * 000000018004FD95: mov     dword ptr [rbp+9E10h+var_8E00], esi
 * 000000018004FD9B: mov     dword ptr [rbp+9E10h+var_8E00+4], esi
 * 000000018004FDA1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FDA6: movups  xmm0, [rbp+9E10h+var_8E00]
 * 000000018004FDAD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FDB2: call    sub_180043E00
 * 000000018004FDB7: mov     r8, rax
 * 000000018004FDBA: mov     r9d, r12d
 * 000000018004FDBD: mov     edx, 0C0h
 * 000000018004FDC2: lea     rcx, [rbp+9E10h+var_25C0]; Src
 * 000000018004FDC9: call    sub_1800CF2C8
 * 000000018004FDCE: nop
 * 000000018004FDCF: mov     r8, rax
 * 000000018004FDD2: mov     rdx, r13
 * 000000018004FDD5: lea     rcx, [rbp+9E10h+var_25E0]
 * 000000018004FDDC: call    sub_180043BDC
 * 000000018004FDE1: nop
 * 000000018004FDE2: lea     r8, aVertex; "/Vertex"
 * 000000018004FDE9: mov     rdx, rax
 * 000000018004FDEC: lea     rcx, [rbp+9E10h+var_2600]
 * 000000018004FDF3: call    sub_18002C218
 * 000000018004FDF8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FDFD: mov     rcx, rax
 * 000000018004FE00: call    sub_1800CF3A0
 * 000000018004FE05: mov     cs:byte_180218EFC, al
 * 000000018004FE0B: lea     rcx, [rbp+9E10h+var_25E0]; void *
 * 000000018004FE12: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FE17: nop
 * 000000018004FE18: lea     rcx, [rbp+9E10h+var_25C0]; void *
 * 000000018004FE1F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FE24: nop
 * 000000018004FE25: lea     rcx, dword_180218F00
 * 000000018004FE2C: call    _Init_thread_footer
 * 000000018004FE31: mov     rax, [rdi+rbx*8]
 * 000000018004FE35: mov     ecx, [r15+rax]
 * 000000018004FE39: cmp     cs:dword_180218F08, ecx
 * 000000018004FE3F: jle     loc_18004FF24
 * 000000018004FE45: lea     rcx, dword_180218F08
 * 000000018004FE4C: call    _Init_thread_header
 * 000000018004FE51: cmp     cs:dword_180218F08, r14d
 * 000000018004FE58: jnz     loc_18004FF24
 * 000000018004FE5E: lea     rax, unk_1801863C0
 * 000000018004FE65: mov     qword ptr [rbp+9E10h+var_9260], rax
 * 000000018004FE6C: lea     rax, unk_180187410
 * 000000018004FE73: mov     qword ptr [rbp+9E10h+var_9260+8], rax
 * 000000018004FE7A: movups  xmm0, [rbp+9E10h+var_9260]
 * 000000018004FE81: movups  [rbp+9E10h+var_8DF0], xmm0
 * 000000018004FE88: mov     dword ptr [rbp+9E10h+var_8DE0], esi
 * 000000018004FE8E: mov     dword ptr [rbp+9E10h+var_8DE0+4], esi
 * 000000018004FE94: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FE99: movups  xmm0, [rbp+9E10h+var_8DE0]
 * 000000018004FEA0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FEA5: call    sub_180043E00
 * 000000018004FEAA: mov     r8, rax
 * 000000018004FEAD: mov     r9d, r12d
 * 000000018004FEB0: mov     edx, 0C2h
 * 000000018004FEB5: lea     rcx, [rbp+9E10h+var_2560]; Src
 * 000000018004FEBC: call    sub_1800CF2C8
 * 000000018004FEC1: nop
 * 000000018004FEC2: mov     r8, rax
 * 000000018004FEC5: mov     rdx, r13
 * 000000018004FEC8: lea     rcx, [rbp+9E10h+var_2580]
 * 000000018004FECF: call    sub_180043BDC
 * 000000018004FED4: nop
 * 000000018004FED5: lea     r8, aVertex; "/Vertex"
 * 000000018004FEDC: mov     rdx, rax
 * 000000018004FEDF: lea     rcx, [rbp+9E10h+var_25A0]
 * 000000018004FEE6: call    sub_18002C218
 * 000000018004FEEB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FEF0: mov     rcx, rax
 * 000000018004FEF3: call    sub_1800CF3A0
 * 000000018004FEF8: mov     cs:byte_180218F04, al
 * 000000018004FEFE: lea     rcx, [rbp+9E10h+var_2580]; void *
 * 000000018004FF05: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FF0A: nop
 * 000000018004FF0B: lea     rcx, [rbp+9E10h+var_2560]; void *
 * 000000018004FF12: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FF17: nop
 * 000000018004FF18: lea     rcx, dword_180218F08
 * 000000018004FF1F: call    _Init_thread_footer
 * 000000018004FF24: mov     rax, [rdi+rbx*8]
 * 000000018004FF28: mov     ecx, [r15+rax]
 * 000000018004FF2C: cmp     cs:dword_180218F10, ecx
 * 000000018004FF32: jle     loc_180050017
 * 000000018004FF38: lea     rcx, dword_180218F10
 * 000000018004FF3F: call    _Init_thread_header
 * 000000018004FF44: cmp     cs:dword_180218F10, r14d
 * 000000018004FF4B: jnz     loc_180050017
 * 000000018004FF51: lea     rax, unk_1801863C0
 * 000000018004FF58: mov     qword ptr [rbp+9E10h+var_9250], rax
 * 000000018004FF5F: lea     rax, unk_180187410
 * 000000018004FF66: mov     qword ptr [rbp+9E10h+var_9250+8], rax
 * 000000018004FF6D: movups  xmm0, [rbp+9E10h+var_9250]
 * 000000018004FF74: movups  [rbp+9E10h+var_8DD0], xmm0
 * 000000018004FF7B: mov     dword ptr [rbp+9E10h+var_8DC0], esi
 * 000000018004FF81: mov     dword ptr [rbp+9E10h+var_8DC0+4], esi
 * 000000018004FF87: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FF8C: movups  xmm0, [rbp+9E10h+var_8DC0]
 * 000000018004FF93: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FF98: call    sub_180043E00
 * 000000018004FF9D: mov     r8, rax
 * 000000018004FFA0: mov     r9d, r12d
 * 000000018004FFA3: mov     edx, 0C8h
 * 000000018004FFA8: lea     rcx, [rbp+9E10h+var_2500]; Src
 * 000000018004FFAF: call    sub_1800CF2C8
 * 000000018004FFB4: nop
 * 000000018004FFB5: mov     r8, rax
 * 000000018004FFB8: mov     rdx, r13
 * 000000018004FFBB: lea     rcx, [rbp+9E10h+var_2520]
 * 000000018004FFC2: call    sub_180043BDC
 * 000000018004FFC7: nop
 * 000000018004FFC8: lea     r8, aVertex; "/Vertex"
 * 000000018004FFCF: mov     rdx, rax
 * 000000018004FFD2: lea     rcx, [rbp+9E10h+var_2540]
 * 000000018004FFD9: call    sub_18002C218
 * 000000018004FFDE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FFE3: mov     rcx, rax
 * 000000018004FFE6: call    sub_1800CF3A0
 * 000000018004FFEB: mov     cs:byte_180218F0C, al
 * 000000018004FFF1: lea     rcx, [rbp+9E10h+var_2520]; void *
 * 000000018004FFF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FFFD: nop
 * 000000018004FFFE: lea     rcx, [rbp+9E10h+var_2500]; void *
 * 0000000180050005: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005000A: nop
 * 000000018005000B: lea     rcx, dword_180218F10
 * 0000000180050012: call    _Init_thread_footer
 * 0000000180050017: mov     rax, [rdi+rbx*8]
 * 000000018005001B: mov     ecx, [r15+rax]
 * 000000018005001F: cmp     cs:dword_180218F18, ecx
 * 0000000180050025: jle     loc_18005010A
 * 000000018005002B: lea     rcx, dword_180218F18
 * 0000000180050032: call    _Init_thread_header
 * 0000000180050037: cmp     cs:dword_180218F18, r14d
 * 000000018005003E: jnz     loc_18005010A
 * 0000000180050044: lea     rax, unk_1801863C0
 * 000000018005004B: mov     qword ptr [rbp+9E10h+var_9240], rax
 * 0000000180050052: lea     rax, unk_180187410
 * 0000000180050059: mov     qword ptr [rbp+9E10h+var_9240+8], rax
 * 0000000180050060: movups  xmm0, [rbp+9E10h+var_9240]
 * 0000000180050067: movups  [rbp+9E10h+var_8DB0], xmm0
 * 000000018005006E: mov     dword ptr [rbp+9E10h+var_8DA0], esi
 * 0000000180050074: mov     dword ptr [rbp+9E10h+var_8DA0+4], esi
 * 000000018005007A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005007F: movups  xmm0, [rbp+9E10h+var_8DA0]
 * 0000000180050086: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005008B: call    sub_180043E00
 * 0000000180050090: mov     r8, rax
 * 0000000180050093: mov     r9d, r12d
 * 0000000180050096: mov     edx, 0CAh
 * 000000018005009B: lea     rcx, [rbp+9E10h+var_24A0]; Src
 * 00000001800500A2: call    sub_1800CF2C8
 * 00000001800500A7: nop
 * 00000001800500A8: mov     r8, rax
 * 00000001800500AB: mov     rdx, r13
 * 00000001800500AE: lea     rcx, [rbp+9E10h+var_24C0]
 * 00000001800500B5: call    sub_180043BDC
 * 00000001800500BA: nop
 * 00000001800500BB: lea     r8, aVertex; "/Vertex"
 * 00000001800500C2: mov     rdx, rax
 * 00000001800500C5: lea     rcx, [rbp+9E10h+var_24E0]
 * 00000001800500CC: call    sub_18002C218
 * 00000001800500D1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800500D6: mov     rcx, rax
 * 00000001800500D9: call    sub_1800CF3A0
 * 00000001800500DE: mov     cs:byte_180218F14, al
 * 00000001800500E4: lea     rcx, [rbp+9E10h+var_24C0]; void *
 * 00000001800500EB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800500F0: nop
 * 00000001800500F1: lea     rcx, [rbp+9E10h+var_24A0]; void *
 * 00000001800500F8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800500FD: nop
 * 00000001800500FE: lea     rcx, dword_180218F18
 * 0000000180050105: call    _Init_thread_footer
 * 000000018005010A: mov     rax, [rdi+rbx*8]
 * 000000018005010E: mov     ecx, [r15+rax]
 * 0000000180050112: cmp     cs:dword_180218F20, ecx
 * 0000000180050118: jle     loc_1800501FD
 * 000000018005011E: lea     rcx, dword_180218F20
 * 0000000180050125: call    _Init_thread_header
 * 000000018005012A: cmp     cs:dword_180218F20, r14d
 * 0000000180050131: jnz     loc_1800501FD
 * 0000000180050137: lea     rax, unk_1801863C0
 * 000000018005013E: mov     qword ptr [rbp+9E10h+var_9230], rax
 * 0000000180050145: lea     rax, unk_180187410
 * 000000018005014C: mov     qword ptr [rbp+9E10h+var_9230+8], rax
 * 0000000180050153: movups  xmm0, [rbp+9E10h+var_9230]
 * 000000018005015A: movups  [rbp+9E10h+var_8D90], xmm0
 * 0000000180050161: mov     dword ptr [rbp+9E10h+var_8D80], esi
 * 0000000180050167: mov     dword ptr [rbp+9E10h+var_8D80+4], esi
 * 000000018005016D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050172: movups  xmm0, [rbp+9E10h+var_8D80]
 * 0000000180050179: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005017E: call    sub_180043E00
 * 0000000180050183: mov     r8, rax
 * 0000000180050186: mov     r9d, r12d
 * 0000000180050189: mov     edx, 0D0h
 * 000000018005018E: lea     rcx, [rbp+9E10h+var_2440]; Src
 * 0000000180050195: call    sub_1800CF2C8
 * 000000018005019A: nop
 * 000000018005019B: mov     r8, rax
 * 000000018005019E: mov     rdx, r13
 * 00000001800501A1: lea     rcx, [rbp+9E10h+var_2460]
 * 00000001800501A8: call    sub_180043BDC
 * 00000001800501AD: nop
 * 00000001800501AE: lea     r8, aVertex; "/Vertex"
 * 00000001800501B5: mov     rdx, rax
 * 00000001800501B8: lea     rcx, [rbp+9E10h+var_2480]
 * 00000001800501BF: call    sub_18002C218
 * 00000001800501C4: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800501C9: mov     rcx, rax
 * 00000001800501CC: call    sub_1800CF3A0
 * 00000001800501D1: mov     cs:byte_180218F1C, al
 * 00000001800501D7: lea     rcx, [rbp+9E10h+var_2460]; void *
 * 00000001800501DE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800501E3: nop
 * 00000001800501E4: lea     rcx, [rbp+9E10h+var_2440]; void *
 * 00000001800501EB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800501F0: nop
 * 00000001800501F1: lea     rcx, dword_180218F20
 * 00000001800501F8: call    _Init_thread_footer
 * 00000001800501FD: mov     rax, [rdi+rbx*8]
 * 0000000180050201: mov     ecx, [r15+rax]
 * 0000000180050205: cmp     cs:dword_180218F28, ecx
 * 000000018005020B: jle     loc_1800502F0
 * 0000000180050211: lea     rcx, dword_180218F28
 * 0000000180050218: call    _Init_thread_header
 * 000000018005021D: cmp     cs:dword_180218F28, r14d
 * 0000000180050224: jnz     loc_1800502F0
 * 000000018005022A: lea     rax, unk_1801863C0
 * 0000000180050231: mov     qword ptr [rbp+9E10h+var_9220], rax
 * 0000000180050238: lea     rax, unk_180187410
 * 000000018005023F: mov     qword ptr [rbp+9E10h+var_9220+8], rax
 * 0000000180050246: movups  xmm0, [rbp+9E10h+var_9220]
 * 000000018005024D: movups  [rbp+9E10h+var_8D70], xmm0
 * 0000000180050254: mov     dword ptr [rbp+9E10h+var_8D60], esi
 * 000000018005025A: mov     dword ptr [rbp+9E10h+var_8D60+4], esi
 * 0000000180050260: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050265: movups  xmm0, [rbp+9E10h+var_8D60]
 * 000000018005026C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050271: call    sub_180043E00
 * 0000000180050276: mov     r8, rax
 * 0000000180050279: mov     r9d, r12d
 * 000000018005027C: mov     edx, 0D2h
 * 0000000180050281: lea     rcx, [rbp+9E10h+var_23E0]; Src
 * 0000000180050288: call    sub_1800CF2C8
 * 000000018005028D: nop
 * 000000018005028E: mov     r8, rax
 * 0000000180050291: mov     rdx, r13
 * 0000000180050294: lea     rcx, [rbp+9E10h+var_2400]
 * 000000018005029B: call    sub_180043BDC
 * 00000001800502A0: nop
 * 00000001800502A1: lea     r8, aVertex; "/Vertex"
 * 00000001800502A8: mov     rdx, rax
 * 00000001800502AB: lea     rcx, [rbp+9E10h+var_2420]
 * 00000001800502B2: call    sub_18002C218
 * 00000001800502B7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800502BC: mov     rcx, rax
 * 00000001800502BF: call    sub_1800CF3A0
 * 00000001800502C4: mov     cs:byte_180218F24, al
 * 00000001800502CA: lea     rcx, [rbp+9E10h+var_2400]; void *
 * 00000001800502D1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800502D6: nop
 * 00000001800502D7: lea     rcx, [rbp+9E10h+var_23E0]; void *
 * 00000001800502DE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800502E3: nop
 * 00000001800502E4: lea     rcx, dword_180218F28
 * 00000001800502EB: call    _Init_thread_footer
 * 00000001800502F0: mov     rax, [rdi+rbx*8]
 * 00000001800502F4: mov     ecx, [r15+rax]
 * 00000001800502F8: cmp     cs:dword_180218F30, ecx
 * 00000001800502FE: jle     loc_1800503E3
 * 0000000180050304: lea     rcx, dword_180218F30
 * 000000018005030B: call    _Init_thread_header
 * 0000000180050310: cmp     cs:dword_180218F30, r14d
 * 0000000180050317: jnz     loc_1800503E3
 * 000000018005031D: lea     rax, unk_1801863C0
 * 0000000180050324: mov     qword ptr [rbp+9E10h+var_9210], rax
 * 000000018005032B: lea     rax, unk_180187410
 * 0000000180050332: mov     qword ptr [rbp+9E10h+var_9210+8], rax
 * 0000000180050339: movups  xmm0, [rbp+9E10h+var_9210]
 * 0000000180050340: movups  [rbp+9E10h+var_8D50], xmm0
 * 0000000180050347: mov     dword ptr [rbp+9E10h+var_8D40], esi
 * 000000018005034D: mov     dword ptr [rbp+9E10h+var_8D40+4], esi
 * 0000000180050353: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050358: movups  xmm0, [rbp+9E10h+var_8D40]
 * 000000018005035F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050364: call    sub_180043E00
 * 0000000180050369: mov     r8, rax
 * 000000018005036C: mov     r9d, r12d
 * 000000018005036F: mov     edx, 0D8h
 * 0000000180050374: lea     rcx, [rbp+9E10h+var_2380]; Src
 * 000000018005037B: call    sub_1800CF2C8
 * 0000000180050380: nop
 * 0000000180050381: mov     r8, rax
 * 0000000180050384: mov     rdx, r13
 * 0000000180050387: lea     rcx, [rbp+9E10h+var_23A0]
 * 000000018005038E: call    sub_180043BDC
 * 0000000180050393: nop
 * 0000000180050394: lea     r8, aVertex; "/Vertex"
 * 000000018005039B: mov     rdx, rax
 * 000000018005039E: lea     rcx, [rbp+9E10h+var_23C0]
 * 00000001800503A5: call    sub_18002C218
 * 00000001800503AA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800503AF: mov     rcx, rax
 * 00000001800503B2: call    sub_1800CF3A0
 * 00000001800503B7: mov     cs:byte_180218F2C, al
 * 00000001800503BD: lea     rcx, [rbp+9E10h+var_23A0]; void *
 * 00000001800503C4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800503C9: nop
 * 00000001800503CA: lea     rcx, [rbp+9E10h+var_2380]; void *
 * 00000001800503D1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800503D6: nop
 * 00000001800503D7: lea     rcx, dword_180218F30
 * 00000001800503DE: call    _Init_thread_footer
 * 00000001800503E3: mov     rax, [rdi+rbx*8]
 * 00000001800503E7: mov     ecx, [r15+rax]
 * 00000001800503EB: cmp     cs:dword_180218F38, ecx
 * 00000001800503F1: jle     loc_1800504D6
 * 00000001800503F7: lea     rcx, dword_180218F38
 * 00000001800503FE: call    _Init_thread_header
 * 0000000180050403: cmp     cs:dword_180218F38, r14d
 * 000000018005040A: jnz     loc_1800504D6
 * 0000000180050410: lea     rax, unk_1801863C0
 * 0000000180050417: mov     qword ptr [rbp+9E10h+var_9200], rax
 * 000000018005041E: lea     rax, unk_180187410
 * 0000000180050425: mov     qword ptr [rbp+9E10h+var_9200+8], rax
 * 000000018005042C: movups  xmm0, [rbp+9E10h+var_9200]
 * 0000000180050433: movups  [rbp+9E10h+var_8D30], xmm0
 * 000000018005043A: mov     dword ptr [rbp+9E10h+var_8D20], esi
 * 0000000180050440: mov     dword ptr [rbp+9E10h+var_8D20+4], esi
 * 0000000180050446: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005044B: movups  xmm0, [rbp+9E10h+var_8D20]
 * 0000000180050452: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050457: call    sub_180043E00
 * 000000018005045C: mov     r8, rax
 * 000000018005045F: mov     r9d, r12d
 * 0000000180050462: mov     edx, 0DAh
 * 0000000180050467: lea     rcx, [rbp+9E10h+var_2320]; Src
 * 000000018005046E: call    sub_1800CF2C8
 * 0000000180050473: nop
 * 0000000180050474: mov     r8, rax
 * 0000000180050477: mov     rdx, r13
 * 000000018005047A: lea     rcx, [rbp+9E10h+var_2340]
 * 0000000180050481: call    sub_180043BDC
 * 0000000180050486: nop
 * 0000000180050487: lea     r8, aVertex; "/Vertex"
 * 000000018005048E: mov     rdx, rax
 * 0000000180050491: lea     rcx, [rbp+9E10h+var_2360]
 * 0000000180050498: call    sub_18002C218
 * 000000018005049D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800504A2: mov     rcx, rax
 * 00000001800504A5: call    sub_1800CF3A0
 * 00000001800504AA: mov     cs:byte_180218F34, al
 * 00000001800504B0: lea     rcx, [rbp+9E10h+var_2340]; void *
 * 00000001800504B7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800504BC: nop
 * 00000001800504BD: lea     rcx, [rbp+9E10h+var_2320]; void *
 * 00000001800504C4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800504C9: nop
 * 00000001800504CA: lea     rcx, dword_180218F38
 * 00000001800504D1: call    _Init_thread_footer
 * 00000001800504D6: mov     rax, [rdi+rbx*8]
 * 00000001800504DA: mov     ecx, [r15+rax]
 * 00000001800504DE: cmp     cs:dword_180218F40, ecx
 * 00000001800504E4: jle     loc_1800505C9
 * 00000001800504EA: lea     rcx, dword_180218F40
 * 00000001800504F1: call    _Init_thread_header
 * 00000001800504F6: cmp     cs:dword_180218F40, r14d
 * 00000001800504FD: jnz     loc_1800505C9
 * 0000000180050503: lea     rax, unk_180187410
 * 000000018005050A: mov     qword ptr [rbp+9E10h+var_91F0], rax
 * 0000000180050511: lea     rax, aPixel; "/Pixel"
 * 0000000180050518: mov     qword ptr [rbp+9E10h+var_91F0+8], rax
 * 000000018005051F: movups  xmm0, [rbp+9E10h+var_91F0]
 * 0000000180050526: movups  [rbp+9E10h+var_8D10], xmm0
 * 000000018005052D: mov     dword ptr [rbp+9E10h+var_8D00], esi
 * 0000000180050533: mov     dword ptr [rbp+9E10h+var_8D00+4], esi
 * 0000000180050539: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005053E: movups  xmm0, [rbp+9E10h+var_8D00]
 * 0000000180050545: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005054A: call    sub_180043E00
 * 000000018005054F: mov     r8, rax
 * 0000000180050552: mov     r9d, r12d
 * 0000000180050555: mov     edx, 0E0h
 * 000000018005055A: lea     rcx, [rbp+9E10h+var_22C0]; Src
 * 0000000180050561: call    sub_1800CF2C8
 * 0000000180050566: nop
 * 0000000180050567: mov     r8, rax
 * 000000018005056A: mov     rdx, r13
 * 000000018005056D: lea     rcx, [rbp+9E10h+var_22E0]
 * 0000000180050574: call    sub_180043BDC
 * 0000000180050579: nop
 * 000000018005057A: lea     r8, aVertex; "/Vertex"
 * 0000000180050581: mov     rdx, rax
 * 0000000180050584: lea     rcx, [rbp+9E10h+var_2300]
 * 000000018005058B: call    sub_18002C218
 * 0000000180050590: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050595: mov     rcx, rax
 * 0000000180050598: call    sub_1800CF3A0
 * 000000018005059D: mov     cs:byte_180218F3C, al
 * 00000001800505A3: lea     rcx, [rbp+9E10h+var_22E0]; void *
 * 00000001800505AA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800505AF: nop
 * 00000001800505B0: lea     rcx, [rbp+9E10h+var_22C0]; void *
 * 00000001800505B7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800505BC: nop
 * 00000001800505BD: lea     rcx, dword_180218F40
 * 00000001800505C4: call    _Init_thread_footer
 * 00000001800505C9: mov     rax, [rdi+rbx*8]
 * 00000001800505CD: mov     ecx, [r15+rax]
 * 00000001800505D1: cmp     cs:dword_180218F48, ecx
 * 00000001800505D7: jle     loc_1800506BC
 * 00000001800505DD: lea     rcx, dword_180218F48
 * 00000001800505E4: call    _Init_thread_header
 * 00000001800505E9: cmp     cs:dword_180218F48, r14d
 * 00000001800505F0: jnz     loc_1800506BC
 * 00000001800505F6: lea     rax, unk_180187410
 * 00000001800505FD: mov     qword ptr [rbp+9E10h+var_91E0], rax
 * 0000000180050604: lea     rax, aPixel; "/Pixel"
 * 000000018005060B: mov     qword ptr [rbp+9E10h+var_91E0+8], rax
 * 0000000180050612: movups  xmm0, [rbp+9E10h+var_91E0]
 * 0000000180050619: movups  [rbp+9E10h+var_8CF0], xmm0
 * 0000000180050620: mov     dword ptr [rbp+9E10h+var_8CE0], esi
 * 0000000180050626: mov     dword ptr [rbp+9E10h+var_8CE0+4], esi
 * 000000018005062C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050631: movups  xmm0, [rbp+9E10h+var_8CE0]
 * 0000000180050638: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005063D: call    sub_180043E00
 * 0000000180050642: mov     r8, rax
 * 0000000180050645: mov     r9d, r12d
 * 0000000180050648: mov     edx, 0E2h
 * 000000018005064D: lea     rcx, [rbp+9E10h+var_2260]; Src
 * 0000000180050654: call    sub_1800CF2C8
 * 0000000180050659: nop
 * 000000018005065A: mov     r8, rax
 * 000000018005065D: mov     rdx, r13
 * 0000000180050660: lea     rcx, [rbp+9E10h+var_2280]
 * 0000000180050667: call    sub_180043BDC
 * 000000018005066C: nop
 * 000000018005066D: lea     r8, aVertex; "/Vertex"
 * 0000000180050674: mov     rdx, rax
 * 0000000180050677: lea     rcx, [rbp+9E10h+var_22A0]
 * 000000018005067E: call    sub_18002C218
 * 0000000180050683: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050688: mov     rcx, rax
 * 000000018005068B: call    sub_1800CF3A0
 * 0000000180050690: mov     cs:byte_180218F44, al
 * 0000000180050696: lea     rcx, [rbp+9E10h+var_2280]; void *
 * 000000018005069D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800506A2: nop
 * 00000001800506A3: lea     rcx, [rbp+9E10h+var_2260]; void *
 * 00000001800506AA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800506AF: nop
 * 00000001800506B0: lea     rcx, dword_180218F48
 * 00000001800506B7: call    _Init_thread_footer
 * 00000001800506BC: mov     rax, [rdi+rbx*8]
 * 00000001800506C0: mov     ecx, [r15+rax]
 * 00000001800506C4: cmp     cs:dword_180218F50, ecx
 * 00000001800506CA: jle     loc_1800507AF
 * 00000001800506D0: lea     rcx, dword_180218F50
 * 00000001800506D7: call    _Init_thread_header
 * 00000001800506DC: cmp     cs:dword_180218F50, r14d
 * 00000001800506E3: jnz     loc_1800507AF
 * 00000001800506E9: lea     rax, unk_180187410
 * 00000001800506F0: mov     qword ptr [rbp+9E10h+var_91D0], rax
 * 00000001800506F7: lea     rax, aPixel; "/Pixel"
 * 00000001800506FE: mov     qword ptr [rbp+9E10h+var_91D0+8], rax
 * 0000000180050705: movups  xmm0, [rbp+9E10h+var_91D0]
 * 000000018005070C: movups  [rbp+9E10h+var_8CD0], xmm0
 * 0000000180050713: mov     dword ptr [rbp+9E10h+var_8CC0], esi
 * 0000000180050719: mov     dword ptr [rbp+9E10h+var_8CC0+4], esi
 * 000000018005071F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050724: movups  xmm0, [rbp+9E10h+var_8CC0]
 * 000000018005072B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050730: call    sub_180043E00
 * 0000000180050735: mov     r8, rax
 * 0000000180050738: mov     r9d, r12d
 * 000000018005073B: mov     edx, 0E8h
 * 0000000180050740: lea     rcx, [rbp+9E10h+var_2200]; Src
 * 0000000180050747: call    sub_1800CF2C8
 * 000000018005074C: nop
 * 000000018005074D: mov     r8, rax
 * 0000000180050750: mov     rdx, r13
 * 0000000180050753: lea     rcx, [rbp+9E10h+var_2220]
 * 000000018005075A: call    sub_180043BDC
 * 000000018005075F: nop
 * 0000000180050760: lea     r8, aVertex; "/Vertex"
 * 0000000180050767: mov     rdx, rax
 * 000000018005076A: lea     rcx, [rbp+9E10h+var_2240]
 * 0000000180050771: call    sub_18002C218
 * 0000000180050776: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005077B: mov     rcx, rax
 * 000000018005077E: call    sub_1800CF3A0
 * 0000000180050783: mov     cs:byte_180218F4C, al
 * 0000000180050789: lea     rcx, [rbp+9E10h+var_2220]; void *
 * 0000000180050790: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050795: nop
 * 0000000180050796: lea     rcx, [rbp+9E10h+var_2200]; void *
 * 000000018005079D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800507A2: nop
 * 00000001800507A3: lea     rcx, dword_180218F50
 * 00000001800507AA: call    _Init_thread_footer
 * 00000001800507AF: mov     rax, [rdi+rbx*8]
 * 00000001800507B3: mov     ecx, [r15+rax]
 * 00000001800507B7: cmp     cs:dword_180218F58, ecx
 * 00000001800507BD: jle     loc_1800508A2
 * 00000001800507C3: lea     rcx, dword_180218F58
 * 00000001800507CA: call    _Init_thread_header
 * 00000001800507CF: cmp     cs:dword_180218F58, r14d
 * 00000001800507D6: jnz     loc_1800508A2
 * 00000001800507DC: lea     rax, unk_180187410
 * 00000001800507E3: mov     qword ptr [rbp+9E10h+var_91C0], rax
 * 00000001800507EA: lea     rax, aPixel; "/Pixel"
 * 00000001800507F1: mov     qword ptr [rbp+9E10h+var_91C0+8], rax
 * 00000001800507F8: movups  xmm0, [rbp+9E10h+var_91C0]
 * 00000001800507FF: movups  [rbp+9E10h+var_8CB0], xmm0
 * 0000000180050806: mov     dword ptr [rbp+9E10h+var_8CA0], esi
 * 000000018005080C: mov     dword ptr [rbp+9E10h+var_8CA0+4], esi
 * 0000000180050812: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050817: movups  xmm0, [rbp+9E10h+var_8CA0]
 * 000000018005081E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050823: call    sub_180043E00
 * 0000000180050828: mov     r8, rax
 * 000000018005082B: mov     r9d, r12d
 * 000000018005082E: mov     edx, 0EAh
 * 0000000180050833: lea     rcx, [rbp+9E10h+var_21A0]; Src
 * 000000018005083A: call    sub_1800CF2C8
 * 000000018005083F: nop
 * 0000000180050840: mov     r8, rax
 * 0000000180050843: mov     rdx, r13
 * 0000000180050846: lea     rcx, [rbp+9E10h+var_21C0]
 * 000000018005084D: call    sub_180043BDC
 * 0000000180050852: nop
 * 0000000180050853: lea     r8, aVertex; "/Vertex"
 * 000000018005085A: mov     rdx, rax
 * 000000018005085D: lea     rcx, [rbp+9E10h+var_21E0]
 * 0000000180050864: call    sub_18002C218
 * 0000000180050869: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005086E: mov     rcx, rax
 * 0000000180050871: call    sub_1800CF3A0
 * 0000000180050876: mov     cs:byte_180218F54, al
 * 000000018005087C: lea     rcx, [rbp+9E10h+var_21C0]; void *
 * 0000000180050883: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050888: nop
 * 0000000180050889: lea     rcx, [rbp+9E10h+var_21A0]; void *
 * 0000000180050890: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050895: nop
 * 0000000180050896: lea     rcx, dword_180218F58
 * 000000018005089D: call    _Init_thread_footer
 * 00000001800508A2: mov     rax, [rdi+rbx*8]
 * 00000001800508A6: mov     ecx, [r15+rax]
 * 00000001800508AA: cmp     cs:dword_180218F60, ecx
 * 00000001800508B0: jle     loc_180050995
 * 00000001800508B6: lea     rcx, dword_180218F60
 * 00000001800508BD: call    _Init_thread_header
 * 00000001800508C2: cmp     cs:dword_180218F60, r14d
 * 00000001800508C9: jnz     loc_180050995
 * 00000001800508CF: lea     rax, unk_180187410
 * 00000001800508D6: mov     qword ptr [rbp+9E10h+var_91B0], rax
 * 00000001800508DD: lea     rax, aPixel; "/Pixel"
 * 00000001800508E4: mov     qword ptr [rbp+9E10h+var_91B0+8], rax
 * 00000001800508EB: movups  xmm0, [rbp+9E10h+var_91B0]
 * 00000001800508F2: movups  [rbp+9E10h+var_8C90], xmm0
 * 00000001800508F9: mov     dword ptr [rbp+9E10h+var_8C80], esi
 * 00000001800508FF: mov     dword ptr [rbp+9E10h+var_8C80+4], esi
 * 0000000180050905: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005090A: movups  xmm0, [rbp+9E10h+var_8C80]
 * 0000000180050911: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050916: call    sub_180043E00
 * 000000018005091B: mov     r8, rax
 * 000000018005091E: mov     r9d, r12d
 * 0000000180050921: mov     edx, 0F0h
 * 0000000180050926: lea     rcx, [rbp+9E10h+var_2140]; Src
 * 000000018005092D: call    sub_1800CF2C8
 * 0000000180050932: nop
 * 0000000180050933: mov     r8, rax
 * 0000000180050936: mov     rdx, r13
 * 0000000180050939: lea     rcx, [rbp+9E10h+var_2160]
 * 0000000180050940: call    sub_180043BDC
 * 0000000180050945: nop
 * 0000000180050946: lea     r8, aVertex; "/Vertex"
 * 000000018005094D: mov     rdx, rax
 * 0000000180050950: lea     rcx, [rbp+9E10h+var_2180]
 * 0000000180050957: call    sub_18002C218
 * 000000018005095C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050961: mov     rcx, rax
 * 0000000180050964: call    sub_1800CF3A0
 * 0000000180050969: mov     cs:byte_180218F5C, al
 * 000000018005096F: lea     rcx, [rbp+9E10h+var_2160]; void *
 * 0000000180050976: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005097B: nop
 * 000000018005097C: lea     rcx, [rbp+9E10h+var_2140]; void *
 * 0000000180050983: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050988: nop
 * 0000000180050989: lea     rcx, dword_180218F60
 * 0000000180050990: call    _Init_thread_footer
 * 0000000180050995: mov     rax, [rdi+rbx*8]
 * 0000000180050999: mov     ecx, [r15+rax]
 * 000000018005099D: cmp     cs:dword_180218F68, ecx
 * 00000001800509A3: jle     loc_180050A88
 * 00000001800509A9: lea     rcx, dword_180218F68
 * 00000001800509B0: call    _Init_thread_header
 * 00000001800509B5: cmp     cs:dword_180218F68, r14d
 * 00000001800509BC: jnz     loc_180050A88
 * 00000001800509C2: lea     rax, unk_180187410
 * 00000001800509C9: mov     qword ptr [rbp+9E10h+var_91A0], rax
 * 00000001800509D0: lea     rax, aPixel; "/Pixel"
 * 00000001800509D7: mov     qword ptr [rbp+9E10h+var_91A0+8], rax
 * 00000001800509DE: movups  xmm0, [rbp+9E10h+var_91A0]
 * 00000001800509E5: movups  [rbp+9E10h+var_8C70], xmm0
 * 00000001800509EC: mov     dword ptr [rbp+9E10h+var_8C60], esi
 * 00000001800509F2: mov     dword ptr [rbp+9E10h+var_8C60+4], esi
 * 00000001800509F8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800509FD: movups  xmm0, [rbp+9E10h+var_8C60]
 * 0000000180050A04: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050A09: call    sub_180043E00
 * 0000000180050A0E: mov     r8, rax
 * 0000000180050A11: mov     r9d, r12d
 * 0000000180050A14: mov     edx, 0F2h
 * 0000000180050A19: lea     rcx, [rbp+9E10h+var_20E0]; Src
 * 0000000180050A20: call    sub_1800CF2C8
 * 0000000180050A25: nop
 * 0000000180050A26: mov     r8, rax
 * 0000000180050A29: mov     rdx, r13
 * 0000000180050A2C: lea     rcx, [rbp+9E10h+var_2100]
 * 0000000180050A33: call    sub_180043BDC
 * 0000000180050A38: nop
 * 0000000180050A39: lea     r8, aVertex; "/Vertex"
 * 0000000180050A40: mov     rdx, rax
 * 0000000180050A43: lea     rcx, [rbp+9E10h+var_2120]
 * 0000000180050A4A: call    sub_18002C218
 * 0000000180050A4F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050A54: mov     rcx, rax
 * 0000000180050A57: call    sub_1800CF3A0
 * 0000000180050A5C: mov     cs:byte_180218F64, al
 * 0000000180050A62: lea     rcx, [rbp+9E10h+var_2100]; void *
 * 0000000180050A69: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050A6E: nop
 * 0000000180050A6F: lea     rcx, [rbp+9E10h+var_20E0]; void *
 * 0000000180050A76: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050A7B: nop
 * 0000000180050A7C: lea     rcx, dword_180218F68
 * 0000000180050A83: call    _Init_thread_footer
 * 0000000180050A88: mov     rax, [rdi+rbx*8]
 * 0000000180050A8C: mov     ecx, [r15+rax]
 * 0000000180050A90: cmp     cs:dword_180218F70, ecx
 * 0000000180050A96: jle     loc_180050B7B
 * 0000000180050A9C: lea     rcx, dword_180218F70
 * 0000000180050AA3: call    _Init_thread_header
 * 0000000180050AA8: cmp     cs:dword_180218F70, r14d
 * 0000000180050AAF: jnz     loc_180050B7B
 * 0000000180050AB5: lea     rax, unk_180187410
 * 0000000180050ABC: mov     qword ptr [rbp+9E10h+var_9190], rax
 * 0000000180050AC3: lea     rax, aPixel; "/Pixel"
 * 0000000180050ACA: mov     qword ptr [rbp+9E10h+var_9190+8], rax
 * 0000000180050AD1: movups  xmm0, [rbp+9E10h+var_9190]
 * 0000000180050AD8: movups  [rbp+9E10h+var_8C50], xmm0
 * 0000000180050ADF: mov     dword ptr [rbp+9E10h+var_8C40], esi
 * 0000000180050AE5: mov     dword ptr [rbp+9E10h+var_8C40+4], esi
 * 0000000180050AEB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050AF0: movups  xmm0, [rbp+9E10h+var_8C40]
 * 0000000180050AF7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050AFC: call    sub_180043E00
 * 0000000180050B01: mov     r8, rax
 * 0000000180050B04: mov     r9d, r12d
 * 0000000180050B07: mov     edx, 0F8h
 * 0000000180050B0C: lea     rcx, [rbp+9E10h+var_2080]; Src
 * 0000000180050B13: call    sub_1800CF2C8
 * 0000000180050B18: nop
 * 0000000180050B19: mov     r8, rax
 * 0000000180050B1C: mov     rdx, r13
 * 0000000180050B1F: lea     rcx, [rbp+9E10h+var_20A0]
 * 0000000180050B26: call    sub_180043BDC
 * 0000000180050B2B: nop
 * 0000000180050B2C: lea     r8, aVertex; "/Vertex"
 * 0000000180050B33: mov     rdx, rax
 * 0000000180050B36: lea     rcx, [rbp+9E10h+var_20C0]
 * 0000000180050B3D: call    sub_18002C218
 * 0000000180050B42: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050B47: mov     rcx, rax
 * 0000000180050B4A: call    sub_1800CF3A0
 * 0000000180050B4F: mov     cs:byte_180218F6C, al
 * 0000000180050B55: lea     rcx, [rbp+9E10h+var_20A0]; void *
 * 0000000180050B5C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050B61: nop
 * 0000000180050B62: lea     rcx, [rbp+9E10h+var_2080]; void *
 * 0000000180050B69: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050B6E: nop
 * 0000000180050B6F: lea     rcx, dword_180218F70
 * 0000000180050B76: call    _Init_thread_footer
 * 0000000180050B7B: mov     rax, [rdi+rbx*8]
 * 0000000180050B7F: mov     ecx, [r15+rax]
 * 0000000180050B83: cmp     cs:dword_180218F78, ecx
 * 0000000180050B89: jle     loc_180050C6E
 * 0000000180050B8F: lea     rcx, dword_180218F78
 * 0000000180050B96: call    _Init_thread_header
 * 0000000180050B9B: cmp     cs:dword_180218F78, r14d
 * 0000000180050BA2: jnz     loc_180050C6E
 * 0000000180050BA8: lea     rax, unk_180187410
 * 0000000180050BAF: mov     qword ptr [rbp+9E10h+var_9180], rax
 * 0000000180050BB6: lea     rax, aPixel; "/Pixel"
 * 0000000180050BBD: mov     qword ptr [rbp+9E10h+var_9180+8], rax
 * 0000000180050BC4: movups  xmm0, [rbp+9E10h+var_9180]
 * 0000000180050BCB: movups  [rbp+9E10h+var_8C30], xmm0
 * 0000000180050BD2: mov     dword ptr [rbp+9E10h+var_8C20], esi
 * 0000000180050BD8: mov     dword ptr [rbp+9E10h+var_8C20+4], esi
 * 0000000180050BDE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050BE3: movups  xmm0, [rbp+9E10h+var_8C20]
 * 0000000180050BEA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050BEF: call    sub_180043E00
 * 0000000180050BF4: mov     r8, rax
 * 0000000180050BF7: mov     r9d, r12d
 * 0000000180050BFA: mov     edx, 0FAh
 * 0000000180050BFF: lea     rcx, [rbp+9E10h+var_2020]; Src
 * 0000000180050C06: call    sub_1800CF2C8
 * 0000000180050C0B: nop
 * 0000000180050C0C: mov     r8, rax
 * 0000000180050C0F: mov     rdx, r13
 * 0000000180050C12: lea     rcx, [rbp+9E10h+var_2040]
 * 0000000180050C19: call    sub_180043BDC
 * 0000000180050C1E: nop
 * 0000000180050C1F: lea     r8, aVertex; "/Vertex"
 * 0000000180050C26: mov     rdx, rax
 * 0000000180050C29: lea     rcx, [rbp+9E10h+var_2060]
 * 0000000180050C30: call    sub_18002C218
 * 0000000180050C35: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050C3A: mov     rcx, rax
 * 0000000180050C3D: call    sub_1800CF3A0
 * 0000000180050C42: mov     cs:byte_180218F74, al
 * 0000000180050C48: lea     rcx, [rbp+9E10h+var_2040]; void *
 * 0000000180050C4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050C54: nop
 * 0000000180050C55: lea     rcx, [rbp+9E10h+var_2020]; void *
 * 0000000180050C5C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050C61: nop
 * 0000000180050C62: lea     rcx, dword_180218F78
 * 0000000180050C69: call    _Init_thread_footer
 * 0000000180050C6E: mov     rax, [rdi+rbx*8]
 * 0000000180050C72: mov     ecx, [r15+rax]
 * 0000000180050C76: cmp     cs:dword_180218F80, ecx
 * 0000000180050C7C: jle     loc_180050D61
 * 0000000180050C82: lea     rcx, dword_180218F80
 * 0000000180050C89: call    _Init_thread_header
 * 0000000180050C8E: cmp     cs:dword_180218F80, r14d
 * 0000000180050C95: jnz     loc_180050D61
 * 0000000180050C9B: lea     rax, unk_1801817F0
 * 0000000180050CA2: mov     qword ptr [rbp+9E10h+var_9170], rax
 * 0000000180050CA9: lea     rax, unk_180182808
 * 0000000180050CB0: mov     qword ptr [rbp+9E10h+var_9170+8], rax
 * 0000000180050CB7: movups  xmm0, [rbp+9E10h+var_9170]
 * 0000000180050CBE: movups  [rbp+9E10h+var_8C10], xmm0
 * 0000000180050CC5: mov     dword ptr [rbp+9E10h+var_8C00], esi
 * 0000000180050CCB: mov     dword ptr [rbp+9E10h+var_8C00+4], esi
 * 0000000180050CD1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050CD6: movups  xmm0, [rbp+9E10h+var_8C00]
 * 0000000180050CDD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050CE2: call    sub_180043E00
 * 0000000180050CE7: mov     r8, rax
 * 0000000180050CEA: mov     r9d, r12d
 * 0000000180050CED: mov     edx, 100h
 * 0000000180050CF2: lea     rcx, [rbp+9E10h+var_1FC0]; Src
 * 0000000180050CF9: call    sub_1800CF2C8
 * 0000000180050CFE: nop
 * 0000000180050CFF: mov     r8, rax
 * 0000000180050D02: mov     rdx, r13
 * 0000000180050D05: lea     rcx, [rbp+9E10h+var_1FE0]
 * 0000000180050D0C: call    sub_180043BDC
 * 0000000180050D11: nop
 * 0000000180050D12: lea     r8, aVertex; "/Vertex"
 * 0000000180050D19: mov     rdx, rax
 * 0000000180050D1C: lea     rcx, [rbp+9E10h+var_2000]
 * 0000000180050D23: call    sub_18002C218
 * 0000000180050D28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050D2D: mov     rcx, rax
 * 0000000180050D30: call    sub_1800CF3A0
 * 0000000180050D35: mov     cs:byte_180218F7C, al
 * 0000000180050D3B: lea     rcx, [rbp+9E10h+var_1FE0]; void *
 * 0000000180050D42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050D47: nop
 * 0000000180050D48: lea     rcx, [rbp+9E10h+var_1FC0]; void *
 * 0000000180050D4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050D54: nop
 * 0000000180050D55: lea     rcx, dword_180218F80
 * 0000000180050D5C: call    _Init_thread_footer
 * 0000000180050D61: mov     rax, [rdi+rbx*8]
 * 0000000180050D65: mov     ecx, [r15+rax]
 * 0000000180050D69: cmp     cs:dword_180218F88, ecx
 * 0000000180050D6F: jle     loc_180050E54
 * 0000000180050D75: lea     rcx, dword_180218F88
 * 0000000180050D7C: call    _Init_thread_header
 * 0000000180050D81: cmp     cs:dword_180218F88, r14d
 * 0000000180050D88: jnz     loc_180050E54
 * 0000000180050D8E: lea     rax, unk_1801817F0
 * 0000000180050D95: mov     qword ptr [rbp+9E10h+var_9160], rax
 * 0000000180050D9C: lea     rax, unk_180182808
 * 0000000180050DA3: mov     qword ptr [rbp+9E10h+var_9160+8], rax
 * 0000000180050DAA: movups  xmm0, [rbp+9E10h+var_9160]
 * 0000000180050DB1: movups  [rbp+9E10h+var_8BF0], xmm0
 * 0000000180050DB8: mov     dword ptr [rbp+9E10h+var_8BE0], esi
 * 0000000180050DBE: mov     dword ptr [rbp+9E10h+var_8BE0+4], esi
 * 0000000180050DC4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050DC9: movups  xmm0, [rbp+9E10h+var_8BE0]
 * 0000000180050DD0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050DD5: call    sub_180043E00
 * 0000000180050DDA: mov     r8, rax
 * 0000000180050DDD: mov     r9d, r12d
 * 0000000180050DE0: mov     edx, 102h
 * 0000000180050DE5: lea     rcx, [rbp+9E10h+var_1F60]; Src
 * 0000000180050DEC: call    sub_1800CF2C8
 * 0000000180050DF1: nop
 * 0000000180050DF2: mov     r8, rax
 * 0000000180050DF5: mov     rdx, r13
 * 0000000180050DF8: lea     rcx, [rbp+9E10h+var_1F80]
 * 0000000180050DFF: call    sub_180043BDC
 * 0000000180050E04: nop
 * 0000000180050E05: lea     r8, aVertex; "/Vertex"
 * 0000000180050E0C: mov     rdx, rax
 * 0000000180050E0F: lea     rcx, [rbp+9E10h+var_1FA0]
 * 0000000180050E16: call    sub_18002C218
 * 0000000180050E1B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050E20: mov     rcx, rax
 * 0000000180050E23: call    sub_1800CF3A0
 * 0000000180050E28: mov     cs:byte_180218F84, al
 * 0000000180050E2E: lea     rcx, [rbp+9E10h+var_1F80]; void *
 * 0000000180050E35: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050E3A: nop
 * 0000000180050E3B: lea     rcx, [rbp+9E10h+var_1F60]; void *
 * 0000000180050E42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050E47: nop
 * 0000000180050E48: lea     rcx, dword_180218F88
 * 0000000180050E4F: call    _Init_thread_footer
 * 0000000180050E54: mov     rax, [rdi+rbx*8]
 * 0000000180050E58: mov     ecx, [r15+rax]
 * 0000000180050E5C: cmp     cs:dword_180218F90, ecx
 * 0000000180050E62: jle     loc_180050F47
 * 0000000180050E68: lea     rcx, dword_180218F90
 * 0000000180050E6F: call    _Init_thread_header
 * 0000000180050E74: cmp     cs:dword_180218F90, r14d
 * 0000000180050E7B: jnz     loc_180050F47
 * 0000000180050E81: lea     rax, unk_1801817F0
 * 0000000180050E88: mov     qword ptr [rbp+9E10h+var_9150], rax
 * 0000000180050E8F: lea     rax, unk_180182808
 * 0000000180050E96: mov     qword ptr [rbp+9E10h+var_9150+8], rax
 * 0000000180050E9D: movups  xmm0, [rbp+9E10h+var_9150]
 * 0000000180050EA4: movups  [rbp+9E10h+var_8BD0], xmm0
 * 0000000180050EAB: mov     dword ptr [rbp+9E10h+var_8BC0], esi
 * 0000000180050EB1: mov     dword ptr [rbp+9E10h+var_8BC0+4], esi
 * 0000000180050EB7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050EBC: movups  xmm0, [rbp+9E10h+var_8BC0]
 * 0000000180050EC3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050EC8: call    sub_180043E00
 * 0000000180050ECD: mov     r8, rax
 * 0000000180050ED0: mov     r9d, r12d
 * 0000000180050ED3: mov     edx, 104h
 * 0000000180050ED8: lea     rcx, [rbp+9E10h+var_1F00]; Src
 * 0000000180050EDF: call    sub_1800CF2C8
 * 0000000180050EE4: nop
 * 0000000180050EE5: mov     r8, rax
 * 0000000180050EE8: mov     rdx, r13
 * 0000000180050EEB: lea     rcx, [rbp+9E10h+var_1F20]
 * 0000000180050EF2: call    sub_180043BDC
 * 0000000180050EF7: nop
 * 0000000180050EF8: lea     r8, aVertex; "/Vertex"
 * 0000000180050EFF: mov     rdx, rax
 * 0000000180050F02: lea     rcx, [rbp+9E10h+var_1F40]
 * 0000000180050F09: call    sub_18002C218
 * 0000000180050F0E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050F13: mov     rcx, rax
 * 0000000180050F16: call    sub_1800CF3A0
 * 0000000180050F1B: mov     cs:byte_180218F8C, al
 * 0000000180050F21: lea     rcx, [rbp+9E10h+var_1F20]; void *
 * 0000000180050F28: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050F2D: nop
 * 0000000180050F2E: lea     rcx, [rbp+9E10h+var_1F00]; void *
 * 0000000180050F35: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050F3A: nop
 * 0000000180050F3B: lea     rcx, dword_180218F90
 * 0000000180050F42: call    _Init_thread_footer
 * 0000000180050F47: mov     rax, [rdi+rbx*8]
 * 0000000180050F4B: mov     ecx, [r15+rax]
 * 0000000180050F4F: cmp     cs:dword_180218F98, ecx
 * 0000000180050F55: jle     loc_18005103A
 * 0000000180050F5B: lea     rcx, dword_180218F98
 * 0000000180050F62: call    _Init_thread_header
 * 0000000180050F67: cmp     cs:dword_180218F98, r14d
 * 0000000180050F6E: jnz     loc_18005103A
 * 0000000180050F74: lea     rax, unk_1801817F0
 * 0000000180050F7B: mov     qword ptr [rbp+9E10h+var_9140], rax
 * 0000000180050F82: lea     rax, unk_180182808
 * 0000000180050F89: mov     qword ptr [rbp+9E10h+var_9140+8], rax
 * 0000000180050F90: movups  xmm0, [rbp+9E10h+var_9140]
 * 0000000180050F97: movups  [rbp+9E10h+var_8BB0], xmm0
 * 0000000180050F9E: mov     dword ptr [rbp+9E10h+var_8BA0], esi
 * 0000000180050FA4: mov     dword ptr [rbp+9E10h+var_8BA0+4], esi
 * 0000000180050FAA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050FAF: movups  xmm0, [rbp+9E10h+var_8BA0]
 * 0000000180050FB6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050FBB: call    sub_180043E00
 * 0000000180050FC0: mov     r8, rax
 * 0000000180050FC3: mov     r9d, r12d
 * 0000000180050FC6: mov     edx, 106h
 * 0000000180050FCB: lea     rcx, [rbp+9E10h+var_1EA0]; Src
 * 0000000180050FD2: call    sub_1800CF2C8
 * 0000000180050FD7: nop
 * 0000000180050FD8: mov     r8, rax
 * 0000000180050FDB: mov     rdx, r13
 * 0000000180050FDE: lea     rcx, [rbp+9E10h+var_1EC0]
 * 0000000180050FE5: call    sub_180043BDC
 * 0000000180050FEA: nop
 * 0000000180050FEB: lea     r8, aVertex; "/Vertex"
 * 0000000180050FF2: mov     rdx, rax
 * 0000000180050FF5: lea     rcx, [rbp+9E10h+var_1EE0]
 * 0000000180050FFC: call    sub_18002C218
 * 0000000180051001: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051006: mov     rcx, rax
 * 0000000180051009: call    sub_1800CF3A0
 * 000000018005100E: mov     cs:byte_180218F94, al
 * 0000000180051014: lea     rcx, [rbp+9E10h+var_1EC0]; void *
 * 000000018005101B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051020: nop
 * 0000000180051021: lea     rcx, [rbp+9E10h+var_1EA0]; void *
 * 0000000180051028: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005102D: nop
 * 000000018005102E: lea     rcx, dword_180218F98
 * 0000000180051035: call    _Init_thread_footer
 * 000000018005103A: mov     rax, [rdi+rbx*8]
 * 000000018005103E: mov     ecx, [r15+rax]
 * 0000000180051042: cmp     cs:dword_180218FA0, ecx
 * 0000000180051048: jle     loc_18005112D
 * 000000018005104E: lea     rcx, dword_180218FA0
 * 0000000180051055: call    _Init_thread_header
 * 000000018005105A: cmp     cs:dword_180218FA0, r14d
 * 0000000180051061: jnz     loc_18005112D
 * 0000000180051067: lea     rax, unk_1801817F0
 * 000000018005106E: mov     qword ptr [rbp+9E10h+var_9130], rax
 * 0000000180051075: lea     rax, unk_180182808
 * 000000018005107C: mov     qword ptr [rbp+9E10h+var_9130+8], rax
 * 0000000180051083: movups  xmm0, [rbp+9E10h+var_9130]
 * 000000018005108A: movups  [rbp+9E10h+var_8B90], xmm0
 * 0000000180051091: mov     dword ptr [rbp+9E10h+var_8B80], esi
 * 0000000180051097: mov     dword ptr [rbp+9E10h+var_8B80+4], esi
 * 000000018005109D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800510A2: movups  xmm0, [rbp+9E10h+var_8B80]
 * 00000001800510A9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800510AE: call    sub_180043E00
 * 00000001800510B3: mov     r8, rax
 * 00000001800510B6: mov     r9d, r12d
 * 00000001800510B9: mov     edx, 108h
 * 00000001800510BE: lea     rcx, [rbp+9E10h+var_1E40]; Src
 * 00000001800510C5: call    sub_1800CF2C8
 * 00000001800510CA: nop
 * 00000001800510CB: mov     r8, rax
 * 00000001800510CE: mov     rdx, r13
 * 00000001800510D1: lea     rcx, [rbp+9E10h+var_1E60]
 * 00000001800510D8: call    sub_180043BDC
 * 00000001800510DD: nop
 * 00000001800510DE: lea     r8, aVertex; "/Vertex"
 * 00000001800510E5: mov     rdx, rax
 * 00000001800510E8: lea     rcx, [rbp+9E10h+var_1E80]
 * 00000001800510EF: call    sub_18002C218
 * 00000001800510F4: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800510F9: mov     rcx, rax
 * 00000001800510FC: call    sub_1800CF3A0
 * 0000000180051101: mov     cs:byte_180218F9C, al
 * 0000000180051107: lea     rcx, [rbp+9E10h+var_1E60]; void *
 * 000000018005110E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051113: nop
 * 0000000180051114: lea     rcx, [rbp+9E10h+var_1E40]; void *
 * 000000018005111B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051120: nop
 * 0000000180051121: lea     rcx, dword_180218FA0
 * 0000000180051128: call    _Init_thread_footer
 * 000000018005112D: mov     rax, [rdi+rbx*8]
 * 0000000180051131: mov     ecx, [r15+rax]
 * 0000000180051135: cmp     cs:dword_180218FA8, ecx
 * 000000018005113B: jle     loc_180051220
 * 0000000180051141: lea     rcx, dword_180218FA8
 * 0000000180051148: call    _Init_thread_header
 * 000000018005114D: cmp     cs:dword_180218FA8, r14d
 * 0000000180051154: jnz     loc_180051220
 * 000000018005115A: lea     rax, unk_1801817F0
 * 0000000180051161: mov     qword ptr [rbp+9E10h+var_9120], rax
 * 0000000180051168: lea     rax, unk_180182808
 * 000000018005116F: mov     qword ptr [rbp+9E10h+var_9120+8], rax
 * 0000000180051176: movups  xmm0, [rbp+9E10h+var_9120]
 * 000000018005117D: movups  [rbp+9E10h+var_8B70], xmm0
 * 0000000180051184: mov     dword ptr [rbp+9E10h+var_8B60], esi
 * 000000018005118A: mov     dword ptr [rbp+9E10h+var_8B60+4], esi
 * 0000000180051190: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051195: movups  xmm0, [rbp+9E10h+var_8B60]
 * 000000018005119C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800511A1: call    sub_180043E00
 * 00000001800511A6: mov     r8, rax
 * 00000001800511A9: mov     r9d, r12d
 * 00000001800511AC: mov     edx, 10Ah
 * 00000001800511B1: lea     rcx, [rbp+9E10h+var_1DE0]; Src
 * 00000001800511B8: call    sub_1800CF2C8
 * 00000001800511BD: nop
 * 00000001800511BE: mov     r8, rax
 * 00000001800511C1: mov     rdx, r13
 * 00000001800511C4: lea     rcx, [rbp+9E10h+var_1E00]
 * 00000001800511CB: call    sub_180043BDC
 * 00000001800511D0: nop
 * 00000001800511D1: lea     r8, aVertex; "/Vertex"
 * 00000001800511D8: mov     rdx, rax
 * 00000001800511DB: lea     rcx, [rbp+9E10h+var_1E20]
 * 00000001800511E2: call    sub_18002C218
 * 00000001800511E7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800511EC: mov     rcx, rax
 * 00000001800511EF: call    sub_1800CF3A0
 * 00000001800511F4: mov     cs:byte_180218FA4, al
 * 00000001800511FA: lea     rcx, [rbp+9E10h+var_1E00]; void *
 * 0000000180051201: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051206: nop
 * 0000000180051207: lea     rcx, [rbp+9E10h+var_1DE0]; void *
 * 000000018005120E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051213: nop
 * 0000000180051214: lea     rcx, dword_180218FA8
 * 000000018005121B: call    _Init_thread_footer
 * 0000000180051220: mov     rax, [rdi+rbx*8]
 * 0000000180051224: mov     ecx, [r15+rax]
 * 0000000180051228: cmp     cs:dword_180218FB0, ecx
 * 000000018005122E: jle     loc_180051313
 * 0000000180051234: lea     rcx, dword_180218FB0
 * 000000018005123B: call    _Init_thread_header
 * 0000000180051240: cmp     cs:dword_180218FB0, r14d
 * 0000000180051247: jnz     loc_180051313
 * 000000018005124D: lea     rax, unk_1801817F0
 * 0000000180051254: mov     qword ptr [rbp+9E10h+var_9110], rax
 * 000000018005125B: lea     rax, unk_180182808
 * 0000000180051262: mov     qword ptr [rbp+9E10h+var_9110+8], rax
 * 0000000180051269: movups  xmm0, [rbp+9E10h+var_9110]
 * 0000000180051270: movups  [rbp+9E10h+var_8B50], xmm0
 * 0000000180051277: mov     dword ptr [rbp+9E10h+var_8B40], esi
 * 000000018005127D: mov     dword ptr [rbp+9E10h+var_8B40+4], esi
 * 0000000180051283: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051288: movups  xmm0, [rbp+9E10h+var_8B40]
 * 000000018005128F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051294: call    sub_180043E00
 * 0000000180051299: mov     r8, rax
 * 000000018005129C: mov     r9d, r12d
 * 000000018005129F: mov     edx, 110h
 * 00000001800512A4: lea     rcx, [rbp+9E10h+var_1D80]; Src
 * 00000001800512AB: call    sub_1800CF2C8
 * 00000001800512B0: nop
 * 00000001800512B1: mov     r8, rax
 * 00000001800512B4: mov     rdx, r13
 * 00000001800512B7: lea     rcx, [rbp+9E10h+var_1DA0]
 * 00000001800512BE: call    sub_180043BDC
 * 00000001800512C3: nop
 * 00000001800512C4: lea     r8, aVertex; "/Vertex"
 * 00000001800512CB: mov     rdx, rax
 * 00000001800512CE: lea     rcx, [rbp+9E10h+var_1DC0]
 * 00000001800512D5: call    sub_18002C218
 * 00000001800512DA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800512DF: mov     rcx, rax
 * 00000001800512E2: call    sub_1800CF3A0
 * 00000001800512E7: mov     cs:byte_180218FAC, al
 * 00000001800512ED: lea     rcx, [rbp+9E10h+var_1DA0]; void *
 * 00000001800512F4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800512F9: nop
 * 00000001800512FA: lea     rcx, [rbp+9E10h+var_1D80]; void *
 * 0000000180051301: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051306: nop
 * 0000000180051307: lea     rcx, dword_180218FB0
 * 000000018005130E: call    _Init_thread_footer
 * 0000000180051313: mov     rax, [rdi+rbx*8]
 * 0000000180051317: mov     ecx, [r15+rax]
 * 000000018005131B: cmp     cs:dword_180218FB8, ecx
 * 0000000180051321: jle     loc_180051406
 * 0000000180051327: lea     rcx, dword_180218FB8
 * 000000018005132E: call    _Init_thread_header
 * 0000000180051333: cmp     cs:dword_180218FB8, r14d
 * 000000018005133A: jnz     loc_180051406
 * 0000000180051340: lea     rax, unk_1801817F0
 * 0000000180051347: mov     qword ptr [rbp+9E10h+var_9100], rax
 * 000000018005134E: lea     rax, unk_180182808
 * 0000000180051355: mov     qword ptr [rbp+9E10h+var_9100+8], rax
 * 000000018005135C: movups  xmm0, [rbp+9E10h+var_9100]
 * 0000000180051363: movups  [rbp+9E10h+var_8B30], xmm0
 * 000000018005136A: mov     dword ptr [rbp+9E10h+var_8B20], esi
 * 0000000180051370: mov     dword ptr [rbp+9E10h+var_8B20+4], esi
 * 0000000180051376: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005137B: movups  xmm0, [rbp+9E10h+var_8B20]
 * 0000000180051382: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051387: call    sub_180043E00
 * 000000018005138C: mov     r8, rax
 * 000000018005138F: mov     r9d, r12d
 * 0000000180051392: mov     edx, 112h
 * 0000000180051397: lea     rcx, [rbp+9E10h+var_1D20]; Src
 * 000000018005139E: call    sub_1800CF2C8
 * 00000001800513A3: nop
 * 00000001800513A4: mov     r8, rax
 * 00000001800513A7: mov     rdx, r13
 * 00000001800513AA: lea     rcx, [rbp+9E10h+var_1D40]
 * 00000001800513B1: call    sub_180043BDC
 * 00000001800513B6: nop
 * 00000001800513B7: lea     r8, aVertex; "/Vertex"
 * 00000001800513BE: mov     rdx, rax
 * 00000001800513C1: lea     rcx, [rbp+9E10h+var_1D60]
 * 00000001800513C8: call    sub_18002C218
 * 00000001800513CD: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800513D2: mov     rcx, rax
 * 00000001800513D5: call    sub_1800CF3A0
 * 00000001800513DA: mov     cs:byte_180218FB4, al
 * 00000001800513E0: lea     rcx, [rbp+9E10h+var_1D40]; void *
 * 00000001800513E7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800513EC: nop
 * 00000001800513ED: lea     rcx, [rbp+9E10h+var_1D20]; void *
 * 00000001800513F4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800513F9: nop
 * 00000001800513FA: lea     rcx, dword_180218FB8
 * 0000000180051401: call    _Init_thread_footer
 * 0000000180051406: mov     rax, [rdi+rbx*8]
 * 000000018005140A: mov     ecx, [r15+rax]
 * 000000018005140E: cmp     cs:dword_180218FC0, ecx
 * 0000000180051414: jle     loc_1800514F9
 * 000000018005141A: lea     rcx, dword_180218FC0
 * 0000000180051421: call    _Init_thread_header
 * 0000000180051426: cmp     cs:dword_180218FC0, r14d
 * 000000018005142D: jnz     loc_1800514F9
 * 0000000180051433: lea     rax, unk_1801817F0
 * 000000018005143A: mov     qword ptr [rbp+9E10h+var_90F0], rax
 * 0000000180051441: lea     rax, unk_180182808
 * 0000000180051448: mov     qword ptr [rbp+9E10h+var_90F0+8], rax
 * 000000018005144F: movups  xmm0, [rbp+9E10h+var_90F0]
 * 0000000180051456: movups  [rbp+9E10h+var_8B10], xmm0
 * 000000018005145D: mov     dword ptr [rbp+9E10h+var_8B00], esi
 * 0000000180051463: mov     dword ptr [rbp+9E10h+var_8B00+4], esi
 * 0000000180051469: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005146E: movups  xmm0, [rbp+9E10h+var_8B00]
 * 0000000180051475: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005147A: call    sub_180043E00
 * 000000018005147F: mov     r8, rax
 * 0000000180051482: mov     r9d, r12d
 * 0000000180051485: mov     edx, 114h
 * 000000018005148A: lea     rcx, [rbp+9E10h+var_1CC0]; Src
 * 0000000180051491: call    sub_1800CF2C8
 * 0000000180051496: nop
 * 0000000180051497: mov     r8, rax
 * 000000018005149A: mov     rdx, r13
 * 000000018005149D: lea     rcx, [rbp+9E10h+var_1CE0]
 * 00000001800514A4: call    sub_180043BDC
 * 00000001800514A9: nop
 * 00000001800514AA: lea     r8, aVertex; "/Vertex"
 * 00000001800514B1: mov     rdx, rax
 * 00000001800514B4: lea     rcx, [rbp+9E10h+var_1D00]
 * 00000001800514BB: call    sub_18002C218
 * 00000001800514C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800514C5: mov     rcx, rax
 * 00000001800514C8: call    sub_1800CF3A0
 * 00000001800514CD: mov     cs:byte_180218FBC, al
 * 00000001800514D3: lea     rcx, [rbp+9E10h+var_1CE0]; void *
 * 00000001800514DA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800514DF: nop
 * 00000001800514E0: lea     rcx, [rbp+9E10h+var_1CC0]; void *
 * 00000001800514E7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800514EC: nop
 * 00000001800514ED: lea     rcx, dword_180218FC0
 * 00000001800514F4: call    _Init_thread_footer
 * 00000001800514F9: mov     rax, [rdi+rbx*8]
 * 00000001800514FD: mov     ecx, [r15+rax]
 * 0000000180051501: cmp     cs:dword_180218FC8, ecx
 * 0000000180051507: jle     loc_1800515EC
 * 000000018005150D: lea     rcx, dword_180218FC8
 * 0000000180051514: call    _Init_thread_header
 * 0000000180051519: cmp     cs:dword_180218FC8, r14d
 * 0000000180051520: jnz     loc_1800515EC
 * 0000000180051526: lea     rax, unk_1801817F0
 * 000000018005152D: mov     qword ptr [rbp+9E10h+var_90E0], rax
 * 0000000180051534: lea     rax, unk_180182808
 * 000000018005153B: mov     qword ptr [rbp+9E10h+var_90E0+8], rax
 * 0000000180051542: movups  xmm0, [rbp+9E10h+var_90E0]
 * 0000000180051549: movups  [rbp+9E10h+var_8AF0], xmm0
 * 0000000180051550: mov     dword ptr [rbp+9E10h+var_8AE0], esi
 * 0000000180051556: mov     dword ptr [rbp+9E10h+var_8AE0+4], esi
 * 000000018005155C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051561: movups  xmm0, [rbp+9E10h+var_8AE0]
 * 0000000180051568: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005156D: call    sub_180043E00
 * 0000000180051572: mov     r8, rax
 * 0000000180051575: mov     r9d, r12d
 * 0000000180051578: mov     edx, 116h
 * 000000018005157D: lea     rcx, [rbp+9E10h+var_1C60]; Src
 * 0000000180051584: call    sub_1800CF2C8
 * 0000000180051589: nop
 * 000000018005158A: mov     r8, rax
 * 000000018005158D: mov     rdx, r13
 * 0000000180051590: lea     rcx, [rbp+9E10h+var_1C80]
 * 0000000180051597: call    sub_180043BDC
 * 000000018005159C: nop
 * 000000018005159D: lea     r8, aVertex; "/Vertex"
 * 00000001800515A4: mov     rdx, rax
 * 00000001800515A7: lea     rcx, [rbp+9E10h+var_1CA0]
 * 00000001800515AE: call    sub_18002C218
 * 00000001800515B3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800515B8: mov     rcx, rax
 * 00000001800515BB: call    sub_1800CF3A0
 * 00000001800515C0: mov     cs:byte_180218FC4, al
 * 00000001800515C6: lea     rcx, [rbp+9E10h+var_1C80]; void *
 * 00000001800515CD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800515D2: nop
 * 00000001800515D3: lea     rcx, [rbp+9E10h+var_1C60]; void *
 * 00000001800515DA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800515DF: nop
 * 00000001800515E0: lea     rcx, dword_180218FC8
 * 00000001800515E7: call    _Init_thread_footer
 * 00000001800515EC: mov     rax, [rdi+rbx*8]
 * 00000001800515F0: mov     ecx, [r15+rax]
 * 00000001800515F4: cmp     cs:dword_180218FD0, ecx
 * 00000001800515FA: jle     loc_1800516DF
 * 0000000180051600: lea     rcx, dword_180218FD0
 * 0000000180051607: call    _Init_thread_header
 * 000000018005160C: cmp     cs:dword_180218FD0, r14d
 * 0000000180051613: jnz     loc_1800516DF
 * 0000000180051619: lea     rax, unk_1801817F0
 * 0000000180051620: mov     qword ptr [rbp+9E10h+var_90D0], rax
 * 0000000180051627: lea     rax, unk_180182808
 * 000000018005162E: mov     qword ptr [rbp+9E10h+var_90D0+8], rax
 * 0000000180051635: movups  xmm0, [rbp+9E10h+var_90D0]
 * 000000018005163C: movups  [rbp+9E10h+var_8AD0], xmm0
 * 0000000180051643: mov     dword ptr [rbp+9E10h+var_8AC0], esi
 * 0000000180051649: mov     dword ptr [rbp+9E10h+var_8AC0+4], esi
 * 000000018005164F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051654: movups  xmm0, [rbp+9E10h+var_8AC0]
 * 000000018005165B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051660: call    sub_180043E00
 * 0000000180051665: mov     r8, rax
 * 0000000180051668: mov     r9d, r12d
 * 000000018005166B: mov     edx, 118h
 * 0000000180051670: lea     rcx, [rbp+9E10h+var_1C00]; Src
 * 0000000180051677: call    sub_1800CF2C8
 * 000000018005167C: nop
 * 000000018005167D: mov     r8, rax
 * 0000000180051680: mov     rdx, r13
 * 0000000180051683: lea     rcx, [rbp+9E10h+var_1C20]
 * 000000018005168A: call    sub_180043BDC
 * 000000018005168F: nop
 * 0000000180051690: lea     r8, aVertex; "/Vertex"
 * 0000000180051697: mov     rdx, rax
 * 000000018005169A: lea     rcx, [rbp+9E10h+var_1C40]
 * 00000001800516A1: call    sub_18002C218
 * 00000001800516A6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800516AB: mov     rcx, rax
 * 00000001800516AE: call    sub_1800CF3A0
 * 00000001800516B3: mov     cs:byte_180218FCC, al
 * 00000001800516B9: lea     rcx, [rbp+9E10h+var_1C20]; void *
 * 00000001800516C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800516C5: nop
 * 00000001800516C6: lea     rcx, [rbp+9E10h+var_1C00]; void *
 * 00000001800516CD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800516D2: nop
 * 00000001800516D3: lea     rcx, dword_180218FD0
 * 00000001800516DA: call    _Init_thread_footer
 * 00000001800516DF: mov     rax, [rdi+rbx*8]
 * 00000001800516E3: mov     ecx, [r15+rax]
 * 00000001800516E7: cmp     cs:dword_180218FD8, ecx
 * 00000001800516ED: jle     loc_1800517D2
 * 00000001800516F3: lea     rcx, dword_180218FD8
 * 00000001800516FA: call    _Init_thread_header
 * 00000001800516FF: cmp     cs:dword_180218FD8, r14d
 * 0000000180051706: jnz     loc_1800517D2
 * 000000018005170C: lea     rax, unk_1801817F0
 * 0000000180051713: mov     qword ptr [rbp+9E10h+var_90C0], rax
 * 000000018005171A: lea     rax, unk_180182808
 * 0000000180051721: mov     qword ptr [rbp+9E10h+var_90C0+8], rax
 * 0000000180051728: movups  xmm0, [rbp+9E10h+var_90C0]
 * 000000018005172F: movups  [rbp+9E10h+var_8AB0], xmm0
 * 0000000180051736: mov     dword ptr [rbp+9E10h+var_8AA0], esi
 * 000000018005173C: mov     dword ptr [rbp+9E10h+var_8AA0+4], esi
 * 0000000180051742: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051747: movups  xmm0, [rbp+9E10h+var_8AA0]
 * 000000018005174E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051753: call    sub_180043E00
 * 0000000180051758: mov     r8, rax
 * 000000018005175B: mov     r9d, r12d
 * 000000018005175E: mov     edx, 11Ah
 * 0000000180051763: lea     rcx, [rbp+9E10h+var_1BA0]; Src
 * 000000018005176A: call    sub_1800CF2C8
 * 000000018005176F: nop
 * 0000000180051770: mov     r8, rax
 * 0000000180051773: mov     rdx, r13
 * 0000000180051776: lea     rcx, [rbp+9E10h+var_1BC0]
 * 000000018005177D: call    sub_180043BDC
 * 0000000180051782: nop
 * 0000000180051783: lea     r8, aVertex; "/Vertex"
 * 000000018005178A: mov     rdx, rax
 * 000000018005178D: lea     rcx, [rbp+9E10h+var_1BE0]
 * 0000000180051794: call    sub_18002C218
 * 0000000180051799: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005179E: mov     rcx, rax
 * 00000001800517A1: call    sub_1800CF3A0
 * 00000001800517A6: mov     cs:byte_180218FD4, al
 * 00000001800517AC: lea     rcx, [rbp+9E10h+var_1BC0]; void *
 * 00000001800517B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800517B8: nop
 * 00000001800517B9: lea     rcx, [rbp+9E10h+var_1BA0]; void *
 * 00000001800517C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800517C5: nop
 * 00000001800517C6: lea     rcx, dword_180218FD8
 * 00000001800517CD: call    _Init_thread_footer
 * 00000001800517D2: mov     rax, [rdi+rbx*8]
 * 00000001800517D6: mov     ecx, [r15+rax]
 * 00000001800517DA: cmp     cs:dword_180218FE0, ecx
 * 00000001800517E0: jle     loc_1800518C5
 * 00000001800517E6: lea     rcx, dword_180218FE0
 * 00000001800517ED: call    _Init_thread_header
 * 00000001800517F2: cmp     cs:dword_180218FE0, r14d
 * 00000001800517F9: jnz     loc_1800518C5
 * 00000001800517FF: lea     rax, unk_1801834B0
 * 0000000180051806: mov     qword ptr [rbp+9E10h+var_90B0], rax
 * 000000018005180D: lea     rax, unk_180184EC8
 * 0000000180051814: mov     qword ptr [rbp+9E10h+var_90B0+8], rax
 * 000000018005181B: movups  xmm0, [rbp+9E10h+var_90B0]
 * 0000000180051822: movups  [rbp+9E10h+var_8A90], xmm0
 * 0000000180051829: mov     dword ptr [rbp+9E10h+var_8A80], esi
 * 000000018005182F: mov     dword ptr [rbp+9E10h+var_8A80+4], esi
 * 0000000180051835: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005183A: movups  xmm0, [rbp+9E10h+var_8A80]
 * 0000000180051841: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051846: call    sub_180043E00
 * 000000018005184B: mov     r8, rax
 * 000000018005184E: mov     r9d, r12d
 * 0000000180051851: mov     edx, 120h
 * 0000000180051856: lea     rcx, [rbp+9E10h+var_1B40]; Src
 * 000000018005185D: call    sub_1800CF2C8
 * 0000000180051862: nop
 * 0000000180051863: mov     r8, rax
 * 0000000180051866: mov     rdx, r13
 * 0000000180051869: lea     rcx, [rbp+9E10h+var_1B60]
 * 0000000180051870: call    sub_180043BDC
 * 0000000180051875: nop
 * 0000000180051876: lea     r8, aVertex; "/Vertex"
 * 000000018005187D: mov     rdx, rax
 * 0000000180051880: lea     rcx, [rbp+9E10h+var_1B80]
 * 0000000180051887: call    sub_18002C218
 * 000000018005188C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051891: mov     rcx, rax
 * 0000000180051894: call    sub_1800CF3A0
 * 0000000180051899: mov     cs:byte_180218FDC, al
 * 000000018005189F: lea     rcx, [rbp+9E10h+var_1B60]; void *
 * 00000001800518A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800518AB: nop
 * 00000001800518AC: lea     rcx, [rbp+9E10h+var_1B40]; void *
 * 00000001800518B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800518B8: nop
 * 00000001800518B9: lea     rcx, dword_180218FE0
 * 00000001800518C0: call    _Init_thread_footer
 * 00000001800518C5: mov     rax, [rdi+rbx*8]
 * 00000001800518C9: mov     ecx, [r15+rax]
 * 00000001800518CD: cmp     cs:dword_180218FE8, ecx
 * 00000001800518D3: jle     loc_1800519B8
 * 00000001800518D9: lea     rcx, dword_180218FE8
 * 00000001800518E0: call    _Init_thread_header
 * 00000001800518E5: cmp     cs:dword_180218FE8, r14d
 * 00000001800518EC: jnz     loc_1800519B8
 * 00000001800518F2: lea     rax, unk_1801834B0
 * 00000001800518F9: mov     qword ptr [rbp+9E10h+var_90A0], rax
 * 0000000180051900: lea     rax, unk_180184EC8
 * 0000000180051907: mov     qword ptr [rbp+9E10h+var_90A0+8], rax
 * 000000018005190E: movups  xmm0, [rbp+9E10h+var_90A0]
 * 0000000180051915: movups  [rbp+9E10h+var_8A70], xmm0
 * 000000018005191C: mov     dword ptr [rbp+9E10h+var_8A60], esi
 * 0000000180051922: mov     dword ptr [rbp+9E10h+var_8A60+4], esi
 * 0000000180051928: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005192D: movups  xmm0, [rbp+9E10h+var_8A60]
 * 0000000180051934: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051939: call    sub_180043E00
 * 000000018005193E: mov     r8, rax
 * 0000000180051941: mov     r9d, r12d
 * 0000000180051944: mov     edx, 122h
 * 0000000180051949: lea     rcx, [rbp+9E10h+var_1AE0]; Src
 * 0000000180051950: call    sub_1800CF2C8
 * 0000000180051955: nop
 * 0000000180051956: mov     r8, rax
 * 0000000180051959: mov     rdx, r13
 * 000000018005195C: lea     rcx, [rbp+9E10h+var_1B00]
 * 0000000180051963: call    sub_180043BDC
 * 0000000180051968: nop
 * 0000000180051969: lea     r8, aVertex; "/Vertex"
 * 0000000180051970: mov     rdx, rax
 * 0000000180051973: lea     rcx, [rbp+9E10h+var_1B20]
 * 000000018005197A: call    sub_18002C218
 * 000000018005197F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051984: mov     rcx, rax
 * 0000000180051987: call    sub_1800CF3A0
 * 000000018005198C: mov     cs:byte_180218FE4, al
 * 0000000180051992: lea     rcx, [rbp+9E10h+var_1B00]; void *
 * 0000000180051999: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005199E: nop
 * 000000018005199F: lea     rcx, [rbp+9E10h+var_1AE0]; void *
 * 00000001800519A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800519AB: nop
 * 00000001800519AC: lea     rcx, dword_180218FE8
 * 00000001800519B3: call    _Init_thread_footer
 * 00000001800519B8: mov     rax, [rdi+rbx*8]
 * 00000001800519BC: mov     ecx, [r15+rax]
 * 00000001800519C0: cmp     cs:dword_180218FF0, ecx
 * 00000001800519C6: jle     loc_180051AAB
 * 00000001800519CC: lea     rcx, dword_180218FF0
 * 00000001800519D3: call    _Init_thread_header
 * 00000001800519D8: cmp     cs:dword_180218FF0, r14d
 * 00000001800519DF: jnz     loc_180051AAB
 * 00000001800519E5: lea     rax, unk_1801834B0
 * 00000001800519EC: mov     qword ptr [rbp+9E10h+var_9090], rax
 * 00000001800519F3: lea     rax, unk_180184EC8
 * 00000001800519FA: mov     qword ptr [rbp+9E10h+var_9090+8], rax
 * 0000000180051A01: movups  xmm0, [rbp+9E10h+var_9090]
 * 0000000180051A08: movups  [rbp+9E10h+var_8A50], xmm0
 * 0000000180051A0F: mov     dword ptr [rbp+9E10h+var_8A40], esi
 * 0000000180051A15: mov     dword ptr [rbp+9E10h+var_8A40+4], esi
 * 0000000180051A1B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051A20: movups  xmm0, [rbp+9E10h+var_8A40]
 * 0000000180051A27: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051A2C: call    sub_180043E00
 * 0000000180051A31: mov     r8, rax
 * 0000000180051A34: mov     r9d, r12d
 * 0000000180051A37: mov     edx, 128h
 * 0000000180051A3C: lea     rcx, [rbp+9E10h+var_1A80]; Src
 * 0000000180051A43: call    sub_1800CF2C8
 * 0000000180051A48: nop
 * 0000000180051A49: mov     r8, rax
 * 0000000180051A4C: mov     rdx, r13
 * 0000000180051A4F: lea     rcx, [rbp+9E10h+var_1AA0]
 * 0000000180051A56: call    sub_180043BDC
 * 0000000180051A5B: nop
 * 0000000180051A5C: lea     r8, aVertex; "/Vertex"
 * 0000000180051A63: mov     rdx, rax
 * 0000000180051A66: lea     rcx, [rbp+9E10h+var_1AC0]
 * 0000000180051A6D: call    sub_18002C218
 * 0000000180051A72: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051A77: mov     rcx, rax
 * 0000000180051A7A: call    sub_1800CF3A0
 * 0000000180051A7F: mov     cs:byte_180218FEC, al
 * 0000000180051A85: lea     rcx, [rbp+9E10h+var_1AA0]; void *
 * 0000000180051A8C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051A91: nop
 * 0000000180051A92: lea     rcx, [rbp+9E10h+var_1A80]; void *
 * 0000000180051A99: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051A9E: nop
 * 0000000180051A9F: lea     rcx, dword_180218FF0
 * 0000000180051AA6: call    _Init_thread_footer
 * 0000000180051AAB: mov     rax, [rdi+rbx*8]
 * 0000000180051AAF: mov     ecx, [r15+rax]
 * 0000000180051AB3: cmp     cs:dword_180218FF8, ecx
 * 0000000180051AB9: jle     loc_180051B9E
 * 0000000180051ABF: lea     rcx, dword_180218FF8
 * 0000000180051AC6: call    _Init_thread_header
 * 0000000180051ACB: cmp     cs:dword_180218FF8, r14d
 * 0000000180051AD2: jnz     loc_180051B9E
 * 0000000180051AD8: lea     rax, unk_1801834B0
 * 0000000180051ADF: mov     qword ptr [rbp+9E10h+var_9080], rax
 * 0000000180051AE6: lea     rax, unk_180184EC8
 * 0000000180051AED: mov     qword ptr [rbp+9E10h+var_9080+8], rax
 * 0000000180051AF4: movups  xmm0, [rbp+9E10h+var_9080]
 * 0000000180051AFB: movups  [rbp+9E10h+var_8A30], xmm0
 * 0000000180051B02: mov     dword ptr [rbp+9E10h+var_8A20], esi
 * 0000000180051B08: mov     dword ptr [rbp+9E10h+var_8A20+4], esi
 * 0000000180051B0E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051B13: movups  xmm0, [rbp+9E10h+var_8A20]
 * 0000000180051B1A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051B1F: call    sub_180043E00
 * 0000000180051B24: mov     r8, rax
 * 0000000180051B27: mov     r9d, r12d
 * 0000000180051B2A: mov     edx, 12Ah
 * 0000000180051B2F: lea     rcx, [rbp+9E10h+var_1A20]; Src
 * 0000000180051B36: call    sub_1800CF2C8
 * 0000000180051B3B: nop
 * 0000000180051B3C: mov     r8, rax
 * 0000000180051B3F: mov     rdx, r13
 * 0000000180051B42: lea     rcx, [rbp+9E10h+var_1A40]
 * 0000000180051B49: call    sub_180043BDC
 * 0000000180051B4E: nop
 * 0000000180051B4F: lea     r8, aVertex; "/Vertex"
 * 0000000180051B56: mov     rdx, rax
 * 0000000180051B59: lea     rcx, [rbp+9E10h+var_1A60]
 * 0000000180051B60: call    sub_18002C218
 * 0000000180051B65: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051B6A: mov     rcx, rax
 * 0000000180051B6D: call    sub_1800CF3A0
 * 0000000180051B72: mov     cs:byte_180218FF4, al
 * 0000000180051B78: lea     rcx, [rbp+9E10h+var_1A40]; void *
 * 0000000180051B7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051B84: nop
 * 0000000180051B85: lea     rcx, [rbp+9E10h+var_1A20]; void *
 * 0000000180051B8C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051B91: nop
 * 0000000180051B92: lea     rcx, dword_180218FF8
 * 0000000180051B99: call    _Init_thread_footer
 * 0000000180051B9E: mov     rax, [rdi+rbx*8]
 * 0000000180051BA2: mov     ecx, [r15+rax]
 * 0000000180051BA6: cmp     cs:dword_180219000, ecx
 * 0000000180051BAC: jle     loc_180051C91
 * 0000000180051BB2: lea     rcx, dword_180219000
 * 0000000180051BB9: call    _Init_thread_header
 * 0000000180051BBE: cmp     cs:dword_180219000, r14d
 * 0000000180051BC5: jnz     loc_180051C91
 * 0000000180051BCB: lea     rax, unk_1801834B0
 * 0000000180051BD2: mov     qword ptr [rbp+9E10h+var_9070], rax
 * 0000000180051BD9: lea     rax, unk_180184EC8
 * 0000000180051BE0: mov     qword ptr [rbp+9E10h+var_9070+8], rax
 * 0000000180051BE7: movups  xmm0, [rbp+9E10h+var_9070]
 * 0000000180051BEE: movups  [rbp+9E10h+var_8A10], xmm0
 * 0000000180051BF5: mov     dword ptr [rbp+9E10h+var_8A00], esi
 * 0000000180051BFB: mov     dword ptr [rbp+9E10h+var_8A00+4], esi
 * 0000000180051C01: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051C06: movups  xmm0, [rbp+9E10h+var_8A00]
 * 0000000180051C0D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051C12: call    sub_180043E00
 * 0000000180051C17: mov     r8, rax
 * 0000000180051C1A: mov     r9d, r12d
 * 0000000180051C1D: mov     edx, 130h
 * 0000000180051C22: lea     rcx, [rbp+9E10h+var_19C0]; Src
 * 0000000180051C29: call    sub_1800CF2C8
 * 0000000180051C2E: nop
 * 0000000180051C2F: mov     r8, rax
 * 0000000180051C32: mov     rdx, r13
 * 0000000180051C35: lea     rcx, [rbp+9E10h+var_19E0]
 * 0000000180051C3C: call    sub_180043BDC
 * 0000000180051C41: nop
 * 0000000180051C42: lea     r8, aVertex; "/Vertex"
 * 0000000180051C49: mov     rdx, rax
 * 0000000180051C4C: lea     rcx, [rbp+9E10h+var_1A00]
 * 0000000180051C53: call    sub_18002C218
 * 0000000180051C58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051C5D: mov     rcx, rax
 * 0000000180051C60: call    sub_1800CF3A0
 * 0000000180051C65: mov     cs:byte_180218FFC, al
 * 0000000180051C6B: lea     rcx, [rbp+9E10h+var_19E0]; void *
 * 0000000180051C72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051C77: nop
 * 0000000180051C78: lea     rcx, [rbp+9E10h+var_19C0]; void *
 * 0000000180051C7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051C84: nop
 * 0000000180051C85: lea     rcx, dword_180219000
 * 0000000180051C8C: call    _Init_thread_footer
 * 0000000180051C91: mov     rax, [rdi+rbx*8]
 * 0000000180051C95: mov     eax, [r15+rax]
 * 0000000180051C99: cmp     cs:dword_180219008, eax
 * 0000000180051C9F: jle     loc_180051D91
 * 0000000180051CA5: lea     rcx, dword_180219008
 * 0000000180051CAC: call    _Init_thread_header
 * 0000000180051CB1: cmp     cs:dword_180219008, r14d
 * 0000000180051CB8: jnz     loc_180051D91
 * 0000000180051CBE: mov     r8d, 1A18h
 * 0000000180051CC4: lea     rdx, unk_1801834B0
 * 0000000180051CCB: lea     rcx, [rbp+9E10h+var_7370]
 * 0000000180051CD2: call    sub_180043DEC
 * 0000000180051CD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180051CDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051CE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180051CE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180051CEA: mov     r9d, esi
 * 0000000180051CED: mov     r8d, esi
 * 0000000180051CF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051CF5: lea     rcx, [rbp+9E10h+var_680]
 * 0000000180051CFC: call    sub_180043DD8
 * 0000000180051D01: movups  xmm0, xmmword ptr [rax]
 * 0000000180051D04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051D09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180051D0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180051D12: call    sub_180043E00
 * 0000000180051D17: mov     r8, rax
 * 0000000180051D1A: mov     r9d, r12d
 * 0000000180051D1D: mov     edx, 132h
 * 0000000180051D22: lea     rcx, [rbp+9E10h+var_1960]; Src
 * 0000000180051D29: call    sub_1800CF2C8
 * 0000000180051D2E: nop
 * 0000000180051D2F: mov     r8, rax
 * 0000000180051D32: mov     rdx, r13
 * 0000000180051D35: lea     rcx, [rbp+9E10h+var_1980]
 * 0000000180051D3C: call    sub_180043BDC
 * 0000000180051D41: nop
 * 0000000180051D42: lea     r8, aVertex; "/Vertex"
 * 0000000180051D49: mov     rdx, rax
 * 0000000180051D4C: lea     rcx, [rbp+9E10h+var_19A0]
 * 0000000180051D53: call    sub_18002C218
 * 0000000180051D58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051D5D: mov     rcx, rax
 * 0000000180051D60: call    sub_1800CF3A0
 * 0000000180051D65: mov     cs:byte_180219004, al
 * 0000000180051D6B: lea     rcx, [rbp+9E10h+var_1980]; void *
 * 0000000180051D72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051D77: nop
 * 0000000180051D78: lea     rcx, [rbp+9E10h+var_1960]; void *
 * 0000000180051D7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051D84: nop
 * 0000000180051D85: lea     rcx, dword_180219008
 * 0000000180051D8C: call    _Init_thread_footer
 * 0000000180051D91: mov     rax, [rdi+rbx*8]
 * 0000000180051D95: mov     ecx, [r15+rax]
 * 0000000180051D99: cmp     cs:dword_180219010, ecx
 * 0000000180051D9F: jle     loc_180051E91
 * 0000000180051DA5: lea     rcx, dword_180219010
 * 0000000180051DAC: call    _Init_thread_header
 * 0000000180051DB1: cmp     cs:dword_180219010, r14d
 * 0000000180051DB8: jnz     loc_180051E91
 * 0000000180051DBE: mov     r8d, 1A18h
 * 0000000180051DC4: lea     rdx, unk_1801834B0
 * 0000000180051DCB: lea     rcx, [rbp+9E10h+var_7360]
 * 0000000180051DD2: call    sub_180043DEC
 * 0000000180051DD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180051DDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051DE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180051DE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180051DEA: mov     r9d, esi
 * 0000000180051DED: mov     r8d, esi
 * 0000000180051DF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051DF5: lea     rcx, [rbp+9E10h+var_660]
 * 0000000180051DFC: call    sub_180043DD8
 * 0000000180051E01: movups  xmm0, xmmword ptr [rax]
 * 0000000180051E04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051E09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180051E0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180051E12: call    sub_180043E00
 * 0000000180051E17: mov     r8, rax
 * 0000000180051E1A: mov     r9d, r12d
 * 0000000180051E1D: mov     edx, 138h
 * 0000000180051E22: lea     rcx, [rbp+9E10h+var_1900]; Src
 * 0000000180051E29: call    sub_1800CF2C8
 * 0000000180051E2E: nop
 * 0000000180051E2F: mov     r8, rax
 * 0000000180051E32: mov     rdx, r13
 * 0000000180051E35: lea     rcx, [rbp+9E10h+var_1920]
 * 0000000180051E3C: call    sub_180043BDC
 * 0000000180051E41: nop
 * 0000000180051E42: lea     r8, aVertex; "/Vertex"
 * 0000000180051E49: mov     rdx, rax
 * 0000000180051E4C: lea     rcx, [rbp+9E10h+var_1940]
 * 0000000180051E53: call    sub_18002C218
 * 0000000180051E58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051E5D: mov     rcx, rax
 * 0000000180051E60: call    sub_1800CF3A0
 * 0000000180051E65: mov     cs:byte_18021900C, al
 * 0000000180051E6B: lea     rcx, [rbp+9E10h+var_1920]; void *
 * 0000000180051E72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051E77: nop
 * 0000000180051E78: lea     rcx, [rbp+9E10h+var_1900]; void *
 * 0000000180051E7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051E84: nop
 * 0000000180051E85: lea     rcx, dword_180219010
 * 0000000180051E8C: call    _Init_thread_footer
 * 0000000180051E91: mov     rax, [rdi+rbx*8]
 * 0000000180051E95: mov     ecx, [r15+rax]
 * 0000000180051E99: cmp     cs:dword_180219018, ecx
 * 0000000180051E9F: jle     loc_180051F91
 * 0000000180051EA5: lea     rcx, dword_180219018
 * 0000000180051EAC: call    _Init_thread_header
 * 0000000180051EB1: cmp     cs:dword_180219018, r14d
 * 0000000180051EB8: jnz     loc_180051F91
 * 0000000180051EBE: mov     r8d, 1A18h
 * 0000000180051EC4: lea     rdx, unk_1801834B0
 * 0000000180051ECB: lea     rcx, [rbp+9E10h+var_7350]
 * 0000000180051ED2: call    sub_180043DEC
 * 0000000180051ED7: movups  xmm0, xmmword ptr [rax]
 * 0000000180051EDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051EE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180051EE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180051EEA: mov     r9d, esi
 * 0000000180051EED: mov     r8d, esi
 * 0000000180051EF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051EF5: lea     rcx, [rbp+9E10h+var_640]
 * 0000000180051EFC: call    sub_180043DD8
 * 0000000180051F01: movups  xmm0, xmmword ptr [rax]
 * 0000000180051F04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051F09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180051F0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180051F12: call    sub_180043E00
 * 0000000180051F17: mov     r8, rax
 * 0000000180051F1A: mov     r9d, r12d
 * 0000000180051F1D: mov     edx, 13Ah
 * 0000000180051F22: lea     rcx, [rbp+9E10h+var_18A0]; Src
 * 0000000180051F29: call    sub_1800CF2C8
 * 0000000180051F2E: nop
 * 0000000180051F2F: mov     r8, rax
 * 0000000180051F32: mov     rdx, r13
 * 0000000180051F35: lea     rcx, [rbp+9E10h+var_18C0]
 * 0000000180051F3C: call    sub_180043BDC
 * 0000000180051F41: nop
 * 0000000180051F42: lea     r8, aVertex; "/Vertex"
 * 0000000180051F49: mov     rdx, rax
 * 0000000180051F4C: lea     rcx, [rbp+9E10h+var_18E0]
 * 0000000180051F53: call    sub_18002C218
 * 0000000180051F58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051F5D: mov     rcx, rax
 * 0000000180051F60: call    sub_1800CF3A0
 * 0000000180051F65: mov     cs:byte_180219014, al
 * 0000000180051F6B: lea     rcx, [rbp+9E10h+var_18C0]; void *
 * 0000000180051F72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051F77: nop
 * 0000000180051F78: lea     rcx, [rbp+9E10h+var_18A0]; void *
 * 0000000180051F7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051F84: nop
 * 0000000180051F85: lea     rcx, dword_180219018
 * 0000000180051F8C: call    _Init_thread_footer
 * 0000000180051F91: mov     rax, [rdi+rbx*8]
 * 0000000180051F95: mov     eax, [r15+rax]
 * 0000000180051F99: cmp     cs:dword_180219020, eax
 * 0000000180051F9F: jle     loc_180052091
 * 0000000180051FA5: lea     rcx, dword_180219020
 * 0000000180051FAC: call    _Init_thread_header
 * 0000000180051FB1: cmp     cs:dword_180219020, r14d
 * 0000000180051FB8: jnz     loc_180052091
 * 0000000180051FBE: mov     r8d, 1050h
 * 0000000180051FC4: lea     rdx, unk_1801863C0
 * 0000000180051FCB: lea     rcx, [rbp+9E10h+var_7340]
 * 0000000180051FD2: call    sub_180043DEC
 * 0000000180051FD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180051FDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051FE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180051FE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180051FEA: mov     r9d, esi
 * 0000000180051FED: mov     r8d, esi
 * 0000000180051FF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051FF5: lea     rcx, [rbp+9E10h+var_620]
 * 0000000180051FFC: call    sub_180043DD8
 * 0000000180052001: movups  xmm0, xmmword ptr [rax]
 * 0000000180052004: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052009: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005200D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052012: call    sub_180043E00
 * 0000000180052017: mov     r8, rax
 * 000000018005201A: mov     r9d, r12d
 * 000000018005201D: mov     edx, 140h
 * 0000000180052022: lea     rcx, [rbp+9E10h+var_1840]; Src
 * 0000000180052029: call    sub_1800CF2C8
 * 000000018005202E: nop
 * 000000018005202F: mov     r8, rax
 * 0000000180052032: mov     rdx, r13
 * 0000000180052035: lea     rcx, [rbp+9E10h+var_1860]
 * 000000018005203C: call    sub_180043BDC
 * 0000000180052041: nop
 * 0000000180052042: lea     r8, aVertex; "/Vertex"
 * 0000000180052049: mov     rdx, rax
 * 000000018005204C: lea     rcx, [rbp+9E10h+var_1880]
 * 0000000180052053: call    sub_18002C218
 * 0000000180052058: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005205D: mov     rcx, rax
 * 0000000180052060: call    sub_1800CF3A0
 * 0000000180052065: mov     cs:byte_18021901C, al
 * 000000018005206B: lea     rcx, [rbp+9E10h+var_1860]; void *
 * 0000000180052072: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052077: nop
 * 0000000180052078: lea     rcx, [rbp+9E10h+var_1840]; void *
 * 000000018005207F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052084: nop
 * 0000000180052085: lea     rcx, dword_180219020
 * 000000018005208C: call    _Init_thread_footer
 * 0000000180052091: mov     rax, [rdi+rbx*8]
 * 0000000180052095: mov     ecx, [r15+rax]
 * 0000000180052099: cmp     cs:dword_180219028, ecx
 * 000000018005209F: jle     loc_180052191
 * 00000001800520A5: lea     rcx, dword_180219028
 * 00000001800520AC: call    _Init_thread_header
 * 00000001800520B1: cmp     cs:dword_180219028, r14d
 * 00000001800520B8: jnz     loc_180052191
 * 00000001800520BE: mov     r8d, 1050h
 * 00000001800520C4: lea     rdx, unk_1801863C0
 * 00000001800520CB: lea     rcx, [rbp+9E10h+var_7330]
 * 00000001800520D2: call    sub_180043DEC
 * 00000001800520D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800520DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800520E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800520E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800520EA: mov     r9d, esi
 * 00000001800520ED: mov     r8d, esi
 * 00000001800520F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800520F5: lea     rcx, [rbp+9E10h+var_600]
 * 00000001800520FC: call    sub_180043DD8
 * 0000000180052101: movups  xmm0, xmmword ptr [rax]
 * 0000000180052104: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052109: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005210D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052112: call    sub_180043E00
 * 0000000180052117: mov     r8, rax
 * 000000018005211A: mov     r9d, r12d
 * 000000018005211D: mov     edx, 142h
 * 0000000180052122: lea     rcx, [rbp+9E10h+var_17E0]; Src
 * 0000000180052129: call    sub_1800CF2C8
 * 000000018005212E: nop
 * 000000018005212F: mov     r8, rax
 * 0000000180052132: mov     rdx, r13
 * 0000000180052135: lea     rcx, [rbp+9E10h+var_1800]
 * 000000018005213C: call    sub_180043BDC
 * 0000000180052141: nop
 * 0000000180052142: lea     r8, aVertex; "/Vertex"
 * 0000000180052149: mov     rdx, rax
 * 000000018005214C: lea     rcx, [rbp+9E10h+var_1820]
 * 0000000180052153: call    sub_18002C218
 * 0000000180052158: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005215D: mov     rcx, rax
 * 0000000180052160: call    sub_1800CF3A0
 * 0000000180052165: mov     cs:byte_180219024, al
 * 000000018005216B: lea     rcx, [rbp+9E10h+var_1800]; void *
 * 0000000180052172: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052177: nop
 * 0000000180052178: lea     rcx, [rbp+9E10h+var_17E0]; void *
 * 000000018005217F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052184: nop
 * 0000000180052185: lea     rcx, dword_180219028
 * 000000018005218C: call    _Init_thread_footer
 * 0000000180052191: mov     rax, [rdi+rbx*8]
 * 0000000180052195: mov     ecx, [r15+rax]
 * 0000000180052199: cmp     cs:dword_180219030, ecx
 * 000000018005219F: jle     loc_180052291
 * 00000001800521A5: lea     rcx, dword_180219030
 * 00000001800521AC: call    _Init_thread_header
 * 00000001800521B1: cmp     cs:dword_180219030, r14d
 * 00000001800521B8: jnz     loc_180052291
 * 00000001800521BE: mov     r8d, 1050h
 * 00000001800521C4: lea     rdx, unk_1801863C0
 * 00000001800521CB: lea     rcx, [rbp+9E10h+var_7320]
 * 00000001800521D2: call    sub_180043DEC
 * 00000001800521D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800521DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800521E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800521E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800521EA: mov     r9d, esi
 * 00000001800521ED: mov     r8d, esi
 * 00000001800521F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800521F5: lea     rcx, [rbp+9E10h+var_5E0]
 * 00000001800521FC: call    sub_180043DD8
 * 0000000180052201: movups  xmm0, xmmword ptr [rax]
 * 0000000180052204: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052209: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005220D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052212: call    sub_180043E00
 * 0000000180052217: mov     r8, rax
 * 000000018005221A: mov     r9d, r12d
 * 000000018005221D: mov     edx, 148h
 * 0000000180052222: lea     rcx, [rbp+9E10h+var_1780]; Src
 * 0000000180052229: call    sub_1800CF2C8
 * 000000018005222E: nop
 * 000000018005222F: mov     r8, rax
 * 0000000180052232: mov     rdx, r13
 * 0000000180052235: lea     rcx, [rbp+9E10h+var_17A0]
 * 000000018005223C: call    sub_180043BDC
 * 0000000180052241: nop
 * 0000000180052242: lea     r8, aVertex; "/Vertex"
 * 0000000180052249: mov     rdx, rax
 * 000000018005224C: lea     rcx, [rbp+9E10h+var_17C0]
 * 0000000180052253: call    sub_18002C218
 * 0000000180052258: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005225D: mov     rcx, rax
 * 0000000180052260: call    sub_1800CF3A0
 * 0000000180052265: mov     cs:byte_18021902C, al
 * 000000018005226B: lea     rcx, [rbp+9E10h+var_17A0]; void *
 * 0000000180052272: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052277: nop
 * 0000000180052278: lea     rcx, [rbp+9E10h+var_1780]; void *
 * 000000018005227F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052284: nop
 * 0000000180052285: lea     rcx, dword_180219030
 * 000000018005228C: call    _Init_thread_footer
 * 0000000180052291: mov     rax, [rdi+rbx*8]
 * 0000000180052295: mov     ecx, [r15+rax]
 * 0000000180052299: cmp     cs:dword_180219038, ecx
 * 000000018005229F: jle     loc_180052391
 * 00000001800522A5: lea     rcx, dword_180219038
 * 00000001800522AC: call    _Init_thread_header
 * 00000001800522B1: cmp     cs:dword_180219038, r14d
 * 00000001800522B8: jnz     loc_180052391
 * 00000001800522BE: mov     r8d, 1050h
 * 00000001800522C4: lea     rdx, unk_1801863C0
 * 00000001800522CB: lea     rcx, [rbp+9E10h+var_7310]
 * 00000001800522D2: call    sub_180043DEC
 * 00000001800522D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800522DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800522E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800522E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800522EA: mov     r9d, esi
 * 00000001800522ED: mov     r8d, esi
 * 00000001800522F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800522F5: lea     rcx, [rbp+9E10h+var_5C0]
 * 00000001800522FC: call    sub_180043DD8
 * 0000000180052301: movups  xmm0, xmmword ptr [rax]
 * 0000000180052304: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052309: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005230D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052312: call    sub_180043E00
 * 0000000180052317: mov     r8, rax
 * 000000018005231A: mov     r9d, r12d
 * 000000018005231D: mov     edx, 14Ah
 * 0000000180052322: lea     rcx, [rbp+9E10h+var_1720]; Src
 * 0000000180052329: call    sub_1800CF2C8
 * 000000018005232E: nop
 * 000000018005232F: mov     r8, rax
 * 0000000180052332: mov     rdx, r13
 * 0000000180052335: lea     rcx, [rbp+9E10h+var_1740]
 * 000000018005233C: call    sub_180043BDC
 * 0000000180052341: nop
 * 0000000180052342: lea     r8, aVertex; "/Vertex"
 * 0000000180052349: mov     rdx, rax
 * 000000018005234C: lea     rcx, [rbp+9E10h+var_1760]
 * 0000000180052353: call    sub_18002C218
 * 0000000180052358: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005235D: mov     rcx, rax
 * 0000000180052360: call    sub_1800CF3A0
 * 0000000180052365: mov     cs:byte_180219034, al
 * 000000018005236B: lea     rcx, [rbp+9E10h+var_1740]; void *
 * 0000000180052372: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052377: nop
 * 0000000180052378: lea     rcx, [rbp+9E10h+var_1720]; void *
 * 000000018005237F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052384: nop
 * 0000000180052385: lea     rcx, dword_180219038
 * 000000018005238C: call    _Init_thread_footer
 * 0000000180052391: mov     rax, [rdi+rbx*8]
 * 0000000180052395: mov     ecx, [r15+rax]
 * 0000000180052399: cmp     cs:dword_180219040, ecx
 * 000000018005239F: jle     loc_180052491
 * 00000001800523A5: lea     rcx, dword_180219040
 * 00000001800523AC: call    _Init_thread_header
 * 00000001800523B1: cmp     cs:dword_180219040, r14d
 * 00000001800523B8: jnz     loc_180052491
 * 00000001800523BE: mov     r8d, 1050h
 * 00000001800523C4: lea     rdx, unk_1801863C0
 * 00000001800523CB: lea     rcx, [rbp+9E10h+var_7300]
 * 00000001800523D2: call    sub_180043DEC
 * 00000001800523D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800523DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800523E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800523E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800523EA: mov     r9d, esi
 * 00000001800523ED: mov     r8d, esi
 * 00000001800523F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800523F5: lea     rcx, [rbp+9E10h+var_5A0]
 * 00000001800523FC: call    sub_180043DD8
 * 0000000180052401: movups  xmm0, xmmword ptr [rax]
 * 0000000180052404: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052409: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005240D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052412: call    sub_180043E00
 * 0000000180052417: mov     r8, rax
 * 000000018005241A: mov     r9d, r12d
 * 000000018005241D: mov     edx, 150h
 * 0000000180052422: lea     rcx, [rbp+9E10h+var_16C0]; Src
 * 0000000180052429: call    sub_1800CF2C8
 * 000000018005242E: nop
 * 000000018005242F: mov     r8, rax
 * 0000000180052432: mov     rdx, r13
 * 0000000180052435: lea     rcx, [rbp+9E10h+var_16E0]
 * 000000018005243C: call    sub_180043BDC
 * 0000000180052441: nop
 * 0000000180052442: lea     r8, aVertex; "/Vertex"
 * 0000000180052449: mov     rdx, rax
 * 000000018005244C: lea     rcx, [rbp+9E10h+var_1700]
 * 0000000180052453: call    sub_18002C218
 * 0000000180052458: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005245D: mov     rcx, rax
 * 0000000180052460: call    sub_1800CF3A0
 * 0000000180052465: mov     cs:byte_18021903C, al
 * 000000018005246B: lea     rcx, [rbp+9E10h+var_16E0]; void *
 * 0000000180052472: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052477: nop
 * 0000000180052478: lea     rcx, [rbp+9E10h+var_16C0]; void *
 * 000000018005247F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052484: nop
 * 0000000180052485: lea     rcx, dword_180219040
 * 000000018005248C: call    _Init_thread_footer
 * 0000000180052491: mov     rax, [rdi+rbx*8]
 * 0000000180052495: mov     ecx, [r15+rax]
 * 0000000180052499: cmp     cs:dword_180219048, ecx
 * 000000018005249F: jle     loc_180052591
 * 00000001800524A5: lea     rcx, dword_180219048
 * 00000001800524AC: call    _Init_thread_header
 * 00000001800524B1: cmp     cs:dword_180219048, r14d
 * 00000001800524B8: jnz     loc_180052591
 * 00000001800524BE: mov     r8d, 1050h
 * 00000001800524C4: lea     rdx, unk_1801863C0
 * 00000001800524CB: lea     rcx, [rbp+9E10h+var_72F0]
 * 00000001800524D2: call    sub_180043DEC
 * 00000001800524D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800524DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800524E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800524E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800524EA: mov     r9d, esi
 * 00000001800524ED: mov     r8d, esi
 * 00000001800524F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800524F5: lea     rcx, [rbp+9E10h+var_580]
 * 00000001800524FC: call    sub_180043DD8
 * 0000000180052501: movups  xmm0, xmmword ptr [rax]
 * 0000000180052504: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052509: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005250D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052512: call    sub_180043E00
 * 0000000180052517: mov     r8, rax
 * 000000018005251A: mov     r9d, r12d
 * 000000018005251D: mov     edx, 152h
 * 0000000180052522: lea     rcx, [rbp+9E10h+var_1660]; Src
 * 0000000180052529: call    sub_1800CF2C8
 * 000000018005252E: nop
 * 000000018005252F: mov     r8, rax
 * 0000000180052532: mov     rdx, r13
 * 0000000180052535: lea     rcx, [rbp+9E10h+var_1680]
 * 000000018005253C: call    sub_180043BDC
 * 0000000180052541: nop
 * 0000000180052542: lea     r8, aVertex; "/Vertex"
 * 0000000180052549: mov     rdx, rax
 * 000000018005254C: lea     rcx, [rbp+9E10h+var_16A0]
 * 0000000180052553: call    sub_18002C218
 * 0000000180052558: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005255D: mov     rcx, rax
 * 0000000180052560: call    sub_1800CF3A0
 * 0000000180052565: mov     cs:byte_180219044, al
 * 000000018005256B: lea     rcx, [rbp+9E10h+var_1680]; void *
 * 0000000180052572: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052577: nop
 * 0000000180052578: lea     rcx, [rbp+9E10h+var_1660]; void *
 * 000000018005257F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052584: nop
 * 0000000180052585: lea     rcx, dword_180219048
 * 000000018005258C: call    _Init_thread_footer
 * 0000000180052591: mov     rax, [rdi+rbx*8]
 * 0000000180052595: mov     ecx, [r15+rax]
 * 0000000180052599: cmp     cs:dword_180219050, ecx
 * 000000018005259F: jle     loc_180052691
 * 00000001800525A5: lea     rcx, dword_180219050
 * 00000001800525AC: call    _Init_thread_header
 * 00000001800525B1: cmp     cs:dword_180219050, r14d
 * 00000001800525B8: jnz     loc_180052691
 * 00000001800525BE: mov     r8d, 1050h
 * 00000001800525C4: lea     rdx, unk_1801863C0
 * 00000001800525CB: lea     rcx, [rbp+9E10h+var_72E0]
 * 00000001800525D2: call    sub_180043DEC
 * 00000001800525D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800525DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800525E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800525E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800525EA: mov     r9d, esi
 * 00000001800525ED: mov     r8d, esi
 * 00000001800525F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800525F5: lea     rcx, [rbp+9E10h+var_560]
 * 00000001800525FC: call    sub_180043DD8
 * 0000000180052601: movups  xmm0, xmmword ptr [rax]
 * 0000000180052604: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052609: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005260D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052612: call    sub_180043E00
 * 0000000180052617: mov     r8, rax
 * 000000018005261A: mov     r9d, r12d
 * 000000018005261D: mov     edx, 158h
 * 0000000180052622: lea     rcx, [rbp+9E10h+var_1600]; Src
 * 0000000180052629: call    sub_1800CF2C8
 * 000000018005262E: nop
 * 000000018005262F: mov     r8, rax
 * 0000000180052632: mov     rdx, r13
 * 0000000180052635: lea     rcx, [rbp+9E10h+var_1620]
 * 000000018005263C: call    sub_180043BDC
 * 0000000180052641: nop
 * 0000000180052642: lea     r8, aVertex; "/Vertex"
 * 0000000180052649: mov     rdx, rax
 * 000000018005264C: lea     rcx, [rbp+9E10h+var_1640]
 * 0000000180052653: call    sub_18002C218
 * 0000000180052658: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005265D: mov     rcx, rax
 * 0000000180052660: call    sub_1800CF3A0
 * 0000000180052665: mov     cs:byte_18021904C, al
 * 000000018005266B: lea     rcx, [rbp+9E10h+var_1620]; void *
 * 0000000180052672: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052677: nop
 * 0000000180052678: lea     rcx, [rbp+9E10h+var_1600]; void *
 * 000000018005267F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052684: nop
 * 0000000180052685: lea     rcx, dword_180219050
 * 000000018005268C: call    _Init_thread_footer
 * 0000000180052691: mov     rax, [rdi+rbx*8]
 * 0000000180052695: mov     ecx, [r15+rax]
 * 0000000180052699: cmp     cs:dword_180219058, ecx
 * 000000018005269F: jle     loc_180052791
 * 00000001800526A5: lea     rcx, dword_180219058
 * 00000001800526AC: call    _Init_thread_header
 * 00000001800526B1: cmp     cs:dword_180219058, r14d
 * 00000001800526B8: jnz     loc_180052791
 * 00000001800526BE: mov     r8d, 1050h
 * 00000001800526C4: lea     rdx, unk_1801863C0
 * 00000001800526CB: lea     rcx, [rbp+9E10h+var_72D0]
 * 00000001800526D2: call    sub_180043DEC
 * 00000001800526D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800526DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800526E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800526E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800526EA: mov     r9d, esi
 * 00000001800526ED: mov     r8d, esi
 * 00000001800526F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800526F5: lea     rcx, [rbp+9E10h+var_540]
 * 00000001800526FC: call    sub_180043DD8
 * 0000000180052701: movups  xmm0, xmmword ptr [rax]
 * 0000000180052704: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052709: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005270D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052712: call    sub_180043E00
 * 0000000180052717: mov     r8, rax
 * 000000018005271A: mov     r9d, r12d
 * 000000018005271D: mov     edx, 15Ah
 * 0000000180052722: lea     rcx, [rbp+9E10h+var_15A0]; Src
 * 0000000180052729: call    sub_1800CF2C8
 * 000000018005272E: nop
 * 000000018005272F: mov     r8, rax
 * 0000000180052732: mov     rdx, r13
 * 0000000180052735: lea     rcx, [rbp+9E10h+var_15C0]
 * 000000018005273C: call    sub_180043BDC
 * 0000000180052741: nop
 * 0000000180052742: lea     r8, aVertex; "/Vertex"
 * 0000000180052749: mov     rdx, rax
 * 000000018005274C: lea     rcx, [rbp+9E10h+var_15E0]
 * 0000000180052753: call    sub_18002C218
 * 0000000180052758: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005275D: mov     rcx, rax
 * 0000000180052760: call    sub_1800CF3A0
 * 0000000180052765: mov     cs:byte_180219054, al
 * 000000018005276B: lea     rcx, [rbp+9E10h+var_15C0]; void *
 * 0000000180052772: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052777: nop
 * 0000000180052778: lea     rcx, [rbp+9E10h+var_15A0]; void *
 * 000000018005277F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052784: nop
 * 0000000180052785: lea     rcx, dword_180219058
 * 000000018005278C: call    _Init_thread_footer
 * 0000000180052791: mov     rax, [rdi+rbx*8]
 * 0000000180052795: mov     eax, [r15+rax]
 * 0000000180052799: cmp     cs:dword_180219060, eax
 * 000000018005279F: jle     loc_180052891
 * 00000001800527A5: lea     rcx, dword_180219060
 * 00000001800527AC: call    _Init_thread_header
 * 00000001800527B1: cmp     cs:dword_180219060, r14d
 * 00000001800527B8: jnz     loc_180052891
 * 00000001800527BE: mov     r8d, 1A50h
 * 00000001800527C4: lea     rdx, unk_180187410
 * 00000001800527CB: lea     rcx, [rbp+9E10h+var_72C0]
 * 00000001800527D2: call    sub_180043DEC
 * 00000001800527D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800527DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800527E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800527E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800527EA: mov     r9d, esi
 * 00000001800527ED: mov     r8d, esi
 * 00000001800527F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800527F5: lea     rcx, [rbp+9E10h+var_520]
 * 00000001800527FC: call    sub_180043DD8
 * 0000000180052801: movups  xmm0, xmmword ptr [rax]
 * 0000000180052804: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052809: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005280D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052812: call    sub_180043E00
 * 0000000180052817: mov     r8, rax
 * 000000018005281A: mov     r9d, r12d
 * 000000018005281D: mov     edx, 160h
 * 0000000180052822: lea     rcx, [rbp+9E10h+var_1540]; Src
 * 0000000180052829: call    sub_1800CF2C8
 * 000000018005282E: nop
 * 000000018005282F: mov     r8, rax
 * 0000000180052832: mov     rdx, r13
 * 0000000180052835: lea     rcx, [rbp+9E10h+var_1560]
 * 000000018005283C: call    sub_180043BDC
 * 0000000180052841: nop
 * 0000000180052842: lea     r8, aVertex; "/Vertex"
 * 0000000180052849: mov     rdx, rax
 * 000000018005284C: lea     rcx, [rbp+9E10h+var_1580]
 * 0000000180052853: call    sub_18002C218
 * 0000000180052858: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005285D: mov     rcx, rax
 * 0000000180052860: call    sub_1800CF3A0
 * 0000000180052865: mov     cs:byte_18021905C, al
 * 000000018005286B: lea     rcx, [rbp+9E10h+var_1560]; void *
 * 0000000180052872: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052877: nop
 * 0000000180052878: lea     rcx, [rbp+9E10h+var_1540]; void *
 * 000000018005287F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052884: nop
 * 0000000180052885: lea     rcx, dword_180219060
 * 000000018005288C: call    _Init_thread_footer
 * 0000000180052891: mov     rax, [rdi+rbx*8]
 * 0000000180052895: mov     ecx, [r15+rax]
 * 0000000180052899: cmp     cs:dword_180219068, ecx
 * 000000018005289F: jle     loc_180052991
 * 00000001800528A5: lea     rcx, dword_180219068
 * 00000001800528AC: call    _Init_thread_header
 * 00000001800528B1: cmp     cs:dword_180219068, r14d
 * 00000001800528B8: jnz     loc_180052991
 * 00000001800528BE: mov     r8d, 1A50h
 * 00000001800528C4: lea     rdx, unk_180187410
 * 00000001800528CB: lea     rcx, [rbp+9E10h+var_72B0]
 * 00000001800528D2: call    sub_180043DEC
 * 00000001800528D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800528DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800528E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800528E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800528EA: mov     r9d, esi
 * 00000001800528ED: mov     r8d, esi
 * 00000001800528F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800528F5: lea     rcx, [rbp+9E10h+var_500]
 * 00000001800528FC: call    sub_180043DD8
 * 0000000180052901: movups  xmm0, xmmword ptr [rax]
 * 0000000180052904: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052909: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005290D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052912: call    sub_180043E00
 * 0000000180052917: mov     r8, rax
 * 000000018005291A: mov     r9d, r12d
 * 000000018005291D: mov     edx, 162h
 * 0000000180052922: lea     rcx, [rbp+9E10h+var_14E0]; Src
 * 0000000180052929: call    sub_1800CF2C8
 * 000000018005292E: nop
 * 000000018005292F: mov     r8, rax
 * 0000000180052932: mov     rdx, r13
 * 0000000180052935: lea     rcx, [rbp+9E10h+var_1500]
 * 000000018005293C: call    sub_180043BDC
 * 0000000180052941: nop
 * 0000000180052942: lea     r8, aVertex; "/Vertex"
 * 0000000180052949: mov     rdx, rax
 * 000000018005294C: lea     rcx, [rbp+9E10h+var_1520]
 * 0000000180052953: call    sub_18002C218
 * 0000000180052958: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005295D: mov     rcx, rax
 * 0000000180052960: call    sub_1800CF3A0
 * 0000000180052965: mov     cs:byte_180219064, al
 * 000000018005296B: lea     rcx, [rbp+9E10h+var_1500]; void *
 * 0000000180052972: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052977: nop
 * 0000000180052978: lea     rcx, [rbp+9E10h+var_14E0]; void *
 * 000000018005297F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052984: nop
 * 0000000180052985: lea     rcx, dword_180219068
 * 000000018005298C: call    _Init_thread_footer
 * 0000000180052991: mov     rax, [rdi+rbx*8]
 * 0000000180052995: mov     ecx, [r15+rax]
 * 0000000180052999: cmp     cs:dword_180219070, ecx
 * 000000018005299F: jle     loc_180052A91
 * 00000001800529A5: lea     rcx, dword_180219070
 * 00000001800529AC: call    _Init_thread_header
 * 00000001800529B1: cmp     cs:dword_180219070, r14d
 * 00000001800529B8: jnz     loc_180052A91
 * 00000001800529BE: mov     r8d, 1A50h
 * 00000001800529C4: lea     rdx, unk_180187410
 * 00000001800529CB: lea     rcx, [rbp+9E10h+var_72A0]
 * 00000001800529D2: call    sub_180043DEC
 * 00000001800529D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800529DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800529E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800529E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800529EA: mov     r9d, esi
 * 00000001800529ED: mov     r8d, esi
 * 00000001800529F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800529F5: lea     rcx, [rbp+9E10h+var_4E0]
 * 00000001800529FC: call    sub_180043DD8
 * 0000000180052A01: movups  xmm0, xmmword ptr [rax]
 * 0000000180052A04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052A09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180052A0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052A12: call    sub_180043E00
 * 0000000180052A17: mov     r8, rax
 * 0000000180052A1A: mov     r9d, r12d
 * 0000000180052A1D: mov     edx, 168h
 * 0000000180052A22: lea     rcx, [rbp+9E10h+var_1480]; Src
 * 0000000180052A29: call    sub_1800CF2C8
 * 0000000180052A2E: nop
 * 0000000180052A2F: mov     r8, rax
 * 0000000180052A32: mov     rdx, r13
 * 0000000180052A35: lea     rcx, [rbp+9E10h+var_14A0]
 * 0000000180052A3C: call    sub_180043BDC
 * 0000000180052A41: nop
 * 0000000180052A42: lea     r8, aVertex; "/Vertex"
 * 0000000180052A49: mov     rdx, rax
 * 0000000180052A4C: lea     rcx, [rbp+9E10h+var_14C0]
 * 0000000180052A53: call    sub_18002C218
 * 0000000180052A58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052A5D: mov     rcx, rax
 * 0000000180052A60: call    sub_1800CF3A0
 * 0000000180052A65: mov     cs:byte_18021906C, al
 * 0000000180052A6B: lea     rcx, [rbp+9E10h+var_14A0]; void *
 * 0000000180052A72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052A77: nop
 * 0000000180052A78: lea     rcx, [rbp+9E10h+var_1480]; void *
 * 0000000180052A7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052A84: nop
 * 0000000180052A85: lea     rcx, dword_180219070
 * 0000000180052A8C: call    _Init_thread_footer
 * 0000000180052A91: mov     rax, [rdi+rbx*8]
 * 0000000180052A95: mov     ecx, [r15+rax]
 * 0000000180052A99: cmp     cs:dword_180219078, ecx
 * 0000000180052A9F: jle     loc_180052B91
 * 0000000180052AA5: lea     rcx, dword_180219078
 * 0000000180052AAC: call    _Init_thread_header
 * 0000000180052AB1: cmp     cs:dword_180219078, r14d
 * 0000000180052AB8: jnz     loc_180052B91
 * 0000000180052ABE: mov     r8d, 1A50h
 * 0000000180052AC4: lea     rdx, unk_180187410
 * 0000000180052ACB: lea     rcx, [rbp+9E10h+var_7290]
 * 0000000180052AD2: call    sub_180043DEC
 * 0000000180052AD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180052ADA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052AE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180052AE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180052AEA: mov     r9d, esi
 * 0000000180052AED: mov     r8d, esi
 * 0000000180052AF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052AF5: lea     rcx, [rbp+9E10h+var_4C0]
 * 0000000180052AFC: call    sub_180043DD8
 * 0000000180052B01: movups  xmm0, xmmword ptr [rax]
 * 0000000180052B04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052B09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180052B0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052B12: call    sub_180043E00
 * 0000000180052B17: mov     r8, rax
 * 0000000180052B1A: mov     r9d, r12d
 * 0000000180052B1D: mov     edx, 16Ah
 * 0000000180052B22: lea     rcx, [rbp+9E10h+var_1420]; Src
 * 0000000180052B29: call    sub_1800CF2C8
 * 0000000180052B2E: nop
 * 0000000180052B2F: mov     r8, rax
 * 0000000180052B32: mov     rdx, r13
 * 0000000180052B35: lea     rcx, [rbp+9E10h+var_1440]
 * 0000000180052B3C: call    sub_180043BDC
 * 0000000180052B41: nop
 * 0000000180052B42: lea     r8, aVertex; "/Vertex"
 * 0000000180052B49: mov     rdx, rax
 * 0000000180052B4C: lea     rcx, [rbp+9E10h+var_1460]
 * 0000000180052B53: call    sub_18002C218
 * 0000000180052B58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052B5D: mov     rcx, rax
 * 0000000180052B60: call    sub_1800CF3A0
 * 0000000180052B65: mov     cs:byte_180219074, al
 * 0000000180052B6B: lea     rcx, [rbp+9E10h+var_1440]; void *
 * 0000000180052B72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052B77: nop
 * 0000000180052B78: lea     rcx, [rbp+9E10h+var_1420]; void *
 * 0000000180052B7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052B84: nop
 * 0000000180052B85: lea     rcx, dword_180219078
 * 0000000180052B8C: call    _Init_thread_footer
 * 0000000180052B91: mov     rax, [rdi+rbx*8]
 * 0000000180052B95: mov     ecx, [r15+rax]
 * 0000000180052B99: cmp     cs:dword_180219080, ecx
 * 0000000180052B9F: jle     loc_180052C91
 * 0000000180052BA5: lea     rcx, dword_180219080
 * 0000000180052BAC: call    _Init_thread_header
 * 0000000180052BB1: cmp     cs:dword_180219080, r14d
 * 0000000180052BB8: jnz     loc_180052C91
 * 0000000180052BBE: mov     r8d, 1A50h
 * 0000000180052BC4: lea     rdx, unk_180187410
 * 0000000180052BCB: lea     rcx, [rbp+9E10h+var_7280]
 * 0000000180052BD2: call    sub_180043DEC
 * 0000000180052BD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180052BDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052BE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180052BE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180052BEA: mov     r9d, esi
 * 0000000180052BED: mov     r8d, esi
 * 0000000180052BF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052BF5: lea     rcx, [rbp+9E10h+var_4A0]
 * 0000000180052BFC: call    sub_180043DD8
 * 0000000180052C01: movups  xmm0, xmmword ptr [rax]
 * 0000000180052C04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052C09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180052C0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052C12: call    sub_180043E00
 * 0000000180052C17: mov     r8, rax
 * 0000000180052C1A: mov     r9d, r12d
 * 0000000180052C1D: mov     edx, 170h
 * 0000000180052C22: lea     rcx, [rbp+9E10h+var_13C0]; Src
 * 0000000180052C29: call    sub_1800CF2C8
 * 0000000180052C2E: nop
 * 0000000180052C2F: mov     r8, rax
 * 0000000180052C32: mov     rdx, r13
 * 0000000180052C35: lea     rcx, [rbp+9E10h+var_13E0]
 * 0000000180052C3C: call    sub_180043BDC
 * 0000000180052C41: nop
 * 0000000180052C42: lea     r8, aVertex; "/Vertex"
 * 0000000180052C49: mov     rdx, rax
 * 0000000180052C4C: lea     rcx, [rbp+9E10h+var_1400]
 * 0000000180052C53: call    sub_18002C218
 * 0000000180052C58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052C5D: mov     rcx, rax
 * 0000000180052C60: call    sub_1800CF3A0
 * 0000000180052C65: mov     cs:byte_18021907C, al
 * 0000000180052C6B: lea     rcx, [rbp+9E10h+var_13E0]; void *
 * 0000000180052C72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052C77: nop
 * 0000000180052C78: lea     rcx, [rbp+9E10h+var_13C0]; void *
 * 0000000180052C7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052C84: nop
 * 0000000180052C85: lea     rcx, dword_180219080
 * 0000000180052C8C: call    _Init_thread_footer
 * 0000000180052C91: mov     rax, [rdi+rbx*8]
 * 0000000180052C95: mov     ecx, [r15+rax]
 * 0000000180052C99: cmp     cs:dword_180219088, ecx
 * 0000000180052C9F: jle     loc_180052D91
 * 0000000180052CA5: lea     rcx, dword_180219088
 * 0000000180052CAC: call    _Init_thread_header
 * 0000000180052CB1: cmp     cs:dword_180219088, r14d
 * 0000000180052CB8: jnz     loc_180052D91
 * 0000000180052CBE: mov     r8d, 1A50h
 * 0000000180052CC4: lea     rdx, unk_180187410
 * 0000000180052CCB: lea     rcx, [rbp+9E10h+var_7270]
 * 0000000180052CD2: call    sub_180043DEC
 * 0000000180052CD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180052CDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052CE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180052CE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180052CEA: mov     r9d, esi
 * 0000000180052CED: mov     r8d, esi
 * 0000000180052CF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052CF5: lea     rcx, [rbp+9E10h+var_480]
 * 0000000180052CFC: call    sub_180043DD8
 * 0000000180052D01: movups  xmm0, xmmword ptr [rax]
 * 0000000180052D04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052D09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180052D0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052D12: call    sub_180043E00
 * 0000000180052D17: mov     r8, rax
 * 0000000180052D1A: mov     r9d, r12d
 * 0000000180052D1D: mov     edx, 172h
 * 0000000180052D22: lea     rcx, [rbp+9E10h+var_1360]; Src
 * 0000000180052D29: call    sub_1800CF2C8
 * 0000000180052D2E: nop
 * 0000000180052D2F: mov     r8, rax
 * 0000000180052D32: mov     rdx, r13
 * 0000000180052D35: lea     rcx, [rbp+9E10h+var_1380]
 * 0000000180052D3C: call    sub_180043BDC
 * 0000000180052D41: nop
 * 0000000180052D42: lea     r8, aVertex; "/Vertex"
 * 0000000180052D49: mov     rdx, rax
 * 0000000180052D4C: lea     rcx, [rbp+9E10h+var_13A0]
 * 0000000180052D53: call    sub_18002C218
 * 0000000180052D58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052D5D: mov     rcx, rax
 * 0000000180052D60: call    sub_1800CF3A0
 * 0000000180052D65: mov     cs:byte_180219084, al
 * 0000000180052D6B: lea     rcx, [rbp+9E10h+var_1380]; void *
 * 0000000180052D72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052D77: nop
 * 0000000180052D78: lea     rcx, [rbp+9E10h+var_1360]; void *
 * 0000000180052D7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052D84: nop
 * 0000000180052D85: lea     rcx, dword_180219088
 * 0000000180052D8C: call    _Init_thread_footer
 * 0000000180052D91: mov     rax, [rdi+rbx*8]
 * 0000000180052D95: mov     ecx, [r15+rax]
 * 0000000180052D99: cmp     cs:dword_180219090, ecx
 * 0000000180052D9F: jle     loc_180052E91
 * 0000000180052DA5: lea     rcx, dword_180219090
 * 0000000180052DAC: call    _Init_thread_header
 * 0000000180052DB1: cmp     cs:dword_180219090, r14d
 * 0000000180052DB8: jnz     loc_180052E91
 * 0000000180052DBE: mov     r8d, 1A50h
 * 0000000180052DC4: lea     rdx, unk_180187410
 * 0000000180052DCB: lea     rcx, [rbp+9E10h+var_7260]
 * 0000000180052DD2: call    sub_180043DEC
 * 0000000180052DD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180052DDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052DE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180052DE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180052DEA: mov     r9d, esi
 * 0000000180052DED: mov     r8d, esi
 * 0000000180052DF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052DF5: lea     rcx, [rbp+9E10h+var_460]
 * 0000000180052DFC: call    sub_180043DD8
 * 0000000180052E01: movups  xmm0, xmmword ptr [rax]
 * 0000000180052E04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052E09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180052E0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052E12: call    sub_180043E00
 * 0000000180052E17: mov     r8, rax
 * 0000000180052E1A: mov     r9d, r12d
 * 0000000180052E1D: mov     edx, 178h
 * 0000000180052E22: lea     rcx, [rbp+9E10h+var_1300]; Src
 * 0000000180052E29: call    sub_1800CF2C8
 * 0000000180052E2E: nop
 * 0000000180052E2F: mov     r8, rax
 * 0000000180052E32: mov     rdx, r13
 * 0000000180052E35: lea     rcx, [rbp+9E10h+var_1320]
 * 0000000180052E3C: call    sub_180043BDC
 * 0000000180052E41: nop
 * 0000000180052E42: lea     r8, aVertex; "/Vertex"
 * 0000000180052E49: mov     rdx, rax
 * 0000000180052E4C: lea     rcx, [rbp+9E10h+var_1340]
 * 0000000180052E53: call    sub_18002C218
 * 0000000180052E58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052E5D: mov     rcx, rax
 * 0000000180052E60: call    sub_1800CF3A0
 * 0000000180052E65: mov     cs:byte_18021908C, al
 * 0000000180052E6B: lea     rcx, [rbp+9E10h+var_1320]; void *
 * 0000000180052E72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052E77: nop
 * 0000000180052E78: lea     rcx, [rbp+9E10h+var_1300]; void *
 * 0000000180052E7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052E84: nop
 * 0000000180052E85: lea     rcx, dword_180219090
 * 0000000180052E8C: call    _Init_thread_footer
 * 0000000180052E91: mov     rax, [rdi+rbx*8]
 * 0000000180052E95: mov     ecx, [r15+rax]
 * 0000000180052E99: cmp     cs:dword_180219098, ecx
 * 0000000180052E9F: jle     loc_180052F91
 * 0000000180052EA5: lea     rcx, dword_180219098
 * 0000000180052EAC: call    _Init_thread_header
 * 0000000180052EB1: cmp     cs:dword_180219098, r14d
 * 0000000180052EB8: jnz     loc_180052F91
 * 0000000180052EBE: mov     r8d, 1A50h
 * 0000000180052EC4: lea     rdx, unk_180187410
 * 0000000180052ECB: lea     rcx, [rbp+9E10h+var_7250]
 * 0000000180052ED2: call    sub_180043DEC
 * 0000000180052ED7: movups  xmm0, xmmword ptr [rax]
 * 0000000180052EDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052EE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180052EE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180052EEA: mov     r9d, esi
 * 0000000180052EED: mov     r8d, esi
 * 0000000180052EF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052EF5: lea     rcx, [rbp+9E10h+var_440]
 * 0000000180052EFC: call    sub_180043DD8
 * 0000000180052F01: movups  xmm0, xmmword ptr [rax]
 * 0000000180052F04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052F09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180052F0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180052F12: call    sub_180043E00
 * 0000000180052F17: mov     r8, rax
 * 0000000180052F1A: mov     r9d, r12d
 * 0000000180052F1D: mov     edx, 17Ah
 * 0000000180052F22: lea     rcx, [rbp+9E10h+var_12A0]; Src
 * 0000000180052F29: call    sub_1800CF2C8
 * 0000000180052F2E: nop
 * 0000000180052F2F: mov     r8, rax
 * 0000000180052F32: mov     rdx, r13
 * 0000000180052F35: lea     rcx, [rbp+9E10h+var_12C0]
 * 0000000180052F3C: call    sub_180043BDC
 * 0000000180052F41: nop
 * 0000000180052F42: lea     r8, aVertex; "/Vertex"
 * 0000000180052F49: mov     rdx, rax
 * 0000000180052F4C: lea     rcx, [rbp+9E10h+var_12E0]
 * 0000000180052F53: call    sub_18002C218
 * 0000000180052F58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052F5D: mov     rcx, rax
 * 0000000180052F60: call    sub_1800CF3A0
 * 0000000180052F65: mov     cs:byte_180219094, al
 * 0000000180052F6B: lea     rcx, [rbp+9E10h+var_12C0]; void *
 * 0000000180052F72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052F77: nop
 * 0000000180052F78: lea     rcx, [rbp+9E10h+var_12A0]; void *
 * 0000000180052F7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052F84: nop
 * 0000000180052F85: lea     rcx, dword_180219098
 * 0000000180052F8C: call    _Init_thread_footer
 * 0000000180052F91: mov     rax, [rdi+rbx*8]
 * 0000000180052F95: mov     ecx, [r15+rax]
 * 0000000180052F99: cmp     cs:dword_1802190A0, ecx
 * 0000000180052F9F: jle     loc_180053091
 * 0000000180052FA5: lea     rcx, dword_1802190A0
 * 0000000180052FAC: call    _Init_thread_header
 * 0000000180052FB1: cmp     cs:dword_1802190A0, r14d
 * 0000000180052FB8: jnz     loc_180053091
 * 0000000180052FBE: mov     r8d, 1050h
 * 0000000180052FC4: lea     rdx, unk_1801863C0
 * 0000000180052FCB: lea     rcx, [rbp+9E10h+var_7240]
 * 0000000180052FD2: call    sub_180043DEC
 * 0000000180052FD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180052FDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052FE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180052FE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180052FEA: mov     r9d, esi
 * 0000000180052FED: mov     r8d, esi
 * 0000000180052FF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052FF5: lea     rcx, [rbp+9E10h+var_420]
 * 0000000180052FFC: call    sub_180043DD8
 * 0000000180053001: movups  xmm0, xmmword ptr [rax]
 * 0000000180053004: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053009: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005300D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053012: call    sub_180043E00
 * 0000000180053017: mov     r8, rax
 * 000000018005301A: mov     r9d, r12d
 * 000000018005301D: mov     edx, 180h
 * 0000000180053022: lea     rcx, [rbp+9E10h+var_1240]; Src
 * 0000000180053029: call    sub_1800CF2C8
 * 000000018005302E: nop
 * 000000018005302F: mov     r8, rax
 * 0000000180053032: mov     rdx, r13
 * 0000000180053035: lea     rcx, [rbp+9E10h+var_1260]
 * 000000018005303C: call    sub_180043BDC
 * 0000000180053041: nop
 * 0000000180053042: lea     r8, aVertex; "/Vertex"
 * 0000000180053049: mov     rdx, rax
 * 000000018005304C: lea     rcx, [rbp+9E10h+var_1280]
 * 0000000180053053: call    sub_18002C218
 * 0000000180053058: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005305D: mov     rcx, rax
 * 0000000180053060: call    sub_1800CF3A0
 * 0000000180053065: mov     cs:byte_18021909C, al
 * 000000018005306B: lea     rcx, [rbp+9E10h+var_1260]; void *
 * 0000000180053072: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053077: nop
 * 0000000180053078: lea     rcx, [rbp+9E10h+var_1240]; void *
 * 000000018005307F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053084: nop
 * 0000000180053085: lea     rcx, dword_1802190A0
 * 000000018005308C: call    _Init_thread_footer
 * 0000000180053091: mov     rax, [rdi+rbx*8]
 * 0000000180053095: mov     ecx, [r15+rax]
 * 0000000180053099: cmp     cs:dword_1802190A8, ecx
 * 000000018005309F: jle     loc_180053191
 * 00000001800530A5: lea     rcx, dword_1802190A8
 * 00000001800530AC: call    _Init_thread_header
 * 00000001800530B1: cmp     cs:dword_1802190A8, r14d
 * 00000001800530B8: jnz     loc_180053191
 * 00000001800530BE: mov     r8d, 1050h
 * 00000001800530C4: lea     rdx, unk_1801863C0
 * 00000001800530CB: lea     rcx, [rbp+9E10h+var_7230]
 * 00000001800530D2: call    sub_180043DEC
 * 00000001800530D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800530DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800530E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800530E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800530EA: mov     r9d, esi
 * 00000001800530ED: mov     r8d, esi
 * 00000001800530F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800530F5: lea     rcx, [rbp+9E10h+var_400]
 * 00000001800530FC: call    sub_180043DD8
 * 0000000180053101: movups  xmm0, xmmword ptr [rax]
 * 0000000180053104: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053109: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005310D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053112: call    sub_180043E00
 * 0000000180053117: mov     r8, rax
 * 000000018005311A: mov     r9d, r12d
 * 000000018005311D: mov     edx, 182h
 * 0000000180053122: lea     rcx, [rbp+9E10h+var_11E0]; Src
 * 0000000180053129: call    sub_1800CF2C8
 * 000000018005312E: nop
 * 000000018005312F: mov     r8, rax
 * 0000000180053132: mov     rdx, r13
 * 0000000180053135: lea     rcx, [rbp+9E10h+var_1200]
 * 000000018005313C: call    sub_180043BDC
 * 0000000180053141: nop
 * 0000000180053142: lea     r8, aVertex; "/Vertex"
 * 0000000180053149: mov     rdx, rax
 * 000000018005314C: lea     rcx, [rbp+9E10h+var_1220]
 * 0000000180053153: call    sub_18002C218
 * 0000000180053158: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005315D: mov     rcx, rax
 * 0000000180053160: call    sub_1800CF3A0
 * 0000000180053165: mov     cs:byte_1802190A4, al
 * 000000018005316B: lea     rcx, [rbp+9E10h+var_1200]; void *
 * 0000000180053172: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053177: nop
 * 0000000180053178: lea     rcx, [rbp+9E10h+var_11E0]; void *
 * 000000018005317F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053184: nop
 * 0000000180053185: lea     rcx, dword_1802190A8
 * 000000018005318C: call    _Init_thread_footer
 * 0000000180053191: mov     rax, [rdi+rbx*8]
 * 0000000180053195: mov     ecx, [r15+rax]
 * 0000000180053199: cmp     cs:dword_1802190B0, ecx
 * 000000018005319F: jle     loc_180053291
 * 00000001800531A5: lea     rcx, dword_1802190B0
 * 00000001800531AC: call    _Init_thread_header
 * 00000001800531B1: cmp     cs:dword_1802190B0, r14d
 * 00000001800531B8: jnz     loc_180053291
 * 00000001800531BE: mov     r8d, 1050h
 * 00000001800531C4: lea     rdx, unk_1801863C0
 * 00000001800531CB: lea     rcx, [rbp+9E10h+var_7220]
 * 00000001800531D2: call    sub_180043DEC
 * 00000001800531D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800531DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800531E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800531E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800531EA: mov     r9d, esi
 * 00000001800531ED: mov     r8d, esi
 * 00000001800531F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800531F5: lea     rcx, [rbp+9E10h+var_3E0]
 * 00000001800531FC: call    sub_180043DD8
 * 0000000180053201: movups  xmm0, xmmword ptr [rax]
 * 0000000180053204: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053209: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005320D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053212: call    sub_180043E00
 * 0000000180053217: mov     r8, rax
 * 000000018005321A: mov     r9d, r12d
 * 000000018005321D: mov     edx, 188h
 * 0000000180053222: lea     rcx, [rbp+9E10h+var_1180]; Src
 * 0000000180053229: call    sub_1800CF2C8
 * 000000018005322E: nop
 * 000000018005322F: mov     r8, rax
 * 0000000180053232: mov     rdx, r13
 * 0000000180053235: lea     rcx, [rbp+9E10h+var_11A0]
 * 000000018005323C: call    sub_180043BDC
 * 0000000180053241: nop
 * 0000000180053242: lea     r8, aVertex; "/Vertex"
 * 0000000180053249: mov     rdx, rax
 * 000000018005324C: lea     rcx, [rbp+9E10h+var_11C0]
 * 0000000180053253: call    sub_18002C218
 * 0000000180053258: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005325D: mov     rcx, rax
 * 0000000180053260: call    sub_1800CF3A0
 * 0000000180053265: mov     cs:byte_1802190AC, al
 * 000000018005326B: lea     rcx, [rbp+9E10h+var_11A0]; void *
 * 0000000180053272: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053277: nop
 * 0000000180053278: lea     rcx, [rbp+9E10h+var_1180]; void *
 * 000000018005327F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053284: nop
 * 0000000180053285: lea     rcx, dword_1802190B0
 * 000000018005328C: call    _Init_thread_footer
 * 0000000180053291: mov     rax, [rdi+rbx*8]
 * 0000000180053295: mov     ecx, [r15+rax]
 * 0000000180053299: cmp     cs:dword_1802190B8, ecx
 * 000000018005329F: jle     loc_180053391
 * 00000001800532A5: lea     rcx, dword_1802190B8
 * 00000001800532AC: call    _Init_thread_header
 * 00000001800532B1: cmp     cs:dword_1802190B8, r14d
 * 00000001800532B8: jnz     loc_180053391
 * 00000001800532BE: mov     r8d, 1050h
 * 00000001800532C4: lea     rdx, unk_1801863C0
 * 00000001800532CB: lea     rcx, [rbp+9E10h+var_7210]
 * 00000001800532D2: call    sub_180043DEC
 * 00000001800532D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800532DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800532E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800532E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800532EA: mov     r9d, esi
 * 00000001800532ED: mov     r8d, esi
 * 00000001800532F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800532F5: lea     rcx, [rbp+9E10h+var_3C0]
 * 00000001800532FC: call    sub_180043DD8
 * 0000000180053301: movups  xmm0, xmmword ptr [rax]
 * 0000000180053304: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053309: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005330D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053312: call    sub_180043E00
 * 0000000180053317: mov     r8, rax
 * 000000018005331A: mov     r9d, r12d
 * 000000018005331D: mov     edx, 18Ah
 * 0000000180053322: lea     rcx, [rbp+9E10h+var_1120]; Src
 * 0000000180053329: call    sub_1800CF2C8
 * 000000018005332E: nop
 * 000000018005332F: mov     r8, rax
 * 0000000180053332: mov     rdx, r13
 * 0000000180053335: lea     rcx, [rbp+9E10h+var_1140]
 * 000000018005333C: call    sub_180043BDC
 * 0000000180053341: nop
 * 0000000180053342: lea     r8, aVertex; "/Vertex"
 * 0000000180053349: mov     rdx, rax
 * 000000018005334C: lea     rcx, [rbp+9E10h+var_1160]
 * 0000000180053353: call    sub_18002C218
 * 0000000180053358: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005335D: mov     rcx, rax
 * 0000000180053360: call    sub_1800CF3A0
 * 0000000180053365: mov     cs:byte_1802190B4, al
 * 000000018005336B: lea     rcx, [rbp+9E10h+var_1140]; void *
 * 0000000180053372: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053377: nop
 * 0000000180053378: lea     rcx, [rbp+9E10h+var_1120]; void *
 * 000000018005337F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053384: nop
 * 0000000180053385: lea     rcx, dword_1802190B8
 * 000000018005338C: call    _Init_thread_footer
 * 0000000180053391: mov     rax, [rdi+rbx*8]
 * 0000000180053395: mov     ecx, [r15+rax]
 * 0000000180053399: cmp     cs:dword_1802190C0, ecx
 * 000000018005339F: jle     loc_180053491
 * 00000001800533A5: lea     rcx, dword_1802190C0
 * 00000001800533AC: call    _Init_thread_header
 * 00000001800533B1: cmp     cs:dword_1802190C0, r14d
 * 00000001800533B8: jnz     loc_180053491
 * 00000001800533BE: mov     r8d, 1050h
 * 00000001800533C4: lea     rdx, unk_1801863C0
 * 00000001800533CB: lea     rcx, [rbp+9E10h+var_7200]
 * 00000001800533D2: call    sub_180043DEC
 * 00000001800533D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800533DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800533E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800533E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800533EA: mov     r9d, esi
 * 00000001800533ED: mov     r8d, esi
 * 00000001800533F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800533F5: lea     rcx, [rbp+9E10h+var_3A0]
 * 00000001800533FC: call    sub_180043DD8
 * 0000000180053401: movups  xmm0, xmmword ptr [rax]
 * 0000000180053404: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053409: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005340D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053412: call    sub_180043E00
 * 0000000180053417: mov     r8, rax
 * 000000018005341A: mov     r9d, r12d
 * 000000018005341D: mov     edx, 190h
 * 0000000180053422: lea     rcx, [rbp+9E10h+var_10C0]; Src
 * 0000000180053429: call    sub_1800CF2C8
 * 000000018005342E: nop
 * 000000018005342F: mov     r8, rax
 * 0000000180053432: mov     rdx, r13
 * 0000000180053435: lea     rcx, [rbp+9E10h+var_10E0]
 * 000000018005343C: call    sub_180043BDC
 * 0000000180053441: nop
 * 0000000180053442: lea     r8, aVertex; "/Vertex"
 * 0000000180053449: mov     rdx, rax
 * 000000018005344C: lea     rcx, [rbp+9E10h+var_1100]
 * 0000000180053453: call    sub_18002C218
 * 0000000180053458: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005345D: mov     rcx, rax
 * 0000000180053460: call    sub_1800CF3A0
 * 0000000180053465: mov     cs:byte_1802190BC, al
 * 000000018005346B: lea     rcx, [rbp+9E10h+var_10E0]; void *
 * 0000000180053472: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053477: nop
 * 0000000180053478: lea     rcx, [rbp+9E10h+var_10C0]; void *
 * 000000018005347F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053484: nop
 * 0000000180053485: lea     rcx, dword_1802190C0
 * 000000018005348C: call    _Init_thread_footer
 * 0000000180053491: mov     rax, [rdi+rbx*8]
 * 0000000180053495: mov     ecx, [r15+rax]
 * 0000000180053499: cmp     cs:dword_1802190C8, ecx
 * 000000018005349F: jle     loc_180053591
 * 00000001800534A5: lea     rcx, dword_1802190C8
 * 00000001800534AC: call    _Init_thread_header
 * 00000001800534B1: cmp     cs:dword_1802190C8, r14d
 * 00000001800534B8: jnz     loc_180053591
 * 00000001800534BE: mov     r8d, 1050h
 * 00000001800534C4: lea     rdx, unk_1801863C0
 * 00000001800534CB: lea     rcx, [rbp+9E10h+var_71F0]
 * 00000001800534D2: call    sub_180043DEC
 * 00000001800534D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800534DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800534E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800534E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800534EA: mov     r9d, esi
 * 00000001800534ED: mov     r8d, esi
 * 00000001800534F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800534F5: lea     rcx, [rbp+9E10h+var_380]
 * 00000001800534FC: call    sub_180043DD8
 * 0000000180053501: movups  xmm0, xmmword ptr [rax]
 * 0000000180053504: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053509: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005350D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053512: call    sub_180043E00
 * 0000000180053517: mov     r8, rax
 * 000000018005351A: mov     r9d, r12d
 * 000000018005351D: mov     edx, 192h
 * 0000000180053522: lea     rcx, [rbp+9E10h+var_1060]; Src
 * 0000000180053529: call    sub_1800CF2C8
 * 000000018005352E: nop
 * 000000018005352F: mov     r8, rax
 * 0000000180053532: mov     rdx, r13
 * 0000000180053535: lea     rcx, [rbp+9E10h+var_1080]
 * 000000018005353C: call    sub_180043BDC
 * 0000000180053541: nop
 * 0000000180053542: lea     r8, aVertex; "/Vertex"
 * 0000000180053549: mov     rdx, rax
 * 000000018005354C: lea     rcx, [rbp+9E10h+var_10A0]
 * 0000000180053553: call    sub_18002C218
 * 0000000180053558: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005355D: mov     rcx, rax
 * 0000000180053560: call    sub_1800CF3A0
 * 0000000180053565: mov     cs:byte_1802190C4, al
 * 000000018005356B: lea     rcx, [rbp+9E10h+var_1080]; void *
 * 0000000180053572: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053577: nop
 * 0000000180053578: lea     rcx, [rbp+9E10h+var_1060]; void *
 * 000000018005357F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053584: nop
 * 0000000180053585: lea     rcx, dword_1802190C8
 * 000000018005358C: call    _Init_thread_footer
 * 0000000180053591: mov     rax, [rdi+rbx*8]
 * 0000000180053595: mov     ecx, [r15+rax]
 * 0000000180053599: cmp     cs:dword_1802190D0, ecx
 * 000000018005359F: jle     loc_180053691
 * 00000001800535A5: lea     rcx, dword_1802190D0
 * 00000001800535AC: call    _Init_thread_header
 * 00000001800535B1: cmp     cs:dword_1802190D0, r14d
 * 00000001800535B8: jnz     loc_180053691
 * 00000001800535BE: mov     r8d, 1050h
 * 00000001800535C4: lea     rdx, unk_1801863C0
 * 00000001800535CB: lea     rcx, [rbp+9E10h+var_71E0]
 * 00000001800535D2: call    sub_180043DEC
 * 00000001800535D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800535DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800535E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800535E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800535EA: mov     r9d, esi
 * 00000001800535ED: mov     r8d, esi
 * 00000001800535F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800535F5: lea     rcx, [rbp+9E10h+var_360]
 * 00000001800535FC: call    sub_180043DD8
 * 0000000180053601: movups  xmm0, xmmword ptr [rax]
 * 0000000180053604: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053609: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005360D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053612: call    sub_180043E00
 * 0000000180053617: mov     r8, rax
 * 000000018005361A: mov     r9d, r12d
 * 000000018005361D: mov     edx, 198h
 * 0000000180053622: lea     rcx, [rbp+9E10h+var_1000]; Src
 * 0000000180053629: call    sub_1800CF2C8
 * 000000018005362E: nop
 * 000000018005362F: mov     r8, rax
 * 0000000180053632: mov     rdx, r13
 * 0000000180053635: lea     rcx, [rbp+9E10h+var_1020]
 * 000000018005363C: call    sub_180043BDC
 * 0000000180053641: nop
 * 0000000180053642: lea     r8, aVertex; "/Vertex"
 * 0000000180053649: mov     rdx, rax
 * 000000018005364C: lea     rcx, [rbp+9E10h+var_1040]
 * 0000000180053653: call    sub_18002C218
 * 0000000180053658: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005365D: mov     rcx, rax
 * 0000000180053660: call    sub_1800CF3A0
 * 0000000180053665: mov     cs:byte_1802190CC, al
 * 000000018005366B: lea     rcx, [rbp+9E10h+var_1020]; void *
 * 0000000180053672: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053677: nop
 * 0000000180053678: lea     rcx, [rbp+9E10h+var_1000]; void *
 * 000000018005367F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053684: nop
 * 0000000180053685: lea     rcx, dword_1802190D0
 * 000000018005368C: call    _Init_thread_footer
 * 0000000180053691: mov     rax, [rdi+rbx*8]
 * 0000000180053695: mov     ecx, [r15+rax]
 * 0000000180053699: cmp     cs:dword_1802190D8, ecx
 * 000000018005369F: jle     loc_180053791
 * 00000001800536A5: lea     rcx, dword_1802190D8
 * 00000001800536AC: call    _Init_thread_header
 * 00000001800536B1: cmp     cs:dword_1802190D8, r14d
 * 00000001800536B8: jnz     loc_180053791
 * 00000001800536BE: mov     r8d, 1050h
 * 00000001800536C4: lea     rdx, unk_1801863C0
 * 00000001800536CB: lea     rcx, [rbp+9E10h+var_71D0]
 * 00000001800536D2: call    sub_180043DEC
 * 00000001800536D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800536DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800536E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800536E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800536EA: mov     r9d, esi
 * 00000001800536ED: mov     r8d, esi
 * 00000001800536F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800536F5: lea     rcx, [rbp+9E10h+var_340]
 * 00000001800536FC: call    sub_180043DD8
 * 0000000180053701: movups  xmm0, xmmword ptr [rax]
 * 0000000180053704: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053709: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005370D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053712: call    sub_180043E00
 * 0000000180053717: mov     r8, rax
 * 000000018005371A: mov     r9d, r12d
 * 000000018005371D: mov     edx, 19Ah
 * 0000000180053722: lea     rcx, [rbp+9E10h+var_FA0]; Src
 * 0000000180053729: call    sub_1800CF2C8
 * 000000018005372E: nop
 * 000000018005372F: mov     r8, rax
 * 0000000180053732: mov     rdx, r13
 * 0000000180053735: lea     rcx, [rbp+9E10h+var_FC0]
 * 000000018005373C: call    sub_180043BDC
 * 0000000180053741: nop
 * 0000000180053742: lea     r8, aVertex; "/Vertex"
 * 0000000180053749: mov     rdx, rax
 * 000000018005374C: lea     rcx, [rbp+9E10h+var_FE0]
 * 0000000180053753: call    sub_18002C218
 * 0000000180053758: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005375D: mov     rcx, rax
 * 0000000180053760: call    sub_1800CF3A0
 * 0000000180053765: mov     cs:byte_1802190D4, al
 * 000000018005376B: lea     rcx, [rbp+9E10h+var_FC0]; void *
 * 0000000180053772: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053777: nop
 * 0000000180053778: lea     rcx, [rbp+9E10h+var_FA0]; void *
 * 000000018005377F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053784: nop
 * 0000000180053785: lea     rcx, dword_1802190D8
 * 000000018005378C: call    _Init_thread_footer
 * 0000000180053791: mov     rax, [rdi+rbx*8]
 * 0000000180053795: mov     ecx, [r15+rax]
 * 0000000180053799: cmp     cs:dword_1802190E0, ecx
 * 000000018005379F: jle     loc_180053891
 * 00000001800537A5: lea     rcx, dword_1802190E0
 * 00000001800537AC: call    _Init_thread_header
 * 00000001800537B1: cmp     cs:dword_1802190E0, r14d
 * 00000001800537B8: jnz     loc_180053891
 * 00000001800537BE: mov     r8d, 1A50h
 * 00000001800537C4: lea     rdx, unk_180187410
 * 00000001800537CB: lea     rcx, [rbp+9E10h+var_71C0]
 * 00000001800537D2: call    sub_180043DEC
 * 00000001800537D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800537DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800537E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800537E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800537EA: mov     r9d, esi
 * 00000001800537ED: mov     r8d, esi
 * 00000001800537F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800537F5: lea     rcx, [rbp+9E10h+var_320]
 * 00000001800537FC: call    sub_180043DD8
 * 0000000180053801: movups  xmm0, xmmword ptr [rax]
 * 0000000180053804: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053809: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005380D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053812: call    sub_180043E00
 * 0000000180053817: mov     r8, rax
 * 000000018005381A: mov     r9d, r12d
 * 000000018005381D: mov     edx, 1A0h
 * 0000000180053822: lea     rcx, [rbp+9E10h+var_F40]; Src
 * 0000000180053829: call    sub_1800CF2C8
 * 000000018005382E: nop
 * 000000018005382F: mov     r8, rax
 * 0000000180053832: mov     rdx, r13
 * 0000000180053835: lea     rcx, [rbp+9E10h+var_F60]
 * 000000018005383C: call    sub_180043BDC
 * 0000000180053841: nop
 * 0000000180053842: lea     r8, aVertex; "/Vertex"
 * 0000000180053849: mov     rdx, rax
 * 000000018005384C: lea     rcx, [rbp+9E10h+var_F80]
 * 0000000180053853: call    sub_18002C218
 * 0000000180053858: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005385D: mov     rcx, rax
 * 0000000180053860: call    sub_1800CF3A0
 * 0000000180053865: mov     cs:byte_1802190DC, al
 * 000000018005386B: lea     rcx, [rbp+9E10h+var_F60]; void *
 * 0000000180053872: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053877: nop
 * 0000000180053878: lea     rcx, [rbp+9E10h+var_F40]; void *
 * 000000018005387F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053884: nop
 * 0000000180053885: lea     rcx, dword_1802190E0
 * 000000018005388C: call    _Init_thread_footer
 * 0000000180053891: mov     rax, [rdi+rbx*8]
 * 0000000180053895: mov     ecx, [r15+rax]
 * 0000000180053899: cmp     cs:dword_1802190E8, ecx
 * 000000018005389F: jle     loc_180053991
 * 00000001800538A5: lea     rcx, dword_1802190E8
 * 00000001800538AC: call    _Init_thread_header
 * 00000001800538B1: cmp     cs:dword_1802190E8, r14d
 * 00000001800538B8: jnz     loc_180053991
 * 00000001800538BE: mov     r8d, 1A50h
 * 00000001800538C4: lea     rdx, unk_180187410
 * 00000001800538CB: lea     rcx, [rbp+9E10h+var_71B0]
 * 00000001800538D2: call    sub_180043DEC
 * 00000001800538D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800538DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800538E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800538E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800538EA: mov     r9d, esi
 * 00000001800538ED: mov     r8d, esi
 * 00000001800538F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800538F5: lea     rcx, [rbp+9E10h+var_300]
 * 00000001800538FC: call    sub_180043DD8
 * 0000000180053901: movups  xmm0, xmmword ptr [rax]
 * 0000000180053904: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053909: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005390D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053912: call    sub_180043E00
 * 0000000180053917: mov     r8, rax
 * 000000018005391A: mov     r9d, r12d
 * 000000018005391D: mov     edx, 1A2h
 * 0000000180053922: lea     rcx, [rbp+9E10h+var_EE0]; Src
 * 0000000180053929: call    sub_1800CF2C8
 * 000000018005392E: nop
 * 000000018005392F: mov     r8, rax
 * 0000000180053932: mov     rdx, r13
 * 0000000180053935: lea     rcx, [rbp+9E10h+var_F00]
 * 000000018005393C: call    sub_180043BDC
 * 0000000180053941: nop
 * 0000000180053942: lea     r8, aVertex; "/Vertex"
 * 0000000180053949: mov     rdx, rax
 * 000000018005394C: lea     rcx, [rbp+9E10h+var_F20]
 * 0000000180053953: call    sub_18002C218
 * 0000000180053958: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005395D: mov     rcx, rax
 * 0000000180053960: call    sub_1800CF3A0
 * 0000000180053965: mov     cs:byte_1802190E4, al
 * 000000018005396B: lea     rcx, [rbp+9E10h+var_F00]; void *
 * 0000000180053972: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053977: nop
 * 0000000180053978: lea     rcx, [rbp+9E10h+var_EE0]; void *
 * 000000018005397F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053984: nop
 * 0000000180053985: lea     rcx, dword_1802190E8
 * 000000018005398C: call    _Init_thread_footer
 * 0000000180053991: mov     rax, [rdi+rbx*8]
 * 0000000180053995: mov     ecx, [r15+rax]
 * 0000000180053999: cmp     cs:dword_1802190F0, ecx
 * 000000018005399F: jle     loc_180053A91
 * 00000001800539A5: lea     rcx, dword_1802190F0
 * 00000001800539AC: call    _Init_thread_header
 * 00000001800539B1: cmp     cs:dword_1802190F0, r14d
 * 00000001800539B8: jnz     loc_180053A91
 * 00000001800539BE: mov     r8d, 1A50h
 * 00000001800539C4: lea     rdx, unk_180187410
 * 00000001800539CB: lea     rcx, [rbp+9E10h+var_71A0]
 * 00000001800539D2: call    sub_180043DEC
 * 00000001800539D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800539DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800539E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800539E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800539EA: mov     r9d, esi
 * 00000001800539ED: mov     r8d, esi
 * 00000001800539F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800539F5: lea     rcx, [rbp+9E10h+var_2E0]
 * 00000001800539FC: call    sub_180043DD8
 * 0000000180053A01: movups  xmm0, xmmword ptr [rax]
 * 0000000180053A04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053A09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053A0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053A12: call    sub_180043E00
 * 0000000180053A17: mov     r8, rax
 * 0000000180053A1A: mov     r9d, r12d
 * 0000000180053A1D: mov     edx, 1A8h
 * 0000000180053A22: lea     rcx, [rbp+9E10h+var_E80]; Src
 * 0000000180053A29: call    sub_1800CF2C8
 * 0000000180053A2E: nop
 * 0000000180053A2F: mov     r8, rax
 * 0000000180053A32: mov     rdx, r13
 * 0000000180053A35: lea     rcx, [rbp+9E10h+var_EA0]
 * 0000000180053A3C: call    sub_180043BDC
 * 0000000180053A41: nop
 * 0000000180053A42: lea     r8, aVertex; "/Vertex"
 * 0000000180053A49: mov     rdx, rax
 * 0000000180053A4C: lea     rcx, [rbp+9E10h+var_EC0]
 * 0000000180053A53: call    sub_18002C218
 * 0000000180053A58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053A5D: mov     rcx, rax
 * 0000000180053A60: call    sub_1800CF3A0
 * 0000000180053A65: mov     cs:byte_1802190EC, al
 * 0000000180053A6B: lea     rcx, [rbp+9E10h+var_EA0]; void *
 * 0000000180053A72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053A77: nop
 * 0000000180053A78: lea     rcx, [rbp+9E10h+var_E80]; void *
 * 0000000180053A7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053A84: nop
 * 0000000180053A85: lea     rcx, dword_1802190F0
 * 0000000180053A8C: call    _Init_thread_footer
 * 0000000180053A91: mov     rax, [rdi+rbx*8]
 * 0000000180053A95: mov     ecx, [r15+rax]
 * 0000000180053A99: cmp     cs:dword_1802190F8, ecx
 * 0000000180053A9F: jle     loc_180053B91
 * 0000000180053AA5: lea     rcx, dword_1802190F8
 * 0000000180053AAC: call    _Init_thread_header
 * 0000000180053AB1: cmp     cs:dword_1802190F8, r14d
 * 0000000180053AB8: jnz     loc_180053B91
 * 0000000180053ABE: mov     r8d, 1A50h
 * 0000000180053AC4: lea     rdx, unk_180187410
 * 0000000180053ACB: lea     rcx, [rbp+9E10h+var_7190]
 * 0000000180053AD2: call    sub_180043DEC
 * 0000000180053AD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180053ADA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053AE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180053AE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180053AEA: mov     r9d, esi
 * 0000000180053AED: mov     r8d, esi
 * 0000000180053AF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053AF5: lea     rcx, [rbp+9E10h+var_2C0]
 * 0000000180053AFC: call    sub_180043DD8
 * 0000000180053B01: movups  xmm0, xmmword ptr [rax]
 * 0000000180053B04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053B09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053B0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053B12: call    sub_180043E00
 * 0000000180053B17: mov     r8, rax
 * 0000000180053B1A: mov     r9d, r12d
 * 0000000180053B1D: mov     edx, 1AAh
 * 0000000180053B22: lea     rcx, [rbp+9E10h+var_E20]; Src
 * 0000000180053B29: call    sub_1800CF2C8
 * 0000000180053B2E: nop
 * 0000000180053B2F: mov     r8, rax
 * 0000000180053B32: mov     rdx, r13
 * 0000000180053B35: lea     rcx, [rbp+9E10h+var_E40]
 * 0000000180053B3C: call    sub_180043BDC
 * 0000000180053B41: nop
 * 0000000180053B42: lea     r8, aVertex; "/Vertex"
 * 0000000180053B49: mov     rdx, rax
 * 0000000180053B4C: lea     rcx, [rbp+9E10h+var_E60]
 * 0000000180053B53: call    sub_18002C218
 * 0000000180053B58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053B5D: mov     rcx, rax
 * 0000000180053B60: call    sub_1800CF3A0
 * 0000000180053B65: mov     cs:byte_1802190F4, al
 * 0000000180053B6B: lea     rcx, [rbp+9E10h+var_E40]; void *
 * 0000000180053B72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053B77: nop
 * 0000000180053B78: lea     rcx, [rbp+9E10h+var_E20]; void *
 * 0000000180053B7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053B84: nop
 * 0000000180053B85: lea     rcx, dword_1802190F8
 * 0000000180053B8C: call    _Init_thread_footer
 * 0000000180053B91: mov     rax, [rdi+rbx*8]
 * 0000000180053B95: mov     ecx, [r15+rax]
 * 0000000180053B99: cmp     cs:dword_180219100, ecx
 * 0000000180053B9F: jle     loc_180053C91
 * 0000000180053BA5: lea     rcx, dword_180219100
 * 0000000180053BAC: call    _Init_thread_header
 * 0000000180053BB1: cmp     cs:dword_180219100, r14d
 * 0000000180053BB8: jnz     loc_180053C91
 * 0000000180053BBE: mov     r8d, 1A50h
 * 0000000180053BC4: lea     rdx, unk_180187410
 * 0000000180053BCB: lea     rcx, [rbp+9E10h+var_7180]
 * 0000000180053BD2: call    sub_180043DEC
 * 0000000180053BD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180053BDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053BE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180053BE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180053BEA: mov     r9d, esi
 * 0000000180053BED: mov     r8d, esi
 * 0000000180053BF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053BF5: lea     rcx, [rbp+9E10h+var_2A0]
 * 0000000180053BFC: call    sub_180043DD8
 * 0000000180053C01: movups  xmm0, xmmword ptr [rax]
 * 0000000180053C04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053C09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053C0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053C12: call    sub_180043E00
 * 0000000180053C17: mov     r8, rax
 * 0000000180053C1A: mov     r9d, r12d
 * 0000000180053C1D: mov     edx, 1B0h
 * 0000000180053C22: lea     rcx, [rbp+9E10h+var_DC0]; Src
 * 0000000180053C29: call    sub_1800CF2C8
 * 0000000180053C2E: nop
 * 0000000180053C2F: mov     r8, rax
 * 0000000180053C32: mov     rdx, r13
 * 0000000180053C35: lea     rcx, [rbp+9E10h+var_DE0]
 * 0000000180053C3C: call    sub_180043BDC
 * 0000000180053C41: nop
 * 0000000180053C42: lea     r8, aVertex; "/Vertex"
 * 0000000180053C49: mov     rdx, rax
 * 0000000180053C4C: lea     rcx, [rbp+9E10h+var_E00]
 * 0000000180053C53: call    sub_18002C218
 * 0000000180053C58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053C5D: mov     rcx, rax
 * 0000000180053C60: call    sub_1800CF3A0
 * 0000000180053C65: mov     cs:byte_1802190FC, al
 * 0000000180053C6B: lea     rcx, [rbp+9E10h+var_DE0]; void *
 * 0000000180053C72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053C77: nop
 * 0000000180053C78: lea     rcx, [rbp+9E10h+var_DC0]; void *
 * 0000000180053C7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053C84: nop
 * 0000000180053C85: lea     rcx, dword_180219100
 * 0000000180053C8C: call    _Init_thread_footer
 * 0000000180053C91: mov     rax, [rdi+rbx*8]
 * 0000000180053C95: mov     ecx, [r15+rax]
 * 0000000180053C99: cmp     cs:dword_180219108, ecx
 * 0000000180053C9F: jle     loc_180053D91
 * 0000000180053CA5: lea     rcx, dword_180219108
 * 0000000180053CAC: call    _Init_thread_header
 * 0000000180053CB1: cmp     cs:dword_180219108, r14d
 * 0000000180053CB8: jnz     loc_180053D91
 * 0000000180053CBE: mov     r8d, 1A50h
 * 0000000180053CC4: lea     rdx, unk_180187410
 * 0000000180053CCB: lea     rcx, [rbp+9E10h+var_7170]
 * 0000000180053CD2: call    sub_180043DEC
 * 0000000180053CD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180053CDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053CE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180053CE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180053CEA: mov     r9d, esi
 * 0000000180053CED: mov     r8d, esi
 * 0000000180053CF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053CF5: lea     rcx, [rbp+9E10h+var_280]
 * 0000000180053CFC: call    sub_180043DD8
 * 0000000180053D01: movups  xmm0, xmmword ptr [rax]
 * 0000000180053D04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053D09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053D0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053D12: call    sub_180043E00
 * 0000000180053D17: mov     r8, rax
 * 0000000180053D1A: mov     r9d, r12d
 * 0000000180053D1D: mov     edx, 1B2h
 * 0000000180053D22: lea     rcx, [rbp+9E10h+var_D60]; Src
 * 0000000180053D29: call    sub_1800CF2C8
 * 0000000180053D2E: nop
 * 0000000180053D2F: mov     r8, rax
 * 0000000180053D32: mov     rdx, r13
 * 0000000180053D35: lea     rcx, [rbp+9E10h+var_D80]
 * 0000000180053D3C: call    sub_180043BDC
 * 0000000180053D41: nop
 * 0000000180053D42: lea     r8, aVertex; "/Vertex"
 * 0000000180053D49: mov     rdx, rax
 * 0000000180053D4C: lea     rcx, [rbp+9E10h+var_DA0]
 * 0000000180053D53: call    sub_18002C218
 * 0000000180053D58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053D5D: mov     rcx, rax
 * 0000000180053D60: call    sub_1800CF3A0
 * 0000000180053D65: mov     cs:byte_180219104, al
 * 0000000180053D6B: lea     rcx, [rbp+9E10h+var_D80]; void *
 * 0000000180053D72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053D77: nop
 * 0000000180053D78: lea     rcx, [rbp+9E10h+var_D60]; void *
 * 0000000180053D7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053D84: nop
 * 0000000180053D85: lea     rcx, dword_180219108
 * 0000000180053D8C: call    _Init_thread_footer
 * 0000000180053D91: mov     rax, [rdi+rbx*8]
 * 0000000180053D95: mov     ecx, [r15+rax]
 * 0000000180053D99: cmp     cs:dword_180219110, ecx
 * 0000000180053D9F: jle     loc_180053E91
 * 0000000180053DA5: lea     rcx, dword_180219110
 * 0000000180053DAC: call    _Init_thread_header
 * 0000000180053DB1: cmp     cs:dword_180219110, r14d
 * 0000000180053DB8: jnz     loc_180053E91
 * 0000000180053DBE: mov     r8d, 1A50h
 * 0000000180053DC4: lea     rdx, unk_180187410
 * 0000000180053DCB: lea     rcx, [rbp+9E10h+var_7160]
 * 0000000180053DD2: call    sub_180043DEC
 * 0000000180053DD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180053DDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053DE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180053DE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180053DEA: mov     r9d, esi
 * 0000000180053DED: mov     r8d, esi
 * 0000000180053DF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053DF5: lea     rcx, [rbp+9E10h+var_260]
 * 0000000180053DFC: call    sub_180043DD8
 * 0000000180053E01: movups  xmm0, xmmword ptr [rax]
 * 0000000180053E04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053E09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053E0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053E12: call    sub_180043E00
 * 0000000180053E17: mov     r8, rax
 * 0000000180053E1A: mov     r9d, r12d
 * 0000000180053E1D: mov     edx, 1B8h
 * 0000000180053E22: lea     rcx, [rbp+9E10h+var_D00]; Src
 * 0000000180053E29: call    sub_1800CF2C8
 * 0000000180053E2E: nop
 * 0000000180053E2F: mov     r8, rax
 * 0000000180053E32: mov     rdx, r13
 * 0000000180053E35: lea     rcx, [rbp+9E10h+var_D20]
 * 0000000180053E3C: call    sub_180043BDC
 * 0000000180053E41: nop
 * 0000000180053E42: lea     r8, aVertex; "/Vertex"
 * 0000000180053E49: mov     rdx, rax
 * 0000000180053E4C: lea     rcx, [rbp+9E10h+var_D40]
 * 0000000180053E53: call    sub_18002C218
 * 0000000180053E58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053E5D: mov     rcx, rax
 * 0000000180053E60: call    sub_1800CF3A0
 * 0000000180053E65: mov     cs:byte_18021910C, al
 * 0000000180053E6B: lea     rcx, [rbp+9E10h+var_D20]; void *
 * 0000000180053E72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053E77: nop
 * 0000000180053E78: lea     rcx, [rbp+9E10h+var_D00]; void *
 * 0000000180053E7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053E84: nop
 * 0000000180053E85: lea     rcx, dword_180219110
 * 0000000180053E8C: call    _Init_thread_footer
 * 0000000180053E91: mov     rax, [rdi+rbx*8]
 * 0000000180053E95: mov     ecx, [r15+rax]
 * 0000000180053E99: cmp     cs:dword_180219118, ecx
 * 0000000180053E9F: jle     loc_180053F91
 * 0000000180053EA5: lea     rcx, dword_180219118
 * 0000000180053EAC: call    _Init_thread_header
 * 0000000180053EB1: cmp     cs:dword_180219118, r14d
 * 0000000180053EB8: jnz     loc_180053F91
 * 0000000180053EBE: mov     r8d, 1A50h
 * 0000000180053EC4: lea     rdx, unk_180187410
 * 0000000180053ECB: lea     rcx, [rbp+9E10h+var_7150]
 * 0000000180053ED2: call    sub_180043DEC
 * 0000000180053ED7: movups  xmm0, xmmword ptr [rax]
 * 0000000180053EDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053EE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180053EE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180053EEA: mov     r9d, esi
 * 0000000180053EED: mov     r8d, esi
 * 0000000180053EF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053EF5: lea     rcx, [rbp+9E10h+var_240]
 * 0000000180053EFC: call    sub_180043DD8
 * 0000000180053F01: movups  xmm0, xmmword ptr [rax]
 * 0000000180053F04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053F09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180053F0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180053F12: call    sub_180043E00
 * 0000000180053F17: mov     r8, rax
 * 0000000180053F1A: mov     r9d, r12d
 * 0000000180053F1D: mov     edx, 1BAh
 * 0000000180053F22: lea     rcx, [rbp+9E10h+var_CA0]; Src
 * 0000000180053F29: call    sub_1800CF2C8
 * 0000000180053F2E: nop
 * 0000000180053F2F: mov     r8, rax
 * 0000000180053F32: mov     rdx, r13
 * 0000000180053F35: lea     rcx, [rbp+9E10h+var_CC0]
 * 0000000180053F3C: call    sub_180043BDC
 * 0000000180053F41: nop
 * 0000000180053F42: lea     r8, aVertex; "/Vertex"
 * 0000000180053F49: mov     rdx, rax
 * 0000000180053F4C: lea     rcx, [rbp+9E10h+var_CE0]
 * 0000000180053F53: call    sub_18002C218
 * 0000000180053F58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053F5D: mov     rcx, rax
 * 0000000180053F60: call    sub_1800CF3A0
 * 0000000180053F65: mov     cs:byte_180219114, al
 * 0000000180053F6B: lea     rcx, [rbp+9E10h+var_CC0]; void *
 * 0000000180053F72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053F77: nop
 * 0000000180053F78: lea     rcx, [rbp+9E10h+var_CA0]; void *
 * 0000000180053F7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053F84: nop
 * 0000000180053F85: lea     rcx, dword_180219118
 * 0000000180053F8C: call    _Init_thread_footer
 * 0000000180053F91: mov     rax, [rdi+rbx*8]
 * 0000000180053F95: mov     ecx, [r15+rax]
 * 0000000180053F99: cmp     cs:dword_180219120, ecx
 * 0000000180053F9F: jle     loc_180054091
 * 0000000180053FA5: lea     rcx, dword_180219120
 * 0000000180053FAC: call    _Init_thread_header
 * 0000000180053FB1: cmp     cs:dword_180219120, r14d
 * 0000000180053FB8: jnz     loc_180054091
 * 0000000180053FBE: mov     r8d, 1050h
 * 0000000180053FC4: lea     rdx, unk_1801863C0
 * 0000000180053FCB: lea     rcx, [rbp+9E10h+var_7140]
 * 0000000180053FD2: call    sub_180043DEC
 * 0000000180053FD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180053FDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053FE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180053FE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180053FEA: mov     r9d, esi
 * 0000000180053FED: mov     r8d, esi
 * 0000000180053FF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053FF5: lea     rcx, [rbp+9E10h+var_220]
 * 0000000180053FFC: call    sub_180043DD8
 * 0000000180054001: movups  xmm0, xmmword ptr [rax]
 * 0000000180054004: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054009: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005400D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054012: call    sub_180043E00
 * 0000000180054017: mov     r8, rax
 * 000000018005401A: mov     r9d, r12d
 * 000000018005401D: mov     edx, 1C0h
 * 0000000180054022: lea     rcx, [rbp+9E10h+var_C40]; Src
 * 0000000180054029: call    sub_1800CF2C8
 * 000000018005402E: nop
 * 000000018005402F: mov     r8, rax
 * 0000000180054032: mov     rdx, r13
 * 0000000180054035: lea     rcx, [rbp+9E10h+var_C60]
 * 000000018005403C: call    sub_180043BDC
 * 0000000180054041: nop
 * 0000000180054042: lea     r8, aVertex; "/Vertex"
 * 0000000180054049: mov     rdx, rax
 * 000000018005404C: lea     rcx, [rbp+9E10h+var_C80]
 * 0000000180054053: call    sub_18002C218
 * 0000000180054058: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005405D: mov     rcx, rax
 * 0000000180054060: call    sub_1800CF3A0
 * 0000000180054065: mov     cs:byte_18021911C, al
 * 000000018005406B: lea     rcx, [rbp+9E10h+var_C60]; void *
 * 0000000180054072: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054077: nop
 * 0000000180054078: lea     rcx, [rbp+9E10h+var_C40]; void *
 * 000000018005407F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054084: nop
 * 0000000180054085: lea     rcx, dword_180219120
 * 000000018005408C: call    _Init_thread_footer
 * 0000000180054091: mov     rax, [rdi+rbx*8]
 * 0000000180054095: mov     ecx, [r15+rax]
 * 0000000180054099: cmp     cs:dword_180219128, ecx
 * 000000018005409F: jle     loc_180054191
 * 00000001800540A5: lea     rcx, dword_180219128
 * 00000001800540AC: call    _Init_thread_header
 * 00000001800540B1: cmp     cs:dword_180219128, r14d
 * 00000001800540B8: jnz     loc_180054191
 * 00000001800540BE: mov     r8d, 1050h
 * 00000001800540C4: lea     rdx, unk_1801863C0
 * 00000001800540CB: lea     rcx, [rbp+9E10h+var_7130]
 * 00000001800540D2: call    sub_180043DEC
 * 00000001800540D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800540DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800540E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800540E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800540EA: mov     r9d, esi
 * 00000001800540ED: mov     r8d, esi
 * 00000001800540F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800540F5: lea     rcx, [rbp+9E10h+var_200]
 * 00000001800540FC: call    sub_180043DD8
 * 0000000180054101: movups  xmm0, xmmword ptr [rax]
 * 0000000180054104: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054109: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005410D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054112: call    sub_180043E00
 * 0000000180054117: mov     r8, rax
 * 000000018005411A: mov     r9d, r12d
 * 000000018005411D: mov     edx, 1C2h
 * 0000000180054122: lea     rcx, [rbp+9E10h+var_BE0]; Src
 * 0000000180054129: call    sub_1800CF2C8
 * 000000018005412E: nop
 * 000000018005412F: mov     r8, rax
 * 0000000180054132: mov     rdx, r13
 * 0000000180054135: lea     rcx, [rbp+9E10h+var_C00]
 * 000000018005413C: call    sub_180043BDC
 * 0000000180054141: nop
 * 0000000180054142: lea     r8, aVertex; "/Vertex"
 * 0000000180054149: mov     rdx, rax
 * 000000018005414C: lea     rcx, [rbp+9E10h+var_C20]
 * 0000000180054153: call    sub_18002C218
 * 0000000180054158: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005415D: mov     rcx, rax
 * 0000000180054160: call    sub_1800CF3A0
 * 0000000180054165: mov     cs:byte_180219124, al
 * 000000018005416B: lea     rcx, [rbp+9E10h+var_C00]; void *
 * 0000000180054172: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054177: nop
 * 0000000180054178: lea     rcx, [rbp+9E10h+var_BE0]; void *
 * 000000018005417F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054184: nop
 * 0000000180054185: lea     rcx, dword_180219128
 * 000000018005418C: call    _Init_thread_footer
 * 0000000180054191: mov     rax, [rdi+rbx*8]
 * 0000000180054195: mov     ecx, [r15+rax]
 * 0000000180054199: cmp     cs:dword_180219130, ecx
 * 000000018005419F: jle     loc_180054291
 * 00000001800541A5: lea     rcx, dword_180219130
 * 00000001800541AC: call    _Init_thread_header
 * 00000001800541B1: cmp     cs:dword_180219130, r14d
 * 00000001800541B8: jnz     loc_180054291
 * 00000001800541BE: mov     r8d, 1050h
 * 00000001800541C4: lea     rdx, unk_1801863C0
 * 00000001800541CB: lea     rcx, [rbp+9E10h+var_7120]
 * 00000001800541D2: call    sub_180043DEC
 * 00000001800541D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800541DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800541E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800541E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800541EA: mov     r9d, esi
 * 00000001800541ED: mov     r8d, esi
 * 00000001800541F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800541F5: lea     rcx, [rbp+9E10h+var_1E0]
 * 00000001800541FC: call    sub_180043DD8
 * 0000000180054201: movups  xmm0, xmmword ptr [rax]
 * 0000000180054204: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054209: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005420D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054212: call    sub_180043E00
 * 0000000180054217: mov     r8, rax
 * 000000018005421A: mov     r9d, r12d
 * 000000018005421D: mov     edx, 1C8h
 * 0000000180054222: lea     rcx, [rbp+9E10h+var_B80]; Src
 * 0000000180054229: call    sub_1800CF2C8
 * 000000018005422E: nop
 * 000000018005422F: mov     r8, rax
 * 0000000180054232: mov     rdx, r13
 * 0000000180054235: lea     rcx, [rbp+9E10h+var_BA0]
 * 000000018005423C: call    sub_180043BDC
 * 0000000180054241: nop
 * 0000000180054242: lea     r8, aVertex; "/Vertex"
 * 0000000180054249: mov     rdx, rax
 * 000000018005424C: lea     rcx, [rbp+9E10h+var_BC0]
 * 0000000180054253: call    sub_18002C218
 * 0000000180054258: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005425D: mov     rcx, rax
 * 0000000180054260: call    sub_1800CF3A0
 * 0000000180054265: mov     cs:byte_18021912C, al
 * 000000018005426B: lea     rcx, [rbp+9E10h+var_BA0]; void *
 * 0000000180054272: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054277: nop
 * 0000000180054278: lea     rcx, [rbp+9E10h+var_B80]; void *
 * 000000018005427F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054284: nop
 * 0000000180054285: lea     rcx, dword_180219130
 * 000000018005428C: call    _Init_thread_footer
 * 0000000180054291: mov     rax, [rdi+rbx*8]
 * 0000000180054295: mov     ecx, [r15+rax]
 * 0000000180054299: cmp     cs:dword_180219138, ecx
 * 000000018005429F: jle     loc_180054391
 * 00000001800542A5: lea     rcx, dword_180219138
 * 00000001800542AC: call    _Init_thread_header
 * 00000001800542B1: cmp     cs:dword_180219138, r14d
 * 00000001800542B8: jnz     loc_180054391
 * 00000001800542BE: mov     r8d, 1050h
 * 00000001800542C4: lea     rdx, unk_1801863C0
 * 00000001800542CB: lea     rcx, [rbp+9E10h+var_7110]
 * 00000001800542D2: call    sub_180043DEC
 * 00000001800542D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800542DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800542E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800542E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800542EA: mov     r9d, esi
 * 00000001800542ED: mov     r8d, esi
 * 00000001800542F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800542F5: lea     rcx, [rbp+9E10h+var_1C0]
 * 00000001800542FC: call    sub_180043DD8
 * 0000000180054301: movups  xmm0, xmmword ptr [rax]
 * 0000000180054304: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054309: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005430D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054312: call    sub_180043E00
 * 0000000180054317: mov     r8, rax
 * 000000018005431A: mov     r9d, r12d
 * 000000018005431D: mov     edx, 1CAh
 * 0000000180054322: lea     rcx, [rbp+9E10h+var_B20]; Src
 * 0000000180054329: call    sub_1800CF2C8
 * 000000018005432E: nop
 * 000000018005432F: mov     r8, rax
 * 0000000180054332: mov     rdx, r13
 * 0000000180054335: lea     rcx, [rbp+9E10h+var_B40]
 * 000000018005433C: call    sub_180043BDC
 * 0000000180054341: nop
 * 0000000180054342: lea     r8, aVertex; "/Vertex"
 * 0000000180054349: mov     rdx, rax
 * 000000018005434C: lea     rcx, [rbp+9E10h+var_B60]
 * 0000000180054353: call    sub_18002C218
 * 0000000180054358: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005435D: mov     rcx, rax
 * 0000000180054360: call    sub_1800CF3A0
 * 0000000180054365: mov     cs:byte_180219134, al
 * 000000018005436B: lea     rcx, [rbp+9E10h+var_B40]; void *
 * 0000000180054372: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054377: nop
 * 0000000180054378: lea     rcx, [rbp+9E10h+var_B20]; void *
 * 000000018005437F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054384: nop
 * 0000000180054385: lea     rcx, dword_180219138
 * 000000018005438C: call    _Init_thread_footer
 * 0000000180054391: mov     rax, [rdi+rbx*8]
 * 0000000180054395: mov     ecx, [r15+rax]
 * 0000000180054399: cmp     cs:dword_180219140, ecx
 * 000000018005439F: jle     loc_180054491
 * 00000001800543A5: lea     rcx, dword_180219140
 * 00000001800543AC: call    _Init_thread_header
 * 00000001800543B1: cmp     cs:dword_180219140, r14d
 * 00000001800543B8: jnz     loc_180054491
 * 00000001800543BE: mov     r8d, 1050h
 * 00000001800543C4: lea     rdx, unk_1801863C0
 * 00000001800543CB: lea     rcx, [rbp+9E10h+var_7100]
 * 00000001800543D2: call    sub_180043DEC
 * 00000001800543D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800543DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800543E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800543E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800543EA: mov     r9d, esi
 * 00000001800543ED: mov     r8d, esi
 * 00000001800543F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800543F5: lea     rcx, [rbp+9E10h+var_1A0]
 * 00000001800543FC: call    sub_180043DD8
 * 0000000180054401: movups  xmm0, xmmword ptr [rax]
 * 0000000180054404: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054409: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005440D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054412: call    sub_180043E00
 * 0000000180054417: mov     r8, rax
 * 000000018005441A: mov     r9d, r12d
 * 000000018005441D: mov     edx, 1D0h
 * 0000000180054422: lea     rcx, [rbp+9E10h+var_AC0]; Src
 * 0000000180054429: call    sub_1800CF2C8
 * 000000018005442E: nop
 * 000000018005442F: mov     r8, rax
 * 0000000180054432: mov     rdx, r13
 * 0000000180054435: lea     rcx, [rbp+9E10h+var_AE0]
 * 000000018005443C: call    sub_180043BDC
 * 0000000180054441: nop
 * 0000000180054442: lea     r8, aVertex; "/Vertex"
 * 0000000180054449: mov     rdx, rax
 * 000000018005444C: lea     rcx, [rbp+9E10h+var_B00]
 * 0000000180054453: call    sub_18002C218
 * 0000000180054458: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005445D: mov     rcx, rax
 * 0000000180054460: call    sub_1800CF3A0
 * 0000000180054465: mov     cs:byte_18021913C, al
 * 000000018005446B: lea     rcx, [rbp+9E10h+var_AE0]; void *
 * 0000000180054472: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054477: nop
 * 0000000180054478: lea     rcx, [rbp+9E10h+var_AC0]; void *
 * 000000018005447F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054484: nop
 * 0000000180054485: lea     rcx, dword_180219140
 * 000000018005448C: call    _Init_thread_footer
 * 0000000180054491: mov     rax, [rdi+rbx*8]
 * 0000000180054495: mov     ecx, [r15+rax]
 * 0000000180054499: cmp     cs:dword_180219148, ecx
 * 000000018005449F: jle     loc_180054591
 * 00000001800544A5: lea     rcx, dword_180219148
 * 00000001800544AC: call    _Init_thread_header
 * 00000001800544B1: cmp     cs:dword_180219148, r14d
 * 00000001800544B8: jnz     loc_180054591
 * 00000001800544BE: mov     r8d, 1050h
 * 00000001800544C4: lea     rdx, unk_1801863C0
 * 00000001800544CB: lea     rcx, [rbp+9E10h+var_70F0]
 * 00000001800544D2: call    sub_180043DEC
 * 00000001800544D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800544DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800544E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800544E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800544EA: mov     r9d, esi
 * 00000001800544ED: mov     r8d, esi
 * 00000001800544F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800544F5: lea     rcx, [rbp+9E10h+var_180]
 * 00000001800544FC: call    sub_180043DD8
 * 0000000180054501: movups  xmm0, xmmword ptr [rax]
 * 0000000180054504: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054509: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005450D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054512: call    sub_180043E00
 * 0000000180054517: mov     r8, rax
 * 000000018005451A: mov     r9d, r12d
 * 000000018005451D: mov     edx, 1D2h
 * 0000000180054522: lea     rcx, [rbp+9E10h+var_A60]; Src
 * 0000000180054529: call    sub_1800CF2C8
 * 000000018005452E: nop
 * 000000018005452F: mov     r8, rax
 * 0000000180054532: mov     rdx, r13
 * 0000000180054535: lea     rcx, [rbp+9E10h+var_A80]
 * 000000018005453C: call    sub_180043BDC
 * 0000000180054541: nop
 * 0000000180054542: lea     r8, aVertex; "/Vertex"
 * 0000000180054549: mov     rdx, rax
 * 000000018005454C: lea     rcx, [rbp+9E10h+var_AA0]
 * 0000000180054553: call    sub_18002C218
 * 0000000180054558: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005455D: mov     rcx, rax
 * 0000000180054560: call    sub_1800CF3A0
 * 0000000180054565: mov     cs:byte_180219144, al
 * 000000018005456B: lea     rcx, [rbp+9E10h+var_A80]; void *
 * 0000000180054572: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054577: nop
 * 0000000180054578: lea     rcx, [rbp+9E10h+var_A60]; void *
 * 000000018005457F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054584: nop
 * 0000000180054585: lea     rcx, dword_180219148
 * 000000018005458C: call    _Init_thread_footer
 * 0000000180054591: mov     rax, [rdi+rbx*8]
 * 0000000180054595: mov     ecx, [r15+rax]
 * 0000000180054599: cmp     cs:dword_180219150, ecx
 * 000000018005459F: jle     loc_180054691
 * 00000001800545A5: lea     rcx, dword_180219150
 * 00000001800545AC: call    _Init_thread_header
 * 00000001800545B1: cmp     cs:dword_180219150, r14d
 * 00000001800545B8: jnz     loc_180054691
 * 00000001800545BE: mov     r8d, 1050h
 * 00000001800545C4: lea     rdx, unk_1801863C0
 * 00000001800545CB: lea     rcx, [rbp+9E10h+var_70E0]
 * 00000001800545D2: call    sub_180043DEC
 * 00000001800545D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800545DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800545E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800545E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800545EA: mov     r9d, esi
 * 00000001800545ED: mov     r8d, esi
 * 00000001800545F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800545F5: lea     rcx, [rbp+9E10h+var_160]
 * 00000001800545FC: call    sub_180043DD8
 * 0000000180054601: movups  xmm0, xmmword ptr [rax]
 * 0000000180054604: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054609: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005460D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054612: call    sub_180043E00
 * 0000000180054617: mov     r8, rax
 * 000000018005461A: mov     r9d, r12d
 * 000000018005461D: mov     edx, 1D8h
 * 0000000180054622: lea     rcx, [rbp+9E10h+var_A00]; Src
 * 0000000180054629: call    sub_1800CF2C8
 * 000000018005462E: nop
 * 000000018005462F: mov     r8, rax
 * 0000000180054632: mov     rdx, r13
 * 0000000180054635: lea     rcx, [rbp+9E10h+var_A20]
 * 000000018005463C: call    sub_180043BDC
 * 0000000180054641: nop
 * 0000000180054642: lea     r8, aVertex; "/Vertex"
 * 0000000180054649: mov     rdx, rax
 * 000000018005464C: lea     rcx, [rbp+9E10h+var_A40]
 * 0000000180054653: call    sub_18002C218
 * 0000000180054658: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005465D: mov     rcx, rax
 * 0000000180054660: call    sub_1800CF3A0
 * 0000000180054665: mov     cs:byte_18021914C, al
 * 000000018005466B: lea     rcx, [rbp+9E10h+var_A20]; void *
 * 0000000180054672: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054677: nop
 * 0000000180054678: lea     rcx, [rbp+9E10h+var_A00]; void *
 * 000000018005467F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054684: nop
 * 0000000180054685: lea     rcx, dword_180219150
 * 000000018005468C: call    _Init_thread_footer
 * 0000000180054691: mov     rax, [rdi+rbx*8]
 * 0000000180054695: mov     ecx, [r15+rax]
 * 0000000180054699: cmp     cs:dword_180219158, ecx
 * 000000018005469F: jle     loc_180054791
 * 00000001800546A5: lea     rcx, dword_180219158
 * 00000001800546AC: call    _Init_thread_header
 * 00000001800546B1: cmp     cs:dword_180219158, r14d
 * 00000001800546B8: jnz     loc_180054791
 * 00000001800546BE: mov     r8d, 1050h
 * 00000001800546C4: lea     rdx, unk_1801863C0
 * 00000001800546CB: lea     rcx, [rbp+9E10h+var_70D0]
 * 00000001800546D2: call    sub_180043DEC
 * 00000001800546D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800546DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800546E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800546E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800546EA: mov     r9d, esi
 * 00000001800546ED: mov     r8d, esi
 * 00000001800546F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800546F5: lea     rcx, [rbp+9E10h+var_140]
 * 00000001800546FC: call    sub_180043DD8
 * 0000000180054701: movups  xmm0, xmmword ptr [rax]
 * 0000000180054704: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054709: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005470D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054712: call    sub_180043E00
 * 0000000180054717: mov     r8, rax
 * 000000018005471A: mov     r9d, r12d
 * 000000018005471D: mov     edx, 1DAh
 * 0000000180054722: lea     rcx, [rbp+9E10h+var_9A0]; Src
 * 0000000180054729: call    sub_1800CF2C8
 * 000000018005472E: nop
 * 000000018005472F: mov     r8, rax
 * 0000000180054732: mov     rdx, r13
 * 0000000180054735: lea     rcx, [rbp+9E10h+var_9C0]
 * 000000018005473C: call    sub_180043BDC
 * 0000000180054741: nop
 * 0000000180054742: lea     r8, aVertex; "/Vertex"
 * 0000000180054749: mov     rdx, rax
 * 000000018005474C: lea     rcx, [rbp+9E10h+var_9E0]
 * 0000000180054753: call    sub_18002C218
 * 0000000180054758: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005475D: mov     rcx, rax
 * 0000000180054760: call    sub_1800CF3A0
 * 0000000180054765: mov     cs:byte_180219154, al
 * 000000018005476B: lea     rcx, [rbp+9E10h+var_9C0]; void *
 * 0000000180054772: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054777: nop
 * 0000000180054778: lea     rcx, [rbp+9E10h+var_9A0]; void *
 * 000000018005477F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054784: nop
 * 0000000180054785: lea     rcx, dword_180219158
 * 000000018005478C: call    _Init_thread_footer
 * 0000000180054791: mov     rax, [rdi+rbx*8]
 * 0000000180054795: mov     ecx, [r15+rax]
 * 0000000180054799: cmp     cs:dword_180219160, ecx
 * 000000018005479F: jle     loc_180054891
 * 00000001800547A5: lea     rcx, dword_180219160
 * 00000001800547AC: call    _Init_thread_header
 * 00000001800547B1: cmp     cs:dword_180219160, r14d
 * 00000001800547B8: jnz     loc_180054891
 * 00000001800547BE: mov     r8d, 1A50h
 * 00000001800547C4: lea     rdx, unk_180187410
 * 00000001800547CB: lea     rcx, [rbp+9E10h+var_70C0]
 * 00000001800547D2: call    sub_180043DEC
 * 00000001800547D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800547DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800547E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800547E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800547EA: mov     r9d, esi
 * 00000001800547ED: mov     r8d, esi
 * 00000001800547F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800547F5: lea     rcx, [rbp+9E10h+var_120]
 * 00000001800547FC: call    sub_180043DD8
 * 0000000180054801: movups  xmm0, xmmword ptr [rax]
 * 0000000180054804: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054809: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005480D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054812: call    sub_180043E00
 * 0000000180054817: mov     r8, rax
 * 000000018005481A: mov     r9d, r12d
 * 000000018005481D: mov     edx, 1E0h
 * 0000000180054822: lea     rcx, [rbp+9E10h+var_940]; Src
 * 0000000180054829: call    sub_1800CF2C8
 * 000000018005482E: nop
 * 000000018005482F: mov     r8, rax
 * 0000000180054832: mov     rdx, r13
 * 0000000180054835: lea     rcx, [rbp+9E10h+var_960]
 * 000000018005483C: call    sub_180043BDC
 * 0000000180054841: nop
 * 0000000180054842: lea     r8, aVertex; "/Vertex"
 * 0000000180054849: mov     rdx, rax
 * 000000018005484C: lea     rcx, [rbp+9E10h+var_980]
 * 0000000180054853: call    sub_18002C218
 * 0000000180054858: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005485D: mov     rcx, rax
 * 0000000180054860: call    sub_1800CF3A0
 * 0000000180054865: mov     cs:byte_18021915C, al
 * 000000018005486B: lea     rcx, [rbp+9E10h+var_960]; void *
 * 0000000180054872: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054877: nop
 * 0000000180054878: lea     rcx, [rbp+9E10h+var_940]; void *
 * 000000018005487F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054884: nop
 * 0000000180054885: lea     rcx, dword_180219160
 * 000000018005488C: call    _Init_thread_footer
 * 0000000180054891: mov     rax, [rdi+rbx*8]
 * 0000000180054895: mov     ecx, [r15+rax]
 * 0000000180054899: cmp     cs:dword_180219168, ecx
 * 000000018005489F: jle     loc_180054991
 * 00000001800548A5: lea     rcx, dword_180219168
 * 00000001800548AC: call    _Init_thread_header
 * 00000001800548B1: cmp     cs:dword_180219168, r14d
 * 00000001800548B8: jnz     loc_180054991
 * 00000001800548BE: mov     r8d, 1A50h
 * 00000001800548C4: lea     rdx, unk_180187410
 * 00000001800548CB: lea     rcx, [rbp+9E10h+var_70B0]
 * 00000001800548D2: call    sub_180043DEC
 * 00000001800548D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800548DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800548E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800548E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800548EA: mov     r9d, esi
 * 00000001800548ED: mov     r8d, esi
 * 00000001800548F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800548F5: lea     rcx, [rbp+9E10h+var_100]
 * 00000001800548FC: call    sub_180043DD8
 * 0000000180054901: movups  xmm0, xmmword ptr [rax]
 * 0000000180054904: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054909: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005490D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054912: call    sub_180043E00
 * 0000000180054917: mov     r8, rax
 * 000000018005491A: mov     r9d, r12d
 * 000000018005491D: mov     edx, 1E2h
 * 0000000180054922: lea     rcx, [rbp+9E10h+var_8E0]; Src
 * 0000000180054929: call    sub_1800CF2C8
 * 000000018005492E: nop
 * 000000018005492F: mov     r8, rax
 * 0000000180054932: mov     rdx, r13
 * 0000000180054935: lea     rcx, [rbp+9E10h+var_900]
 * 000000018005493C: call    sub_180043BDC
 * 0000000180054941: nop
 * 0000000180054942: lea     r8, aVertex; "/Vertex"
 * 0000000180054949: mov     rdx, rax
 * 000000018005494C: lea     rcx, [rbp+9E10h+var_920]
 * 0000000180054953: call    sub_18002C218
 * 0000000180054958: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005495D: mov     rcx, rax
 * 0000000180054960: call    sub_1800CF3A0
 * 0000000180054965: mov     cs:byte_180219164, al
 * 000000018005496B: lea     rcx, [rbp+9E10h+var_900]; void *
 * 0000000180054972: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054977: nop
 * 0000000180054978: lea     rcx, [rbp+9E10h+var_8E0]; void *
 * 000000018005497F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054984: nop
 * 0000000180054985: lea     rcx, dword_180219168
 * 000000018005498C: call    _Init_thread_footer
 * 0000000180054991: mov     rax, [rdi+rbx*8]
 * 0000000180054995: mov     ecx, [r15+rax]
 * 0000000180054999: cmp     cs:dword_180219170, ecx
 * 000000018005499F: jle     loc_180054A91
 * 00000001800549A5: lea     rcx, dword_180219170
 * 00000001800549AC: call    _Init_thread_header
 * 00000001800549B1: cmp     cs:dword_180219170, r14d
 * 00000001800549B8: jnz     loc_180054A91
 * 00000001800549BE: mov     r8d, 1A50h
 * 00000001800549C4: lea     rdx, unk_180187410
 * 00000001800549CB: lea     rcx, [rbp+9E10h+var_70A0]
 * 00000001800549D2: call    sub_180043DEC
 * 00000001800549D7: movups  xmm0, xmmword ptr [rax]
 * 00000001800549DA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800549E0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800549E6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800549EA: mov     r9d, esi
 * 00000001800549ED: mov     r8d, esi
 * 00000001800549F0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800549F5: lea     rcx, [rbp+9E10h+var_E0]
 * 00000001800549FC: call    sub_180043DD8
 * 0000000180054A01: movups  xmm0, xmmword ptr [rax]
 * 0000000180054A04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054A09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054A0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054A12: call    sub_180043E00
 * 0000000180054A17: mov     r8, rax
 * 0000000180054A1A: mov     r9d, r12d
 * 0000000180054A1D: mov     edx, 1E8h
 * 0000000180054A22: lea     rcx, [rbp+9E10h+var_880]; Src
 * 0000000180054A29: call    sub_1800CF2C8
 * 0000000180054A2E: nop
 * 0000000180054A2F: mov     r8, rax
 * 0000000180054A32: mov     rdx, r13
 * 0000000180054A35: lea     rcx, [rbp+9E10h+var_8A0]
 * 0000000180054A3C: call    sub_180043BDC
 * 0000000180054A41: nop
 * 0000000180054A42: lea     r8, aVertex; "/Vertex"
 * 0000000180054A49: mov     rdx, rax
 * 0000000180054A4C: lea     rcx, [rbp+9E10h+var_8C0]
 * 0000000180054A53: call    sub_18002C218
 * 0000000180054A58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054A5D: mov     rcx, rax
 * 0000000180054A60: call    sub_1800CF3A0
 * 0000000180054A65: mov     cs:byte_18021916C, al
 * 0000000180054A6B: lea     rcx, [rbp+9E10h+var_8A0]; void *
 * 0000000180054A72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054A77: nop
 * 0000000180054A78: lea     rcx, [rbp+9E10h+var_880]; void *
 * 0000000180054A7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054A84: nop
 * 0000000180054A85: lea     rcx, dword_180219170
 * 0000000180054A8C: call    _Init_thread_footer
 * 0000000180054A91: mov     rax, [rdi+rbx*8]
 * 0000000180054A95: mov     ecx, [r15+rax]
 * 0000000180054A99: cmp     cs:dword_180219178, ecx
 * 0000000180054A9F: jle     loc_180054B91
 * 0000000180054AA5: lea     rcx, dword_180219178
 * 0000000180054AAC: call    _Init_thread_header
 * 0000000180054AB1: cmp     cs:dword_180219178, r14d
 * 0000000180054AB8: jnz     loc_180054B91
 * 0000000180054ABE: mov     r8d, 1A50h
 * 0000000180054AC4: lea     rdx, unk_180187410
 * 0000000180054ACB: lea     rcx, [rbp+9E10h+var_7090]
 * 0000000180054AD2: call    sub_180043DEC
 * 0000000180054AD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180054ADA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054AE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180054AE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180054AEA: mov     r9d, esi
 * 0000000180054AED: mov     r8d, esi
 * 0000000180054AF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054AF5: lea     rcx, [rbp+9E10h+var_C0]
 * 0000000180054AFC: call    sub_180043DD8
 * 0000000180054B01: movups  xmm0, xmmword ptr [rax]
 * 0000000180054B04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054B09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054B0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054B12: call    sub_180043E00
 * 0000000180054B17: mov     r8, rax
 * 0000000180054B1A: mov     r9d, r12d
 * 0000000180054B1D: mov     edx, 1EAh
 * 0000000180054B22: lea     rcx, [rbp+9E10h+var_820]; Src
 * 0000000180054B29: call    sub_1800CF2C8
 * 0000000180054B2E: nop
 * 0000000180054B2F: mov     r8, rax
 * 0000000180054B32: mov     rdx, r13
 * 0000000180054B35: lea     rcx, [rbp+9E10h+var_840]
 * 0000000180054B3C: call    sub_180043BDC
 * 0000000180054B41: nop
 * 0000000180054B42: lea     r8, aVertex; "/Vertex"
 * 0000000180054B49: mov     rdx, rax
 * 0000000180054B4C: lea     rcx, [rbp+9E10h+var_860]
 * 0000000180054B53: call    sub_18002C218
 * 0000000180054B58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054B5D: mov     rcx, rax
 * 0000000180054B60: call    sub_1800CF3A0
 * 0000000180054B65: mov     cs:byte_180219174, al
 * 0000000180054B6B: lea     rcx, [rbp+9E10h+var_840]; void *
 * 0000000180054B72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054B77: nop
 * 0000000180054B78: lea     rcx, [rbp+9E10h+var_820]; void *
 * 0000000180054B7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054B84: nop
 * 0000000180054B85: lea     rcx, dword_180219178
 * 0000000180054B8C: call    _Init_thread_footer
 * 0000000180054B91: mov     rax, [rdi+rbx*8]
 * 0000000180054B95: mov     ecx, [r15+rax]
 * 0000000180054B99: cmp     cs:dword_180219180, ecx
 * 0000000180054B9F: jle     loc_180054C91
 * 0000000180054BA5: lea     rcx, dword_180219180
 * 0000000180054BAC: call    _Init_thread_header
 * 0000000180054BB1: cmp     cs:dword_180219180, r14d
 * 0000000180054BB8: jnz     loc_180054C91
 * 0000000180054BBE: mov     r8d, 1A50h
 * 0000000180054BC4: lea     rdx, unk_180187410
 * 0000000180054BCB: lea     rcx, [rbp+9E10h+var_7080]
 * 0000000180054BD2: call    sub_180043DEC
 * 0000000180054BD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180054BDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054BE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180054BE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180054BEA: mov     r9d, esi
 * 0000000180054BED: mov     r8d, esi
 * 0000000180054BF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054BF5: lea     rcx, [rbp+9E10h+var_A0]
 * 0000000180054BFC: call    sub_180043DD8
 * 0000000180054C01: movups  xmm0, xmmword ptr [rax]
 * 0000000180054C04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054C09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054C0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054C12: call    sub_180043E00
 * 0000000180054C17: mov     r8, rax
 * 0000000180054C1A: mov     r9d, r12d
 * 0000000180054C1D: mov     edx, 1F0h
 * 0000000180054C22: lea     rcx, [rbp+9E10h+var_7C0]; Src
 * 0000000180054C29: call    sub_1800CF2C8
 * 0000000180054C2E: nop
 * 0000000180054C2F: mov     r8, rax
 * 0000000180054C32: mov     rdx, r13
 * 0000000180054C35: lea     rcx, [rbp+9E10h+var_7E0]
 * 0000000180054C3C: call    sub_180043BDC
 * 0000000180054C41: nop
 * 0000000180054C42: lea     r8, aVertex; "/Vertex"
 * 0000000180054C49: mov     rdx, rax
 * 0000000180054C4C: lea     rcx, [rbp+9E10h+var_800]
 * 0000000180054C53: call    sub_18002C218
 * 0000000180054C58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054C5D: mov     rcx, rax
 * 0000000180054C60: call    sub_1800CF3A0
 * 0000000180054C65: mov     cs:byte_18021917C, al
 * 0000000180054C6B: lea     rcx, [rbp+9E10h+var_7E0]; void *
 * 0000000180054C72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054C77: nop
 * 0000000180054C78: lea     rcx, [rbp+9E10h+var_7C0]; void *
 * 0000000180054C7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054C84: nop
 * 0000000180054C85: lea     rcx, dword_180219180
 * 0000000180054C8C: call    _Init_thread_footer
 * 0000000180054C91: mov     rax, [rdi+rbx*8]
 * 0000000180054C95: mov     ecx, [r15+rax]
 * 0000000180054C99: cmp     cs:dword_180219188, ecx
 * 0000000180054C9F: jle     loc_180054D91
 * 0000000180054CA5: lea     rcx, dword_180219188
 * 0000000180054CAC: call    _Init_thread_header
 * 0000000180054CB1: cmp     cs:dword_180219188, r14d
 * 0000000180054CB8: jnz     loc_180054D91
 * 0000000180054CBE: mov     r8d, 1A50h
 * 0000000180054CC4: lea     rdx, unk_180187410
 * 0000000180054CCB: lea     rcx, [rbp+9E10h+var_7070]
 * 0000000180054CD2: call    sub_180043DEC
 * 0000000180054CD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180054CDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054CE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180054CE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180054CEA: mov     r9d, esi
 * 0000000180054CED: mov     r8d, esi
 * 0000000180054CF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054CF5: lea     rcx, [rbp+9E10h+var_80]
 * 0000000180054CFC: call    sub_180043DD8
 * 0000000180054D01: movups  xmm0, xmmword ptr [rax]
 * 0000000180054D04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054D09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054D0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054D12: call    sub_180043E00
 * 0000000180054D17: mov     r8, rax
 * 0000000180054D1A: mov     r9d, r12d
 * 0000000180054D1D: mov     edx, 1F2h
 * 0000000180054D22: lea     rcx, [rbp+9E10h+var_760]; Src
 * 0000000180054D29: call    sub_1800CF2C8
 * 0000000180054D2E: nop
 * 0000000180054D2F: mov     r8, rax
 * 0000000180054D32: mov     rdx, r13
 * 0000000180054D35: lea     rcx, [rbp+9E10h+var_780]
 * 0000000180054D3C: call    sub_180043BDC
 * 0000000180054D41: nop
 * 0000000180054D42: lea     r8, aVertex; "/Vertex"
 * 0000000180054D49: mov     rdx, rax
 * 0000000180054D4C: lea     rcx, [rbp+9E10h+var_7A0]
 * 0000000180054D53: call    sub_18002C218
 * 0000000180054D58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054D5D: mov     rcx, rax
 * 0000000180054D60: call    sub_1800CF3A0
 * 0000000180054D65: mov     cs:byte_180219184, al
 * 0000000180054D6B: lea     rcx, [rbp+9E10h+var_780]; void *
 * 0000000180054D72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054D77: nop
 * 0000000180054D78: lea     rcx, [rbp+9E10h+var_760]; void *
 * 0000000180054D7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054D84: nop
 * 0000000180054D85: lea     rcx, dword_180219188
 * 0000000180054D8C: call    _Init_thread_footer
 * 0000000180054D91: mov     rax, [rdi+rbx*8]
 * 0000000180054D95: mov     ecx, [r15+rax]
 * 0000000180054D99: cmp     cs:dword_180219190, ecx
 * 0000000180054D9F: jle     loc_180054E91
 * 0000000180054DA5: lea     rcx, dword_180219190
 * 0000000180054DAC: call    _Init_thread_header
 * 0000000180054DB1: cmp     cs:dword_180219190, r14d
 * 0000000180054DB8: jnz     loc_180054E91
 * 0000000180054DBE: mov     r8d, 1A50h
 * 0000000180054DC4: lea     rdx, unk_180187410
 * 0000000180054DCB: lea     rcx, [rbp+9E10h+var_7060]
 * 0000000180054DD2: call    sub_180043DEC
 * 0000000180054DD7: movups  xmm0, xmmword ptr [rax]
 * 0000000180054DDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054DE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180054DE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180054DEA: mov     r9d, esi
 * 0000000180054DED: mov     r8d, esi
 * 0000000180054DF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054DF5: lea     rcx, [rbp+9E10h+var_60]
 * 0000000180054DFC: call    sub_180043DD8
 * 0000000180054E01: movups  xmm0, xmmword ptr [rax]
 * 0000000180054E04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054E09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054E0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054E12: call    sub_180043E00
 * 0000000180054E17: mov     r8, rax
 * 0000000180054E1A: mov     r9d, r12d
 * 0000000180054E1D: mov     edx, 1F8h
 * 0000000180054E22: lea     rcx, [rbp+9E10h+var_700]; Src
 * 0000000180054E29: call    sub_1800CF2C8
 * 0000000180054E2E: nop
 * 0000000180054E2F: mov     r8, rax
 * 0000000180054E32: mov     rdx, r13
 * 0000000180054E35: lea     rcx, [rbp+9E10h+var_720]
 * 0000000180054E3C: call    sub_180043BDC
 * 0000000180054E41: nop
 * 0000000180054E42: lea     r8, aVertex; "/Vertex"
 * 0000000180054E49: mov     rdx, rax
 * 0000000180054E4C: lea     rcx, [rbp+9E10h+var_740]
 * 0000000180054E53: call    sub_18002C218
 * 0000000180054E58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054E5D: mov     rcx, rax
 * 0000000180054E60: call    sub_1800CF3A0
 * 0000000180054E65: mov     cs:byte_18021918C, al
 * 0000000180054E6B: lea     rcx, [rbp+9E10h+var_720]; void *
 * 0000000180054E72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054E77: nop
 * 0000000180054E78: lea     rcx, [rbp+9E10h+var_700]; void *
 * 0000000180054E7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054E84: nop
 * 0000000180054E85: lea     rcx, dword_180219190
 * 0000000180054E8C: call    _Init_thread_footer
 * 0000000180054E91: mov     rax, [rdi+rbx*8]
 * 0000000180054E95: mov     ecx, [r15+rax]
 * 0000000180054E99: cmp     cs:dword_180219198, ecx
 * 0000000180054E9F: jle     loc_180054F91
 * 0000000180054EA5: lea     rcx, dword_180219198
 * 0000000180054EAC: call    _Init_thread_header
 * 0000000180054EB1: cmp     cs:dword_180219198, r14d
 * 0000000180054EB8: jnz     loc_180054F91
 * 0000000180054EBE: mov     r8d, 1A50h
 * 0000000180054EC4: lea     rdx, unk_180187410
 * 0000000180054ECB: lea     rcx, [rbp+9E10h+var_7050]
 * 0000000180054ED2: call    sub_180043DEC
 * 0000000180054ED7: movups  xmm0, xmmword ptr [rax]
 * 0000000180054EDA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054EE0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180054EE6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180054EEA: mov     r9d, esi
 * 0000000180054EED: mov     r8d, esi
 * 0000000180054EF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054EF5: lea     rcx, [rbp+9E10h+var_40]
 * 0000000180054EFC: call    sub_180043DD8
 * 0000000180054F01: movups  xmm0, xmmword ptr [rax]
 * 0000000180054F04: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054F09: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180054F0D: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180054F12: call    sub_180043E00
 * 0000000180054F17: mov     r8, rax
 * 0000000180054F1A: mov     r9d, r12d
 * 0000000180054F1D: mov     edx, 1FAh
 * 0000000180054F22: lea     rcx, [rbp+9E10h+var_6A0]; Src
 * 0000000180054F29: call    sub_1800CF2C8
 * 0000000180054F2E: nop
 * 0000000180054F2F: mov     r8, rax
 * 0000000180054F32: mov     rdx, r13
 * 0000000180054F35: lea     rcx, [rbp+9E10h+var_6C0]
 * 0000000180054F3C: call    sub_180043BDC
 * 0000000180054F41: nop
 * 0000000180054F42: lea     r8, aVertex; "/Vertex"
 * 0000000180054F49: mov     rdx, rax
 * 0000000180054F4C: lea     rcx, [rbp+9E10h+var_6E0]
 * 0000000180054F53: call    sub_18002C218
 * 0000000180054F58: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054F5D: mov     rcx, rax
 * 0000000180054F60: call    sub_1800CF3A0
 * 0000000180054F65: mov     cs:byte_180219194, al
 * 0000000180054F6B: lea     rcx, [rbp+9E10h+var_6C0]; void *
 * 0000000180054F72: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054F77: nop
 * 0000000180054F78: lea     rcx, [rbp+9E10h+var_6A0]; void *
 * 0000000180054F7F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054F84: nop
 * 0000000180054F85: lea     rcx, dword_180219198
 * 0000000180054F8C: call    _Init_thread_footer
 * 0000000180054F91: xor     eax, eax
 * 0000000180054F93: lea     r11, [rsp+9F10h+var_20]
 * 0000000180054F9B: mov     rbx, [r11+38h]
 * 0000000180054F9F: mov     rsi, [r11+40h]
 * 0000000180054FA3: mov     rdi, [r11+48h]
 * 0000000180054FA7: mov     rsp, r11
 * 0000000180054FAA: pop     r15
 * 0000000180054FAC: pop     r14
 * 0000000180054FAE: pop     r13
 * 0000000180054FB0: pop     r12
 * 0000000180054FB2: pop     rbp
 * 0000000180054FB3: retn
 */
