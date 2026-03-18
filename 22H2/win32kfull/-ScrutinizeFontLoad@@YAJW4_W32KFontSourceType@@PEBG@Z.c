/*
 * XREFs of ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00BB404
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0078E78 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C013E7D4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026AF54 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026B460 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C0077ABC (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0079C18 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0113788 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C026AB10 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(unsigned int a1, const wchar_t *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PEPROCESS ThreadProcess; // rax
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  struct UmfdTls *v10; // rax
  __int64 v11; // rcx
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // r8
  HANDLE ProcessHandle; // [rsp+60h] [rbp+18h] BYREF
  int ProcessInformation; // [rsp+68h] [rbp+20h] BYREF
  int v16; // [rsp+6Ch] [rbp+24h]

  ProcessHandle = 0LL;
  if ( !UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread()
    || (result = _wcsicmp(L"\\SystemRoot\\System32\\winsrv.dll", a2)) != 0 )
  {
    v16 = 0;
    ProcessInformation = 9;
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v4)
      && *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v5) + 32) + 23560LL) )
    {
      v10 = UmfdTls::EnsureTls();
      if ( !v10 )
        return -1073741801;
      v11 = *((_QWORD *)v10 + 3);
      if ( !v11 )
        return -1073741801;
      CurrentThread = *(struct _KTHREAD **)(v11 + 16);
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
      v9 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
      if ( v9 >= 0 )
      {
        if ( (v16 & 1) != 0 )
        {
          v12 = &word_1C030D60C;
          if ( a2 )
            v12 = a2;
          LogFontLoadAttempt(ProcessHandle, a1, v12);
          v9 = -1073741790;
        }
        else if ( (v16 & 2) != 0 )
        {
          v13 = &word_1C030D60C;
          if ( a2 )
            v13 = a2;
          LogFontLoadAttempt(ProcessHandle, a1, v13);
        }
      }
      ZwClose(ProcessHandle);
      return v9;
    }
  }
  return result;
}
