char __fastcall EtwpCovSampContextCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rdx
  _QWORD *v4; // rcx
  _QWORD **v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  _QWORD *i; // r8
  _QWORD *v9; // rsi
  _QWORD *v10; // r9
  _QWORD *j; // r8
  void *v12; // rcx

  EtwpCovSampProcessCleanup(a1 + 1248, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1176, 0LL);
  *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
  v3 = *(_QWORD ***)(a1 + 1200);
  v4 = v3;
  while ( v4 )
  {
    v4 = (_QWORD *)*v4;
    if ( ((unsigned __int8)v4 & 1) != 0 )
      break;
LABEL_12:
    if ( !v4 )
      goto LABEL_8;
    v7 = v4;
    for ( i = v3; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v4 )
      {
        *i = *v4;
        --*(_DWORD *)(a1 + 1192);
        *v4 |= 0x8000000000000002uLL;
        v4 = i;
        goto LABEL_19;
      }
    }
    v7 = 0LL;
LABEL_19:
    *v7 = 0LL;
  }
  for ( ++v3;
        (unsigned __int64)v3 < *(_QWORD *)(a1 + 1200) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 1196) >> 5);
        ++v3 )
  {
    v4 = *v3;
    if ( ((unsigned __int8)*v3 & 1) == 0 )
      goto LABEL_12;
  }
LABEL_8:
  v5 = *(_QWORD ***)(a1 + 1216);
  v6 = v5;
  while ( v6 )
  {
    v6 = (_QWORD *)*v6;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      break;
LABEL_26:
    if ( !v6 )
      goto LABEL_23;
    v10 = v6;
    for ( j = v5; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v6 )
      {
        *j = *v6;
        --*(_DWORD *)(a1 + 1208);
        *v6 |= 0x8000000000000002uLL;
        v6 = j;
        goto LABEL_33;
      }
    }
    v10 = 0LL;
LABEL_33:
    *v10 = 0LL;
  }
  for ( ++v5;
        (unsigned __int64)v5 < *(_QWORD *)(a1 + 1216) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 1212) >> 5);
        ++v5 )
  {
    v6 = *v5;
    if ( ((unsigned __int8)*v5 & 1) == 0 )
      goto LABEL_26;
  }
LABEL_23:
  v9 = (_QWORD *)(a1 + 1224);
  while ( (_QWORD *)*v9 != v9 )
  {
    *(_DWORD *)(*v9 - 72LL + 132) = 0;
    EtwpCovSampContextRemoveAndFreeModule(a1);
  }
  v12 = *(void **)(a1 + 1200);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x56777445u);
  *(_QWORD *)(a1 + 1184) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
  KeAbPostRelease(a1 + 1176);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
