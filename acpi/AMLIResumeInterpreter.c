/*
 * XREFs of AMLIResumeInterpreter @ 0x1C0048D2C
 * Callers:
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C001F040 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00211F0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     AcpiReflectNativeObject @ 0x1C0037D80 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x1C0048FB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     OSQueueWorkItem @ 0x1C004774C (OSQueueWorkItem.c)
 *     LogSchedEvent @ 0x1C004E3AC (LogSchedEvent.c)
 */

void AMLIResumeInterpreter()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  dword_1C006F938 = 0;
  pszDest = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_1C0070078 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0, 0, 0, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = (_QWORD *)qword_1C0070038;
        if ( (__int64 *)qword_1C0070038 == &qword_1C0070038 )
          break;
        if ( *(__int64 **)(qword_1C0070038 + 8) != &qword_1C0070038 )
          goto LABEL_14;
        v1 = *(_QWORD *)qword_1C0070038;
        if ( *(_QWORD *)(*(_QWORD *)qword_1C0070038 + 8LL) != qword_1C0070038 )
          goto LABEL_14;
        qword_1C0070038 = *(_QWORD *)qword_1C0070038;
        *(_QWORD *)(v1 + 8) = &qword_1C0070038;
        v0[1] = v0;
        *v0 = v0;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 41, 1LL) )
        {
          v2 = qword_1C0070038;
          if ( *(__int64 **)(qword_1C0070038 + 8) != &qword_1C0070038 )
LABEL_14:
            __fastfail(3u);
          *v0 = qword_1C0070038;
          v0[1] = &qword_1C0070038;
          *(_QWORD *)(v2 + 8) = v0;
          qword_1C0070038 = (__int64)v0;
          break;
        }
      }
    }
    if ( (__int64 *)qword_1C0070038 != &qword_1C0070038 && (gReadyQueue & 2) == 0 )
    {
      OSQueueWorkItem(&qword_1C0070058);
      gReadyQueue |= 2u;
      LogSchedEvent(1381192785, 0, 0, 0, 0LL);
    }
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
