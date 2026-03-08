/*
 * XREFs of VmpVaMemoryRangeGetNext @ 0x1405F9314
 * Callers:
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1405F68BC (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpMergeMemoryRanges @ 0x1405F7BB4 (VmpMergeMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpVaMemoryRangeGetNext(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax
  _QWORD **v4; // rcx
  _QWORD *i; // rdx
  __int64 j; // r8

  v2 = 0LL;
  if ( a2 )
  {
    v4 = (_QWORD **)a2[1];
    if ( v4 )
    {
      for ( i = *v4; i; i = (_QWORD *)*i )
        v4 = (_QWORD **)i;
      return (__int64)v4;
    }
    else
    {
      for ( j = a2[2]; ; j = v2[2] )
      {
        v2 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v2 || (_QWORD *)*v2 == a2 )
          break;
        a2 = v2;
      }
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( (v3 & 1) != 0 )
    {
      if ( v3 != 1 )
        return v3 ^ ((a1 + 24) | 1);
    }
    else
    {
      return *(_QWORD *)(a1 + 32);
    }
  }
  return (__int64)v2;
}
