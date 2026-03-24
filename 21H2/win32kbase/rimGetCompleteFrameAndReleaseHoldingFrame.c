/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0172298
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01714F4 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     rimFindHoldingFrame @ 0x1C00A6778 (rimFindHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0170ADC (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     rimReclaimHoldingFrame @ 0x1C0172A50 (rimReclaimHoldingFrame.c)
 *     ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C01CE900 (ApiSetEtwTraceBeginPointerFrameCommit.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  _QWORD *HoldingFrame; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdx
  int v11; // eax
  __int64 v12; // r15
  unsigned int v13; // esi
  _DWORD *v14; // rax
  _DWORD *v15; // r14
  unsigned int v16; // ebp
  _QWORD *v17; // rax
  __int64 i; // rsi
  __int64 v19; // r12
  _OWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r15
  int v23; // eax
  unsigned int v24; // eax

  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 981);
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 982);
  if ( HoldingFrame[3] != *(_QWORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 983);
  v8 = *((unsigned int *)HoldingFrame + 10);
  if ( !(_DWORD)v8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 984);
    v8 = *((unsigned int *)HoldingFrame + 10);
  }
  if ( (_DWORD)v8 != *((_DWORD *)HoldingFrame + 11) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 985);
    v8 = *((unsigned int *)HoldingFrame + 10);
  }
  ApiSetEtwTraceBeginPointerFrameCommit(v6, v8);
  v9 = HoldingFrame[7];
  v10 = 0LL;
  while ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 4);
    v9 = *(_QWORD *)(v9 + 16);
    v10 = (__int64 *)(((v11 + 7) & 0xFFFFFFF8) + (_DWORD)v10 + 24);
  }
  v12 = (unsigned int)(192 * *((_DWORD *)HoldingFrame + 10));
  v13 = (_DWORD)v10 + v12 + 128;
  if ( v13 )
  {
    v14 = Win32AllocPoolZInit(v13, 1717793618LL);
    v15 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v16 = 0;
      v17 = v14 + 2;
      v17[1] = v17;
      *v17 = v17;
      v15[6] = *((_DWORD *)HoldingFrame + 10);
      *((_QWORD *)v15 + 4) = HoldingFrame[3];
      *((_QWORD *)v15 + 5) = HoldingFrame[4];
      *((_QWORD *)v15 + 15) = v15 + 32;
      for ( i = HoldingFrame[9]; v16 < *((_DWORD *)HoldingFrame + 10); i += 192LL )
      {
        v19 = 192LL * v16;
        v20 = (_OWORD *)(v19 + *((_QWORD *)v15 + 15));
        *v20 = *(_OWORD *)i;
        v20[1] = *(_OWORD *)(i + 16);
        v20[2] = *(_OWORD *)(i + 32);
        v20[3] = *(_OWORD *)(i + 48);
        v20[4] = *(_OWORD *)(i + 64);
        v20[5] = *(_OWORD *)(i + 80);
        v20[6] = *(_OWORD *)(i + 96);
        v20[7] = *(_OWORD *)(i + 112);
        v20[8] = *(_OWORD *)(i + 128);
        v20[9] = *(_OWORD *)(i + 144);
        v20[10] = *(_OWORD *)(i + 160);
        v20[11] = *(_OWORD *)(i + 176);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_d(
            (_DWORD)gRimLog,
            (_DWORD)v10,
            1,
            26,
            (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
            v16);
        }
        DumpPointerEventInt((struct tagPOINTEREVENTINT *)(i + 8), (int)v10);
        if ( i == HoldingFrame[10] )
        {
          v9 = v19 + *((_QWORD *)v15 + 15);
          *((_QWORD *)v15 + 13) = v9;
        }
        ++v16;
      }
      v15[7] = *((_DWORD *)HoldingFrame + 12);
      v21 = HoldingFrame[7];
      if ( v21 )
      {
        v22 = *((_QWORD *)v15 + 15) + v12;
        *((_QWORD *)v15 + 14) = v22;
        v21 = HoldingFrame[7];
      }
      else
      {
        v22 = *((_QWORD *)v15 + 14);
      }
      while ( v21 )
      {
        while ( 1 )
        {
          *(_DWORD *)v22 = *(_DWORD *)v21;
          *(_DWORD *)(v22 + 4) = *(_DWORD *)(v21 + 4);
          *(_QWORD *)(v22 + 8) = v22 + 24;
          memmove((void *)(v22 + 24), *(const void **)(v21 + 8), *(unsigned int *)(v21 + 4));
          v10 = (__int64 *)(v21 + 16);
          v23 = *(_DWORD *)(v21 + 4) + 7;
          *(_QWORD *)(v22 + 16) = 0LL;
          v21 = *(_QWORD *)(v21 + 16);
          v24 = (v23 & 0xFFFFFFF8) + 24;
          v9 = 0LL;
          if ( v21 )
          {
            v9 = v22 + v24;
            *(_QWORD *)(v22 + 16) = v9;
            v21 = *v10;
          }
          v22 = v9;
          if ( !v9 )
            break;
          if ( !v21 )
            goto LABEL_31;
        }
        if ( !v21 )
          break;
LABEL_31:
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1139);
      }
      *a3 = v15;
      v3 = 1;
    }
  }
  rimReclaimHoldingFrame(v9, v10, HoldingFrame);
  return v3;
}
