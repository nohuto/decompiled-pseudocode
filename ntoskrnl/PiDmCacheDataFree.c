/*
 * XREFs of PiDmCacheDataFree @ 0x14078C870
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x1406CC044 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406D0A64 (PiDmObjectUpdateCachedObjectProperty.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmCacheDataFree(__int64 a1)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)a1 - 5;
  if ( v2 )
  {
    if ( v2 == 1 )
      PiDmObjectRelease(*(unsigned int **)(a1 + 16));
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x5A706E50u);
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
