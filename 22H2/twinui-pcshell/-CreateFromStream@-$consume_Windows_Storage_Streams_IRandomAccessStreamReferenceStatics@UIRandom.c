/*
 * XREFs of ?CreateFromStream@?$consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AURandomAccessStreamReference@Streams@Storage@Windows@3@AEBUIRandomAccessStream@5673@@Z @ 0x18013875C
 * Callers:
 *     ??$call@AEAV_lambda_8eb0229a865306011360fe7506f306d2_@@@?$factory_cache_entry@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@UIRandomAccessStreamReferenceStatics@2345@@impl@winrt@@QEAA?AURandomAccessStreamReference@Streams@Storage@Windows@2@AEAV_lambda_8eb0229a865306011360fe7506f306d2_@@@Z @ 0x1801339D8 (--$call@AEAV_lambda_8eb0229a865306011360fe7506f306d2_@@@-$factory_cache_entry@URandomAccessStrea.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::CreateFromStream(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD *result; // rax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v3 + 64LL))(v3, *a3, &v7);
  winrt::check_hresult(v5);
  result = a2;
  *a2 = v7;
  return result;
}
