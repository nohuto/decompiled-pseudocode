/*
 * XREFs of RtlMergeBitMapsEx @ 0x1403C714C
 * Callers:
 *     MiMergePageNodes @ 0x140562D24 (MiMergePageNodes.c)
 *     MiSelectRelocationStartHint @ 0x1406C2F44 (MiSelectRelocationStartHint.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140899000 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMapsEx(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // r10

  v2 = *a1;
  result = *a2;
  if ( *a1 >= *a2 )
    v2 = *a2;
  if ( v2 )
  {
    v4 = 0LL;
    do
    {
      result = a2[1];
      if ( v2 < 0x40 )
      {
        result = ((1LL << v2) - 1) & *(_QWORD *)(v4 + result);
        *(_QWORD *)(a1[1] + v4) |= result;
        v2 = 0LL;
      }
      else
      {
        v2 -= 64LL;
        *(_QWORD *)(a1[1] + v4) |= *(_QWORD *)(result + v4);
        v4 += 8LL;
      }
    }
    while ( v2 );
  }
  return result;
}
