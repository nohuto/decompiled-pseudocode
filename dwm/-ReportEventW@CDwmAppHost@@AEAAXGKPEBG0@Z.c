/*
 * XREFs of ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140003FF8
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140003CD4 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x14000AC9C (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x14000AF0C (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?DeregisterEventSource@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1400040B8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-DeregisterEventSource@@YAH0@Z@de.c)
 */

void __fastcall CDwmAppHost::ReportEventW(CDwmAppHost *this, WORD a2, DWORD a3, const unsigned __int16 *a4)
{
  const WCHAR *v4; // rax
  WORD wNumStrings; // di
  CDwmAppHost *v8; // rax
  LPCWSTR Strings; // [rsp+50h] [rbp-18h] BYREF
  CDwmAppHost *v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = this;
  v4 = Strings;
  if ( a4 )
    v4 = a4;
  Strings = v4;
  wNumStrings = a4 != 0LL;
  if ( a3 != dword_1400161C4 )
  {
    v8 = (CDwmAppHost *)RegisterEventSourceW(0LL, L"Desktop Window Manager");
    v10 = v8;
    if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      ReportEventW(v8, a2, 0, a3, 0LL, wNumStrings, 0, &Strings, 0LL);
      dword_1400161C4 = a3;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int DeregisterEventSource(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int DeregisterEventSource(void *)>>(&v10);
  }
}
