/*
 * XREFs of VmpFillGpnRanges @ 0x1405A35D0
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x1405A47B4 (VmpPrefetchVirtualAddresses.c)
 * Callees:
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1405A30B0 (VmpConvertPortionVpnRangeToGpnRange.c)
 */

_UNKNOWN **__fastcall VmpFillGpnRanges(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6)
{
  _UNKNOWN **result; // rax
  bool v7; // zf
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r11
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = a2[1] == 0;
  v16 = 0LL;
  if ( !v7 )
  {
    while ( 1 )
    {
      result = (_UNKNOWN **)VmpConvertPortionVpnRangeToGpnRange(a1, a2, 0xFFFFFFFFFFFFFFFFuLL, a6, &v16);
      v12 = *((_QWORD *)&v16 + 1);
      if ( !*((_QWORD *)&v16 + 1) )
        return result;
      v13 = *a4;
      if ( !*a4 )
        break;
      v14 = *(_QWORD *)(a3 + 16 * v13 - 8);
      v15 = *(_QWORD *)(a3 + 16 * v13 - 16);
      if ( v15 + v14 == (_QWORD)v16 )
      {
        result = (_UNKNOWN **)(v14 + *((_QWORD *)&v16 + 1));
        *(_QWORD *)(a3 + 16 * v13 - 8) = v14 + *((_QWORD *)&v16 + 1);
      }
      else
      {
        if ( v15 != (_QWORD)v16 + *((_QWORD *)&v16 + 1) )
          break;
        result = (_UNKNOWN **)(v14 + *((_QWORD *)&v16 + 1));
        *(_QWORD *)(a3 + 16 * v13 - 16) = v16;
        *(_QWORD *)(a3 + 16 * v13 - 8) = v14 + v12;
      }
LABEL_9:
      if ( !a2[1] )
        return result;
    }
    *(_OWORD *)(a3 + 16 * v13) = v16;
    result = (_UNKNOWN **)(v13 + 1);
    *a4 = v13 + 1;
    if ( v13 + 1 == a5 )
      return result;
    goto LABEL_9;
  }
  return result;
}
