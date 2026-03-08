/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C002E560
 * Callers:
 *     ACPICheckModuleStarted @ 0x1C00324D8 (ACPICheckModuleStarted.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1C003A1C0 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIInitShutdownInProgress @ 0x1C003CC08 (ACPIInitShutdownInProgress.c)
 *     ACPINotifyOsShutdownWorker @ 0x1C003CD40 (ACPINotifyOsShutdownWorker.c)
 *     ACPIRootEvent @ 0x1C003D000 (ACPIRootEvent.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x1C003D9E0 (AcpiShutdownNotificationTimerWorkItem.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0081770 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0015444 (WPP_RECORDER_SF_qss.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(_QWORD *a1, int a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbp
  int v8; // esi
  __int64 v9; // rdx
  const char *v10; // rax
  const char *v11; // r8
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // r8
  _QWORD v16[15]; // [rsp+50h] [rbp-A8h] BYREF

  v6 = -1073741823;
  v7 = AMLIGetNamedChild(a1[95], 1414745951LL);
  if ( v7 )
  {
    memset(v16, 0, sizeof(v16));
    v16[14] = 0LL;
    LODWORD(v16[2]) = a2;
    WORD1(v16[0]) = 1;
    WORD1(v16[5]) = 1;
    WORD1(v16[10]) = 2;
    LODWORD(v16[7]) = a3;
    v8 = AMLIAsyncEvalObject(v7, 0, 3, (unsigned int)v16, 0LL, 0LL);
    AMLIDereferenceHandleEx(v7);
    if ( v8 == 259 )
    {
      return 0;
    }
    else
    {
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = a1[1];
        v10 = (const char *)&unk_1C00622D0;
        v11 = (const char *)&unk_1C00622D0;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v10 = (const char *)a1[76];
          if ( (v9 & 0x400000000000LL) != 0 )
            v11 = (const char *)a1[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0xFu,
            (__int64)&WPP_95d701b52be23d9498d45ac18e77591e_Traceguids,
            v8,
            (char)a1,
            v10,
            v11);
      }
    }
  }
  else
  {
    v12 = a1[1];
    v13 = (const char *)&unk_1C00622D0;
    v14 = (const char *)&unk_1C00622D0;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = (const char *)a1[76];
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = (const char *)a1[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x10u,
        (__int64)&WPP_95d701b52be23d9498d45ac18e77591e_Traceguids,
        (char)a1,
        v13,
        v14);
  }
  return v6;
}
