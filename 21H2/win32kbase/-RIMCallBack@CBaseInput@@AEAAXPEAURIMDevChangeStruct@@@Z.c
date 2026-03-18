/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004894C
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C0048930 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003C780 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0048B2C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     _lambda_fd7880233c47f7262ae148d93969aca2_::operator() @ 0x1C0048D0C (_lambda_fd7880233c47f7262ae148d93969aca2_--operator().c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C0048F00 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C004A36C (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  __int64 v3; // rbx
  bool v5; // r12
  bool v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  CBaseInput *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rsi
  int v12; // eax
  int v13; // r14d
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+30h] [rbp-20h]
  int v20; // [rsp+34h] [rbp-1Ch]
  _QWORD v21[2]; // [rsp+38h] [rbp-18h] BYREF
  int v22; // [rsp+48h] [rbp-8h]
  int v23; // [rsp+4Ch] [rbp-4h]
  CBaseInput *v24; // [rsp+88h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v5 = *((_DWORD *)a2 + 1) != 3;
  v6 = IsThreadCrossSessionAttached();
  RIMHandleAnySignalledReadsOnDestroyed(a2);
  if ( v6 || !CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    v9 = (CBaseInput *)*(unsigned int *)a2;
    if ( *(_DWORD *)a2 == 1 )
    {
      v5 = 0;
      *(_DWORD *)(v3 + 272) |= 0x20000000u;
    }
    else
    {
      if ( *(_DWORD *)a2 == 2 )
        KeBugCheck(0x164u);
      if ( (unsigned int)((_DWORD)v9 - 3) > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v7, v8);
      if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        v5 = 0;
    }
  }
  v10 = *(unsigned int *)a2;
  v11 = 0LL;
  v12 = *(_DWORD *)a2;
  v24 = this;
  v13 = 0;
  v14 = v12 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      if ( v3 )
        v15 = (_QWORD *)(v3 + 88);
      else
        v15 = 0LL;
      v16 = 2LL;
      if ( !*v15 )
      {
        lambda_fd7880233c47f7262ae148d93969aca2_::operator()(&v24, v3, 1LL);
        v16 = *(unsigned int *)a2;
      }
      v13 = lambda_fd7880233c47f7262ae148d93969aca2_::operator()(&v24, v3, v16);
LABEL_10:
      if ( v3 )
        v11 = (_QWORD *)(v3 + 88);
      v11 = (_QWORD *)*v11;
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(v3 + 272) & 0x20000000) == 0 )
    {
      v11 = *(_QWORD **)(v3 + 88);
      v13 = lambda_fd7880233c47f7262ae148d93969aca2_::operator()(&v24, v3, v10);
    }
  }
  else
  {
    if ( !v6 )
    {
      v13 = lambda_fd7880233c47f7262ae148d93969aca2_::operator()(&v24, v3, 1LL);
      if ( !v13 )
        goto LABEL_13;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v3 + 272) & 0x2000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v7, v10);
  }
LABEL_13:
  if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
    CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(v9, *((_DWORD *)a2 + 1));
  if ( v5 && v11 )
  {
    if ( *((_DWORD *)a2 + 1) == 3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v7, v10);
    v17 = *(_DWORD *)(v3 + 272);
    if ( (v17 & 0x20000000) == 0 )
      goto LABEL_20;
    *(_DWORD *)(v3 + 272) = v17 & 0xDFFFFFFF;
    if ( *(_DWORD *)a2 == 2 )
    {
      v19 = 0;
      v18[0] = v3 + 88;
      v18[1] = v11;
      v20 = 1;
      CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v18);
LABEL_20:
      v21[1] = v11;
      v21[0] = v3 + 88;
      v23 = *(_DWORD *)a2;
      v22 = v13;
      CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v21);
    }
  }
}
