/*
 * XREFs of InitializeGreCSRSS @ 0x1C009000C
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C005AFC0 (Win32kBaseUserInitialize.c)
 * Callees:
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C00902C0 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     vConvertCodePageToCharSet @ 0x1C0090424 (vConvertCodePageToCharSet.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C0090474 (-GetLanguageID@@YAGXZ.c)
 *     DrvNotifySessionStateChange @ 0x1C0090680 (DrvNotifySessionStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 InitializeGreCSRSS()
{
  _DWORD *v0; // rdi
  USHORT *v1; // rsi
  USHORT *v2; // rbx
  USHORT v3; // r8
  BOOL v4; // eax

  DrvNotifySessionStateChange(0LL);
  if ( !qword_1C029CA88 || (unsigned int)qword_1C029CA88() )
    return 0LL;
  gcTrueTypeFonts = 0;
  gulFontInformation = 0;
  gusLanguageID = GetLanguageID();
  if ( qword_1C029B2C8 )
    v0 = (_DWORD *)qword_1C029B2C8();
  else
    v0 = 0LL;
  if ( qword_1C029B2A8 )
    v1 = (USHORT *)qword_1C029B2A8();
  else
    v1 = 0LL;
  if ( qword_1C029B2B8 )
    v2 = (USHORT *)qword_1C029B2B8();
  else
    v2 = 0LL;
  RtlGetDefaultCodePage(v2, v1);
  vConvertCodePageToCharSet(*v2);
  v3 = *v2;
  if ( *v2 == 936 || v3 == 949 || v3 == 950 )
  {
    *v0 = 3;
    v3 = *v2;
  }
  v4 = v3 == 932 || v3 == 949 || v3 == 950 || v3 == 936;
  gbDBCSCodePage = v4;
  if ( qword_1C029B2D0 && (int)qword_1C029B2D0(949LL, 950LL) >= 0 && qword_1C029B2D8 )
    qword_1C029B2D8();
  vCheckIsSetupRunning();
  if ( qword_1C029B300 && (int)qword_1C029B300() >= 0 && qword_1C029B308 )
    qword_1C029B308();
  if ( !qword_1C029B3D8
    || (int)qword_1C029B3D8() < 0
    || qword_1C029B310 && (int)qword_1C029B310() >= 0 && (!qword_1C029B318 || !(unsigned int)qword_1C029B318())
    || qword_1C029B320 && (int)qword_1C029B320() >= 0 && (!qword_1C029B328 || !(unsigned int)qword_1C029B328()) )
  {
    return 0LL;
  }
  if ( qword_1C029B330 && (int)qword_1C029B330() >= 0 && qword_1C029B338 )
    qword_1C029B338();
  if ( qword_1C029B340 && (int)qword_1C029B340() >= 0 && qword_1C029B348 )
    qword_1C029B348();
  if ( qword_1C029B350 && (int)qword_1C029B350() >= 0 && qword_1C029B368 )
    qword_1C029B368();
  return !qword_1C029B358 || (int)qword_1C029B358() < 0 || qword_1C029B360 && (unsigned int)qword_1C029B360();
}
