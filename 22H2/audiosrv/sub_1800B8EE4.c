/*
 * XREFs of sub_1800B8EE4 @ 0x1800B8EE4
 * Callers:
 *     sub_1800B8EB0 @ 0x1800B8EB0 (sub_1800B8EB0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     sub_1800B90D4 @ 0x1800B90D4 (sub_1800B90D4.c)
 *     sub_1800BA358 @ 0x1800BA358 (sub_1800BA358.c)
 *     sub_1800BA504 @ 0x1800BA504 (sub_1800BA504.c)
 */

char __fastcall sub_1800B8EE4(__int64 a1, _OWORD *a2, unsigned int a3, __int128 *a4)
{
  int v8; // r9d
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char result; // al
  unsigned __int16 v17; // ax
  unsigned int v18; // eax
  __int128 v19; // [rsp+50h] [rbp-B0h]
  _OWORD v20[9]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v21; // [rsp+100h] [rbp+0h]

  memset(v20, 0, sizeof(v20));
  if ( (unsigned __int8)sub_1800B90D4(a1, v20, a3, 0LL) && DWORD1(v20[0]) == (unsigned int)sub_1800BA504() )
  {
    v9 = v20[1];
    *a2 = v20[0];
    v10 = v20[2];
    a2[1] = v9;
    v11 = v20[3];
    a2[2] = v10;
    v12 = v20[4];
    a2[3] = v11;
    v13 = v20[5];
    a2[4] = v12;
    v14 = v20[6];
    a2[5] = v13;
    v15 = v20[8];
    a2[6] = v14;
    result = 1;
    a2[7] = v20[7];
    a2[8] = v15;
  }
  else
  {
    v17 = 0;
    v19 = 0LL;
    if ( a4 )
    {
      v17 = *((_QWORD *)a4 + 3);
      v19 = *a4;
    }
    v21 = 0;
    v18 = sub_1800BA358(v19, v17, DWORD2(v19), v8);
    return sub_1800B90D4(a1, a2, a3, v18);
  }
  return result;
}
