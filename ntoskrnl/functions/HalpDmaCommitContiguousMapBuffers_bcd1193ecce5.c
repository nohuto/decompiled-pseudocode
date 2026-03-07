__int64 __fastcall HalpDmaCommitContiguousMapBuffers(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v8; // r8
  __int64 result; // rax
  unsigned __int64 *v10; // r14
  __int64 *v11; // rdx
  unsigned __int64 *v12; // rsi
  char v13; // r13
  unsigned __int64 *v14; // rdi
  ULONG v15; // r14d
  char v16; // r12
  __int64 v17; // r13
  unsigned int v18; // r12d
  __int64 v19; // rdx
  unsigned __int64 *v20; // rcx
  bool v21; // zf
  unsigned __int64 OldIrql; // rbx
  __int64 *v23; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  char v28; // [rsp+20h] [rbp-78h]
  char v29; // [rsp+21h] [rbp-77h]
  ULONG StartingIndex; // [rsp+24h] [rbp-74h]
  __int64 *v31; // [rsp+28h] [rbp-70h] BYREF
  __int64 v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v35; // [rsp+A0h] [rbp+8h]

  v4 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 48);
  v31 = 0LL;
  v8 = a4;
  if ( v6 && (*(_QWORD *)(a1 + 64) != v6 || *(_DWORD *)(a1 + 72)) )
  {
    v8 = a4 + 1;
    v35 = 1;
  }
  else
  {
    v35 = 0;
  }
  if ( !*(_BYTE *)(a1 + 153) )
    v8 = (unsigned int)((((unsigned __int64)a4 << 12) + a3 - 1) >> 16) - (unsigned int)(a3 >> 16) + (unsigned int)v8;
  result = HalpDmaGetTranslationEntries(a1, 0LL, v8);
  v33 = result;
  v10 = (unsigned __int64 *)result;
  if ( result )
  {
    StartingIndex = HalpDmaTranslationEntryToIndex(a1, result, &v31);
    if ( (unsigned int)(((__int64)v10 - v31[2]) / 72) )
    {
      v12 = v10 - 9;
    }
    else
    {
      v11 = *(__int64 **)(a1 + 48);
      if ( v11 == v31 )
      {
        v12 = 0LL;
      }
      else
      {
        if ( v11 )
        {
          do
          {
            v23 = (__int64 *)*v11;
            if ( (__int64 *)*v11 == v31 )
              break;
            v11 = (__int64 *)*v11;
          }
          while ( v23 );
        }
        v12 = (unsigned __int64 *)(v11[2] + 72LL * (unsigned int)(*((_DWORD *)v11 + 2) - 1));
      }
    }
    v13 = *(_BYTE *)(a1 + 152);
    v29 = v13;
    v14 = v10;
    v28 = *(_BYTE *)(a1 + 153);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    if ( (_DWORD)v4 )
    {
      v15 = StartingIndex;
      v16 = v13;
      v17 = a2;
      v18 = v16 & 1;
      v32 = v4;
      v19 = 4LL * v18;
      do
      {
        if ( v12 && (*v12 + 4096 != a3 || !v28 && ((a3 ^ *v12) & 0xFFFFFFFFFFFF0000uLL) != 0) )
        {
          v14 = (unsigned __int64 *)v14[1];
          ++v15;
        }
        *v14 = a3;
        v20 = v14 + 6;
        if ( v17 )
        {
          *v20 = v17 | *(_DWORD *)v20 & 0xFFF;
          v17 += 4096LL;
        }
        *v20 = v19 & 0xFFFFFFFFFFFFFFF7uLL | v18 & 0xFFFFFFF1 | *v20 & 0xFFFFFFFFFFFFFFF0uLL;
        RtlClearBits(*(PRTL_BITMAP *)(a1 + 24), v15, 1u);
        a3 += 4096LL;
        v19 = 4LL * v18;
        ++v15;
        v12 = v14;
        v21 = v32-- == 1;
        v14 = (unsigned __int64 *)v14[1];
      }
      while ( !v21 );
      LODWORD(v4) = a4;
      v10 = (unsigned __int64 *)v33;
      v13 = v29;
    }
    if ( v35 && v14 )
    {
      --*(_DWORD *)(a1 + 72);
      memset(v14, 0, 0x48uLL);
    }
    if ( v13 )
      *(_DWORD *)(a1 + 208) += v4;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v27 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v27;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return (__int64)v10;
  }
  return result;
}
