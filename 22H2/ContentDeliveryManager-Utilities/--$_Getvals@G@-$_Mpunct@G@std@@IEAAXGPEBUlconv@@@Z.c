/*
 * XREFs of ??$_Getvals@G@?$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z @ 0x1800BCAA4
 * Callers:
 *     ?_Init@?$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800C1D54 (-_Init@-$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x18002A900 (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 *     _Mbrtowc @ 0x1800B28A0 (_Mbrtowc.c)
 */

__int64 __fastcall std::_Mpunct<unsigned short>::_Getvals<unsigned short>(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rax
  __int64 result; // rax
  char v11; // [rsp+60h] [rbp+30h] BYREF
  wchar_t v12; // [rsp+70h] [rbp+40h] BYREF
  mbstate_t v13; // [rsp+78h] [rbp+48h] BYREF

  if ( *(_BYTE *)(a1 + 68) )
    v5 = *(char **)(a3 + 24);
  else
    v5 = *(char **)(a3 + 32);
  *(_QWORD *)(a1 + 32) = std::_Maklocstr<unsigned short>(v5, 0LL, (const _Cvtvec *)(a1 + 72));
  v6 = (char *)&word_180106598;
  if ( *(_BYTE *)(a3 + 86) <= 4u )
    v6 = *(char **)(a3 + 64);
  *(_QWORD *)(a1 + 40) = std::_Maklocstr<unsigned short>(v6, 0LL, (const _Cvtvec *)(a1 + 72));
  v7 = "-";
  if ( *(_BYTE *)(a3 + 87) <= 4u )
    v7 = *(char **)(a3 + 72);
  *(_QWORD *)(a1 + 48) = std::_Maklocstr<unsigned short>(v7, 0LL, (const _Cvtvec *)(a1 + 72));
  v8 = *(char **)(a3 + 40);
  v12 = 0;
  v13._Wchar = 0;
  v11 = *v8;
  Mbrtowc(&v12, &v11, 1uLL, &v13, (const _Cvtvec *)(a1 + 72));
  *(_WORD *)(a1 + 24) = v12;
  v9 = *(char **)(a3 + 48);
  v12 = 0;
  v13._Wchar = 0;
  v11 = *v9;
  Mbrtowc(&v12, &v11, 1uLL, &v13, (const _Cvtvec *)(a1 + 72));
  result = v12;
  *(_WORD *)(a1 + 26) = v12;
  return result;
}
