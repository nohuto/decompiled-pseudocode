/*
 * XREFs of sub_180122224 @ 0x180122224
 * Callers:
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180122170 @ 0x180122170 (sub_180122170.c)
 */

void __fastcall sub_180122224(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  void *v3; // r9
  void *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  if ( (unsigned int)dword_18019C448 > 2 )
  {
    if ( __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 1uLL) )
    {
      v4 = v3;
      v5 = 7849806LL;
      sub_180122170(v1, byte_18016A253, v2, (__int64)v3, (__int64)&v5, &v4);
    }
  }
}
