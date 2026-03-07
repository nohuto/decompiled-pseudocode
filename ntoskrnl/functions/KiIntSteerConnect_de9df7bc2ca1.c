__int64 __fastcall KiIntSteerConnect(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // r14
  bool v6; // zf
  __int64 Pool2; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  KIRQL v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r9
  int v18; // r14d
  __int64 v19; // r8
  int v20; // eax
  __int16 v21; // cx
  __int64 v22; // rax
  __int16 v23; // cx
  __int64 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  char v37; // [rsp+40h] [rbp-20h] BYREF
  KIRQL v38; // [rsp+41h] [rbp-1Fh]
  int v39; // [rsp+44h] [rbp-1Ch] BYREF
  int v40; // [rsp+48h] [rbp-18h] BYREF
  __int128 v41; // [rsp+50h] [rbp-10h] BYREF

  v5 = a2;
  v6 = KiIntSteerEtwHandle == 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0LL;
  *a4 = 0;
  if ( v6 )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  if ( (int)KiIntSteerGetLineInformation(a3, &v39, &v37) < 0 )
  {
    v29 = *(unsigned __int16 *)(a3 + 32);
    v30 = *(_QWORD *)(a3 + 24);
    if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v29 )
    {
      if ( HIWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v29 )
        return 0LL;
      LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v29 + 1;
    }
    *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v29 + 2] |= v30;
    return 0LL;
  }
  Pool2 = ExAllocatePool2(64LL, 152LL, 1802654793LL);
  v10 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 32) = a1;
  *(_DWORD *)(Pool2 + 24) = v5;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  *(_BYTE *)(Pool2 + 56) = v37;
  *(_OWORD *)(Pool2 + 64) = *(_OWORD *)a3;
  *(_OWORD *)(Pool2 + 80) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(Pool2 + 96) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(Pool2 + 112) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(Pool2 + 128) = *(_OWORD *)(a3 + 64);
  *(_QWORD *)(Pool2 + 144) = *(_QWORD *)(a3 + 80);
  if ( (_DWORD)v5 )
  {
    v11 = (_QWORD *)a1;
    v12 = v5;
    do
    {
      v13 = (_QWORD *)*v11++;
      v13[22] = 0LL;
      v13[24] = 0LL;
      v13[25] = 0LL;
      v13[27] = 0LL;
      v13[21] = v10;
      --v12;
    }
    while ( v12 );
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v38 = v14;
  if ( !*(_DWORD *)a3 )
  {
    v15 = KiIntTrackRootList;
    if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)(v15 + 32);
        if ( v16 == v39 && v16 != -1 )
          break;
        v15 = *(_QWORD *)v15;
        if ( (__int64 *)v15 == &KiIntTrackRootList )
          goto LABEL_12;
      }
      if ( *(_DWORD *)(v15 + 128) != 2 )
        goto LABEL_24;
      *(_BYTE *)(*(_QWORD *)(v15 + 200) + 16LL) = 0;
      *(_DWORD *)(v15 + 128) = 0;
      *(_BYTE *)(v15 + 132) = 0;
      v31 = *(unsigned __int16 *)(a3 + 32);
      v32 = *(_QWORD *)(a3 + 24);
      if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v31 )
      {
        if ( HIWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v31 )
        {
LABEL_24:
          v18 = 0;
          goto LABEL_25;
        }
        LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v31 + 1;
      }
      *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v31 + 2] |= v32;
      goto LABEL_24;
    }
  }
LABEL_12:
  v15 = ExAllocatePool2(64LL, 224LL, 1802654793LL);
  if ( v15 )
  {
    v18 = KiIntSteerChooseInitialTargetProcessors(a1, v5, a3, v17, v37, (__int64)&v41, &v40);
    if ( v18 >= 0 )
    {
      memset((void *)v15, 0, 0xE0uLL);
      v20 = v39;
      *(_QWORD *)(v15 + 24) = v15 + 16;
      *(_QWORD *)(v15 + 16) = v15 + 16;
      *(_DWORD *)(v15 + 32) = v20;
      *(_BYTE *)(v15 + 132) = 0;
      *(_QWORD *)(v15 + 152) = 0LL;
      v21 = *(_WORD *)(a3 + 32);
      *(_QWORD *)(v15 + 136) = 0LL;
      *(_DWORD *)(v15 + 128) = v40;
      v22 = v41;
      *(_QWORD *)(v15 + 160) = v41;
      *(_QWORD *)(v15 + 176) = v22;
      *(_WORD *)(v15 + 144) = v21;
      v23 = WORD4(v41);
      *(_WORD *)(v15 + 168) = WORD4(v41);
      *(_WORD *)(v15 + 184) = v23;
      v6 = *(_DWORD *)(v15 + 128) == 2;
      *(_OWORD *)(v15 + 40) = *(_OWORD *)a3;
      *(_OWORD *)(v15 + 56) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(v15 + 72) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(v15 + 88) = *(_OWORD *)(a3 + 48);
      *(_OWORD *)(v15 + 104) = *(_OWORD *)(a3 + 64);
      *(_QWORD *)(v15 + 120) = *(_QWORD *)(a3 + 80);
      if ( v6 )
        *(_QWORD *)(v15 + 200) = *(_QWORD *)(*(_QWORD *)a1 + 272LL);
      v24 = (__int64 *)qword_140C41108;
      if ( *(__int64 **)qword_140C41108 != &KiIntTrackRootList )
        goto LABEL_41;
      *(_QWORD *)v15 = &KiIntTrackRootList;
      *(_QWORD *)(v15 + 8) = v24;
      *v24 = v15;
      ++KiIntTrackRootCount;
      qword_140C41108 = v15;
      KiIntSteerUpdateDeviceInterruptMask(v15 + 160, 0, v19);
      if ( *(_DWORD *)(v15 + 128) )
      {
        KiIntSteerSetDestination(v15, v15 + 160, v25);
        *a4 = 1;
        *(_WORD *)(a5 + 8) = *(_WORD *)(v15 + 168);
        *(_QWORD *)a5 = *(_QWORD *)(v15 + 160);
      }
      v14 = v38;
    }
    if ( !v18 )
    {
LABEL_25:
      v10[2] = v15;
      v26 = v15 + 16;
      v27 = *(_QWORD **)(v26 + 8);
      if ( *v27 == v26 )
      {
        *v10 = v26;
        v10[1] = v27;
        *v27 = v10;
        *(_QWORD *)(v26 + 8) = v10;
        KiIntSteerLogState(v10, PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
        goto LABEL_27;
      }
LABEL_41:
      __fastfail(3u);
    }
  }
  else
  {
    v18 = -1073741670;
  }
  ExFreePoolWithTag(v10, 0x6B725449u);
LABEL_27:
  KxReleaseSpinLock((volatile signed __int64 *)&KiIntTrackSpinlock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v14 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (v14 + 1));
      v6 = (v36 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v36;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v14);
  return (unsigned int)v18;
}
