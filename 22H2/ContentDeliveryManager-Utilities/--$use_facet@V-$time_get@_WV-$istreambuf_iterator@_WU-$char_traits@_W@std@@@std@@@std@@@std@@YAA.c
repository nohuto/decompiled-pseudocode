/*
 * XREFs of ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800AF564
 * Callers:
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800AD938 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C3590 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ?_Getcat@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800AF8D0 (-_Getcat@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfac.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800B2FE4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800B3074 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800B31A0 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     ?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ @ 0x1800B31E0 (-_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ.c)
 *     _CxxThrowException_0 @ 0x1800CFD9C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct std::_Facet_base *__fastcall std::use_facet<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(
        __int64 *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  struct std::_Facet_base *v5; // rbx
  struct std::locale::_Locimp *v6; // rax
  _BYTE pExceptionObject[48]; // [rsp+28h] [rbp-30h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  struct std::_Facet_base *v11; // [rsp+70h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v10, 0);
  v2 = std::_Facetptr<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>::_Psave;
  v11 = (struct std::_Facet_base *)std::_Facetptr<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>::_Psave;
  v3 = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id;
  if ( !std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id )
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v9, 0);
    if ( !std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id )
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit((std::_Lockit *)&v9);
    v3 = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id;
  }
  v4 = *a1;
  if ( v3 >= *(_QWORD *)(*a1 + 24) )
    v5 = 0LL;
  else
    v5 = *(struct std::_Facet_base **)(*(_QWORD *)(v4 + 16) + 8 * v3);
  if ( !v5 )
  {
    if ( *(_BYTE *)(v4 + 36) )
    {
      v6 = std::locale::_Getgloballocale();
      if ( v3 >= *((_QWORD *)v6 + 3) )
        v5 = 0LL;
      else
        v5 = *(struct std::_Facet_base **)(*((_QWORD *)v6 + 2) + 8 * v3);
    }
    if ( !v5 )
    {
      if ( v2 )
      {
        v5 = (struct std::_Facet_base *)v2;
      }
      else
      {
        if ( std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getcat(&v11, a1) == -1 )
        {
          bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
          throw (bad_cast *)pExceptionObject;
        }
        v5 = v11;
        std::_Facetptr<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>::_Psave = (__int64)v11;
        (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 8LL))(v11);
        std::_Facet_Register(v5);
      }
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v10);
  return v5;
}
