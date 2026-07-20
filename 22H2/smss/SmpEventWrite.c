/*
 * XREFs of SmpEventWrite @ 0x14000A0B4
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140008450 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140009054 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x1400095C4 (SmpNtSerializeBoot.c)
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x14000A0B4
 * Reason: Hex-Rays returned no pseudocode for 0x14000A0B4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000A0B4: push    rbx
 * 000000014000A0B6: sub     rsp, 20h
 * 000000014000A0BA: mov     rbx, rcx
 * 000000014000A0BD: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 000000014000A0C4: test    rcx, rcx
 * 000000014000A0C7: jz      short loc_14000A0E0
 * 000000014000A0C9: mov     rdx, rbx; EventDescriptor
 * 000000014000A0CC: call    cs:__imp_EtwEventEnabled
 * 000000014000A0D3: nop     dword ptr [rax+rax+00h]
 * 000000014000A0D8: test    al, al
 * 000000014000A0DA: jnz     loc_140012282
 * 000000014000A0E0: add     rsp, 20h
 * 000000014000A0E4: pop     rbx
 * 000000014000A0E5: retn
 * 0000000140012282: mov     rcx, cs:SmpTraceHandle
 * 0000000140012289: xor     r9d, r9d
 * 000000014001228C: xor     r8d, r8d
 * 000000014001228F: mov     rdx, rbx
 * 0000000140012292: call    cs:__imp_EtwEventWrite
 * 0000000140012299: nop     dword ptr [rax+rax+00h]
 * 000000014001229E: nop
 * 000000014001229F: jmp     loc_14000A0E0
 */
