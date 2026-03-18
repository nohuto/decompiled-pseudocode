/*
 * XREFs of RtlEnumRvaListFirst @ 0x1407C163C
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406B1380 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     RtlGetRvaListIteratorState @ 0x1407C1688 (RtlGetRvaListIteratorState.c)
 */

__int64 __fastcall RtlEnumRvaListFirst(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  *a2 = **(_DWORD **)(a1 + 16);
  a2[2] = 4;
  if ( a3 )
    *a3 = RtlGetRvaListIteratorState();
  return *a2;
}
