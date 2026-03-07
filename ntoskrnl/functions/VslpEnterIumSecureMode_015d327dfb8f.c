__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  __int16 v4; // r15
  char v7; // r13
  unsigned __int8 CurrentIrql; // r14
  __int16 v9; // dx
  char v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v13; // al
  unsigned int SecureThreadCookie; // ecx
  char v15; // cl
  NTSTATUS v16; // r15d
  __int16 v17; // r12
  _QWORD *v18; // r9
  char v19; // al
  char v21; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  char PreviousMode; // r12
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v27; // rdx
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  char v33; // [rsp+38h] [rbp-39h]
  char v35; // [rsp+3Ah] [rbp-37h]
  int v37; // [rsp+40h] [rbp-31h]
  _WORD v38[2]; // [rsp+44h] [rbp-2Dh] BYREF
  _WORD v39[2]; // [rsp+48h] [rbp-29h] BYREF
  _WORD v40[2]; // [rsp+4Ch] [rbp-25h] BYREF
  _WORD v41[2]; // [rsp+50h] [rbp-21h] BYREF
  int v42; // [rsp+54h] [rbp-1Dh] BYREF
  __int64 v43; // [rsp+58h] [rbp-19h]
  _QWORD v44[2]; // [rsp+60h] [rbp-11h] BYREF
  _WORD *v45; // [rsp+70h] [rbp-1h] BYREF
  int v46; // [rsp+78h] [rbp+7h]
  int v47; // [rsp+7Ch] [rbp+Bh]
  _QWORD v48[2]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v49[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v4 = a1;
  v37 = a3;
  v7 = 0;
  v35 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  *(_BYTE *)v11 = v4;
  *(_WORD *)(v11 + 2) = v9;
  v43 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v4 > 2u )
  {
    if ( (BYTE4(xmmword_140D1EAD0) & 8) != 0 )
    {
      v38[1] = v9;
      v44[0] = v38;
      v38[0] = v4;
      v44[1] = 4LL;
      v21 = 1;
      EtwTraceKernelEvent((unsigned int)v44, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v21 = v10;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v43);
    if ( v21 )
    {
      v47 = 0;
      v39[1] = a2;
      v39[0] = v4;
      v45 = v39;
      v46 = 4;
      EtwTraceKernelEvent((unsigned int)&v45, 1, -1610612728, 1354, 4200706);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0LL;
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
  {
    if ( VslVsmEnabled )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v23) = 0x8000;
          else
            v23 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          SchedulerAssist[5] |= v23;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  if ( (_BYTE)v4 == 1 )
  {
    v15 = 0;
    *(_DWORD *)(a4 + 4) = a3;
    goto LABEL_12;
  }
  if ( a3 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else if ( v13 >= 2u )
  {
    *(_DWORD *)(a4 + 4) = 0;
    v37 = 1;
  }
  else
  {
    SecureThreadCookie = CurrentThread->SecureThreadCookie;
    if ( SecureThreadCookie )
    {
      v37 = CurrentThread->SecureThreadCookie;
      *(_DWORD *)(a4 + 4) = SecureThreadCookie;
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      if ( VslVsmEnabled )
      {
        v15 = 1;
        goto LABEL_10;
      }
    }
  }
  v15 = 0;
LABEL_10:
  if ( !CurrentThread->SecureThreadCookie )
    v7 = 1;
LABEL_12:
  if ( v13 == 1 )
  {
    v7 = 1;
  }
  else
  {
    if ( v13 >= 2u )
    {
      v7 = 0;
      goto LABEL_15;
    }
    if ( !v7 )
      goto LABEL_15;
  }
  --CurrentThread->KernelApcDisable;
LABEL_15:
  if ( !v15 )
    goto LABEL_18;
  v16 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v16 < 0 )
    goto LABEL_28;
  LOBYTE(v4) = a1;
  v35 = 1;
  while ( 1 )
  {
LABEL_18:
    v17 = (unsigned __int8)v4;
    if ( (BYTE4(xmmword_140D1EAD0) & 8) != 0 )
    {
      v40[1] = a2;
      v33 = 1;
      v48[0] = v40;
      v40[0] = (unsigned __int8)v4;
      v48[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v48, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v33 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v43);
    v18 = (_QWORD *)(a4 + 8);
    v16 = *(_DWORD *)(a4 + 8);
    if ( v33 )
    {
      v41[1] = a2;
      v41[0] = v17;
      v49[0] = v41;
      v49[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v49, 1, -1610612728, 1354, 4200706);
      v18 = (_QWORD *)(a4 + 8);
    }
    v19 = *(_BYTE *)(a4 + 1);
    if ( v19 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v19 = *(_BYTE *)(a4 + 1);
    }
    if ( v19 == 6 )
      break;
    if ( v19 == 1 )
      goto LABEL_26;
    LOBYTE(v4) = a1;
    if ( a1 == 1 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    else if ( !v37 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_50:
        PsDispatchIumService(a4);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *v18 = -1073741776LL;
          break;
        }
LABEL_74:
        if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
            CurrentThread->PreviousMode = 0;
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                       v18,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *v18 = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_74;
      case 5:
        goto LABEL_50;
    }
    if ( !v37 && a1 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v25 - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = CurrentPrcb->SchedulerAssist;
      v28 = (v27[5] & 0xFFFF0001) == 0;
      v27[5] &= 0xFFFF0001;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_26:
  if ( v35 )
  {
    v42 = 0;
    KeReleaseSemaphoreEx((unsigned int)&VslpIumThreadSemaphore, 0, 1, (_DWORD)v18, 8, (__int64)&v42);
  }
LABEL_28:
  if ( v7 )
    KeLeaveCriticalRegionThread(CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v16;
}
