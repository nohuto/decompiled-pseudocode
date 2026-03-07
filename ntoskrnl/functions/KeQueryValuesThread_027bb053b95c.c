__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v3; // si
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // r11
  int v7; // ebp
  __int64 v8; // r14
  volatile signed __int32 *v9; // rsi
  char v10; // al
  char v11; // al
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // r8
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  int v29; // [rsp+60h] [rbp+8h] BYREF
  int v30; // [rsp+68h] [rbp+10h] BYREF
  __int64 v31; // [rsp+70h] [rbp+18h] BYREF

  v31 = 0LL;
  v3 = 0;
  *(_DWORD *)a2 = 0;
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
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v29);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = 0LL;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 10) = 1;
    goto LABEL_20;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)(a1 + 388);
      v8 = 0LL;
      v9 = 0LL;
      if ( v7 == 5 )
      {
        v10 = *(_BYTE *)(a1 + 112) & 7;
        if ( v10 == 1 || (unsigned __int8)(v10 - 3) <= 3u )
          goto LABEL_7;
        LOBYTE(v7) = 2;
        goto LABEL_48;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_48:
        v23 = *(unsigned int *)(a1 + 536);
        if ( (int)v23 >= 0 )
        {
          v8 = KiProcessorBlock[v23];
          KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, &v31);
          if ( a1 == *(_QWORD *)(v8 + 8) )
            goto LABEL_47;
LABEL_50:
          KiReleasePrcbLocksForIsolationUnit(&v31);
          v6 = 0LL;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_7;
        v20 = *(unsigned int *)(a1 + 536);
        if ( (int)v20 >= 0 )
        {
          v8 = KiProcessorBlock[v20];
          KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, &v31);
          if ( a1 == *(_QWORD *)(v8 + 16) )
            goto LABEL_47;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v20 )
            __fastfail(0x1Eu);
          goto LABEL_50;
        }
      }
    }
    v21 = *(unsigned int *)(a1 + 536);
    if ( (int)v21 >= 0 )
      break;
    v22 = (unsigned int)v21;
    v30 = 0;
    LODWORD(v22) = v21 & 0x7FFFFFFF;
    v9 = *(volatile signed __int32 **)(KiProcessorBlock[v22] + 34888);
    while ( _interlockedbittestandset64(v9, 0LL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(_QWORD *)v9 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v21 )
    {
      v6 = 0LL;
      v8 = 0LL;
      goto LABEL_7;
    }
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    v6 = 0LL;
  }
  v8 = KiProcessorBlock[v21];
  KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, &v31);
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v21 )
    goto LABEL_50;
LABEL_47:
  v6 = 0LL;
LABEL_7:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  v11 = *(_BYTE *)(a1 + 388);
  v12 = *(_DWORD *)(a1 + 132);
  if ( v11 == 1 || v11 == 7 && (*(_DWORD *)(a1 + 116) & 2) != 0 )
    v12 += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
  *(_DWORD *)(a2 + 4) = v12;
  v13 = *(_QWORD *)(a1 + 992);
  v14 = *(_QWORD *)(a1 + 1000);
  if ( *(_BYTE *)(a1 + 388) == 5 )
  {
    v15 = *(_BYTE *)(a1 + 112) & 7;
    if ( v15 == 1 || (unsigned __int8)(v15 - 3) <= 3u )
    {
      v16 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
      if ( *(_BYTE *)(a1 + 391) )
        v14 += v16;
      else
        v13 += v16;
    }
  }
  *(_QWORD *)(a2 + 16) = v13;
  *(_QWORD *)(a2 + 24) = v14;
  if ( v8 )
    KiReleasePrcbLocksForIsolationUnit(&v31);
  if ( v9 )
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  v3 = *(_BYTE *)(a1 + 643);
  *(_BYTE *)(a2 + 10) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v7 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v3 = 5;
LABEL_20:
  *(_BYTE *)(a2 + 11) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = v6;
  if ( KiIrqlFlags )
  {
    v24 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = CurrentPrcb->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v28 = (v27 & v26[5]) == 0;
      v26[5] &= v27;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_BYTE *)(a2 + 8) = v7;
  *(_BYTE *)(a2 + 9) = v3;
  return result;
}
