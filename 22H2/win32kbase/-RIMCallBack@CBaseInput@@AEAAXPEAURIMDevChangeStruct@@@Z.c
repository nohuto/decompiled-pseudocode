/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00530AC
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C0053090 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0046904 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C005324C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C0053E20 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C00B889C (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // edx
  __int64 v6; // r15
  char v7; // r14
  __int64 v8; // rbx
  int v9; // r15d
  CBaseInput *v10; // rcx
  int v11; // eax
  int v12; // eax
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+30h] [rbp-20h]
  int v15; // [rsp+34h] [rbp-1Ch]
  _QWORD v16[2]; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+48h] [rbp-8h]
  int v18; // [rsp+4Ch] [rbp-4h]

  v2 = *((_QWORD *)a2 + 3);
  RIMHandleAnySignalledReadsOnDestroyed(a2);
  v5 = *(_DWORD *)a2 - 1;
  if ( v5 < 5 )
  {
    v6 = 2LL * v5;
    if ( *((_DWORD *)&off_1C0209840 + 4 * v5 + 2) != *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2111LL);
    v7 = *((_DWORD *)a2 + 1) != 3;
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      v12 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 == 1 )
      {
        *(_DWORD *)(v2 + 272) |= 0x8000000u;
        v7 = 0;
      }
      else
      {
        if ( v12 == 2 )
          KeBugCheck(0x164u);
        if ( (unsigned int)(v12 - 3) > 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2158LL);
        v7 &= -(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != 0);
      }
    }
    if ( *(_DWORD *)a2 == 1 || ((v2 + 88) & -(__int64)(v2 != 0)) == 0 )
      v8 = 0LL;
    else
      v8 = *(_QWORD *)((v2 + 88) & -(__int64)(v2 != 0));
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v9 = ((__int64 (__fastcall *)(CBaseInput *, __int64))*(&off_1C0209840 + v6))(this, v2);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( v8 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2190LL);
      if ( ((v2 + 88) & -(__int64)(v2 != 0)) != 0 )
        v8 = *(_QWORD *)((v2 + 88) & -(__int64)(v2 != 0));
      else
        v8 = 0LL;
    }
    qword_1C0254508 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(v10, *((_DWORD *)a2 + 1));
    if ( v7 )
    {
      if ( *((_DWORD *)a2 + 1) == 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2209LL);
      v11 = *(_DWORD *)(v2 + 272);
      if ( (v11 & 0x8000000) != 0 )
      {
        *(_DWORD *)(v2 + 272) = v11 & 0xF7FFFFFF;
        if ( *(_DWORD *)a2 == 2 )
        {
          v13[1] = v8;
          v13[0] = v2 + 88;
          v14 = 0;
          v15 = 1;
          CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v13);
        }
        else
        {
          v7 = 0;
        }
      }
      if ( v7 )
      {
        v16[1] = v8;
        v16[0] = v2 + 88;
        v18 = *(_DWORD *)a2;
        v17 = v9;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v16);
      }
    }
  }
}
