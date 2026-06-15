/*
 * XREFs of sub_1800857E2 @ 0x1800857E2
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800857E2 @ 0x1800857E2
 * Reason: Hex-Rays returned no pseudocode for 0x1800857E2
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800857E2: xor     r12d, r12d
 * 00000001800857E5: mov     esi, [rsp+arg_80]
 * 00000001800857EC: mov     rbx, [rsp+arg_F0]
 * 00000001800857F4: mov     r13, [rsp+arg_B8]
 * 00000001800857FC: lea     r14, off_18019C348
 * 0000000180085803: mov     rcx, cs:off_18019C348
 * 000000018008580A: mov     edi, 80070057h
 * 000000018008580F: mov     r15, [rsp+arg_78]
 * 0000000180085817: mov     r15, [r15]
 * 000000018008581A: test    r15, r15
 * 000000018008581D: jz      short loc_180085851
 * 000000018008581F: call    cs:GetProcessHeap
 * 0000000180085826: nop     dword ptr [rax+rax+00h]
 * 000000018008582B: mov     rcx, rax; hHeap
 * 000000018008582E: mov     r8, r15; lpMem
 * 0000000180085831: xor     edx, edx; dwFlags
 * 0000000180085833: call    cs:HeapFree
 * 000000018008583A: nop     dword ptr [rax+rax+00h]
 * 000000018008583F: mov     rax, [rsp+arg_78]
 * 0000000180085847: mov     [rax], r12
 * 000000018008584A: mov     rcx, cs:off_18019C348
 * 0000000180085851: cmp     rcx, r14
 * 0000000180085854: jz      loc_180019BB5
 * 000000018008585A: test    dword ptr [rcx+1Ch], 100h
 * 0000000180085861: jz      loc_180019BB5
 * 0000000180085867: cmp     byte ptr [rcx+19h], 4
 * 000000018008586B: jb      loc_180019BB5
 * 0000000180085871: mov     edx, 20h ; ' '
 * 0000000180085876: mov     [rsp+arg_18], esi
 * 000000018008587A: mov     r9, [r13+0D8h]
 * 0000000180085881: lea     r8, unk_18015E3E8
 * 0000000180085888: mov     rcx, [rcx+10h]
 * 000000018008588C: call    sub_1800BEA04
 * 0000000180085891: nop
 * 0000000180085892: jmp     loc_180019BB5
 */
