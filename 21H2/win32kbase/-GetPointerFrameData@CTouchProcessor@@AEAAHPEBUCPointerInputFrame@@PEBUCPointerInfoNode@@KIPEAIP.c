/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01CA614
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01CA750 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C00E7CE8 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C00E85F2 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     GetPointerInfoSize @ 0x1C015363C (GetPointerInfoSize.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        struct tagPOINTER_INFO *a7)
{
  __int64 PointerInfoSize; // r15
  unsigned int v11; // ebx
  PERESOURCE *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r12d
  unsigned __int64 v17; // rdi
  unsigned int v18; // esi
  unsigned int i; // r14d
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v24; // [rsp+78h] [rbp+10h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a4);
  v11 = 1;
  if ( !CTouchProcessor::CTouchProcessorLockShared(v12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  v16 = *((_DWORD *)a3 + 2);
  v24 = *((_QWORD *)a3 + 24);
  if ( v16 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  v17 = *((_QWORD *)a2 + 30);
  v18 = 0;
  for ( i = 0; ; ++i )
  {
    v20 = *((unsigned int *)a2 + 12);
    if ( i >= (unsigned int)v20 )
      break;
    v21 = *((_QWORD *)a2 + 30) + 480 * v20;
    if ( v17 >= v21 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v13, v15);
    if ( *(_QWORD *)(v17 + 192) == v24 && *(_DWORD *)(v17 + 8) == v16 )
    {
      ++v18;
      if ( a5 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                (struct CPointerInfoNode *)v17,
                *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 32),
                a4,
                PointerInfoSize,
                a7);
        if ( v11 )
        {
          a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
          a5 -= PointerInfoSize;
        }
      }
    }
    v17 += 480LL;
    if ( !v11 )
      return v11;
  }
  *a6 = v18;
  return v11;
}
