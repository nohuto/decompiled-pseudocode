/*
 * XREFs of sub_18004C540 @ 0x18004C540
 * Callers:
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     sub_180116EE8 @ 0x180116EE8 (sub_180116EE8.c)
 *     sub_1801174D4 @ 0x1801174D4 (sub_1801174D4.c)
 *     sub_18011C8E8 @ 0x18011C8E8 (sub_18011C8E8.c)
 * Callees:
 *     sub_1800B6294 @ 0x1800B6294 (sub_1800B6294.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 */

void __fastcall sub_18004C540(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // r10d
  __int64 v7; // r11
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  if ( (a3 & 0x80000000) != 0LL && (unsigned int)dword_18019C448 > 3 )
  {
    if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x14,
           a3) )
    {
      v9 = v5;
      v10 = v6;
      v8[0] = v7;
      sub_1800B6294(v3, (unsigned int)&unk_18016A283, v4, v5, (__int64)v8, (__int64)&v10, (__int64)&v9);
    }
  }
}
