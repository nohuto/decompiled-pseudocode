/*
 * XREFs of PsQueryThreadStartAddress @ 0x14025F3F0
 * Callers:
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     EtwpPsProvTraceThread @ 0x140629CD8 (EtwpPsProvTraceThread.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     sub_140A38080 @ 0x140A38080 (sub_140A38080.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return *(_QWORD *)(a1 + 1232);
  v3 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 1232);
  if ( (*(_DWORD *)(a1 + 1304) & 8) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 1104);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    if ( (*(_DWORD *)(a1 + 1304) & 8) == 0 )
      return v5;
  }
  return v3;
}
