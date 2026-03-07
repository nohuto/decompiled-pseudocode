void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  __int64 v3; // rbx
  bool v5; // r15
  int v6; // r14d
  bool v7; // r13
  _QWORD *v8; // rdi
  int v9; // eax
  int v10; // eax
  _QWORD *v11; // rax
  int v12; // eax
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+30h] [rbp-20h]
  int v15; // [rsp+34h] [rbp-1Ch]
  _QWORD v16[2]; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+48h] [rbp-8h]
  int v18; // [rsp+4Ch] [rbp-4h]
  CBaseInput *v19; // [rsp+88h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v5 = *((_DWORD *)a2 + 1) != 3;
  v6 = 0;
  v7 = (unsigned int)IsThreadCrossSessionAttached() != 0;
  RIMHandleAnySignalledReadsOnDestroyed(a2);
  if ( !v7 && CBaseInput::ExecutingOnSensorHostingThread(this) )
    goto LABEL_3;
  if ( *(_DWORD *)a2 == 1 )
  {
    *(_DWORD *)(v3 + 256) |= 0x20000000u;
LABEL_29:
    v5 = 0;
    goto LABEL_3;
  }
  if ( *(_DWORD *)a2 == 2 )
    KeBugCheck(0x164u);
  if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2218LL);
  }
  if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
    goto LABEL_29;
LABEL_3:
  v8 = 0LL;
  v9 = *(_DWORD *)a2;
  v19 = this;
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = (_QWORD *)(v3 + 72);
      if ( !v3 )
        v11 = 0LL;
      if ( !*v11 )
        lambda_38b028ed545a26b359f0514a95527d29_::operator()(&v19, v3);
      v6 = lambda_38b028ed545a26b359f0514a95527d29_::operator()(&v19, v3);
      v8 = *(_QWORD **)((v3 + 72) & -(__int64)(v3 != 0));
    }
    else if ( (*(_DWORD *)(v3 + 256) & 0x20000000) == 0 )
    {
      v8 = *(_QWORD **)(v3 + 72);
      v6 = lambda_38b028ed545a26b359f0514a95527d29_::operator()(&v19, v3);
    }
  }
  else if ( v7 )
  {
    if ( (*(_DWORD *)(v3 + 256) & 0x2000) != 0 )
    {
      LODWORD(v19) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2301LL);
    }
  }
  else
  {
    v6 = lambda_38b028ed545a26b359f0514a95527d29_::operator()(&v19, v3);
    if ( v6 )
    {
      if ( v3 )
        v8 = (_QWORD *)(v3 + 72);
      v8 = (_QWORD *)*v8;
    }
  }
  if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
    CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(this, *((_DWORD *)a2 + 1));
  if ( v5 && v8 )
  {
    if ( *((_DWORD *)a2 + 1) == 3 )
    {
      LODWORD(v19) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2349LL);
    }
    v12 = *(_DWORD *)(v3 + 256);
    if ( (v12 & 0x20000000) == 0 )
      goto LABEL_17;
    *(_DWORD *)(v3 + 256) = v12 & 0xDFFFFFFF;
    if ( *(_DWORD *)a2 == 2 )
    {
      v13[1] = v8;
      v13[0] = v3 + 72;
      v14 = 0;
      v15 = 1;
      CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v13);
LABEL_17:
      v16[1] = v8;
      v16[0] = v3 + 72;
      v18 = *(_DWORD *)a2;
      v17 = v6;
      CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v16);
    }
  }
}
