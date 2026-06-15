/*
 * XREFs of sub_18011A900 @ 0x18011A900
 * Callers:
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800374C8 @ 0x1800374C8 (sub_1800374C8.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180048DA8 @ 0x180048DA8 (sub_180048DA8.c)
 *     sub_180048E18 @ 0x180048E18 (sub_180048E18.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011C754 @ 0x18011C754 (sub_18011C754.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011A900(_QWORD *a1, __int128 *a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // r9d
  int v14; // edx
  __int64 v15; // rdi
  int v16; // eax
  int v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int128 v22; // [rsp+60h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h]

  v21 = 0LL;
  v20 = 0LL;
  if ( !(unsigned int)sub_180022F30(a1, a3) )
  {
    v9 = sub_18011C754(a1, a3, 0LL, &v20);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 7910;
      goto LABEL_6;
    }
LABEL_7:
    if ( v20 )
    {
      sub_180048790(&v22, a4);
      v19 = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
      v19 = 0LL;
      if ( v12 )
      {
        if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, a4, v22, &v19) < 0 )
        {
          v10 = -2004287480;
          v13 = -2004287480;
          v14 = 7930;
          goto LABEL_23;
        }
        v18 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(v19, &v18) < 0 )
        {
          v10 = -2004287480;
          v13 = -2004287480;
          v14 = 7934;
          goto LABEL_23;
        }
        if ( v18 )
        {
          v10 = -2004287480;
          v13 = -2004287480;
          v14 = 7935;
          goto LABEL_23;
        }
      }
      else
      {
        if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 56LL))(v20, a4, v22, &v19) < 0 )
        {
          v10 = -2004287480;
          v13 = -2004287480;
          v14 = 7921;
LABEL_23:
          sub_18004BD84(
            (int)retaddr,
            v14,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            v13);
          sub_18000F708(&v19);
          sub_18000F708((__int64 *)&v22);
          goto LABEL_27;
        }
        v18 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(v19, &v18) < 0 )
        {
          v10 = -2004287480;
          v13 = -2004287480;
          v14 = 7924;
          goto LABEL_23;
        }
        if ( v18 )
        {
          v10 = -2004287480;
          v13 = -2004287480;
          v14 = 7925;
          goto LABEL_23;
        }
      }
      sub_180048E18(&v21, v19);
      v15 = v21;
      v16 = sub_180048DA8(v21);
      v10 = v16;
      if ( v16 < 0 )
      {
        v13 = v16;
        v14 = 7940;
        goto LABEL_23;
      }
      sub_18000F708(&v19);
      sub_18000F708((__int64 *)&v22);
    }
    else
    {
      sub_180048E18(&v21, a4);
      v15 = v21;
    }
    v21 = 0LL;
    *a5 = v15;
    v10 = 0;
    goto LABEL_27;
  }
  v22 = *a2;
  v9 = sub_1800374C8(a1, &v22, 0, a3, 0LL, &v20, 0LL);
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_7;
  v11 = 7906;
LABEL_6:
  sub_18004BD84(
    (int)retaddr,
    v11,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v9);
LABEL_27:
  sub_18000F708(&v20);
  sub_18000F708(&v21);
  return v10;
}
