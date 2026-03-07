__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rdi
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  int v9; // edi
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int16 *v11[2]; // [rsp+48h] [rbp-9h] BYREF
  __int16 v12; // [rsp+58h] [rbp+7h]
  int v13; // [rsp+5Ah] [rbp+9h]
  __int16 v14; // [rsp+5Eh] [rbp+Dh]
  struct _KDPC Dpc; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+B8h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  Affinity = 0LL;
  memset(&Dpc, 0, 60);
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
    {
      v2 = -1073741823;
      goto LABEL_4;
    }
    v2 = *(_DWORD *)(qword_140C3CDA0 + 188);
    if ( v2 >= 0 )
    {
      v2 = PopInvokeSystemStateHandler((unsigned int)PopHibernatePowerStateHandlerType);
      if ( v2 >= 0 )
      {
        if ( PoResumeFromHibernate )
          v2 = 1073742484;
        goto LABEL_16;
      }
    }
LABEL_4:
    IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1D0);
    if ( *(_QWORD *)&qword_140C3CD98 )
      IoAddTriageDumpDataBlock(qword_140C3CD98, (PVOID)0x1D8);
    if ( qword_140C3CDA0 )
    {
      IoAddTriageDumpDataBlock(qword_140C3CDA0, (PVOID)0x1C8);
      v3 = *(_QWORD *)(qword_140C3CDA0 + 168);
      if ( v3 )
        IoAddTriageDumpDataBlock(v3, (PVOID)0x178);
      v4 = *(_QWORD *)(qword_140C3CDA0 + 200);
      if ( v4 )
        IoAddTriageDumpDataBlock(v4, (PVOID)0x448);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( (BYTE4(xmmword_140D1EAD0) & 1) != 0 )
    EtwKernelMemoryRundown();
  KeSetEvent(PopSleeperHandoff, 0, 1u);
  KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
  v2 = PopBuildMemoryImageHeader((_QWORD *)qword_140C3CDA0, 0);
  if ( v2 < 0 )
    goto LABEL_4;
  Affinity.Reserved[1] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v8 = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  memset(&PopHibernateSystemContext, 0, 0x50uLL);
  dword_140D182D0 = KeNumberProcessors_0;
  dword_140D182DC = KeNumberProcessors_0;
  dword_140D182D8 = 1;
  if ( ((unsigned __int8)&stru_140D182E0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140D182E0 = 0LL;
  KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
  v11[1] = (unsigned __int16 *)qword_140D1EFE8[0];
  v11[0] = (unsigned __int16 *)KeActiveProcessors;
  Dpc.Importance = 2;
  v12 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v16, v11) )
  {
    if ( v16 )
    {
      v9 = dword_140D182D4;
      if ( !Dpc.DpcData )
        Dpc.Number = v16 + 2048;
      KeInsertQueueDpc(&Dpc, 0LL, 0LL);
      while ( v9 == dword_140D182D4 )
        ;
    }
  }
LABEL_16:
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
