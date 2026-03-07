__int64 __fastcall PopFxAllocatePowerIrpLegacy(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *OldIrql,
        _QWORD *a8)
{
  KIRQL v13; // al
  __int64 v14; // rdi
  NTSTATUS v15; // esi
  signed __int32 v16; // edx
  char v17; // al
  signed __int32 v18; // edx
  signed __int32 v19; // r8d
  unsigned int v20; // edx
  volatile LONG *SpinLock; // [rsp+60h] [rbp+8h]
  KIRQL OldIrqla; // [rsp+90h] [rbp+38h]

  SpinLock = (volatile LONG *)(a1 + 88);
  *OldIrql = 0LL;
  *a8 = 0LL;
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v14 = *(_QWORD *)(a1 + 80);
  OldIrqla = v13;
  if ( !v14 )
  {
    v15 = -1073741130;
    goto LABEL_22;
  }
  if ( a6 )
  {
    v15 = 0;
  }
  else
  {
    v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v14 + 240), 0LL, &Src, 1u, 0x20u);
    if ( v15 < 0 )
      goto LABEL_22;
  }
  _m_prefetchw((const void *)(v14 + 32));
  v16 = _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) & 0x10;
  _m_prefetchw((const void *)(v14 + 32));
  v17 = _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0);
  if ( v16 )
  {
    if ( (v17 & 0x20) != 0
      && (_m_prefetchw((const void *)(v14 + 32)),
          v18 = _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) & 0x100,
          _m_prefetchw((const void *)(v14 + 32)),
          (v18 != 0) == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 9) & 1)) )
    {
      v15 = -1073741670;
    }
    else
    {
      _m_prefetchw((const void *)(v14 + 32));
      v19 = _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) & 0x200;
      _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x20u);
      _InterlockedXor((volatile signed __int32 *)(v14 + 32), 0x200u);
      v15 = 259;
      *(_QWORD *)((v19 != 0 ? 520LL : 512LL) + v14) = a2;
      *(_DWORD *)((v19 != 0 ? 4 : 0) + v14 + 528) = a3;
      *(_QWORD *)((v19 != 0 ? 8 : 0) + v14 + 536) = a4;
      *(_QWORD *)((v19 != 0 ? 8 : 0) + v14 + 552) = a5;
    }
  }
  else if ( (v17 & 0x10) == 0 )
  {
    _m_prefetchw((const void *)(v14 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) & 0x20) != 0 )
    {
      if ( a6 )
      {
        _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0);
        _InterlockedXor((volatile signed __int32 *)(v14 + 32), 0x100u);
        _m_prefetchw((const void *)(v14 + 32));
        v20 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 8) & 1;
        _m_prefetchw((const void *)(v14 + 32));
        if ( v20 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 9) & 1) )
          _InterlockedAnd((volatile signed __int32 *)(v14 + 32), 0xFFFFFFDF);
        _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x10u);
        v15 = 0;
        *OldIrql = *(_QWORD *)(v14 + 16);
        *a8 = *(_QWORD *)(v14 + 24);
      }
      else
      {
        v15 = -1073741670;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 244), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v14 + 248), 0, 0);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x10u);
      KeResetEvent((PRKEVENT)(v14 + 568));
      v15 = 0;
      *OldIrql = *(_QWORD *)(v14 + 16);
      *a8 = *(_QWORD *)(v14 + 24);
    }
  }
LABEL_22:
  ExReleaseSpinLockExclusive(SpinLock, OldIrqla);
  if ( v14 )
    PopFxAddLogEntry(*(_QWORD *)(v14 + 48), 0, 21, v15);
  return (unsigned int)v15;
}
