/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C00B6178
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00B5A44 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01EBB48 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2)
{
  InputExtensibilityCallout *v3; // rbp
  _BYTE *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _BYTE *v8; // rsi
  char *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char *v13; // rdi
  char *v14; // rbp
  __int64 v15; // xmm1_8
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rbx
  _BYTE v19[528]; // [rsp+20h] [rbp-228h] BYREF

  v3 = gpInputExtensibilityCallout;
  LOBYTE(v4) = CInputThreadBase::IsInputThread(gpInputThread);
  if ( !(_BYTE)v4 )
    LOBYTE(v4) = MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( !a2 )
  {
    memset(v19, 0, sizeof(v19));
    v8 = v19;
    v9 = (char *)v3 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v3 + 8, 0LL);
    if ( !*((_QWORD *)v3 + 3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    v13 = (char *)v3 + 32;
    v14 = (char *)v3 + 912;
    while ( v13 != v14 )
    {
      if ( *(_QWORD *)v13 && (*((_DWORD *)v13 + 4) & 2) != 0 )
      {
        v15 = *((_QWORD *)v13 + 4);
        *(_OWORD *)v8 = *((_OWORD *)v13 + 1);
        *((_QWORD *)v8 + 2) = v15;
        v8 += 24;
        if ( (unsigned __int64)((v8 - v19) / 24) > 0x16 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8 - v19, (v8 - v19) / 24, v12);
      }
      v13 += 40;
    }
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
    v4 = v19;
    if ( v19 < v8 )
    {
      v16 = &v19[16];
      v17 = (v8 - v19 - 1) / 0x18uLL + 1;
      do
      {
        LOBYTE(v4) = ((__int64 (__fastcall *)(__int64, _QWORD))*(v16 - 1))(2LL, *v16);
        v16 += 3;
        --v17;
      }
      while ( v17 );
    }
  }
  return (char)v4;
}
