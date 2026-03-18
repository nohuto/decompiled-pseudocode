/*
 * XREFs of PiDmCacheDataFree @ 0x14078D7A4
 * Callers:
 *     PiDmObjectRelease @ 0x1406D6C18 (PiDmObjectRelease.c)
 *     PiDmObjectProcessPropertyChange @ 0x140789C4C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D7DC (PiDmObjectUpdateCachedObjectProperty.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1406D6C18 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmCacheDataFree(__int64 a1)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)a1 - 5;
  if ( v2 )
  {
    if ( v2 == 1 )
      PiDmObjectRelease(*(char **)(a1 + 16));
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
