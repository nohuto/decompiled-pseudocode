/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001F138
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C0010028 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     UmfdLoadFontFileView @ 0x1C0010120 (UmfdLoadFontFileView.c)
 *     cMapRemoteFonts @ 0x1C028769C (cMapRemoteFonts.c)
 *     AtmDrvFontManagementRedirector @ 0x1C029D4D4 (AtmDrvFontManagementRedirector.c)
 *     GreMakeFontDir @ 0x1C02B99A8 (GreMakeFontDir.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02C10B0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C5FC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F1E4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00F7BD8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

char UmfdHostLifeTimeManager::EnsureUmfdHost(void)
{
  char v0; // bl
  __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-30h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v2,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  v0 = 0;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock() )
  {
    if ( v2 )
    {
      GreReleasePushLockShared(v2);
      KeLeaveCriticalRegion();
    }
    return 1;
  }
  else
  {
    if ( v2 )
    {
      GreReleasePushLockShared(v2);
      KeLeaveCriticalRegion();
    }
    if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v2, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_LaunchLock);
      if ( UmfdHostLifeTimeManager::s_Launched )
      {
LABEL_6:
        v0 = 1;
LABEL_7:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v2);
        return v0;
      }
      KeClearEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
      if ( gpidLogon && (int)PostWinlogonMessage(1033LL, 0LL) >= 0 )
      {
        if ( !KeWaitForSingleObject(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, Executive, 0, 0, 0LL)
          && UmfdHostLifeTimeManager::s_UmfdHostProcess )
        {
          goto LABEL_6;
        }
        if ( (unsigned int)dword_1C03263F8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000000LL) )
          goto LABEL_7;
      }
      else if ( (unsigned int)dword_1C03263F8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000000LL) )
      {
        goto LABEL_7;
      }
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C03263F8, (int)&dword_1C02F26E5, 0, 0, 2u, &v3);
      goto LABEL_7;
    }
    return 0;
  }
}
