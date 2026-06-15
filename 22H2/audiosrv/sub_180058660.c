/*
 * XREFs of sub_180058660 @ 0x180058660
 * Callers:
 *     sub_1800585BC @ 0x1800585BC (sub_1800585BC.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_180047DDC @ 0x180047DDC (sub_180047DDC.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 *     sub_18005BC6C @ 0x18005BC6C (sub_18005BC6C.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005E08C (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     _o___std_exception_destroy @ 0x18006AA7E (_o___std_exception_destroy.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 *     sub_180120BC4 @ 0x180120BC4 (sub_180120BC4.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180058660(__int64 a1, __int64 a2, int a3)
{
  int v6; // edi
  int v7; // ebx
  _QWORD *v8; // r12
  void (__fastcall ***v9)(_QWORD, __int64, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // r13
  void (__fastcall ***v13)(_QWORD, __int64, __int64 *); // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  unsigned __int64 v22; // r15
  bool v23; // r14
  __int64 v24; // rdx
  void *v25; // rcx
  int v26; // eax
  void *v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  LPVOID pv; // [rsp+30h] [rbp-39h] BYREF
  PROPVARIANT v33[2]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v34; // [rsp+48h] [rbp-21h]
  __int64 v35; // [rsp+50h] [rbp-19h] BYREF
  __int64 v36; // [rsp+58h] [rbp-11h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v38; // [rsp+70h] [rbp+7h]
  LPVOID ppv; // [rsp+78h] [rbp+Fh] BYREF
  void *v40; // [rsp+80h] [rbp+17h] BYREF
  __int64 v41[7]; // [rsp+88h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v43; // [rsp+D0h] [rbp+67h] BYREF
  int v44; // [rsp+E0h] [rbp+77h]
  int v45; // [rsp+E8h] [rbp+7Fh] BYREF

  v44 = a3;
  v6 = 0;
  ppv = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v43 = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_OWORD *)pvar = 0LL;
  v38 = 0LL;
  v7 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  if ( v7 >= 0 )
  {
    v8 = (_QWORD *)(a1 + 16);
    v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 40LL))(ppv, a2, a1 + 16);
    if ( v7 >= 0 )
    {
      v9 = (void (__fastcall ***)(_QWORD, __int64, __int64 *))*v8;
      sub_18002A504((void **)(a1 + 24), 0LL);
      v10 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), __int64))(*v9)[5])(v9, a1 + 24);
      v7 = v10;
      if ( v10 < 0 )
        sub_18006D26C(
          retaddr,
          286LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v10);
      if ( v7 >= 0 )
      {
        v11 = MMDevAPI_7(a2);
        *(_DWORD *)(a1 + 32) = v11;
        v12 = (_QWORD *)(a1 + 40);
        v13 = (void (__fastcall ***)(_QWORD, __int64, __int64 *))*v8;
        v14 = 0LL;
        if ( v11 )
        {
          v40 = &unk_18019D6F8;
          LODWORD(pv) = 1;
          v41[0] = (__int64)v13;
          v15 = sub_180120BC4(a1 + 40, v41, &pv, &v40);
        }
        else
        {
          v15 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))(*v13)[4])(v13, 2LL, a1 + 40);
        }
        v7 = v15;
        if ( v15 >= 0 )
        {
          v16 = v35;
          if ( v35 != *v8 )
          {
            sub_18002BB14(&v35, (void (__fastcall ***)(_QWORD, __int64, __int64 *))*v8, (__int64)&unk_18015B040);
            v16 = v35;
          }
          if ( !v16 )
            goto LABEL_64;
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 40LL))(v16, 0LL, a1 + 80);
          if ( v17 < 0 )
            sub_18006D26C(
              retaddr,
              303LL,
              "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (unsigned int)v17);
          v18 = v36;
          if ( v36 != *v8 )
          {
            sub_18002BB14(&v36, (void (__fastcall ***)(_QWORD, __int64, __int64 *))*v8, (__int64)&unk_18015B660);
            v18 = v36;
          }
          if ( !v18 )
          {
LABEL_64:
            v7 = -2147467262;
            goto LABEL_56;
          }
          v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 24LL))(v18, &v45);
          if ( v7 >= 0 )
          {
            *(_DWORD *)(a1 + 188) = v45 != 0;
            PropVariantClear(pvar);
            if ( (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                   *v12,
                   &xmmword_18015BB80,
                   pvar) < 0
              || (v19 = 1, LOWORD(pvar[0]) != 19) )
            {
              v19 = 0;
            }
            *(_DWORD *)(a1 + 216) = v19;
            *(_OWORD *)v33 = 0LL;
            v34 = 0LL;
            (*(void (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(*v12, &unk_18015AF70, v33);
            *(_BYTE *)(a1 + 8734) = LOWORD(v33[0]) == 72;
            PropVariantClear(v33);
            v7 = sub_180054760(a1, a3 != 0);
            if ( v7 >= 0 )
            {
              v7 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                     *v12,
                     &unk_18015BB68,
                     pvar);
              if ( v7 >= 0 )
              {
                if ( LOWORD(pvar[0]) == 19 )
                {
                  v20 = (int)pvar[1];
                }
                else
                {
                  if ( LOWORD(pvar[0]) )
                  {
                    v7 = -2147418113;
                    goto LABEL_56;
                  }
                  v20 = 0;
                }
                *(_DWORD *)(a1 + 184) = v20;
                PropVariantClear(pvar);
                if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                       *v12,
                       &unk_18015B0D0,
                       pvar) >= 0
                  && LOWORD(pvar[0]) == 21 )
                {
                  *(PROPVARIANT *)(a1 + 192) = pvar[1];
                }
                else
                {
                  *(_QWORD *)(a1 + 192) = 0LL;
                }
                *(_DWORD *)(a1 + 204) = 0;
                *(_DWORD *)(a1 + 212) = 0;
                *(_DWORD *)(a1 + 220) = 0;
                if ( !a3 || (v7 = sub_180058F74(a1, &v43), v7 >= 0) )
                {
                  v22 = 0LL;
                  do
                  {
                    if ( v22 >= *(_QWORD *)(a1 + 1656) )
                    {
                      v31 = sub_180118A38(
                              v33,
                              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                      v43 = v6 | 2;
                      sub_180118968(v31);
                    }
                    if ( (v6 & 2) != 0 )
                    {
                      v6 &= ~2u;
                      v33[0] = &off_180149EB8;
                      o___std_exception_destroy(&v33[1]);
                    }
                    *(_BYTE *)(v14 + *(_QWORD *)(a1 + 1664) + 52) = 1;
                    if ( v22 >= *(_QWORD *)(a1 + 1672) )
                    {
                      v30 = sub_180118A38(
                              v33,
                              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                      v43 = v6 | 4;
                      sub_180118968(v30);
                    }
                    if ( (v6 & 4) != 0 )
                    {
                      v6 &= ~4u;
                      v33[0] = &off_180149EB8;
                      o___std_exception_destroy(&v33[1]);
                    }
                    *(_BYTE *)(v14 + *(_QWORD *)(a1 + 1680) + 52) = 1;
                    if ( v22 >= *(_QWORD *)(a1 + 1688) )
                    {
                      v29 = sub_180118A38(
                              v33,
                              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                      v43 = v6 | 8;
                      sub_180118968(v29);
                    }
                    if ( (v6 & 8) != 0 )
                    {
                      v6 &= ~8u;
                      v33[0] = &off_180149EB8;
                      o___std_exception_destroy(&v33[1]);
                    }
                    *(_BYTE *)(v14 + *(_QWORD *)(a1 + 1696) + 52) = 1;
                    ++v22;
                    v14 += 96LL;
                  }
                  while ( v14 < 384 );
                  v23 = 0;
                  if ( !v45 && v44 )
                  {
                    pv = 0LL;
                    LOBYTE(v21) = v43;
                    if ( (int)sub_18005BC6C(a1 + 1768, *(_QWORD *)(a1 + 24), v21, *v12) >= 0 )
                    {
                      v33[0] = &pv;
                      v33[1] = 0LL;
                      LOBYTE(v34) = 1;
                      v6 |= 1u;
                      v43 = v6;
                      v23 = (int)sub_180047DDC((_QWORD *)a1, 0, 0, 0, &v33[1]) >= 0;
                    }
                    if ( (v6 & 1) != 0 )
                    {
                      if ( (_BYTE)v34 )
                      {
                        v25 = *(void **)v33[0];
                        *(_QWORD *)v33[0] = v33[1];
                        if ( v25 )
                          CoTaskMemFree(v25);
                      }
                    }
                    if ( v23 )
                    {
                      LOBYTE(v24) = 1;
                      sub_18004C564(a1, v24, 0, (__int64)pv);
                    }
                    v26 = std::numpunct<wchar_t>::_Init(*v8);
                    if ( v26 < 0 )
                      sub_18006D26C(
                        retaddr,
                        392LL,
                        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                        (unsigned int)v26);
                    v27 = pv;
                    pv = 0LL;
                    if ( v27 )
                      CoTaskMemFree(v27);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_56:
  PropVariantClear(pvar);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v7;
}
