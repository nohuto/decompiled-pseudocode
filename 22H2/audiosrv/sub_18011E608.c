/*
 * XREFs of sub_18011E608 @ 0x18011E608
 * Callers:
 *     sub_1800D7B5C @ 0x1800D7B5C (sub_1800D7B5C.c)
 * Callees:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_18011E704 @ 0x18011E704 (sub_18011E704.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011E608(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
  {
    v6 = *(void **)(a1 + 24);
    sub_1800B7704(v2, byte_180169C50, v3, v4, &v6);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
  v6 = (void *)(a1 + 8688);
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)qword_18019F760 + 24LL))(
    qword_18019F760,
    &lpCriticalSection,
    *(_QWORD *)(a1 + 24));
  sub_18011E704(a1);
  sub_180048018(a1, 0, 0LL, 0LL);
  sub_18011EC50(a1);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( a1 != -8688 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
  return 0LL;
}
