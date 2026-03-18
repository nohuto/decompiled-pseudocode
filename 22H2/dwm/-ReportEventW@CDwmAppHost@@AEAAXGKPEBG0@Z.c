/*
 * XREFs of ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x14000229C
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002118 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x140006C58 (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140006FA8 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmAppHost::ReportEventW(CDwmAppHost *this, WORD a2, DWORD a3, const unsigned __int16 *a4)
{
  const WCHAR *v4; // rax
  WORD wNumStrings; // si
  char *v8; // rbx
  LPCWSTR Strings; // [rsp+50h] [rbp-18h] BYREF

  v4 = Strings;
  if ( a4 )
    v4 = a4;
  Strings = v4;
  wNumStrings = a4 != 0LL;
  if ( a3 != dword_1400152C8 )
  {
    v8 = (char *)RegisterEventSourceW(0LL, L"Desktop Window Manager");
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      ReportEventW(v8, a2, 0, a3, 0LL, wNumStrings, 0, &Strings, 0LL);
      dword_1400152C8 = a3;
      DeregisterEventSource(v8);
    }
  }
}
