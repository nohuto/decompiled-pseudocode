void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  __int64 v2; // rax
  void *v3; // r13
  ULONG_PTR v4; // rbx
  void *Pool2; // rax
  void *v6; // rbp
  KIRQL v7; // si
  PKSPIN_LOCK v8; // rdi
  __int16 v9; // r14
  __int64 v10; // r12
  unsigned __int16 v11; // r14
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  KSPIN_LOCK v15; // rax
  KSPIN_LOCK v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  __int128 v23; // [rsp+20h] [rbp-68h] BYREF
  __int128 v24; // [rsp+30h] [rbp-58h]
  __int128 v25; // [rsp+40h] [rbp-48h]

  v2 = -1LL;
  v3 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  do
    ++v2;
  while ( Src[v2] );
  v4 = 2 * v2 + 2;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( (int)ZwQuerySystemInformation(3LL, (__int64)&v23) < 0 )
    {
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
    }
    Pool2 = (void *)ExAllocatePool2(64LL, v4, 0x736C6448u);
    v6 = Pool2;
    if ( Pool2 )
      memmove(Pool2, Src, v4);
    if ( (HeadlessGlobals[6] & 2) != 0 )
      v7 = -1;
    else
      v7 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v8 = HeadlessGlobals;
    v9 = *((_WORD *)HeadlessGlobals + 48);
    *((_DWORD *)HeadlessGlobals + 12) |= 4u;
    v10 = *((unsigned __int16 *)v8 + 49);
    v11 = (unsigned __int8)(v9 + 1);
    *((_WORD *)v8 + 48) = v11;
    if ( v11 == (_WORD)v10 )
    {
      v12 = *(const wchar_t **)(56 * v10 + v8[2] + 48);
      v13 = wcscmp(v12, L"Entry could not be recorded due to lack of memory.\n");
      *((_WORD *)v8 + 49) = (unsigned __int8)(v10 + 1);
      v3 = (void *)((unsigned __int64)v12 & -(__int64)(v13 != 0));
    }
    else if ( (_WORD)v10 == 0xFFFF )
    {
      *((_WORD *)v8 + 49) = 0;
    }
    v14 = 56LL * v11;
    v15 = v8[2];
    *(_OWORD *)(v14 + v15) = v23;
    *(_OWORD *)(v14 + v15 + 16) = v24;
    *(_OWORD *)(v14 + v15 + 32) = v25;
    v16 = v8[2];
    v17 = 56LL * *((unsigned __int16 *)v8 + 48);
    if ( v6 )
      *(_QWORD *)(v17 + v16 + 48) = v6;
    else
      *(_QWORD *)(v17 + v16 + 48) = L"Entry could not be recorded due to lack of memory.\n";
    if ( v7 != 0xFF )
    {
      KxReleaseSpinLock((volatile signed __int64 *)HeadlessGlobals);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v7);
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
}
