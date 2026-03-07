_UNKNOWN **__fastcall VmpFillGpnRanges(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6)
{
  _UNKNOWN **result; // rax
  bool v7; // zf
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r11
  __int128 v17; // xmm0
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = a2[1] == 0;
  v18 = 0LL;
  if ( !v7 )
  {
    while ( 1 )
    {
      result = (_UNKNOWN **)VmpConvertPortionVpnRangeToGpnRange(a1, a2, 0xFFFFFFFFFFFFFFFFuLL, a6, &v18, 0);
      v12 = *((_QWORD *)&v18 + 1);
      if ( !*((_QWORD *)&v18 + 1) )
        return result;
      v13 = *a4;
      v14 = 16 * *a4;
      if ( !*a4 )
        break;
      v15 = *(_QWORD *)(v14 + a3 - 8);
      v16 = *(_QWORD *)(v14 + a3 - 16);
      if ( v16 + v15 == (_QWORD)v18 )
      {
        result = (_UNKNOWN **)(v15 + *((_QWORD *)&v18 + 1));
        *(_QWORD *)(v14 + a3 - 8) = v15 + *((_QWORD *)&v18 + 1);
      }
      else
      {
        if ( v16 != (_QWORD)v18 + *((_QWORD *)&v18 + 1) )
          break;
        result = (_UNKNOWN **)(v15 + *((_QWORD *)&v18 + 1));
        *(_QWORD *)(v14 + a3 - 16) = v18;
        *(_QWORD *)(v14 + a3 - 8) = v15 + v12;
      }
LABEL_9:
      if ( !a2[1] )
        return result;
    }
    v17 = v18;
    result = (_UNKNOWN **)(v13 + 1);
    *a4 = v13 + 1;
    *(_OWORD *)(v14 + a3) = v17;
    if ( v13 + 1 == a5 )
      return result;
    goto LABEL_9;
  }
  return result;
}
