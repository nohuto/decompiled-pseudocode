/*
 * XREFs of ArbInitializeRangeList @ 0x1409331D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlInvertRangeListEx @ 0x14081F400 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x14081F540 (RtlAddRange.c)
 *     RtlFreeRangeList @ 0x140820250 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbInitializeRangeList(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rsi
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  unsigned __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+40h] BYREF

  v13[1] = v13;
  v13[3] = 0LL;
  v13[0] = v13;
  v6 = a3;
  v12 = 0LL;
  v14 = 0LL;
  v13[2] = 0LL;
  v7 = (unsigned __int64)&a3[20 * a2];
  if ( (unsigned __int64)a3 >= v7 )
  {
LABEL_9:
    v10 = RtlInvertRangeListEx(a4, (__int64)v13, 0, 0LL, 0LL);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = *v6;
      v9 = *(_DWORD *)(a1 + 32);
      if ( v8 == v9 || (_BYTE)v8 == 7 && v9 == 3 )
      {
        v10 = (*(__int64 (__fastcall **)(unsigned __int8 *, unsigned __int64 *, __int64 *))(a1 + 136))(v6, &v12, &v14);
        if ( v10 < 0 )
          break;
        if ( v14 )
        {
          v10 = RtlAddRange((__int64)v13, v12, v12 + v14 - 1, 0, 3u, 0LL, 0LL);
          if ( v10 < 0 )
            break;
        }
      }
      v6 += 20;
      if ( (unsigned __int64)v6 >= v7 )
        goto LABEL_9;
    }
  }
  RtlFreeRangeList((__int64)v13);
  return (unsigned int)v10;
}
