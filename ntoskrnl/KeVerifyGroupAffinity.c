/*
 * XREFs of KeVerifyGroupAffinity @ 0x140290374
 * Callers:
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 *     PspBuildCreateProcessContext @ 0x1407EEDE0 (PspBuildCreateProcessContext.c)
 *     IopConnectInterruptFullySpecified @ 0x140857BF0 (IopConnectInterruptFullySpecified.c)
 *     ExpProfileCreate @ 0x140A01038 (ExpProfileCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeVerifyGroupAffinity(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int16 *)(a1 + 8);
  return (unsigned __int16)v2 < (unsigned __int16)KiActiveGroups
      && (a2 || *(_QWORD *)a1)
      && (qword_140D1EFE8[v2] & *(_QWORD *)a1) == *(_QWORD *)a1
      && !(*(_WORD *)(a1 + 10) | (unsigned __int16)(*(_WORD *)(a1 + 12) | *(_WORD *)(a1 + 14)));
}
