/*
 * XREFs of sub_180100ADC @ 0x180100ADC
 * Callers:
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 *     sub_1800FF010 @ 0x1800FF010 (sub_1800FF010.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 *     sub_1800C24EC @ 0x1800C24EC (sub_1800C24EC.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_1800FA534 @ 0x1800FA534 (sub_1800FA534.c)
 *     sub_180100084 @ 0x180100084 (sub_180100084.c)
 *     sub_1801000C4 @ 0x1801000C4 (sub_1801000C4.c)
 *     sub_180100608 @ 0x180100608 (sub_180100608.c)
 *     sub_180101EA4 @ 0x180101EA4 (sub_180101EA4.c)
 *     sub_1801037C4 @ 0x1801037C4 (sub_1801037C4.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180100ADC(
        char *lpParameter,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *),
        _QWORD *a3,
        __int64 a4,
        _BYTE *a5)
{
  char *v7; // rsi
  int v8; // r13d
  int v9; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v12; // r13
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, void *, _QWORD *); // rbx
  int v15; // eax
  LPVOID v16; // rcx
  _QWORD *v17; // rax
  _UNKNOWN **v18; // rcx
  LPVOID v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  HANDLE Thread; // rax
  signed int v24; // eax
  ATL::CAtlException *v26; // rbx
  ATL::CAtlException *v27; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-E8h]
  LPVOID v29; // [rsp+40h] [rbp-C8h] BYREF
  void *v30; // [rsp+48h] [rbp-C0h] BYREF
  char *v31; // [rsp+50h] [rbp-B8h]
  _BYTE *v32; // [rsp+58h] [rbp-B0h]
  _QWORD *v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, void *, _QWORD *); // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  int v36; // [rsp+78h] [rbp-90h] BYREF
  __int64 v37; // [rsp+80h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-80h] BYREF
  char v39; // [rsp+90h] [rbp-78h]
  char *v40; // [rsp+98h] [rbp-70h]
  ATL::CAtlException *v41; // [rsp+A0h] [rbp-68h] BYREF
  ATL::CAtlException *v42; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE pvar[28]; // [rsp+B8h] [rbp-50h] BYREF
  int v44; // [rsp+D4h] [rbp-34h]

  v33 = a3;
  v34 = a2;
  v7 = lpParameter;
  v31 = lpParameter;
  v40 = lpParameter;
  v32 = a5;
  v37 = 0LL;
  v8 = 0x40000;
  lpCriticalSection = (LPCRITICAL_SECTION)(lpParameter + 16);
  v39 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0xAu, (__int64)&unk_1801726D0, v7);
  }
  if ( *((_DWORD *)v7 + 14) && *((_DWORD *)v7 + 14) != 6 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0xBu, (__int64)&unk_1801726D0);
    }
    v9 = -2147467259;
    goto LABEL_135;
  }
  *v32 = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_QWORD *)v7 + 55) = 600000LL;
  ThreadpoolWork = CreateThreadpoolWork(sub_1801047E0, v7, 0LL);
  *((_QWORD *)v7 + 62) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0xCu, (__int64)&unk_1801726D0, v9);
    }
    goto LABEL_134;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 0xDu, (__int64)&unk_1801726D0, v7, ThreadpoolWork);
  }
  v9 = (**a2)(a2, &unk_18015B660, &v37);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 24LL))(v37, &v36);
  if ( v9 < 0 )
    goto LABEL_135;
  if ( !v36 )
    v8 = 393216;
  LODWORD(v29) = v8;
  v12 = v7 + 80;
  ppv = (LPVOID *)(v7 + 80);
  v9 = (*v34)[3](v34, &unk_1801761A0, (_QWORD *)1);
  if ( v9 < 0 )
    goto LABEL_135;
  ppv = (LPVOID *)(v7 + 184);
  v9 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a3 + 24LL))(a3, &unk_1801761A0, 1LL);
  if ( v9 < 0 )
    goto LABEL_135;
  sub_180100084(&v30, (void (__fastcall ***)(_QWORD, void *, _QWORD *))*v12);
  if ( v30 )
  {
    memset(&pvar[4], 0, 24);
    v44 = 0;
    *(_DWORD *)pvar = 32;
    *(_DWORD *)&pvar[16] = *((_DWORD *)v7 + 16);
    *(_DWORD *)&pvar[20] = *((_DWORD *)v7 + 17);
    v9 = (*(__int64 (__fastcall **)(void *, _BYTE *))(*(_QWORD *)v30 + 128LL))(v30, pvar);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 3u )
    {
      sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 0xEu, (__int64)&unk_1801726D0, *((_DWORD *)v7 + 16));
    }
    if ( v9 < 0 )
      goto LABEL_35;
  }
  sub_180100084(&v35, *((void (__fastcall ****)(_QWORD, void *, _QWORD *))v7 + 23));
  v13 = v35;
  if ( v35 )
  {
    memset(&pvar[4], 0, 24);
    v44 = 0;
    *(_DWORD *)pvar = 32;
    *(_DWORD *)&pvar[16] = *((_DWORD *)v7 + 16);
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v35 + 128LL))(v35, pvar);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 3u )
    {
      sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 0xFu, (__int64)&unk_1801726D0, *((_DWORD *)v7 + 16));
    }
    if ( v9 < 0 )
    {
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
LABEL_35:
      if ( v30 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
      goto LABEL_134;
    }
    v13 = v35;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v30 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
  *v32 = 0;
  v14 = v34;
  v15 = sub_180101EA4(v34, a3);
  if ( v15 < 0
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x10u, (__int64)&unk_1801726D0, v15);
  }
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *), char *))(*v14)[5])(v14, v7 + 72);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v33 + 40LL))(v33, v7 + 176);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 64LL))(*v12, v7 + 104);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v7 + 23) + 64LL))(*((_QWORD *)v7 + 23), v7 + 208);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v12 + 24LL))(
         *v12,
         0LL,
         (unsigned int)v29,
         *((_QWORD *)v7 + 55) / 2LL,
         0LL,
         *((_QWORD *)v7 + 13),
         0LL);
  if ( v9 == -2004287485 )
    *v32 = 1;
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(*(_QWORD *)*v12 + 112LL))(*v12, &unk_1801726B0, v7 + 88);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(*(_QWORD *)*v12 + 112LL))(*v12, &unk_1801726C0, v7 + 96);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 32LL))(*v12, v7 + 128);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v7 + 12) + 24LL))(*((_QWORD *)v7 + 12), v7 + 136);
  if ( v9 < 0 )
    goto LABEL_135;
  v29 = 0LL;
  v9 = CoCreateInstance(&stru_18015E970, 0LL, 0x17u, &stru_18015B920, &v29);
  if ( v9 < 0 )
    goto LABEL_67;
  v9 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, _QWORD **, __int64 *))(*(_QWORD *)v29 + 56LL))(
         v29,
         *((_QWORD *)v7 + 9),
         0LL,
         &v33,
         &v35);
  if ( v9 < 0 )
    goto LABEL_67;
  *((double *)v7 + 18) = (double)(int)v33 / 10000.0;
  if ( v29 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
  v9 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(*(_QWORD *)*v12 + 112LL))(*v12, &unk_1801726A0, v7 + 112);
  if ( v9 < 0 )
    goto LABEL_135;
  v17 = sub_18006A18C(0x18uLL);
  v33 = v17;
  if ( v17 )
  {
    *v17 = off_1801557B0;
    v17[1] = v7;
    *((_DWORD *)v17 + 4) = 1;
    *((_DWORD *)v17 + 5) = 1;
  }
  sub_180100608((volatile signed __int32 **)v7 + 21, (volatile signed __int32 *)v17);
  if ( !*((_QWORD *)v7 + 21) )
    goto LABEL_77;
  v29 = 0LL;
  v9 = ((__int64 (__fastcall **)(_QWORD, void *, LPVOID *))*v34)[4](v34, 0LL, &v29);
  if ( v9 < 0 )
    goto LABEL_67;
  memset(pvar, 0, 24);
  v9 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v29 + 40LL))(v29, &unk_1801607B0, pvar);
  if ( v9 < 0 )
    goto LABEL_67;
  if ( *(_WORD *)pvar == 11 )
    v7[61] = *(_WORD *)&pvar[8] == 0xFFFF;
  PropVariantClear((PROPVARIANT *)pvar);
  memset(pvar, 0, 24);
  v9 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v29 + 40LL))(v29, &unk_180172DD8, pvar);
  if ( v9 < 0 || *(_WORD *)pvar == 31 && (v9 = CLSIDFromString(*(LPCOLESTR *)&pvar[8], (LPCLSID)(v7 + 152)), v9 < 0) )
  {
LABEL_67:
    v16 = v29;
LABEL_68:
    if ( v16 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_134;
  }
  PropVariantClear((PROPVARIANT *)pvar);
  if ( v29 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, char *))(**((_QWORD **)v7 + 23)
                                                                                           + 24LL))(
         *((_QWORD *)v7 + 23),
         0LL,
         3624140800LL,
         *((_QWORD *)v7 + 55) / 2LL,
         0LL,
         *((_QWORD *)v7 + 13),
         v7 + 152);
  if ( v9 == -2004287485 )
    *v32 = 1;
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(**((_QWORD **)v7 + 23) + 112LL))(
         *((_QWORD *)v7 + 23),
         &unk_180172690,
         v7 + 192);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(**((_QWORD **)v7 + 23) + 112LL))(
         *((_QWORD *)v7 + 23),
         &unk_1801726C0,
         v7 + 200);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v7 + 23) + 32LL))(*((_QWORD *)v7 + 23), v7 + 248);
  if ( v9 < 0 )
    goto LABEL_135;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v7 + 25) + 24LL))(*((_QWORD *)v7 + 25), v7 + 256);
  if ( v9 < 0 )
    goto LABEL_135;
  v18 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
  {
    if ( (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 17);
      sub_1800C24EC(*((_QWORD *)off_18019C348 + 2), 0x11u, (__int64)&unk_1801726D0, *((_DWORD *)v7 + 32));
      v18 = (_UNKNOWN **)off_18019C348;
    }
    if ( v18 != &off_18019C348 && (*((_DWORD *)v18 + 7) & 0x800000) != 0 && *((_BYTE *)v18 + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 32);
      sub_1800C24EC((__int64)v18[2], 0x12u, (__int64)&unk_1801726D0, *((_DWORD *)v7 + 62));
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(**((_QWORD **)v7 + 23) + 112LL))(
         *((_QWORD *)v7 + 23),
         &unk_1801726A0,
         v7 + 224);
  if ( v9 < 0 )
    goto LABEL_135;
  sub_1801000C4(&v30, *((void (__fastcall ****)(_QWORD, void *, _QWORD *))v7 + 28));
  v29 = 0LL;
  memset(pvar, 0, 24);
  v9 = (*(__int64 (__fastcall **)(void *, LPVOID *))(*(_QWORD *)v30 + 168LL))(v30, &v29);
  if ( v9 < 0
    || (strcpy(pvar, "\v"),
        *(_WORD *)&pvar[8] = -1,
        v9 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v29 + 48LL))(v29, &unk_1801606D8, pvar),
        v9 < 0) )
  {
    v19 = v29;
LABEL_105:
    if ( v19 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
    v16 = v30;
    goto LABEL_68;
  }
  memset(pvar, 0, 24);
  *(_WORD *)pvar = 31;
  *(_QWORD *)&pvar[8] = *((_QWORD *)v7 + 9);
  v9 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v29 + 48LL))(v29, &unk_1801606F0, pvar);
  v19 = v29;
  if ( v9 < 0 )
    goto LABEL_105;
  if ( v29 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
  v20 = sub_18006A18C(0x18uLL);
  v33 = v20;
  if ( v20 )
  {
    *v20 = off_1801557B0;
    v20[1] = v7;
    *((_DWORD *)v20 + 4) = 0;
    *((_DWORD *)v20 + 5) = 1;
  }
  sub_180100608((volatile signed __int32 **)v7 + 29, (volatile signed __int32 *)v20);
  if ( !*((_QWORD *)v7 + 29) )
  {
LABEL_77:
    v9 = -2147024882;
    goto LABEL_135;
  }
  v9 = sub_1801037C4(v7, v34);
  if ( v9 >= 0 )
  {
    try
    {
      sub_1800FA534((_QWORD *)v7 + 15);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v26 = v41;
      if ( *(_DWORD *)v41 == -1073741571 )
        o__resetstkoflw();
      LODWORD(v29) = *(_DWORD *)v26;
      v9 = (int)v29;
      v7 = v31;
      if ( (int)v29 < 0 )
        goto LABEL_135;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 10) + 104LL))(
           *((_QWORD *)v7 + 10),
           *((_QWORD *)v7 + 15));
    if ( v9 >= 0 )
    {
      sub_1800FA534((_QWORD *)v7 + 30);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 23) + 104LL))(
             *((_QWORD *)v7 + 23),
             *((_QWORD *)v7 + 30));
      if ( v9 >= 0 )
      {
        v21 = *((_QWORD *)v7 + 13);
        v22 = *(unsigned __int16 *)(v21 + 2) * (*(unsigned __int16 *)(v21 + 14) >> 3);
        *((_QWORD *)v7 + 56) = v22;
        *((_QWORD *)v7 + 57) = v22 * (*((_QWORD *)v7 + 55) * *(unsigned int *)(v21 + 4) / 10000LL);
        try
        {
          sub_1800FA534((_QWORD *)v7 + 37);
        }
        catch ( ATL::CAtlException *v42 )
        {
          v27 = v42;
          if ( *(_DWORD *)v42 == -1073741571 )
            o__resetstkoflw();
          LODWORD(v29) = *(_DWORD *)v27;
          v9 = (int)v29;
          v7 = v31;
          if ( (int)v29 < 0 )
            goto LABEL_135;
        }
        Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)sub_180100750, v7, 0, (LPDWORD)v7 + 72);
        *((_QWORD *)v7 + 35) = Thread;
        if ( Thread )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 14) + 80LL))(
                 *((_QWORD *)v7 + 14),
                 *((_QWORD *)v7 + 21));
          if ( v9 < 0 )
            goto LABEL_135;
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 28) + 80LL))(
                 *((_QWORD *)v7 + 28),
                 *((_QWORD *)v7 + 29));
          if ( v9 < 0 )
            goto LABEL_135;
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x13u, (__int64)&unk_1801726D0);
          }
          *((_DWORD *)v7 + 14) = 2;
          v7[60] = 0;
        }
        else
        {
          v24 = GetLastError();
          v9 = v24;
          if ( v24 > 0 )
            v9 = (unsigned __int16)v24 | 0x80070000;
        }
LABEL_134:
        if ( v9 >= 0 )
          goto LABEL_140;
      }
    }
  }
LABEL_135:
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    LODWORD(ppv) = v9;
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x14u, (__int64)&unk_1801726D0, v7, ppv);
  }
  v7[60] = 1;
  *((_DWORD *)v40 + 14) = *v32 != 0 ? 7 : 0;
LABEL_140:
  if ( v39 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  return (unsigned int)v9;
}
