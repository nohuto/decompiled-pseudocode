/*
 * XREFs of NdisMQueueDpcEx @ 0x1C0067F80
 * Callers:
 *     ndisMiniportIsr @ 0x1C0067A10 (ndisMiniportIsr.c)
 *     NdisMQueueDpc @ 0x1C0067F50 (NdisMQueueDpc.c)
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0038184 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

KAFFINITY __stdcall NdisMQueueDpcEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        PGROUP_AFFINITY TargetProcessors,
        PVOID MiniportDpcContext)
{
  void *v4; // r13
  __int64 v7; // r14
  unsigned int Number; // r12d
  unsigned __int64 v9; // rdi
  unsigned __int16 Group; // ax
  KAFFINITY v11; // rbp
  unsigned __int64 Mask; // rsi
  int v13; // r15d
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v15; // ecx
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]
  unsigned int v19; // [rsp+30h] [rbp-48h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  PVOID SystemArgument2; // [rsp+98h] [rbp+20h]

  SystemArgument2 = MiniportDpcContext;
  v4 = (void *)MessageId;
  v7 = 1LL;
  Number = 0;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(
    (NDIS_PCW_CONTEXT *)&v17,
    *((struct _NDIS_MINIPORT_BLOCK **)NdisInterruptHandle + 12));
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v9 = *((_QWORD *)NdisInterruptHandle + 28)
       + ((unsigned __int64)((unsigned int)v4 * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v9 = *((_QWORD *)NdisInterruptHandle + 14);
  Group = TargetProcessors->Group;
  v11 = 0LL;
  Mask = TargetProcessors->Mask;
  *(_WORD *)&ProcNumber.Number = 0;
  ProcNumber.Group = Group;
  v13 = v18 & 0x1000000;
  if ( (v18 & 0x1000000) != 0 )
    Number = KeGetPcr()->Prcb.Number;
  for ( ; Mask; Mask >>= 1 )
  {
    if ( (Mask & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != Number && v13 )
        {
          v15 = v19;
          if ( v19 == -1 )
          {
            v15 = KeGetPcr()->Prcb.Number;
            v19 = v15;
          }
          ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v17 + ndisPcwPerCpuDataStride * v15 + 96);
        }
        _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        if ( KeInsertQueueDpc((PRKDPC)(v9 + ((unsigned __int64)ProcessorIndexFromNumber << 6)), v4, SystemArgument2) )
          v11 |= v7;
        else
          _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
      }
    }
    ++ProcNumber.Number;
    v7 *= 2LL;
  }
  return v11;
}
