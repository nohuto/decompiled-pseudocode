__int64 __fastcall MmEnforceWorkingSetLimit(struct _KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  char v5; // si
  int v6; // r14d
  char v7; // di
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r15
  int v11; // ecx
  BOOL v12; // edx
  unsigned int v13; // ebx
  __int16 v15; // [rsp+20h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v4 = (__int64)&a1[1].ActiveProcessors.StaticBitmap[26];
  v5 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v6 = 0;
  if ( (a2 & 4) != 0 )
    v5 = 0x80;
  v7 = a2 & 0xF7;
  ApcState.ApcListHead[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v7 = a2;
  memset(&ApcState.ApcListHead[1], 0, 32);
  LockHandle.LockQueue = 0LL;
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~2u;
    v5 = (a2 & 4) != 0 ? -64 : 64;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v6 = 1;
    KeStackAttachProcess(a1, &ApcState);
  }
  SharedVm = MiGetSharedVm(v4, a2, a3, a4);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v10 = v9;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C69440, &LockHandle);
  v11 = *(_DWORD *)(v4 + 184);
  v15 = v11;
  if ( (v7 & 8) != 0 )
  {
    LOBYTE(v11) = v11 & 0x7F;
    LOBYTE(v15) = v11;
  }
  v12 = (v7 & 8) != 0;
  if ( (v7 & 2) != 0 )
  {
    LOBYTE(v11) = v11 & 0xBF;
    v12 = 1;
    LOBYTE(v15) = v11;
  }
  if ( (v11 & 0x80) != 0 )
    v5 |= 0x80u;
  if ( (v11 & 0x40) != 0 )
    v5 |= 0x40u;
  if ( v5 < 0 && (v5 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v4 + 112) + 6LL) >= *(_QWORD *)(v4 + 120) )
  {
    v13 = -1073741748;
    goto LABEL_21;
  }
  v13 = 0;
  if ( (v7 & 4) != 0 )
  {
    LOBYTE(v11) = v11 | 0x80;
    v12 = 1;
    LOBYTE(v15) = v11;
  }
  if ( (v7 & 1) == 0 )
  {
LABEL_21:
    if ( !v12 )
      goto LABEL_23;
    goto LABEL_22;
  }
  LOBYTE(v15) = v11 | 0x40;
LABEL_22:
  *(_WORD *)(v4 + 184) = v15;
LABEL_23:
  KxReleaseQueuedSpinLock(&LockHandle);
  MiUnlockWorkingSetExclusive(v4, v10);
  if ( v6 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return v13;
}
