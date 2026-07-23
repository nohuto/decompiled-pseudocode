/*
 * XREFs of NtCreateJobObject @ 0x14071E360
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402056D0 (PoEnergyEstimationEnabled.c)
 *     ExInitializeResourceLite @ 0x14021CC10 (ExInitializeResourceLite.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObInsertObject @ 0x140701A90 (ObInsertObject.c)
 *     ObCreateObject @ 0x1407023B0 (ObCreateObject.c)
 *     PspIoRateEntryInitialize @ 0x14071FC24 (PspIoRateEntryInitialize.c)
 *     ExUuidCreate @ 0x14071FC80 (ExUuidCreate.c)
 *     PspUnlockJobListExclusive @ 0x14071FDD4 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x14071FE14 (PspLockJobListExclusive.c)
 *     EtwTraceJob @ 0x140935D98 (EtwTraceJob.c)
 *     ExCreateHandle @ 0x14094C680 (ExCreateHandle.c)
 */

NTSTATUS __cdecl NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r13d
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v6; // si
  __int64 v7; // rcx
  char v8; // r12
  unsigned int v9; // ebx
  NTSTATUS inserted; // esi
  size_t v11; // r8
  PRKEVENT v12; // rbx
  struct _KEVENT *v13; // rax
  struct _LIST_ENTRY *v14; // rcx
  __int64 v15; // rax
  struct _DMA_ADAPTER *v16; // rcx
  PRKEVENT Event; // [rsp+58h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-40h] BYREF
  volatile unsigned int Lock; // [rsp+C8h] [rbp+20h]

  v3 = (int)ObjectAttributes;
  Event = 0LL;
  Handle = 0LL;
  Lock = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  *JobHandle = 0LL;
  v8 = PoEnergyEstimationEnabled();
  v9 = v8 != 0 ? 2032 : 1600;
  inserted = ObCreateObject(v6, PsJobType, v3, v6, 0, v9, 0, v9, &Event);
  if ( inserted < 0 )
  {
    v12 = Event;
  }
  else
  {
    v11 = v9;
    v12 = Event;
    memset(Event, 0, v11);
    *(_QWORD *)&v12[45].Header.Lock = v12;
    *(_QWORD *)&v12[2].Header.Lock = (char *)v12 + 40;
    v12[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v12[1].Header.WaitListHead.Blink;
    v12[44].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v12[44];
    *(_QWORD *)&v12[44].Header.Lock = v12 + 44;
    v12[43].Header.WaitListHead.Blink = &v12[43].Header.WaitListHead;
    v12[43].Header.WaitListHead.Flink = &v12[43].Header.WaitListHead;
    v12[45].Header.WaitListHead.Blink = &v12[45].Header.WaitListHead;
    v12[45].Header.WaitListHead.Flink = &v12[45].Header.WaitListHead;
    KeInitializeEvent(v12, NotificationEvent, 0);
    *(_QWORD *)&v12[43].Header.Lock = 0LL;
    *(_QWORD *)&v12[11].Header.Lock = 1310721LL;
    memset(&v12[11].Header.WaitListHead, 0, 0xA0uLL);
    v12[25].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)1310721;
    memset(&v12[26], 0, 0xA0uLL);
    v12[53].Header.WaitListHead.Blink = &v12[53].Header.WaitListHead;
    v12[53].Header.WaitListHead.Flink = &v12[53].Header.WaitListHead;
    *(_QWORD *)&v12[54].Header.Lock = 0LL;
    if ( v8 )
      v12[55].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v12[66].Header.WaitListHead.Blink;
    v12[20].Header.LockNV = -1;
    HIDWORD(v12[36].Header.WaitListHead.Flink) = 16382;
    v12[63].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)1;
    HIDWORD(v12[35].Header.WaitListHead.Flink) = 10;
    v12[20].Header.SignalState = 5;
    ExInitializeResourceLite((PERESOURCE)&v12[2].Header.WaitListHead);
    PspLockJobListExclusive(CurrentThread);
    v13 = v12 + 1;
    v14 = (struct _LIST_ENTRY *)qword_140D2D338;
    if ( *(__int64 **)qword_140D2D338 != &PspJobList )
      __fastfail(3u);
    *(_QWORD *)&v13->Header.Lock = &PspJobList;
    v12[1].Header.WaitListHead.Flink = v14;
    v14->Flink = (struct _LIST_ENTRY *)v13;
    qword_140D2D338 = (__int64)&v12[1];
    PspUnlockJobListExclusive(CurrentThread);
    v12[55].Header.LockNV |= 0x200000u;
    Lock = v12[55].Header.Lock;
    while ( 1 )
    {
      inserted = ExUuidCreate((UUID *)&v12[51].Header.WaitListHead.Blink);
      if ( inserted != -1073741267 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( inserted == 1073872982 )
      inserted = 0;
    if ( inserted >= 0 )
    {
      v15 = ExCreateHandle(PspUniqueJobIdTable, v12);
      if ( v15 )
        HIDWORD(v12[51].Header.WaitListHead.Flink) = v15;
      else
        inserted = -1073741670;
    }
    PspIoRateEntryInitialize(&v12[58].Header.WaitListHead);
    *(_QWORD *)&v12[61].Header.Lock = 0LL;
    v12[61].Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&v12[63].Header.Lock = 0LL;
    v16 = (struct _DMA_ADAPTER *)v12;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(v12);
      inserted = ObInsertObject(v12, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( inserted >= 0 )
      {
        *JobHandle = Handle;
        goto LABEL_20;
      }
      v16 = (struct _DMA_ADAPTER *)v12;
    }
    HalPutDmaAdapter(v16);
    v12 = 0LL;
  }
LABEL_20:
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(v12, Lock, (unsigned int)inserted, 1824LL);
  if ( v12 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
  return inserted;
}
