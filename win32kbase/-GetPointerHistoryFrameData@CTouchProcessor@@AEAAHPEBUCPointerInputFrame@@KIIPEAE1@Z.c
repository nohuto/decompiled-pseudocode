/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01F81F0
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01F7A00 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetPointerInfoSize @ 0x1C00EEA9A (GetPointerInfoSize.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C00F2294 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C00F2F30 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C01F19E8 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerHistoryFrameData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct tagPOINTER_INFO *a7)
{
  unsigned int v7; // esi
  unsigned int v10; // r13d
  __int64 PointerInfoSize; // r12
  unsigned int v12; // edi
  unsigned int v13; // ebx
  int *v14; // rdx
  int v15; // esi
  unsigned __int16 *v16; // rdx
  unsigned int v17; // esi
  unsigned int v20; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+18h]
  unsigned int v22; // [rsp+A8h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v7 = a4;
  v10 = 0;
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14055);
  }
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v12 = 1;
  if ( v7 > *((_DWORD *)a2 + 12) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14067);
  }
  if ( v7 * (_DWORD)PointerInfoSize != a5 )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14068);
  }
  v13 = 0;
  while ( v12 && v10 < v7 )
  {
    v20 = v13 < *((_DWORD *)a2 + 12) ? v13 : 0;
    v14 = (int *)(a6 + 4);
    if ( (unsigned __int64)(a6 + 4) >= MmUserProbeAddress )
      v14 = (int *)MmUserProbeAddress;
    v15 = *v14;
    if ( !*v14 || HIWORD(v15) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14097);
    v13 = v20;
    v16 = (unsigned __int16 *)(*((_QWORD *)a2 + 30) + 480LL * v20);
    if ( v16[86] != v15 )
    {
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame(this, a2, v15, &v20) )
        return 0;
      v13 = v20;
      v16 = (unsigned __int16 *)(*((_QWORD *)a2 + 30) + 480LL * v20);
    }
    v17 = a5;
    if ( a5 >= (unsigned int)PointerInfoSize )
    {
      v12 = CTouchProcessor::PointerInfoCopyOutHelper(
              this,
              (struct CPointerInfoNode *)v16,
              *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 32),
              v21,
              PointerInfoSize,
              a7);
      if ( v12 )
      {
        a6 += PointerInfoSize;
        a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
        a5 = v17 - PointerInfoSize;
        ++v13;
      }
    }
    ++v10;
    v7 = v22;
  }
  return v12;
}
