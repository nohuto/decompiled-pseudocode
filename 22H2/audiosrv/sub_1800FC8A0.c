/*
 * XREFs of sub_1800FC8A0 @ 0x1800FC8A0
 * Callers:
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_1800FBF0C @ 0x1800FBF0C (sub_1800FBF0C.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_1800571F8 @ 0x1800571F8 (sub_1800571F8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_1800CB5F0 @ 0x1800CB5F0 (sub_1800CB5F0.c)
 *     sub_1800F96E4 @ 0x1800F96E4 (sub_1800F96E4.c)
 *     sub_1800FA534 @ 0x1800FA534 (sub_1800FA534.c)
 *     sub_180100028 @ 0x180100028 (sub_180100028.c)
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800FC8A0(char *pv)
{
  char *v1; // rsi
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // eax
  _QWORD *v6; // rdx
  int v7; // ebx
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rdx
  __int64 v14; // rbx
  LPVOID v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  _UNKNOWN **v18; // rcx
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  ATL::CAtlException *v22; // rbx
  __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  LPVOID pva; // [rsp+38h] [rbp-60h] BYREF
  LPVOID Src; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v27; // [rsp+50h] [rbp-48h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v29; // [rsp+68h] [rbp-30h]
  __int64 v31; // [rsp+A8h] [rbp+10h] BYREF
  LPVOID v32; // [rsp+B0h] [rbp+18h]
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  v1 = pv;
  v23 = 0LL;
  v33 = 0LL;
  Src = 0LL;
  pva = 0LL;
  v26 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v29 = 0LL;
  v2 = *((_QWORD *)pv + 25);
  if ( v2 && *(_DWORD *)(v2 + 56) != 6 )
  {
    PropVariantClear(pvar);
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    return 2147943647LL;
  }
  v4 = *(_QWORD *)(*((_QWORD *)pv + 24) + 64LL);
  if ( *((_QWORD *)v1 + 9) )
  {
    v6 = v1 + 56;
    if ( *((_QWORD *)v1 + 10) >= 8uLL )
      v6 = (_QWORD *)*v6;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v4 + 40LL))(v4, v6, &v23);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, 1LL, 0LL, &v23);
  }
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_67;
  v8 = v23;
  sub_18002A504(&Src, 0LL);
  v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 40LL))(v8, &Src);
  if ( v7 < 0 )
    goto LABEL_67;
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *((_WORD *)Src + v10) );
  sub_1800571F8((__int64 *)v1 + 16, Src, v10);
  v11 = *(_QWORD *)(*((_QWORD *)v1 + 24) + 64LL);
  if ( *((_QWORD *)v1 + 13) )
  {
    v13 = v1 + 88;
    if ( *((_QWORD *)v1 + 14) >= 8uLL )
      v13 = (_QWORD *)*v13;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, v13, &v33);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, 0LL, 0LL, &v33);
  }
  v7 = v12;
  if ( v12 < 0 )
    goto LABEL_67;
  v14 = v33;
  sub_18002A504(&pva, 0LL);
  v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &pva);
  if ( v7 < 0 )
    goto LABEL_67;
  do
    ++v9;
  while ( *((_WORD *)pva + v9) );
  sub_1800571F8((__int64 *)v1 + 20, pva, v9);
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 32LL))(v23, 0LL, &v26) < 0 )
    goto LABEL_64;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v26 + 40LL))(v26, &unk_180172D90, pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    if ( LODWORD(pvar[1]) >= 0x15 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 3u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x56u, (__int64)&unk_180172650, (int)pvar[1]);
      }
    }
    else
    {
      *((_DWORD *)v1 + 30) = pvar[1];
    }
  }
  v15 = sub_18006A18C(0x200uLL);
  v32 = v15;
  if ( v15 )
    v16 = sub_1800F96E4((__int64)v15, *((_DWORD *)v1 + 30));
  else
    v16 = 0LL;
  v17 = *((_QWORD *)v1 + 25);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  *((_QWORD *)v1 + 25) = v16;
  if ( !v16 )
  {
    v7 = -2147024882;
    v18 = (_UNKNOWN **)off_18019C348;
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348 )
    {
LABEL_72:
      if ( v1[48] )
      {
        (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 32LL))(*((_QWORD *)v1 + 5), v1);
        v1[48] = 0;
      }
      goto LABEL_74;
    }
    if ( (*((_DWORD *)off_18019C348 + 7) & 0x800000) == 0 || *((_BYTE *)off_18019C348 + 25) < 2u )
    {
LABEL_68:
      if ( v18 != &off_18019C348 && (*((_DWORD *)v18 + 7) & 0x800000) != 0 && *((_BYTE *)v18 + 25) >= 2u )
        sub_1800BB4E0((__int64)v18[2], 0x5Bu, (__int64)&unk_180172650, v7);
      goto LABEL_72;
    }
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x57u, (__int64)&unk_180172650);
LABEL_67:
    v18 = (_UNKNOWN **)off_18019C348;
    goto LABEL_68;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v33 + 24LL))(v33, &unk_180172608, 1LL);
  if ( v7 < 0 )
    goto LABEL_67;
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 24LL))(*((_QWORD *)v1 + 5), v1);
  if ( v7 < 0 )
    goto LABEL_67;
  v1[48] = 1;
  try
  {
    sub_1800FA534((_QWORD *)v1 + 4);
  }
  catch ( ATL::CAtlException *v27 )
  {
    v22 = v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      o__resetstkoflw();
    LODWORD(v32) = *(_DWORD *)v22;
    v7 = (int)v32;
    v1 = pv;
    if ( (int)v32 < 0 )
      goto LABEL_67;
  }
  ThreadpoolWait = CreateThreadpoolWait(sub_1800FD4C0, v1, 0LL);
  *((_QWORD *)v1 + 2) = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v7 = -2147024882;
    goto LABEL_67;
  }
  SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)v1 + 4), 0LL);
  *(_QWORD *)(*((_QWORD *)v1 + 25) + 272LL) = *((_QWORD *)v1 + 4);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 0x58u, (__int64)&unk_180172650, v1, *((_QWORD *)v1 + 25));
  }
  v7 = sub_180100ADC(*((LPVOID *)v1 + 25), (__int64)&v31);
  if ( v7 >= 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CB5F0(*((_QWORD *)off_18019C348 + 2), 0x5Au, (__int64)&unk_180172650, v1, v1, *((_QWORD *)v1 + 25));
    }
    *(_QWORD *)(*((_QWORD *)v1 + 24) + 304LL) = 0LL;
    *((_DWORD *)v1 + 6) = 0;
LABEL_64:
    v18 = (_UNKNOWN **)off_18019C348;
    goto LABEL_65;
  }
  v18 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_180100028(*((_QWORD *)off_18019C348 + 2), v20, v21, (unsigned int)v7, (unsigned __int8)v31);
    v18 = (_UNKNOWN **)off_18019C348;
  }
  if ( !(_BYTE)v31 )
  {
    v7 = 1;
    goto LABEL_74;
  }
LABEL_65:
  if ( v7 < 0 )
    goto LABEL_68;
LABEL_74:
  PropVariantClear(pvar);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( pva )
    CoTaskMemFree(pva);
  if ( Src )
    CoTaskMemFree(Src);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return (unsigned int)v7;
}
