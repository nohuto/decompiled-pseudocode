/*
 * XREFs of ACPIBusIrpStartDeviceCompletion @ 0x1C0017220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPICheckModuleStarted @ 0x1C00324D8 (ACPICheckModuleStarted.c)
 */

void __fastcall ACPIBusIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rdi
  unsigned int MinorFunction; // r14d
  KIRQL v8; // al
  _QWORD *i; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  const char *v12; // rcx
  const char *v13; // rdx
  __int64 v14; // rax

  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    *(_QWORD *)(a1 + 1008) |= 0x80000uLL;
    *(_DWORD *)(a1 + 368) = 2;
  }
  if ( _bittest64((const signed __int64 *)(a1 + 8), 0x25u) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    if ( !*(_BYTE *)(a1 + 185) )
    {
      for ( i = *(_QWORD **)(a1 + 800); i != (_QWORD *)(a1 + 800); i = (_QWORD *)*i )
      {
        if ( _bittest64(i - 101, 0x25u) )
          *((_BYTE *)i - 631) = 0;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
    v10 = a1;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 792);
    if ( !_bittest64((const signed __int64 *)(v10 + 8), 0x25u) )
      goto LABEL_13;
  }
  ACPICheckModuleStarted(v10, (unsigned int)a3);
LABEL_13:
  if ( a3 >= 0 )
  {
    v4->List.Flink = 0LL;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIBusIrpStartDeviceWorker;
    v4->Parameter = v4;
    v4[1].List.Flink = *(_LIST_ENTRY **)(a1 + 768);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
  else
  {
    IofCompleteRequest(a2, 0);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (const char *)&unk_1C00622D0;
    v13 = (const char *)&unk_1C00622D0;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = MinorFunction;
      if ( MinorFunction >= 0x1A )
        v14 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0x3Du,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        (char)a2,
        (__int64)(&ACPIDispatchPnpTableNames)[v14],
        a3,
        a1,
        v12,
        v13);
    }
  }
}
