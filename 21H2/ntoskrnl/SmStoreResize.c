/*
 * XREFs of SmStoreResize @ 0x14092A658
 * Callers:
 *     SmcStoreResize @ 0x14092E078 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1403FD920 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A508 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x14092A658
 * Reason: Hex-Rays returned no pseudocode for 0x14092A658
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014092A658: mov     [rsp-8+arg_0], rbx
 * 000000014092A65D: push    rbp
 * 000000014092A65E: mov     rbp, rsp
 * 000000014092A661: sub     rsp, 60h
 * 000000014092A665: xor     r10d, r10d
 * 000000014092A668: mov     [rbp+var_8], 18h
 * 000000014092A670: neg     [rbp+arg_20]
 * 000000014092A673: lea     rax, [rbp+var_30]
 * 000000014092A677: mov     [rbp+var_10], rax
 * 000000014092A67B: mov     rbx, r9
 * 000000014092A67E: sbb     eax, eax
 * 000000014092A680: mov     [rbp+arg_10], r10
 * 000000014092A684: and     eax, 100h
 * 000000014092A689: mov     [rbp+var_18], 1
 * 000000014092A690: add     eax, 6
 * 000000014092A693: mov     [rbp+var_14], 11h
 * 000000014092A69A: mov     [rbp+var_30], eax
 * 000000014092A69D: lea     r9d, [r10+18h]
 * 000000014092A6A1: mov     eax, [rbx]
 * 000000014092A6A3: mov     [rbp+var_28], eax
 * 000000014092A6A6: mov     [rbp+var_24], r10d
 * 000000014092A6AA: mov     [rbp+var_2C], edx
 * 000000014092A6AD: mov     [rbp+var_20], r8
 * 000000014092A6B1: test    ecx, ecx
 * 000000014092A6B3: jnz     short loc_14092A6DA
 * 000000014092A6B5: mov     rcx, cs:DeviceObject; DeviceObject
 * 000000014092A6BC: lea     rax, [rbp+arg_10]
 * 000000014092A6C0: mov     [rsp+60h+var_38], rax; __int64
 * 000000014092A6C5: lea     r8, [rbp+var_30]
 * 000000014092A6C9: mov     edx, 2281CCh
 * 000000014092A6CE: mov     [rsp+60h+var_40], r9d; int
 * 000000014092A6D3: call    SmStorePhysicalRequestIssue
 * 000000014092A6D8: jmp     short loc_14092A6F0
 * 000000014092A6DA: cmp     ecx, 1
 * 000000014092A6DD: jnz     short loc_14092A6F9
 * 000000014092A6DF: mov     r8d, r9d
 * 000000014092A6E2: lea     rdx, [rbp+var_18]
 * 000000014092A6E6: mov     ecx, 6Dh ; 'm'
 * 000000014092A6EB: call    ZwSetSystemInformation
 * 000000014092A6F0: mov     ecx, eax
 * 000000014092A6F2: mov     eax, [rbp+var_28]
 * 000000014092A6F5: mov     [rbx], eax
 * 000000014092A6F7: jmp     short loc_14092A6FE
 * 000000014092A6F9: mov     ecx, 0C000000Dh
 * 000000014092A6FE: mov     rbx, [rsp+60h+arg_0]
 * 000000014092A703: mov     eax, ecx
 * 000000014092A705: add     rsp, 60h
 * 000000014092A709: pop     rbp
 * 000000014092A70A: retn
 */
