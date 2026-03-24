/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C008A8E8
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0088848 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01B1E78 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

void __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2)
{
  InputExtensibilityCallout *v2; // rbp
  CInputThread *v4; // rdi
  bool v5; // bl
  _BYTE *v6; // rsi
  char *v7; // rbx
  char *v8; // rdi
  char *v9; // rbp
  __int64 v10; // xmm1_8
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbx
  _BYTE v13[464]; // [rsp+30h] [rbp-1F8h] BYREF

  v2 = gpInputExtensibilityCallout;
  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 343LL);
  if ( !a2 )
  {
    memset(v13, 0, 0x1C8uLL);
    v6 = v13;
    v7 = (char *)v2 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
    if ( !*((_QWORD *)v2 + 3) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 353LL);
    v8 = (char *)v2 + 32;
    v9 = (char *)v2 + 792;
    while ( v8 != v9 )
    {
      if ( *(_QWORD *)v8 && (*((_DWORD *)v8 + 4) & 2) != 0 )
      {
        v10 = *((_QWORD *)v8 + 4);
        *(_OWORD *)v6 = *((_OWORD *)v8 + 1);
        *((_QWORD *)v6 + 2) = v10;
        v6 += 24;
        if ( (unsigned __int64)((v6 - v13) / 24) > 0x13 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 363LL);
      }
      v8 += 40;
    }
    ExReleasePushLockSharedEx(v7, 0LL);
    KeLeaveCriticalRegion();
    if ( v13 < v6 )
    {
      v11 = &v13[16];
      v12 = (v6 - v13 - 1) / 0x18uLL + 1;
      do
      {
        ((void (__fastcall *)(__int64, _QWORD))*(v11 - 1))(2LL, *v11);
        v11 += 3;
        --v12;
      }
      while ( v12 );
    }
  }
}
