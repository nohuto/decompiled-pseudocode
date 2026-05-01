/*
 * XREFs of ??$com_query@UIMarshalingBehaviorControl@Detail@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIMarshalingBehaviorControl@Detail@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800D5EAC
 * Callers:
 *     ?EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z @ 0x18043D234 (-EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<Windows::Foundation::Collections::Detail::IMarshalingBehaviorControl,IUnknown * &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_deab70f3_3a9c_40e6_a680_2ee376c5eaed, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
