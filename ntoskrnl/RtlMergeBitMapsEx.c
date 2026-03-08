/*
 * XREFs of RtlMergeBitMapsEx @ 0x14039F630
 * Callers:
 *     MiMergePageNodes @ 0x14065893C (MiMergePageNodes.c)
 *     MiSelectRelocationStartHint @ 0x1406A1BE8 (MiSelectRelocationStartHint.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094C9E8 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMapsEx(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // r9
  __int64 result; // rax
  __int64 i; // r10

  v2 = *a1;
  result = *a2;
  if ( *a1 >= *a2 )
    v2 = *a2;
  if ( v2 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      result = a2[1];
      if ( v2 < 0x40 )
        break;
      *(_QWORD *)(a1[1] + i) |= *(_QWORD *)(result + i);
      v2 -= 64LL;
      if ( !v2 )
        return result;
    }
    result = ((1LL << v2) - 1) & *(_QWORD *)(i + result);
    *(_QWORD *)(a1[1] + i) |= result;
  }
  return result;
}
