/*
 * XREFs of ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800ADC48
 * Callers:
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x1800ADB80 (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800AE258 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall OpenComposedEvent(int a1, __int64 a2, void **a3)
{
  unsigned int v4; // ebx
  HANDLE v5; // rax
  unsigned int v6; // ecx
  WCHAR Name[28]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  if ( StringCchPrintfW(Name, 0x1AuLL, L"%s%x", L"DwmComposedEvent_", a1) >= 0 )
  {
    v5 = OpenEventW(2u, 0, Name);
    *a3 = v5;
    if ( !v5 )
    {
      v4 = -2144980991;
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_18033A438, 2u, -2144980991, 0x2Eu, 0LL);
    }
  }
  return v4;
}
