/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F7AC8
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C000D29C (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02707FC (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C02709E0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0270D90 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C0011710 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00F7BD8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C02704FC (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(unsigned int a1, const unsigned __int16 *a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  struct UmfdTls *v8; // rax
  __int64 v9; // rcx
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // r8
  HANDLE ProcessHandle; // [rsp+60h] [rbp+18h] BYREF
  int ProcessInformation; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  ProcessHandle = 0LL;
  v14 = 0;
  ProcessInformation = 9;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock()
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    v8 = UmfdTls::EnsureTls();
    if ( !v8 )
      return -1073741801;
    v9 = *((_QWORD *)v8 + 3);
    if ( !v9 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v9 + 16);
    if ( !CurrentThread )
      return -1073741801;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
  }
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  result = ObOpenObjectByPointer(ThreadProcess, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
  if ( result >= 0 )
  {
    v7 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
    if ( v7 >= 0 )
    {
      if ( (v14 & 1) != 0 )
      {
        v10 = &word_1C02E3794;
        if ( a2 )
          v10 = a2;
        LogFontLoadAttempt(ProcessHandle, a1, v10);
        v7 = -1073741790;
      }
      else if ( (v14 & 2) != 0 )
      {
        v11 = &word_1C02E3794;
        if ( a2 )
          v11 = a2;
        LogFontLoadAttempt(ProcessHandle, a1, v11);
      }
    }
    ZwClose(ProcessHandle);
    return v7;
  }
  return result;
}
