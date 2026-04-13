/*
 * XREFs of ?_Getcat@?$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B519C
 * Callers:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800B44FC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18002A6A8 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18002A748 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B2468 (--2@YAPEAX_K@Z.c)
 *     _Getctype @ 0x1800B3B68 (_Getctype.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::ctype<char>::_Getcat(_QWORD *a1, __int64 *a2)
{
  char v4; // si
  char *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rdx
  _Ctypevec v9; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v10[104]; // [rsp+48h] [rbp-70h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = (char *)operator new(0x30uLL);
    if ( v5 )
    {
      v6 = *a2;
      if ( *a2 )
      {
        v7 = *(const char **)(v6 + 40);
        if ( !v7 )
          v7 = (const char *)(v6 + 48);
      }
      else
      {
        v7 = (const char *)&word_180106598;
      }
      std::_Locinfo::_Locinfo((std::_Locinfo *)v10, v7);
      v4 = 1;
      *((_DWORD *)v5 + 2) = 0;
      *(_QWORD *)v5 = &std::ctype<char>::`vftable';
      *(_Ctypevec *)(v5 + 16) = *Getctype(&v9);
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v10);
  }
  return 2LL;
}
