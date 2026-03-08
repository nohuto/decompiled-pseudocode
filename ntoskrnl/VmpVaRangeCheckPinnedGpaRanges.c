/*
 * XREFs of VmpVaRangeCheckPinnedGpaRanges @ 0x1405F9384
 * Callers:
 *     VmpRemoveMemoryRange @ 0x1405F88E4 (VmpRemoveMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x1405F9144 (VmpUnpinMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpVaRangeCheckPinnedGpaRanges(__int64 a1)
{
  __int64 v1; // r8
  __int64 *i; // rdx

  v1 = 0LL;
  for ( i = *(__int64 **)(a1 + 40); i != (__int64 *)(a1 + 40); i = (__int64 *)*i )
  {
    if ( (i[8] & 1) != 0 )
      return v1;
  }
  v1 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) &= ~1u;
  return v1;
}
