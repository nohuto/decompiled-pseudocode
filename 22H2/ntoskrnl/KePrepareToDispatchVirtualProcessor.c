/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x14051B260
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiFlushCurrentRsb @ 0x140413380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x14051B260
 * Reason: Hex-Rays returned no pseudocode for 0x14051B260
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014051B260: mov     rax, rsp
 * 000000014051B263: mov     [rax+8], rbx
 * 000000014051B267: mov     [rax+10h], rsi
 * 000000014051B26B: mov     [rax+18h], rdi
 * 000000014051B26F: mov     [rax+20h], r14
 * 000000014051B273: push    r15
 * 000000014051B275: sub     rsp, 40h
 * 000000014051B279: mov     rbx, gs:20h
 * 000000014051B282: mov     r10, rdx
 * 000000014051B285: movups  xmm0, cs:KiSpeculationFeatures
 * 000000014051B28C: xor     edx, edx
 * 000000014051B28E: mov     r14, [rsp+48h+arg_20]
 * 000000014051B293: movsd   xmm1, cs:qword_140CFC4B0
 * 000000014051B29B: mov     r15, [rsp+48h+arg_28]
 * 000000014051B2A0: mov     [r10], dl
 * 000000014051B2A3: mov     [r8], dl
 * 000000014051B2A6: mov     [r9], dl
 * 000000014051B2A9: mov     [r14], dl
 * 000000014051B2AC: mov     [r15], rdx
 * 000000014051B2AF: movups  xmmword ptr [rax-28h], xmm0
 * 000000014051B2B3: movsd   qword ptr [rax-18h], xmm1
 * 000000014051B2B8: cli
 * 000000014051B2B9: test    cl, cl
 * 000000014051B2BB: jz      loc_14051B3EA
 * 000000014051B2C1: mov     rax, 1000000000h
 * 000000014051B2CB: test    [rsp+48h+var_28], rax
 * 000000014051B2D0: jnz     short loc_14051B2DB
 * 000000014051B2D2: mov     byte ptr [r8], 1
 * 000000014051B2D6: jmp     loc_14051B425
 * 000000014051B2DB: mov     rax, [rbx+8]
 * 000000014051B2DF: mov     rcx, [rax+220h]
 * 000000014051B2E6: mov     rsi, [rcx+9E0h]
 * 000000014051B2ED: test    rsi, rsi
 * 000000014051B2F0: jnz     short loc_14051B2F8
 * 000000014051B2F2: mov     byte ptr [r8], 1
 * 000000014051B2F6: jmp     short loc_14051B334
 * 000000014051B2F8: movzx   ecx, word ptr [rbx+6E0h]
 * 000000014051B2FF: test    cl, 8
 * 000000014051B302: jnz     loc_14051B3EA
 * 000000014051B308: test    byte ptr [rbx+6D6h], 1
 * 000000014051B30F: jz      short loc_14051B31A
 * 000000014051B311: test    cl, 10h
 * 000000014051B314: jnz     loc_14051B3EA
 * 000000014051B31A: test    byte ptr [rsp+48h+var_28], 10h
 * 000000014051B31F: jz      short loc_14051B330
 * 000000014051B321: test    [rsp+48h+var_28], 1000h
 * 000000014051B32A: jz      loc_14051B3EA
 * 000000014051B330: mov     byte ptr [r9], 1
 * 000000014051B334: movzx   eax, word ptr [rbx+6ECh]
 * 000000014051B33B: test    al, 2
 * 000000014051B33D: jz      short loc_14051B348
 * 000000014051B33F: xor     ecx, ecx
 * 000000014051B341: call    KiUpdateStibpPairing
 * 000000014051B346: jmp     short loc_14051B38F
 * 000000014051B348: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B34F: test    al, 4
 * 000000014051B351: jz      short loc_14051B373
 * 000000014051B353: mov     eax, 1
 * 000000014051B358: lea     ecx, [rax+48h]
 * 000000014051B35B: wrmsr
 * 000000014051B35D: mov     edi, 0FFFBh
 * 000000014051B362: and     [rbx+6E0h], di
 * 000000014051B369: mov     [r10], al
 * 000000014051B36C: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B373: test    al, 20h
 * 000000014051B375: jz      short loc_14051B388
 * 000000014051B377: call    KiFlushCurrentRsb
 * 000000014051B37C: mov     eax, 0FFDFh
 * 000000014051B381: and     [rbx+6E0h], ax
 * 000000014051B388: mov     [rbx+6D8h], rsi
 * 000000014051B38F: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B396: movzx   edx, word ptr [rbx+6D0h]
 * 000000014051B39D: movzx   ecx, word ptr [rbx+6E6h]
 * 000000014051B3A4: mov     [rbx+6D4h], ax
 * 000000014051B3AB: mov     rax, 20000000000h
 * 000000014051B3B5: mov     [rbx+6D2h], dx
 * 000000014051B3BC: test    [rsp+48h+var_28], rax
 * 000000014051B3C1: jz      short loc_14051B3CE
 * 000000014051B3C3: test    byte ptr [rbx+6D6h], 1
 * 000000014051B3CA: cmovnz  cx, dx
 * 000000014051B3CE: cmp     [rbx+6E4h], cx
 * 000000014051B3D5: jz      short loc_14051B425
 * 000000014051B3D7: movzx   eax, cx
 * 000000014051B3DA: mov     [r15], rax
 * 000000014051B3DD: mov     byte ptr [r14], 1
 * 000000014051B3E1: mov     [rbx+6E4h], cx
 * 000000014051B3E8: jmp     short loc_14051B425
 * 000000014051B3EA: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B3F1: mov     edi, 0FFFBh
 * 000000014051B3F6: test    al, 4
 * 000000014051B3F8: jz      short loc_14051B415
 * 000000014051B3FA: mov     eax, 1
 * 000000014051B3FF: lea     ecx, [rax+48h]
 * 000000014051B402: wrmsr
 * 000000014051B404: and     [rbx+6E0h], di
 * 000000014051B40B: mov     [r10], al
 * 000000014051B40E: movzx   eax, word ptr [rbx+6E0h]
 * 000000014051B415: test    al, 20h
 * 000000014051B417: jz      short loc_14051B425
 * 000000014051B419: call    KiFlushCurrentRsb
 * 000000014051B41E: and     [rbx+6E0h], di
 * 000000014051B425: mov     rbx, [rsp+48h+arg_0]
 * 000000014051B42A: mov     rsi, [rsp+48h+arg_8]
 * 000000014051B42F: mov     rdi, [rsp+48h+arg_10]
 * 000000014051B434: mov     r14, [rsp+48h+arg_18]
 * 000000014051B439: add     rsp, 40h
 * 000000014051B43D: pop     r15
 * 000000014051B43F: retn
 */
