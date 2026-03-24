/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0194B00
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0194A5C (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCD8C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01874B4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187504 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C019197C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0194958 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019591C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A15E0 (WPP_RECORDER_SF_LL.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        char *a7)
{
  unsigned int v7; // r12d
  __int64 v9; // r15
  int v10; // edx
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  int v14; // edx
  _QWORD *FrameById; // r12
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned int HistoryCount; // eax
  int v20; // ecx
  int v21; // r8d
  unsigned int PointerRawData; // r14d
  _UNKNOWN **v23; // rdx
  PDEVICE_OBJECT v24; // rcx
  int v25; // r9d
  unsigned int v26; // r15d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r13
  __int64 v28; // r15
  unsigned int v29; // edx
  int v30; // [rsp+20h] [rbp-88h]
  __int64 Size; // [rsp+48h] [rbp-60h]
  int *v32; // [rsp+50h] [rbp-58h]
  CInpLockGuard *v33[9]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+D8h] [rbp+30h]
  int *v37; // [rsp+E0h] [rbp+38h]

  v7 = a4;
  v9 = a2;
  Size = 4LL * a6;
  v32 = (int *)&a7[Size];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      128,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v33, (CTouchProcessor *)((char *)this + 40));
  if ( a6 != v7 * a3 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4889);
    v7 = a4;
  }
  if ( a6 < v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 7, 129, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v13 = 130;
LABEL_21:
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
LABEL_22:
    CInpLockGuardShared::~CInpLockGuardShared(v33);
    return 0LL;
  }
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 7, 131, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v13 = 132;
    goto LABEL_21;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v9 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v14, 7, 133, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_22;
    v13 = 134;
    goto LABEL_21;
  }
  v17 = *(unsigned int *)(v9 + 32);
  if ( (unsigned int)v17 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4917);
    v17 = *(unsigned int *)(v9 + 32);
  }
  v18 = FrameById[17] + 480 * v17;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4919);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v18);
  v36 = HistoryCount;
  if ( a3 == 1 || a3 == HistoryCount )
  {
    PointerRawData = 1;
  }
  else
  {
    PointerRawData = 0;
    v23 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    LOBYTE(v23) = 3;
    WPP_RECORDER_SF_LL(v20, (_DWORD)v23, v21, 135, v30, a3, HistoryCount);
  }
  v23 = &WPP_RECORDER_INITIALIZED;
LABEL_33:
  if ( (void *)FrameById[8] == TouchExtensibility::hDeviceUser )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)v23, 7, 136, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
    memset(a7, 0, Size);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v24 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_65;
    v25 = 138;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         (PERESOURCE *)this,
                         (const struct CPointerInputFrame *)FrameById,
                         *(_DWORD *)(v18 + 156),
                         *(_WORD *)(v18 + 162),
                         a4,
                         a5,
                         (int *)a7);
      if ( !PointerRawData && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 3;
        WPP_RECORDER_SF_(
          (_DWORD)gBaseLog,
          (_DWORD)v23,
          7,
          139,
          (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
      if ( PointerRawData )
      {
        v37 = (int *)&a7[4 * a4];
        if ( a3 > 1 )
        {
          v26 = *(_DWORD *)(v18 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                    this,
                                    (const struct CPointerInputFrame *)FrameById);
          do
          {
            if ( !PreviousFrameByDevice || v36 <= 1 )
              break;
            if ( v26 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4988);
            v28 = *((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v26;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v28) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4990);
            v29 = a4;
            if ( &v37[a4] > v32 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v29) = 3;
                WPP_RECORDER_SF_(
                  (_DWORD)gBaseLog,
                  v29,
                  7,
                  140,
                  (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 (PERESOURCE *)this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v28 + 156),
                                 *(_WORD *)(v28 + 162),
                                 a4,
                                 a5,
                                 v37);
              if ( PointerRawData )
                v37 += a4;
            }
            if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v28) != v36 - 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5012);
            v36 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v28);
            v26 = *(_DWORD *)(v28 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v24 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_65;
    v25 = 141;
  }
  LOBYTE(v23) = 5;
  WPP_RECORDER_SF_(v24->DeviceExtension, (_DWORD)v23, 7, v25, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
LABEL_65:
  CInpLockGuardShared::~CInpLockGuardShared(v33);
  return PointerRawData;
}
