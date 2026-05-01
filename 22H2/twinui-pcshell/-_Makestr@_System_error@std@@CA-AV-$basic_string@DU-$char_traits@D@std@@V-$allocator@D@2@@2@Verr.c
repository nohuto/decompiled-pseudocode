/*
 * XREFs of ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180126A14
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011A7EC (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180108D2C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1801166C0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_System_error::_Makestr(__int64 a1, unsigned int *a2, __int64 a3)
{
  _QWORD *v6; // rdx
  _QWORD v8[4]; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_QWORD *)(a3 + 16) )
    std::string::append((void **)a3, ": ", 2uLL);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)a2 + 1) + 16LL))(*((_QWORD *)a2 + 1), v8, *a2);
  v6 = v8;
  if ( v8[3] >= 0x10uLL )
    v6 = (_QWORD *)v8[0];
  std::string::append((void **)a3, v6, v8[2]);
  std::string::~string((__int64)v8);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  std::string::~string(a3);
  return a1;
}
