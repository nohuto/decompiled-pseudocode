/*
 * XREFs of RaidAdapterConnectMSIInterrupt @ 0x1C0077218
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1C002BF74 (RaidAdapterConnectInterrupt.c)
 * Callees:
 *     memset @ 0x1C0020540 (memset.c)
 */

__int64 __fastcall RaidAdapterConnectMSIInterrupt(__int64 a1, unsigned __int8 a2)
{
  bool v4; // zf
  NTSTATUS v5; // eax
  unsigned int v6; // r14d
  ULONG Version; // ecx
  PKINTERRUPT *InterruptObject; // rcx
  PKINTERRUPT v9; // rax
  PVOID PoolWithTag; // rax
  __int64 v11; // r9
  __int64 i; // rbx
  __int64 v13; // rsi
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF

  v16 = 0LL;
  memset(&Parameters, 0, sizeof(Parameters));
  v4 = *(_DWORD *)(a1 + 4480) == 2;
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 32);
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)&v16;
  Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)RaidpAdapterMSIInterruptRoutine;
  Parameters.Version = 3;
  Parameters.FullySpecified.ServiceContext = (PVOID)a1;
  if ( v4 )
  {
    Parameters.FullySpecified.SpinLock = 0LL;
  }
  else
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 4488));
    Parameters.FullySpecified.SpinLock = (PKSPIN_LOCK)(a1 + 4488);
  }
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = a2;
  Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)RaidpAdapterInterruptRoutine;
  v5 = IoConnectInterruptEx(&Parameters);
  *(_BYTE *)(a1 + 4513) = 0;
  v6 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)(a1 + 696) = 0LL;
  }
  else
  {
    Version = Parameters.Version;
    *(_DWORD *)(a1 + 708) = Parameters.Version;
    if ( Version == 3 )
    {
      InterruptObject = Parameters.FullySpecified.InterruptObject;
      *(_BYTE *)(a1 + 4513) = 1;
      v9 = *InterruptObject;
      *(_QWORD *)(a1 + 4496) = *InterruptObject;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * *((unsigned int *)v9 + 1), 0x72446152u);
      *(_QWORD *)(a1 + 4504) = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = *(_QWORD *)(a1 + 4496);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v11 + 4); i = (unsigned int)(i + 1) )
        {
          v13 = 16LL * (unsigned int)i;
          if ( IoGetAffinityInterrupt(
                 *(PKINTERRUPT *)(v11 + 48 * i + 24),
                 (PGROUP_AFFINITY)(v13 + *(_QWORD *)(a1 + 4504))) < 0 )
          {
            *(_WORD *)(*(_QWORD *)(a1 + 4504) + v13 + 8) = -1;
            *(_QWORD *)(v13 + *(_QWORD *)(a1 + 4504)) = 0LL;
          }
          v11 = *(_QWORD *)(a1 + 4496);
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 696) = v16;
    }
  }
  return v6;
}
