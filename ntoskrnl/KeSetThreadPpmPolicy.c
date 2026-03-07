__int64 __fastcall KeSetThreadPpmPolicy(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r15
  int v5; // edi
  signed __int32 v6; // ett
  unsigned int v7; // r13d
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  char v11; // r12
  _QWORD *v12; // rdi
  volatile signed __int32 *v13; // rsi
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  int v19; // ecx
  _BYTE *v20; // rax
  unsigned int v21; // ecx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  _BYTE *v25; // rax
  unsigned int v26; // ecx
  _QWORD *v27; // rdx
  __int64 v28; // r8
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v31; // r8
  int v32; // eax
  bool v33; // zf
  _QWORD *v34; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v35; // [rsp+28h] [rbp-10h] BYREF
  int v36; // [rsp+80h] [rbp+48h] BYREF
  int v37; // [rsp+88h] [rbp+50h] BYREF
  __int64 v38; // [rsp+98h] [rbp+60h] BYREF

  v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  v37 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v37);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v5 = a2 << 8;
  do
    v6 = *(_DWORD *)(a1 + 956);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 956), v5 | v6 & 0xFFFFF8FF, v6) );
  v7 = KiComputeHeteroThreadQos(a1, 0LL);
  if ( v7 == (unsigned __int8)*(_DWORD *)(a1 + 512) )
    goto LABEL_7;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_BYTE *)(a1 + 388);
      v12 = 0LL;
      v13 = 0LL;
      if ( v11 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_24:
          v15 = *(unsigned int *)(a1 + 536);
          if ( (int)v15 >= 0 )
          {
            v12 = (_QWORD *)KiProcessorBlock[v15];
            KiAcquirePrcbLocksForIsolationUnit((__int64)v12, 0, &v38);
            if ( a1 == v12[1] )
              goto LABEL_42;
            goto LABEL_16;
          }
          break;
        case 3:
          v16 = *(unsigned int *)(a1 + 536);
          if ( (int)v16 >= 0 )
          {
            v12 = (_QWORD *)KiProcessorBlock[v16];
            KiAcquirePrcbLocksForIsolationUnit((__int64)v12, 0, &v38);
            if ( a1 == v12[2] )
              goto LABEL_42;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
              __fastfail(0x1Eu);
LABEL_16:
            KiReleasePrcbLocksForIsolationUnit(&v38);
          }
          break;
        case 5:
          v14 = *(_BYTE *)(a1 + 112) & 7;
          if ( v14 == 1 || (unsigned __int8)(v14 - 3) <= 3u )
            goto LABEL_42;
          v11 = 2;
          goto LABEL_24;
        default:
          goto LABEL_42;
      }
    }
    v17 = *(unsigned int *)(a1 + 536);
    if ( (int)v17 >= 0 )
      break;
    v18 = (unsigned int)v17;
    LODWORD(v18) = v17 & 0x7FFFFFFF;
    v36 = 0;
    v13 = *(volatile signed __int32 **)(KiProcessorBlock[v18] + 34888);
    while ( _interlockedbittestandset64(v13, 0LL) )
    {
      do
        KeYieldProcessorEx(&v36);
      while ( *(_QWORD *)v13 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
      goto LABEL_42;
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  }
  v12 = (_QWORD *)KiProcessorBlock[v17];
  KiAcquirePrcbLocksForIsolationUnit((__int64)v12, 0, &v38);
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v17 )
    goto LABEL_16;
LABEL_42:
  KiSetThreadQosLevelUnsafe(a1, v7);
  if ( v11 == 2 )
  {
    if ( v12[2] )
      goto LABEL_62;
    v24 = *(_DWORD *)(a1 + 120) >> 1;
    v35 = v12;
    if ( (v24 & 1) != 0 )
    {
      v25 = (_BYTE *)v12[4363];
      v26 = (unsigned __int8)*v25;
      v27 = v25 + 8;
      if ( !*v25 )
        goto LABEL_62;
    }
    else
    {
      v27 = &v35;
      v26 = 1;
    }
    v28 = v26;
    do
    {
      if ( KeHeteroSystem )
        *(_BYTE *)(*(_QWORD *)(*v27 + 56LL) + 64LL) ^= (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v27 + 56LL) + 64LL)) & 7;
      ++v27;
      --v28;
    }
    while ( v28 );
  }
  else
  {
    if ( v11 != 3 )
      goto LABEL_62;
    v19 = *(_DWORD *)(a1 + 120) >> 1;
    v34 = v12;
    if ( (v19 & 1) != 0 )
    {
      v20 = (_BYTE *)v12[4363];
      v21 = (unsigned __int8)*v20;
      v22 = v20 + 8;
      if ( !*v20 )
        goto LABEL_62;
    }
    else
    {
      v22 = &v34;
      v21 = 1;
    }
    v23 = v21;
    do
    {
      if ( KeHeteroSystem )
        *(_BYTE *)(*(_QWORD *)(*v22 + 56LL) + 64LL) ^= (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(*(_QWORD *)(*v22 + 56LL) + 64LL)) & 7;
      ++v22;
      --v23;
    }
    while ( v23 );
  }
LABEL_62:
  if ( v12 )
    KiReleasePrcbLocksForIsolationUnit(&v38);
  if ( v13 )
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
LABEL_7:
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
  {
    v29 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v31 = CurrentPrcb->SchedulerAssist;
      v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v33 = (v32 & v31[5]) == 0;
      v31[5] &= v32;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
