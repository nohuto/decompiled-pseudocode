/*
 * XREFs of ?do_get_year@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800C6710
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18003B368 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x1800C02EC (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get_year(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        __int64 a7)
{
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // r15
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  int v14; // eax
  int *v15; // rdx
  int v16; // eax
  int v17; // ecx

  v11 = **(_QWORD **)(a5 + 64);
  a5 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<unsigned short>>(&a5);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  LODWORD(a5) = 0;
  v14 = std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
          a1,
          a3,
          a4,
          0,
          2035,
          &a5,
          (__int64)v12);
  v15 = a6;
  v16 = *a6 | v14;
  *a6 = v16;
  if ( (v16 & 2) == 0 )
  {
    v17 = a5;
    if ( (int)a5 < 1900 )
    {
      if ( (int)a5 > 135 )
        *v15 = v16 | 2;
    }
    else
    {
      v17 = a5 - 1900;
    }
    *(_DWORD *)(a7 + 20) = v17;
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
