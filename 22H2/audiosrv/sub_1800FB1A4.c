/*
 * XREFs of sub_1800FB1A4 @ 0x1800FB1A4
 * Callers:
 *     sub_1800FBEE0 @ 0x1800FBEE0 (sub_1800FBEE0.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_18005E178 @ 0x18005E178 (sub_18005E178.c)
 *     sub_18005FD7C @ 0x18005FD7C (sub_18005FD7C.c)
 *     sub_180062288 @ 0x180062288 (sub_180062288.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800C3110 @ 0x1800C3110 (sub_1800C3110.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 *     sub_1800FA1F4 @ 0x1800FA1F4 (sub_1800FA1F4.c)
 *     sub_1800FA778 @ 0x1800FA778 (sub_1800FA778.c)
 *     sub_1800FB958 @ 0x1800FB958 (sub_1800FB958.c)
 *     sub_1800FBF0C @ 0x1800FBF0C (sub_1800FBF0C.c)
 *     sub_1800FD0E8 @ 0x1800FD0E8 (sub_1800FD0E8.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall sub_1800FB1A4(char *a1, int a2, char *a3)
{
  int v3; // r13d
  char *v4; // r14
  _UNKNOWN **v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  void *v8; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rbx
  const wchar_t *v11; // r9
  bool v12; // zf
  unsigned __int64 i; // r15
  __int64 v14; // r8
  PVOID v15; // rbx
  int v16; // ebx
  unsigned int v17; // ebx
  void *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  void **v23; // r14
  PVOID v24; // rcx
  ATL::CAtlException *v25; // rbx
  _QWORD *v26; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-90h] BYREF
  char v32; // [rsp+60h] [rbp-88h]
  unsigned int v33; // [rsp+68h] [rbp-80h] BYREF
  __int64 v34; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-70h]
  __int64 v36; // [rsp+80h] [rbp-68h]
  int v37; // [rsp+88h] [rbp-60h]
  LPCRITICAL_SECTION v38; // [rsp+90h] [rbp-58h] BYREF
  char v39; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v40; // [rsp+A0h] [rbp-48h] BYREF
  PVOID v41; // [rsp+F0h] [rbp+8h] BYREF
  int v42; // [rsp+F8h] [rbp+10h]
  char *v43; // [rsp+100h] [rbp+18h]
  __int64 v44; // [rsp+108h] [rbp+20h] BYREF

  v43 = a3;
  v42 = a2;
  v41 = a1;
  v3 = a2;
  v4 = a1;
  v38 = (LPCRITICAL_SECTION)(a1 + 16);
  v39 = 0;
  sub_180057764((__int64)&v38);
  if ( *((_DWORD *)v4 + 14) != 1 )
    goto LABEL_94;
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 72);
  v32 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v28 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v8 = (void *)*((_QWORD *)v4 + 14);
  pv = v8;
  while ( v8 )
  {
    v9 = sub_1800B91A0((__int64)v5, (_QWORD **)&pv);
    sub_180048790(&v26, *v9);
    v5 = (_UNKNOWN **)off_18019C348;
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_DWORD *)off_18019C348 + 7) & 0x800000) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      v10 = v26;
    }
    else
    {
      v10 = v26;
      v11 = (const wchar_t *)(v26 + 16);
      if ( v26[19] >= 8uLL )
        v11 = *(const wchar_t **)v11;
      sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 0x1Eu, (__int64)&unk_180172650, v11, *(_QWORD *)(v26[25] + 72LL));
      v5 = (_UNKNOWN **)off_18019C348;
    }
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_26;
      v12 = v10[9] == 0LL;
    }
    else
    {
      v12 = v10[13] == 0LL;
    }
    if ( v12 )
    {
      if ( v5 != &off_18019C348 && (*((_DWORD *)v5 + 7) & 0x800000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
        sub_1800BB4B4((__int64)v5[2], 0x1Fu, (__int64)&unk_180172650);
      try
      {
        sub_1800FA1F4(&v34, (__int64)v10);
      }
      catch ( ATL::CAtlException *v40 )
      {
        v25 = v40;
        if ( *(_DWORD *)v40 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v44) = *(_DWORD *)v25;
        if ( (int)v44 < 0 )
        {
          v5 = (_UNKNOWN **)v26;
          if ( v26 )
            (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
          v4 = (char *)v41;
          v3 = v42;
          v7 = v35;
          v6 = v34;
          goto LABEL_28;
        }
        v4 = (char *)v41;
        v3 = v42;
        v10 = v26;
      }
      v6 = v34;
      v7 = v35;
    }
LABEL_26:
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
LABEL_28:
    v8 = pv;
  }
  for ( i = 0LL; i < v7; ++i )
  {
    sub_180048790(&v41, *(_QWORD *)(v6 + 8 * i));
    v44 = 0LL;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x20u, (__int64)&unk_180172650);
    }
    v15 = v41;
    if ( *((_BYTE *)v41 + 49) )
    {
      sub_1800FBF0C(v41);
    }
    else
    {
      LOBYTE(v14) = 1;
      sub_1800FEE8C(v4, v41, v14);
    }
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v4 + 8) + 24LL))(
          *((_QWORD *)v4 + 8),
          2LL,
          1LL,
          &v28);
  if ( v16 < 0 )
    goto LABEL_81;
  v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 24LL))(v28, &v33);
  if ( v16 < 0 )
    goto LABEL_81;
  v17 = 0;
  while ( 2 )
  {
    if ( v17 < v33 )
    {
      v27 = 0LL;
      v26 = 0LL;
      pv = 0LL;
      LOBYTE(v41) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 32LL))(v28, v17, &v27) < 0
        || (**(int (__fastcall ***)(__int64, void *, _QWORD **))v27)(v27, &unk_18015B660, &v26) < 0
        || (*(int (__fastcall **)(_QWORD *, __int64 *))(*v26 + 24LL))(v26, &v44) < 0 )
      {
        goto LABEL_44;
      }
      v19 = v44;
      if ( !(_DWORD)v44 )
      {
        v20 = sub_1800FB958(v4, v27, *((_QWORD *)v4 + 42));
        if ( v20 < 0 )
        {
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 2u )
          {
            sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x21u, (__int64)&unk_180172650, v20);
          }
LABEL_44:
          v18 = 0LL;
LABEL_66:
          CoTaskMemFree(v18);
          if ( v26 )
            (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          ++v17;
          continue;
        }
        v19 = v44;
      }
      if ( v19 == 1 )
      {
        if ( !sub_180062288(v27, &pv, &v41) || !(_BYTE)v41 )
        {
          v19 = v44;
          goto LABEL_58;
        }
LABEL_60:
        v21 = sub_1800FA778((__int64)v4, v27);
        if ( v21 < 0
          && off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 2u )
        {
          sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x22u, (__int64)&unk_180172650, v21);
        }
      }
      else
      {
LABEL_58:
        if ( !v19 && sub_18005E178((__int64)v4, v27, &pv) )
          goto LABEL_60;
      }
      v18 = pv;
      goto LABEL_66;
    }
    break;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)v4 + 8) + 40LL))(
          *((_QWORD *)v4 + 8),
          v43,
          &v30);
  if ( v16 >= 0 && !v42 && !(unsigned __int8)sub_1800FD0E8(v22, v30) )
  {
    sub_18005FD7C(&v41, v43, 0xFFFFFFFFFFFFFFFFuLL);
    v23 = (void **)(v4 + 336);
    if ( v23 == &v41 )
    {
      v24 = v41;
    }
    else
    {
      sub_18002A504(v23, v41);
      v24 = 0LL;
    }
    if ( v24 )
      CoTaskMemFree(v24);
    if ( !*v23 )
      v16 = -2147024882;
  }
LABEL_81:
  if ( v6 )
  {
    sub_1800C3110(v6, v7);
    _o_free(v6);
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v16 < 0
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x23u, (__int64)&unk_180172650, v16);
  }
LABEL_94:
  if ( v39 )
    LeaveCriticalSection(v38);
}
