/*
 * XREFs of PsQueryThreadStartAddress @ 0x1405A1A94
 * Callers:
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     EtwpPsProvTraceThread @ 0x1409E372C (EtwpPsProvTraceThread.c)
 *     sub_140B31730 @ 0x140B31730 (sub_140B31730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return *(_QWORD *)(a1 + 1312);
  v3 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 1312);
  if ( (*(_DWORD *)(a1 + 1384) & 8) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1184);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    if ( (*(_DWORD *)(a1 + 1384) & 8) == 0 )
      return v4;
  }
  return v3;
}
