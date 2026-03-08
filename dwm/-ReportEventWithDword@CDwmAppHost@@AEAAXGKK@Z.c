/*
 * XREFs of ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x14000AF0C
 * Callers:
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140003170 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140003CD4 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x14000AC9C (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 * Callees:
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140003FF8 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000476C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 */

void __fastcall CDwmAppHost::ReportEventWithDword(CDwmAppHost *this, WORD a2, DWORD a3)
{
  CDwmAppHost *v5; // rcx
  unsigned __int16 v6[8]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  __int16 v8; // [rsp+44h] [rbp-14h]

  v7 = 0;
  v8 = 0;
  *(_OWORD *)v6 = 0LL;
  StringCchPrintfW(v6, 0xBuLL, (size_t *)L"0x%x");
  CDwmAppHost::ReportEventW(v5, a2, a3, v6);
}
