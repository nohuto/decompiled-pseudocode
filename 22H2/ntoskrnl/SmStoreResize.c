/*
 * XREFs of SmStoreResize @ 0x14092A6A8
 * Callers:
 *     SmcStoreResize @ 0x14092E0C8 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1403FCFA0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A558 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x14092A6A8
 * Reason: Hex-Rays returned no pseudocode for 0x14092A6A8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014092A6A8: mov     [rsp-8+arg_0], rbx
 * 000000014092A6AD: push    rbp
 * 000000014092A6AE: mov     rbp, rsp
 * 000000014092A6B1: sub     rsp, 60h
 * 000000014092A6B5: xor     r10d, r10d
 * 000000014092A6B8: mov     [rbp+var_8], 18h
 * 000000014092A6C0: neg     [rbp+arg_20]
 * 000000014092A6C3: lea     rax, [rbp+var_30]
 * 000000014092A6C7: mov     [rbp+var_10], rax
 * 000000014092A6CB: mov     rbx, r9
 * 000000014092A6CE: sbb     eax, eax
 * 000000014092A6D0: mov     [rbp+arg_10], r10
 * 000000014092A6D4: and     eax, 100h
 * 000000014092A6D9: mov     [rbp+SystemInformation], 1
 * 000000014092A6E0: add     eax, 6
 * 000000014092A6E3: mov     [rbp+var_14], 11h
 * 000000014092A6EA: mov     [rbp+var_30], eax
 * 000000014092A6ED: lea     r9d, [r10+18h]
 * 000000014092A6F1: mov     eax, [rbx]
 * 000000014092A6F3: mov     [rbp+var_28], eax
 * 000000014092A6F6: mov     [rbp+var_24], r10d
 * 000000014092A6FA: mov     [rbp+var_2C], edx
 * 000000014092A6FD: mov     [rbp+var_20], r8
 * 000000014092A701: test    ecx, ecx
 * 000000014092A703: jnz     short loc_14092A72A
 * 000000014092A705: mov     rcx, cs:DeviceObject; DeviceObject
 * 000000014092A70C: lea     rax, [rbp+arg_10]
 * 000000014092A710: mov     [rsp+60h+var_38], rax; __int64
 * 000000014092A715: lea     r8, [rbp+var_30]
 * 000000014092A719: mov     edx, 2281CCh
 * 000000014092A71E: mov     [rsp+60h+var_40], r9d; int
 * 000000014092A723: call    SmStorePhysicalRequestIssue
 * 000000014092A728: jmp     short loc_14092A740
 * 000000014092A72A: cmp     ecx, 1
 * 000000014092A72D: jnz     short loc_14092A749
 * 000000014092A72F: mov     r8d, r9d; SystemInformationLength
 * 000000014092A732: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 000000014092A736: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 000000014092A73B: call    ZwSetSystemInformation
 * 000000014092A740: mov     ecx, eax
 * 000000014092A742: mov     eax, [rbp+var_28]
 * 000000014092A745: mov     [rbx], eax
 * 000000014092A747: jmp     short loc_14092A74E
 * 000000014092A749: mov     ecx, 0C000000Dh
 * 000000014092A74E: mov     rbx, [rsp+60h+arg_0]
 * 000000014092A753: mov     eax, ecx
 * 000000014092A755: add     rsp, 60h
 * 000000014092A759: pop     rbp
 * 000000014092A75A: retn
 */
