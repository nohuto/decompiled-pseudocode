/*
 * XREFs of EtwpCovSampCaptureFlushSampleBuffers @ 0x140600E90
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x140600CB8 (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampCaptureFlush @ 0x1409EE130 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140462188 (EtwpCovSampTryAcquireBufferLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x140601840 (EtwpCovSampSampleBufferDecRef.c)
 */

unsigned int __fastcall EtwpCovSampCaptureFlushSampleBuffers(__int64 a1)
{
  unsigned int result; // eax
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned int v8; // edx
  unsigned int v9; // ecx
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v15; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // [rsp+40h] [rbp+8h] BYREF
  int v21; // [rsp+48h] [rbp+10h]

  v20 = 0;
  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v3 = 0LL;
    v4 = result;
    do
    {
      v5 = 0LL;
      v6 = (*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL;
      v7 = *(_QWORD *)(v3 + ExSaPageArrays);
      v8 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v9, v8);
      v10 = 1 << v9;
      v11 = v9 - 2;
      v21 = v11;
      v12 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v11) + 8LL * (v8 ^ v10) + 8) + 8 * v6;
      result = EtwpCovSampTryAcquireBufferLock((volatile signed __int32 *)v12, &v20);
      if ( result )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          v5 = v13;
        }
        KxReleaseSpinLock((volatile signed __int64 *)v12);
        if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
        {
          v15 = v20;
          if ( v20 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = v20;
            v18 = ~(unsigned __int16)(-1LL << (v20 + 1));
            v19 = (v18 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v18;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        else
        {
          v15 = v20;
        }
        result = v15;
        __writecr8(v15);
        if ( v5 )
          result = EtwpCovSampSampleBufferDecRef(a1, v5);
      }
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
