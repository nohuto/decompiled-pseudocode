/*
 * XREFs of ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x1800C73B0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006B754 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18007A814 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18009718C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x180097644 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x1800C4A40 (-_Putmfld@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ost.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CFC21 (--3@YAXPEAX@Z_0.c)
 *     sprintf_s_0 @ 0x1800CFD78 (sprintf_s_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        double a7)
{
  double v9; // xmm3_8
  unsigned __int64 i; // r14
  int v11; // eax
  unsigned __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdx
  struct std::_Facet_base *v15; // rdi
  void (__fastcall ***v16)(_QWORD, __int64); // r8
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  __int16 v18; // di
  void **v19; // r9
  _QWORD v22[3]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v23; // [rsp+78h] [rbp-71h]
  void *v24[5]; // [rsp+80h] [rbp-69h] BYREF
  void *v25[3]; // [rsp+A8h] [rbp-41h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp-29h]
  char Buffer[40]; // [rsp+C8h] [rbp-21h] BYREF

  v24[4] = (void *)-2LL;
  v23 = a1;
  v9 = a7;
  if ( a7 < 0.0 )
    *(_QWORD *)&v9 = *(_QWORD *)&a7 ^ _xmm;
  for ( i = 0LL; v9 >= 1.0e35 && i < 0x1388; i += 10LL )
    v9 = v9 / 1.0e10;
  v11 = sprintf_s_0(Buffer, 0x28uLL, "%.0Lf", v9);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = **(_QWORD **)(a5 + 64);
    v22[1] = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v15 = std::use_facet<std::ctype<wchar_t>>(&v22[1]);
    v22[1] = v15;
    if ( v13 )
    {
      v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v16 = v17;
      if ( v17 )
        (**v17)(v17, 1LL);
    }
    LOBYTE(v14) = 48;
    v18 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v15 + 96LL))(
            v15,
            v14,
            v16);
    v26 = 7LL;
    v25[2] = 0LL;
    LOWORD(v25[0]) = 0;
    std::wstring::assign((__int64 *)v25, v12, 0);
    v19 = v25;
    if ( v26 >= 8 )
      v19 = (void **)v25[0];
    (*(void (__fastcall **)(_QWORD, char *, char *, void **))(*(_QWORD *)v22[1] + 88LL))(
      v22[1],
      Buffer,
      &Buffer[v12],
      v19);
    std::wstring::append(v25, i, v18);
    v24[3] = (void *)7;
    v24[2] = 0LL;
    LOWORD(v24[0]) = 0;
    std::wstring::assign(v24, v25, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    *(_OWORD *)&v22[1] = *a3;
    std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Putmfld(
      v23,
      a2,
      (__int128 *)&v22[1],
      a4,
      a5,
      a6,
      a7 < 0.0,
      (__int64)v24,
      v18);
    if ( v26 >= 8 )
      operator delete(v25[0]);
  }
  else
  {
    *a2 = *a3;
  }
  return a2;
}
