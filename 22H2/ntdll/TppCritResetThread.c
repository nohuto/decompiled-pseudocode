/*
 * XREFs of TppCritResetThread @ 0x18004EDB4
 * Callers:
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D680 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtSetInformationObject @ 0x18009E050 (NtSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for TppCritResetThread @ 0x18004EDB4
 * Reason: Hex-Rays returned no pseudocode for 0x18004EDB4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018004EDB4: test    rcx, rcx
 * 000000018004EDB7: jnz     short loc_18004EDBB
 * 000000018004EDB9: retn
 * 000000018004EDBB: mov     [rsp+arg_18], rdi
 * 000000018004EDC0: mov     [rsp+Handle], rcx
 * 000000018004EDC5: push    r14
 * 000000018004EDC7: sub     rsp, 20h
 * 000000018004EDCB: xor     r14d, r14d
 * 000000018004EDCE: lea     r8, [rsp+28h+Handle]
 * 000000018004EDD3: lea     rdi, [r14-2]
 * 000000018004EDD7: mov     rcx, rdi
 * 000000018004EDDA: lea     r9d, [r14+8]
 * 000000018004EDDE: lea     edx, [r14+5]
 * 000000018004EDE2: call    NtSetInformationThread
 * 000000018004EDE7: lea     r9d, [r14+4]
 * 000000018004EDEB: mov     [rsp+28h+arg_10], r14d
 * 000000018004EDF0: lea     r8, [rsp+28h+arg_10]
 * 000000018004EDF5: mov     rcx, rdi
 * 000000018004EDF8: lea     edx, [rdi+14h]
 * 000000018004EDFB: call    NtSetInformationThread
 * 000000018004EE00: mov     rcx, [rsp+28h+Handle]
 * 000000018004EE05: lea     r9d, [r14+2]
 * 000000018004EE09: lea     r8, [rsp+28h+arg_8]
 * 000000018004EE0E: mov     [rsp+28h+arg_8], r14w
 * 000000018004EE14: lea     edx, [rdi+6]
 * 000000018004EE17: call    NtSetInformationObject
 * 000000018004EE1C: mov     rcx, [rsp+28h+Handle]; Handle
 * 000000018004EE21: call    NtClose
 * 000000018004EE26: lea     r9d, [r14+8]
 * 000000018004EE2A: mov     [rsp+28h+Handle], r14
 * 000000018004EE2F: lea     r8, [rsp+28h+Handle]
 * 000000018004EE34: mov     rcx, rdi
 * 000000018004EE37: lea     edx, [rdi+7]
 * 000000018004EE3A: call    NtSetInformationThread
 * 000000018004EE3F: mov     rdi, [rsp+28h+arg_18]
 * 000000018004EE44: add     rsp, 20h
 * 000000018004EE48: pop     r14
 * 000000018004EE4A: retn
 */
