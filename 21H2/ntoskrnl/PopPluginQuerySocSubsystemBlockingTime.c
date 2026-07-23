/*
 * XREFs of PopPluginQuerySocSubsystemBlockingTime @ 0x1408E5E9C
 * Callers:
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408E4C70 (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     RtlHashUnicodeString @ 0x14062BAB0 (RtlHashUnicodeString.c)
 */

char __fastcall PopPluginQuerySocSubsystemBlockingTime(__int64 a1, int a2, __int64 a3)
{
  ULONG_PTR v4; // rsi
  char v6; // di
  const UNICODE_STRING *v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-18h]
  ULONG HashValue; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  v11 = HIDWORD(a1);
  HashValue = 0;
  v4 = PopFxProcessorPlugin;
  v9 = *(_OWORD *)*(_QWORD *)(a3 + 16);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(PopFxProcessorPlugin + 96))(39LL, a3);
  if ( !v6 )
    PopFxBugCheck(0x605uLL, 0x27uLL, PopFxProcessorPlugin, 0LL);
  v7 = *(const UNICODE_STRING **)(a3 + 16);
  RtlHashUnicodeString(v7, 0, 0, &HashValue);
  if ( *(_DWORD *)&v7->Length != (_DWORD)v9 || v7->Buffer != (wchar_t *)*((_QWORD *)&v9 + 1) || HashValue != a2 )
    PopFxBugCheck(0x705uLL, v4, 0x27uLL, 0x4E616D65uLL);
  return v6;
}
