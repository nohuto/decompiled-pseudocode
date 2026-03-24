/*
 * XREFs of ACPIBusIrpStartDeviceCompletion @ 0x1C0030800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPICheckModuleStarted @ 0x1C0058954 (ACPICheckModuleStarted.c)
 */

void __fastcall ACPIBusIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rdi
  unsigned int MinorFunction; // r14d
  __int64 v8; // rcx
  KIRQL v9; // al
  _QWORD *i; // r8
  __int64 v11; // rax
  const char *v12; // rcx
  const char *v13; // rdx
  __int64 v14; // rax

  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    *(_QWORD *)(a1 + 960) |= 0x80000uLL;
    *(_DWORD *)(a1 + 328) = 2;
  }
  if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    if ( !*(_BYTE *)(a1 + 185) )
    {
      for ( i = *(_QWORD **)(a1 + 760); i != (_QWORD *)(a1 + 760); i = (_QWORD *)*i )
      {
        if ( (*(i - 96) & 0x2000000000LL) != 0 )
          *((_BYTE *)i - 591) = 0;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    v8 = a1;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 752);
    if ( (*(_QWORD *)(v8 + 8) & 0x2000000000LL) == 0 )
      goto LABEL_5;
  }
  ACPICheckModuleStarted(v8, (unsigned int)a3);
LABEL_5:
  if ( a3 < 0 )
  {
    IofCompleteRequest(a2, 0);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (const char *)&unk_1C00701BA;
    v13 = (const char *)&unk_1C00701BA;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 568);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 576);
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
        (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
        (char)a2,
        ACPIDispatchPnpTableNames[v14],
        a3,
        a1,
        v12,
        v13);
    }
  }
  else
  {
    v4->List.Flink = 0LL;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIBusIrpStartDeviceWorker;
    v4->Parameter = v4;
    v4[1].List.Flink = *(_LIST_ENTRY **)(a1 + 728);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
}
