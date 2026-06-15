/*
 * XREFs of ?setSBUpLow@@YAXPEAUthreadmbcinfostruct@@@Z @ 0x18004F1D0
 * Callers:
 *     sub_18004EF00 @ 0x18004EF00 (sub_18004EF00.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 */

void __fastcall setSBUpLow(unsigned __int64 a1)
{
  void *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  DWORD LastError; // ebx
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v27[1264]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v28[32]; // [rsp+548h] [rbp+440h] BYREF
  unsigned __int64 *v29; // [rsp+568h] [rbp+460h]
  int v30; // [rsp+570h] [rbp+468h]
  int v31; // [rsp+574h] [rbp+46Ch]

  if ( *(_QWORD *)(a1 + 360) )
  {
    v3 = *(_QWORD *)(a1 + 376);
    v25 = 0LL;
    sub_1800D2EA8(&v25, v3);
    v4 = v25;
    if ( *(_BYTE *)(a1 + 320) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 48LL))(v25, *(_QWORD *)(a1 + 360));
      *(_BYTE *)(a1 + 320) = 0;
    }
    v24 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v24) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, *(_QWORD *)(a1 + 360));
      v6 = (_DWORD *)sub_180008448(v5, sub_1800B6240)[1];
      if ( *v6 > 4u )
      {
        v30 = 8;
        v29 = &v26;
        v31 = 0;
        v26 = a1 & -(__int64)(a1 != 8);
        sub_1800521E8((_DWORD)v6, (unsigned int)&unk_180167AA7, 0, 0, 3, (__int64)v28);
      }
    }
    memset(v27, 0, sizeof(v27));
    v7 = 9LL;
    v8 = (_OWORD *)(a1 + 328);
    v9 = v27;
    do
    {
      v10 = v9[1];
      *v8 = *v9;
      v11 = v9[2];
      v8[1] = v10;
      v12 = v9[3];
      v8[2] = v11;
      v13 = v9[4];
      v8[3] = v12;
      v14 = v9[5];
      v8[4] = v13;
      v15 = v9[6];
      v8[5] = v14;
      v16 = v9[7];
      v9 += 8;
      v8[6] = v15;
      v8 += 8;
      *(v8 - 1) = v16;
      --v7;
    }
    while ( v7 );
    v17 = v9[1];
    *v8 = *v9;
    v18 = v9[2];
    v8[1] = v17;
    v19 = v9[3];
    v8[2] = v18;
    v20 = v9[4];
    v8[3] = v19;
    v21 = v9[5];
    v8[4] = v20;
    v22 = v9[6];
    v8[5] = v21;
    v8[6] = v22;
    sub_18000F708(&v24);
    sub_18000F708(&v25);
  }
  v2 = *(void **)(a1 + 1592);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 1592) = 0LL;
}
