/*
 * XREFs of sub_1801314B4 @ 0x1801314B4
 * Callers:
 *     sub_18012EC00 @ 0x18012EC00 (sub_18012EC00.c)
 *     sub_180131C0C @ 0x180131C0C (sub_180131C0C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004A758 @ 0x18004A758 (sub_18004A758.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_1801314B4(__int64 a1, _OWORD *a2, _OWORD *a3, int a4, int a5, char *a6)
{
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // r9d
  int v14; // edx
  int v15; // eax
  int v16; // eax
  bool v17; // bl
  __int128 *v18; // rax
  unsigned int v19; // r14d
  LPVOID *v20; // rcx
  __int64 v21; // rdx
  void *v22; // rax
  int v23; // eax
  void *v24; // rcx
  int v25; // edx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  int v29; // eax
  int v30; // edx
  PROPVARIANT *v31; // rbx
  __int64 v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  LPVOID v40; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  LPVOID *p_pv; // [rsp+78h] [rbp-90h]
  void *v45; // [rsp+80h] [rbp-88h] BYREF
  char v46; // [rsp+88h] [rbp-80h]
  int v47; // [rsp+90h] [rbp-78h] BYREF
  int v48; // [rsp+94h] [rbp-74h] BYREF
  LPVOID v49; // [rsp+98h] [rbp-70h] BYREF
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-68h] BYREF
  void *Src; // [rsp+B0h] [rbp-58h]
  LPVOID v52; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-40h] BYREF
  PROPVARIANT *v55; // [rsp+D0h] [rbp-38h] BYREF
  char v56; // [rsp+D8h] [rbp-30h]
  PROPVARIANT *v57; // [rsp+E0h] [rbp-28h]
  char v58; // [rsp+E8h] [rbp-20h]
  __int128 v59; // [rsp+F0h] [rbp-18h] BYREF
  int v60; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h]

  memset(a6, 0, 0x58uLL);
  v43 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v43);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v54 = 0LL;
    v12 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))a1)(a1, &unk_18015B040, &v54);
    v11 = v12;
    if ( v12 < 0 )
    {
      v13 = v12;
      v14 = 54;
LABEL_7:
      sub_18004BD84((int)retaddr, v14, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v13);
LABEL_70:
      sub_18000F708(&v54);
      goto LABEL_71;
    }
    if ( !v54 )
    {
      v11 = -2147418113;
      v13 = -2147418113;
      v14 = 55;
      goto LABEL_7;
    }
    v53 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v54 + 40LL))(v54, 0LL, &v53);
    v11 = v15;
    if ( v15 < 0 )
    {
      sub_18004BD84((int)retaddr, 59, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v15);
LABEL_69:
      sub_18000F708(&v53);
      goto LABEL_70;
    }
    *(_OWORD *)pvar = 0LL;
    Src = 0LL;
    v55 = pvar;
    v56 = 1;
    v16 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v43 + 40LL))(v43, &unk_18015AF70, pvar);
    v11 = v16;
    if ( v16 < 0 )
    {
      sub_18004BD84((int)retaddr, 68, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v16);
      PropVariantClear(pvar);
      goto LABEL_69;
    }
    v17 = LOWORD(pvar[0]) == 72;
    PropVariantClear(pvar);
    v42 = 0LL;
    v47 = 0;
    v48 = 0;
    v18 = (__int128 *)&unk_18015C618;
    v19 = 3;
    if ( a5 != 3 )
      v18 = &xmmword_18015B780;
    v59 = *v18;
    v60 = *((_DWORD *)v18 + 4);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54) || v17 )
      goto LABEL_67;
    *(_OWORD *)pvar = 0LL;
    Src = 0LL;
    v57 = pvar;
    v58 = 1;
    v40 = 0LL;
    if ( a5 != 3 )
      v19 = 0;
    if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v43 + 40LL))(v43, &v59, pvar) < 0
      || LOWORD(pvar[0]) != 65 )
    {
      v52 = 0LL;
      v11 = CoCreateInstance(&stru_18015E970, 0LL, 0x17u, &stru_18015B920, &v52);
      if ( v11 >= 0 )
      {
        v49 = 0LL;
        sub_18002A504(&v49, 0LL);
        v23 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &v49);
        v11 = v23;
        if ( v23 >= 0 )
        {
          pv = 0LL;
          p_pv = &pv;
          v45 = 0LL;
          v46 = 1;
          v11 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD, void **))(*(_QWORD *)v52 + 304LL))(
                  v52,
                  v49,
                  v19,
                  0LL,
                  &v45);
          if ( v46 )
          {
            v24 = *p_pv;
            *p_pv = v45;
            if ( v24 )
              CoTaskMemFree(v24);
          }
          if ( v11 >= 0 )
          {
            p_pv = &v40;
            v45 = 0LL;
            v46 = 1;
            v11 = sub_18004A758((unsigned __int16 *)pv, (__int64 *)&v45);
            if ( v46 )
            {
              v26 = *p_pv;
              *p_pv = v45;
              if ( v26 )
                CoTaskMemFree(v26);
            }
            if ( v11 >= 0 )
            {
              v28 = pv;
              pv = 0LL;
              if ( v28 )
                CoTaskMemFree(v28);
              if ( v49 )
                CoTaskMemFree(v49);
              sub_18000F708((__int64 *)&v52);
LABEL_54:
              v55 = 0LL;
              ppv = (LPVOID *)&v55;
              v29 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 24LL))(
                      a1,
                      &unk_180176170,
                      23LL);
              v11 = v29;
              if ( v29 < 0 )
              {
                v30 = 117;
LABEL_60:
                sub_18004BD84((int)retaddr, v30, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v29);
                sub_18000F708((__int64 *)&v55);
                goto LABEL_61;
              }
              v31 = v55;
              v32 = v42;
              v42 = 0LL;
              if ( v32 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              LODWORD(ppv) = v19;
              v29 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64, LPVOID *, __int64 *, int *, int *))*v31
                     + 13))(
                      v31,
                      v40,
                      *(unsigned int *)v40,
                      1LL,
                      ppv,
                      &v42,
                      &v47,
                      &v48);
              v11 = v29;
              if ( v29 < 0 )
              {
                v30 = 120;
                goto LABEL_60;
              }
              sub_18000F708((__int64 *)&v55);
              v34 = v40;
              v40 = 0LL;
              if ( v34 )
                CoTaskMemFree(v34);
              PropVariantClear(pvar);
LABEL_67:
              *(_DWORD *)a6 = 88;
              *(_OWORD *)(a6 + 4) = *a2;
              v35 = v43;
              v43 = 0LL;
              *((_QWORD *)a6 + 3) = v35;
              v36 = v53;
              v53 = 0LL;
              *((_QWORD *)a6 + 4) = v36;
              *((_QWORD *)a6 + 5) = 0LL;
              v37 = v42;
              v42 = 0LL;
              *((_QWORD *)a6 + 6) = v37;
              *((_DWORD *)a6 + 14) = v47;
              *((_DWORD *)a6 + 15) = v48;
              *((_OWORD *)a6 + 4) = *a3;
              *((_DWORD *)a6 + 20) = a4;
              v11 = 0;
LABEL_68:
              sub_18000F708(&v42);
              goto LABEL_69;
            }
            v25 = 112;
          }
          else
          {
            v25 = 110;
          }
          sub_18004BD84((int)retaddr, v25, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v11);
          v27 = pv;
          pv = 0LL;
          if ( v27 )
            CoTaskMemFree(v27);
        }
        else
        {
          sub_18004BD84((int)retaddr, 106, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v23);
        }
        if ( v49 )
          CoTaskMemFree(v49);
      }
      else
      {
        sub_18004BD84((int)retaddr, 103, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v11);
      }
      sub_18000F708((__int64 *)&v52);
      goto LABEL_61;
    }
    v20 = &v40;
    p_pv = &v40;
    v21 = 0LL;
    v45 = 0LL;
    v46 = 1;
    if ( LODWORD(pvar[1]) < 0x12uLL || LODWORD(pvar[1]) < (unsigned __int64)*((unsigned __int16 *)Src + 8) + 18 )
    {
      v11 = -2147024809;
    }
    else
    {
      v11 = sub_18004A758((unsigned __int16 *)Src, (__int64 *)&v45);
      if ( !v46 )
        goto LABEL_27;
      v21 = (__int64)v45;
      v20 = p_pv;
    }
    v22 = *v20;
    *v20 = (LPVOID)v21;
    if ( v22 )
      CoTaskMemFree(v22);
LABEL_27:
    if ( v11 < 0 )
    {
      sub_18004BD84((int)retaddr, 98, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v11);
LABEL_61:
      v33 = v40;
      v40 = 0LL;
      if ( v33 )
        CoTaskMemFree(v33);
      PropVariantClear(pvar);
      goto LABEL_68;
    }
    goto LABEL_54;
  }
  sub_18004BD84((int)retaddr, 50, (int)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp", v10);
LABEL_71:
  sub_18000F708(&v43);
  return (unsigned int)v11;
}
