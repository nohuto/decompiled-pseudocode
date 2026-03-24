/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0195338
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C012F960 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ValidateHwndEx @ 0x1C0039A90 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ValidateHbwnd @ 0x1C0115590 (ValidateHbwnd.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C01923F0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0195D00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_SF_L @ 0x1C01A131C (WPP_RECORDER_SF_L.c)
 *     ApiSetGetInputTransformList @ 0x1C01CED88 (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1C01CF640 (ApiSetHasInputTransform.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  CTouchProcessor *v5; // rbp
  int v6; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 ThreadPointerData; // r14
  HWND v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 *v14; // rbx
  __int64 v15; // rdx
  unsigned int PointerDataQPCTimeList; // ebp
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // r9d
  HWND *v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF
  HWND v23; // [rsp+80h] [rbp+8h] BYREF
  int v24; // [rsp+90h] [rbp+18h] BYREF

  v5 = gpTouchProcessor;
  v6 = a3;
  v8 = a4;
  v22[0] = 0LL;
  v23 = 0LL;
  if ( a3 == 1 )
  {
    v24 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13807);
  }
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        v5,
                        (struct tagTHREADINFO *)((char *)a2 + 1088),
                        v6,
                        0LL,
                        0LL,
                        &v23);
  if ( !ThreadPointerData )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = v6;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        312,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids,
        v21,
        v22[0]);
    }
LABEL_25:
    v12 = 87LL;
LABEL_14:
    UserSetLastError(v12, v9);
    return 0LL;
  }
  v11 = v23;
  if ( !ValidateHbwnd((unsigned __int64)v23, v9) && !ValidateHwndEx((__int64)v11, 1, 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        313,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
    goto LABEL_25;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v11) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        4,
        314,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
    v12 = 232LL;
    goto LABEL_14;
  }
  if ( (_DWORD)v8 == 1 )
  {
    v14 = v22;
  }
  else
  {
    v14 = (unsigned __int64 *)Win32AllocPoolZInit(8 * v8, 2020176725LL);
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_L(v19, v9, 7, 315, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids, v8);
      }
      goto LABEL_25;
    }
  }
  v24 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(v5, ThreadPointerData, v8, v14, &v24);
  if ( !PointerDataQPCTimeList )
  {
    if ( !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v15,
          7,
          316,
          (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
      v18 = 232LL;
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 317;
LABEL_31:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        7,
        v20,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v11, v8, (_DWORD)v14, v17, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 318;
      goto LABEL_31;
    }
LABEL_32:
    v18 = 87LL;
LABEL_33:
    UserSetLastError(v18, v15);
  }
  if ( v14 != v22 )
    Win32FreePool((__int64)v14);
  return PointerDataQPCTimeList;
}
