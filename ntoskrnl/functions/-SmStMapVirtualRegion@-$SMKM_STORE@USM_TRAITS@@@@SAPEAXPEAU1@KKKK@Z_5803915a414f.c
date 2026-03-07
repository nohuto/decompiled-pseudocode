__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  int v7; // r13d
  __int64 *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // r15
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  signed __int16 v16; // di
  int v17; // edx
  signed __int16 v18; // bx
  signed __int16 v19; // ax

  v7 = 0;
  v8 = (__int64 *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  if ( (a5 & 0x40) == 0
    || (CurrentThread = KeGetCurrentThread(),
        v7 = 1,
        --CurrentThread->SpecialApcDisable,
        ExAcquirePushLockSharedEx(a1 + 6024, 0LL),
        (*v8 & 0x7FFFFFFFFFFF0000LL) != 0) )
  {
    v11 = *(unsigned int *)(a1 + 6208);
    v12 = *v8 & 0x7FFFFFFFFFFF0000LL;
    if ( (a5 & 8) != 0 )
    {
      v10 = 0LL;
      if ( (*(_WORD *)v8 & 0x4000) != 0 )
      {
        *(_WORD *)v8 &= ~0x4000u;
      }
      else if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, (__int64)v8, 0) )
      {
        v10 = 3LL;
      }
LABEL_14:
      if ( !v7 )
        return v10;
      goto LABEL_15;
    }
    if ( (a5 & 0x10) != 0 )
    {
      v10 = SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(a1, a2, v8, *v8 & 0x7FFFFFFFFFFF0000LL, a5);
      goto LABEL_14;
    }
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16((volatile signed __int16 *)v8, 0x8000u);
    }
    else
    {
      v10 = 2LL;
      if ( (a5 & 2) == 0 )
      {
        v16 = *(_WORD *)v8;
        if ( (*(_WORD *)v8 & 0x1FFF) == 0x1FFF )
        {
LABEL_32:
          v10 = 1LL;
          goto LABEL_14;
        }
        while ( 1 )
        {
          v17 = 0;
          v18 = v16 ^ (v16 ^ (v16 + 1)) & 0x1FFF;
          if ( (v16 & 0x1FFF) == 0 && *v8 >= 0 )
          {
            v17 = SmAcquireReleaseCharges(*(_QWORD *)(a1 + 6728), v11, 1, 0);
            if ( !v17 )
            {
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6488) )
                goto LABEL_14;
              v18 = v18 & 0xC000 | 0x2000;
            }
          }
          v19 = _InterlockedCompareExchange16((volatile signed __int16 *)v8, v18, v16);
          v14 = v16 == v19;
          v16 = v19;
          if ( v14 )
            break;
          if ( v17 )
            SmAcquireReleaseCharges(*(_QWORD *)(a1 + 6728), v11, 1, 1);
          if ( (v16 & 0x1FFF) == 0x1FFF )
            goto LABEL_32;
        }
      }
    }
    v10 = v12 + a3;
    goto LABEL_14;
  }
  v10 = 0LL;
LABEL_15:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  v13 = KeGetCurrentThread();
  v14 = v13->SpecialApcDisable++ == -1;
  if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  return v10;
}
