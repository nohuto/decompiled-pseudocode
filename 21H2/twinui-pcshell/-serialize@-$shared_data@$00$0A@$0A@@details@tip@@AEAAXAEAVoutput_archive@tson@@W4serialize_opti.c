/*
 * XREFs of ?serialize@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800AE990
 * Callers:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800AE9F4 (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip@@AEAAPEBDAEAVwrite_buffer@tson@@W4serializ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall tip::details::shared_data<1,0,0>::serialize(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( !tip::details::g_test_interface_exception_guard )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = tip::details::g_test_interface_exception_guard(v4, a2, a3, 0LL, 0LL);
  if ( !(_BYTE)result )
  {
    *((_BYTE *)a1 + 160) = 3;
    result = 16396LL;
    *((_WORD *)a1 + 81) = 16396;
    a1[21] = 0LL;
  }
  return result;
}
