/*
 * XREFs of ?deserialize@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEAVinput_archive@tson@@@Z @ 0x1800ABF28
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800ABF9C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall tip::details::shared_data<1,0,0>::deserialize(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a1;
  if ( !tip::details::g_test_interface_exception_guard )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  result = tip::details::g_test_interface_exception_guard(v3, 0LL, 0LL, a2, 0LL);
  if ( !(_BYTE)result && !*((_BYTE *)a1 + 160) )
  {
    *((_BYTE *)a1 + 160) = 3;
    result = 16397LL;
    *((_WORD *)a1 + 81) = 16397;
    a1[21] = 0LL;
  }
  return result;
}
