/*
 * XREFs of sub_18007E531 @ 0x18007E531
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_18007E531 @ 0x18007E531
 * Reason: Hex-Rays returned no pseudocode for 0x18007E531
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018007E531: xor     r12d, r12d
 * 000000018007E534: lea     rsi, off_18019C348
 * 000000018007E53B: mov     rbx, [rsp+lpCriticalSection]
 * 000000018007E540: mov     r13, [rsp+arg_58]
 * 000000018007E545: mov     r15d, [rsp+arg_30]
 * 000000018007E54A: cmp     [rsp+arg_38], r12d
 * 000000018007E54F: jl      short loc_18007E59E
 * 000000018007E551: mov     rcx, cs:off_18019C348
 * 000000018007E558: cmp     rcx, rsi
 * 000000018007E55B: jz      short loc_18007E58B
 * 000000018007E55D: test    byte ptr [rcx+1Ch], 40h
 * 000000018007E561: jz      short loc_18007E58B
 * 000000018007E563: cmp     byte ptr [rcx+19h], 4
 * 000000018007E567: jb      short loc_18007E58B
 * 000000018007E569: mov     edx, 1Dh
 * 000000018007E56E: mov     rax, [rsp+arg_28]
 * 000000018007E573: mov     [rsp+arg_18], rax
 * 000000018007E578: mov     r9, r13
 * 000000018007E57B: lea     r8, unk_18015DFC8
 * 000000018007E582: mov     rcx, [rcx+10h]
 * 000000018007E586: call    sub_1800CB5A0
 * 000000018007E58B: mov     rcx, [rsp+arg_28]
 * 000000018007E590: mov     rax, [rcx]
 * 000000018007E593: mov     rax, [rax+8]
 * 000000018007E597: call    cs:__guard_dispatch_icall_fptr
 * 000000018007E59D: nop
 * 000000018007E59E: cmp     [rsp+arg_48], 0
 * 000000018007E5A4: jz      loc_180004D49
 * 000000018007E5AA: mov     rcx, rbx; lpCriticalSection
 * 000000018007E5AD: call    cs:LeaveCriticalSection
 * 000000018007E5B4: nop     dword ptr [rax+rax+00h]
 * 000000018007E5B9: nop
 * 000000018007E5BA: jmp     loc_180004D49
 */
