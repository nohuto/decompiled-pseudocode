/*
 * XREFs of sub_1801352FC @ 0x1801352FC
 * Callers:
 *     sub_180126598 @ 0x180126598 (sub_180126598.c)
 * Callees:
 *     sub_1800011E4 @ 0x1800011E4 (sub_1800011E4.c)
 *     ??$?8$$CBU_EXCEPTION_RECORD@@$$CBU0@@std@@YA_NAEBV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@0@0@Z @ 0x180009E04 (--$-8$$CBU_EXCEPTION_RECORD@@$$CBU0@@std@@YA_NAEBV-$shared_ptr@$$CBU_EXCEPTION_RECORD@@@0@0@Z.c)
 *     unknown_libname_206 @ 0x180009E18 (unknown_libname_206.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     unknown_libname_209 @ 0x18005FE68 (unknown_libname_209.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     ??0__crt_deferred_errno_cache@@QEAA@XZ @ 0x180069050 (--0__crt_deferred_errno_cache@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006E450 @ 0x18006E450 (sub_18006E450.c)
 *     sub_18007392C @ 0x18007392C (sub_18007392C.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BDAAC @ 0x1800BDAAC (sub_1800BDAAC.c)
 *     sub_1800F9E98 @ 0x1800F9E98 (sub_1800F9E98.c)
 *     sub_180135C50 @ 0x180135C50 (sub_180135C50.c)
 *     sub_1801380CC @ 0x1801380CC (sub_1801380CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801352FC(__int64 a1, char *a2, unsigned int a3, __int64 a4)
{
  int v7; // edx
  unsigned int v8; // ebx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  void **v14; // rax
  int v15; // r9d
  void **v16; // rax
  int v17; // r13d
  unsigned __int8 *v18; // r14
  __int64 v19; // rsi
  unsigned __int8 *v20; // r15
  BOOL v21; // eax
  __int64 v22; // r8
  __int64 v23; // r12
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _WORD *v29; // [rsp+40h] [rbp-39h] BYREF
  _QWORD *v30; // [rsp+48h] [rbp-31h] BYREF
  __int64 v31; // [rsp+50h] [rbp-29h] BYREF
  __int64 v32; // [rsp+58h] [rbp-21h]
  void *v33; // [rsp+60h] [rbp-19h] BYREF
  void *v34; // [rsp+68h] [rbp-11h] BYREF
  GUID pclsid; // [rsp+70h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]

  v32 = a4;
  if ( a3 < 6 )
  {
    v7 = 784;
LABEL_3:
    v8 = -2147024809;
LABEL_4:
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v8);
    return v8;
  }
  v10 = 0;
  if ( !*(_BYTE *)(a1 + 96) )
  {
    v8 = -2147418113;
    v7 = 785;
    goto LABEL_4;
  }
  if ( !a4 )
  {
    v7 = 786;
    goto LABEL_3;
  }
  __crt_deferred_errno_cache::__crt_deferred_errno_cache((__crt_deferred_errno_cache *)&v29);
  if ( *(_BYTE *)(a1 + 209) )
  {
    if ( a2 )
    {
      if ( (unsigned __int8)sub_180135C50(a1, a2) )
      {
        v14 = (void **)sub_18006E450(&v30, a2, 0xFFFFFFFFFFFFFFFFuLL);
        sub_1800F9E98((void **)&v29, v14);
        sub_1800BDAAC((void **)&v30);
        if ( unknown_libname_209(&v29) )
        {
          v12 = -2147024882;
          v15 = -2147024882;
          v13 = 806;
          goto LABEL_46;
        }
      }
      else
      {
        sub_18002A504((void **)&v29, 0LL);
        v11 = MMDevAPI_25(a2, &v29);
        v12 = v11;
        if ( v11 < 0 )
        {
          v13 = 812;
          goto LABEL_45;
        }
      }
    }
    else
    {
      sub_18002A504((void **)&v29, 0LL);
      v11 = sub_18007392C(a1, &v29);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 797;
        goto LABEL_45;
      }
    }
  }
  else
  {
    v16 = (void **)sub_18006E450(&v30, (char *)L"LegacyDefaultEndpointKey", 0xFFFFFFFFFFFFFFFFuLL);
    sub_1800F9E98((void **)&v29, v16);
    sub_1800BDAAC((void **)&v30);
    if ( unknown_libname_209(&v29) )
    {
      v12 = -2147024882;
      v15 = -2147024882;
      v13 = 820;
      goto LABEL_46;
    }
  }
  sub_180060060((__int64 *)&pclsid, v29);
  sub_1801380CC(a1 + 464, &v30, &pclsid);
  unknown_libname_206(&pclsid);
  v31 = *(_QWORD *)(a1 + 472);
  if ( std::operator==<_EXCEPTION_RECORD const,_EXCEPTION_RECORD const>(&v30, &v31) )
  {
    v12 = -2147023728;
    v15 = -2147023728;
    v13 = 824;
    goto LABEL_46;
  }
  v17 = 0;
  v18 = (unsigned __int8 *)(a1 + 272);
  v19 = a4 + 28;
  v20 = (unsigned __int8 *)(v30[6] + 1LL);
  while ( 1 )
  {
    v11 = CLSIDFromString(*((LPCOLESTR *)v18 + 1), &pclsid);
    v12 = v11;
    if ( v11 < 0 )
      break;
    if ( *v20 )
      v21 = *(_DWORD *)(v20 + 3) >= 0;
    else
      v21 = *v18 != 0;
    *(_DWORD *)(v19 - 4) = v21;
    *(_DWORD *)(v19 - 12) = *(v20 - 1) != 0;
    *(_DWORD *)v19 = *v20;
    *(_DWORD *)(v19 + 4) = v20[1];
    *(_QWORD *)(v19 + 12) = *(_QWORD *)(v20 + 15);
    *(GUID *)(v19 - 28) = pclsid;
    *(_DWORD *)(v19 - 8) = *v18;
    v22 = *((_QWORD *)v18 + 2);
    v23 = 312LL * v17;
    if ( v22 )
    {
      v11 = sub_180057300((_WORD *)(v23 + v32 + 48), 65LL, v22);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 867;
        goto LABEL_45;
      }
    }
    else
    {
      *(_WORD *)(v19 + 20) = 0;
    }
    v24 = *((_QWORD *)v18 + 3);
    if ( v24 )
    {
      v11 = sub_180057300((_WORD *)(v23 + v32 + 178), 65LL, v24);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 880;
        goto LABEL_45;
      }
    }
    else
    {
      *(_WORD *)(v19 + 150) = 0;
    }
    v25 = *(_DWORD *)(v20 + 7);
    if ( v25 < 0 && v25 != -2143326191 && v25 != -1879048208 && v25 != -2147467238 && (unsigned int)dword_18019C4F0 > 5 )
    {
      if ( __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL) )
      {
        v33 = (void *)*((_QWORD *)v18 + 3);
        v34 = (void *)*((_QWORD *)v18 + 1);
        LODWORD(v31) = v28;
        LODWORD(v30) = *(_DWORD *)(v19 - 4);
        sub_1800011E4(v26, (int)&unk_18016C9A1, v27, v28, (__int64)&v30, (__int64)&v31, &v34, &v33);
      }
    }
    ++v17;
    v20 += 24;
    v18 += 32;
    v19 += 312LL;
    if ( v17 >= 6 )
      goto LABEL_47;
  }
  v13 = 831;
LABEL_45:
  v15 = v11;
LABEL_46:
  sub_18004BD84((int)retaddr, v13, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v15);
  v10 = v12;
LABEL_47:
  sub_1800BDAAC((void **)&v29);
  return v10;
}
