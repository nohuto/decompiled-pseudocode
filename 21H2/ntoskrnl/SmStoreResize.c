/*
 * XREFs of SmStoreResize @ 0x14092A7B8
 * Callers:
 *     SmcStoreResize @ 0x14092E1D8 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1403FDB00 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A668 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x14092A7B8
 * Reason: Hex-Rays returned no pseudocode for 0x14092A7B8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014092A7B8: mov     [rsp-8+arg_0], rbx
 * 000000014092A7BD: push    rbp
 * 000000014092A7BE: mov     rbp, rsp
 * 000000014092A7C1: sub     rsp, 60h
 * 000000014092A7C5: xor     r10d, r10d
 * 000000014092A7C8: mov     [rbp+var_8], 18h
 * 000000014092A7D0: neg     [rbp+arg_20]
 * 000000014092A7D3: lea     rax, [rbp+var_30]
 * 000000014092A7D7: mov     [rbp+var_10], rax
 * 000000014092A7DB: mov     rbx, r9
 * 000000014092A7DE: sbb     eax, eax
 * 000000014092A7E0: mov     [rbp+arg_10], r10
 * 000000014092A7E4: and     eax, 100h
 * 000000014092A7E9: mov     [rbp+SystemInformation], 1
 * 000000014092A7F0: add     eax, 6
 * 000000014092A7F3: mov     [rbp+var_14], 11h
 * 000000014092A7FA: mov     [rbp+var_30], eax
 * 000000014092A7FD: lea     r9d, [r10+18h]
 * 000000014092A801: mov     eax, [rbx]
 * 000000014092A803: mov     [rbp+var_28], eax
 * 000000014092A806: mov     [rbp+var_24], r10d
 * 000000014092A80A: mov     [rbp+var_2C], edx
 * 000000014092A80D: mov     [rbp+var_20], r8
 * 000000014092A811: test    ecx, ecx
 * 000000014092A813: jnz     short loc_14092A83A
 * 000000014092A815: mov     rcx, cs:DeviceObject; DeviceObject
 * 000000014092A81C: lea     rax, [rbp+arg_10]
 * 000000014092A820: mov     [rsp+60h+var_38], rax; __int64
 * 000000014092A825: lea     r8, [rbp+var_30]
 * 000000014092A829: mov     edx, 2281CCh
 * 000000014092A82E: mov     [rsp+60h+var_40], r9d; int
 * 000000014092A833: call    SmStorePhysicalRequestIssue
 * 000000014092A838: jmp     short loc_14092A850
 * 000000014092A83A: cmp     ecx, 1
 * 000000014092A83D: jnz     short loc_14092A859
 * 000000014092A83F: mov     r8d, r9d; SystemInformationLength
 * 000000014092A842: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 000000014092A846: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 000000014092A84B: call    ZwSetSystemInformation
 * 000000014092A850: mov     ecx, eax
 * 000000014092A852: mov     eax, [rbp+var_28]
 * 000000014092A855: mov     [rbx], eax
 * 000000014092A857: jmp     short loc_14092A85E
 * 000000014092A859: mov     ecx, 0C000000Dh
 * 000000014092A85E: mov     rbx, [rsp+60h+arg_0]
 * 000000014092A863: mov     eax, ecx
 * 000000014092A865: add     rsp, 60h
 * 000000014092A869: pop     rbp
 * 000000014092A86A: retn
 */
