char __fastcall KiSchedulerApc(ULONG_PTR a1)
{
  char result; // al
  int v3; // r13d
  int v4; // r13d
  __int64 v5; // r12
  __int64 v6; // rdx
  _DWORD *v7; // r8
  __int64 v8; // rdi
  unsigned __int8 v9; // si
  struct _KPRCB *v10; // r14
  bool v11; // zf
  __int64 v12; // r8
  KPROCESSOR_MODE v13; // si
  __int64 v14; // rcx
  KPROCESSOR_MODE v15; // di
  bool v16; // di
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rdx
  char v20; // di
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // di
  _DWORD *v26; // r9
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  __int64 v32; // r8
  int v33; // [rsp+38h] [rbp-89h] BYREF
  int v34; // [rsp+3Ch] [rbp-85h] BYREF
  int v35; // [rsp+40h] [rbp-81h] BYREF
  int v36; // [rsp+44h] [rbp-7Dh] BYREF
  _DWORD v37[40]; // [rsp+48h] [rbp-79h] BYREF

  result = (unsigned __int8)memset(v37, 0, 0x98uLL);
  v3 = *(_DWORD *)(a1 + 120);
  v33 = 0;
  v4 = v3 & 0x8000;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v4 )
    result = KiHandleDeferredPreemption(a1);
  LODWORD(v5) = 4;
  if ( !*(_DWORD *)(a1 + 740) && !v4 )
  {
    v13 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 144);
      if ( v14 )
      {
        --*(_WORD *)(a1 + 486);
        v15 = *(_BYTE *)(v14 + 368) & 1;
        v11 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
        v13 = v15;
        if ( v11 && *(_QWORD *)(a1 + 152) != a1 + 152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v16 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v19) = 4;
        else
          v19 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v19;
      }
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v20 = *(_BYTE *)(a1 + 194);
      *(_BYTE *)(a1 + 194) = v20 & 0xFD;
      v16 = (v20 & 2) != 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    result = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v13, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v16 )
    {
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
      {
        v26 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v25 == 2 )
          LODWORD(v27) = 4;
        else
          v27 = (-1LL << (v25 + 1)) & 4;
        v26[5] |= v27;
      }
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( KiIrqlFlags )
      {
        v28 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && v25 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (v25 + 1));
          v11 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      result = v25;
      __writecr8(v25);
    }
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v4 )
  {
    if ( (unsigned __int8)KiIsProcessTerminationRequested(a1, &v33) )
    {
      LOBYTE(v7) = 1;
      v37[0] = v33;
      LOBYTE(v6) = 1;
      v37[1] = 1;
      DbgkForwardException(v37, v6, v7);
      LOBYTE(v32) = 1;
      DbgkForwardException(v37, 0LL, v32);
    }
    v8 = a1 + 648;
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
    {
      v7 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v9 != 2 )
        v5 = (-1LL << (v9 + 1)) & 4;
      v6 = (unsigned int)v5 | v7[5];
      v7[5] = v6;
    }
    v10 = KeGetCurrentPrcb();
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v36);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v11 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v11 )
        KiRemoveQueueApc(v8);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(v8, v6, v7);
      LOBYTE(v12) = v9;
      KiSignalThreadForApc(v10, a1 + 648, v12);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    return KiExitDispatcher((__int64)v10, 0, (struct _PROCESSOR_NUMBER)1, 0, v9);
  }
  return result;
}
