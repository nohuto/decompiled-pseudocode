/*
 * XREFs of MiCombineWorkingSetTail @ 0x140651030
 * Callers:
 *     MiCombinePte @ 0x140650CA0 (MiCombinePte.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402D45CC (MiReleaseWalkLocks.c)
 *     MiProcessCrcList @ 0x1406A8670 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSetTail(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 168);
  if ( v1[1] == v1[2] )
  {
    MiReleaseWalkLocks(a1);
    MiProcessCrcList(
      v1[3],
      v1[4],
      v1[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL));
    v1[1] = 0LL;
  }
  return 0LL;
}
