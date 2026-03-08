/*
 * XREFs of MmCreateKernelShadowStack @ 0x140642B98
 * Callers:
 *     KeUserModeCallback @ 0x1407DA1F0 (KeUserModeCallback.c)
 *     KiCreateKernelShadowStack @ 0x1409713F0 (KiCreateKernelShadowStack.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     FirstEntrySList @ 0x140420450 (FirstEntrySList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x140642A9C (MiUpdateKernelShadowStackOwnerData.c)
 *     VslAllocateKernelShadowStack @ 0x14093E7EC (VslAllocateKernelShadowStack.c)
 */

__int64 __fastcall MmCreateKernelShadowStack(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v6; // ebx
  ULONG_PTR v8; // r12
  unsigned __int16 *v9; // r8
  union _SLIST_HEADER *v11; // rdi
  struct _KPRCB *v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  PSLIST_ENTRY v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r8
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // rbp
  int v22; // edx
  BOOL v23; // r14d
  unsigned __int64 v24; // r8
  struct _KPRCB *v25; // r9
  __int64 v26; // rdx
  bool v27; // zf
  signed __int32 v28; // eax
  int KernelShadowStack; // eax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v32; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+80h] [rbp+8h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  v36 = a4;
  v6 = a4;
  v8 = a2;
  v9 = MiSystemPartition;
  if ( a1 )
    v11 = *(union _SLIST_HEADER **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1838LL));
  else
    v11 = (union _SLIST_HEADER *)MiSystemPartition;
  if ( a2 > 2 )
    goto LABEL_21;
  if ( (a3 & 0x10) == 0
    || a2 != 2
    || (v12 = KeGetCurrentPrcb(), v12->SchedulerSubNode->Affinity.Reserved[0] != a4)
    || !v12->CachedShadowStack )
  {
    v13 = a6;
LABEL_13:
    v15 = v11[1].Alignment + 25408LL * a4 + 32 * (v8 + 728);
    if ( FirstEntrySList((PSLIST_HEADER)v15) )
    {
      v16 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v15);
      if ( v16 )
      {
        if ( !FirstEntrySList((PSLIST_HEADER)v15) && !*(_BYTE *)(v15 + 28) )
          *(_BYTE *)(v15 + 28) = 1;
        *v13 = v16[1].Next;
        RtlpInterlockedPushEntrySList(v11 + 29, v16);
        goto LABEL_19;
      }
    }
    ++*(_DWORD *)(v15 + 20);
    v6 = v36;
LABEL_21:
    if ( !(unsigned int)MiChargeCommit((unsigned __int64)v11, 1uLL, (a3 >> 1) & 1) )
      return (unsigned int)-1073741523;
    if ( !(unsigned int)MiChargeResident(v11, 1uLL, 0LL) )
    {
      v18 = -1073741670;
      goto LABEL_64;
    }
    v20 = MiReservePtes((__int64)&unk_140C680E0, 3u);
    v21 = v20;
    if ( !v20 )
    {
      v18 = -1073741670;
      goto LABEL_51;
    }
    if ( !(unsigned int)MiAllocateKernelStackPages((__int64)v11, v20 + 8, 1LL, a1, v6, a3, &v35) )
    {
      v18 = -1073741670;
      MiReleasePtes((__int64)&unk_140C680E0, (__int64 *)v21, 3u);
LABEL_51:
      v19 = 1LL;
      if ( v11 == (union _SLIST_HEADER *)MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v32 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v27 = (_DWORD)CachedResidentAvailable == v32;
              LODWORD(CachedResidentAvailable) = v32;
              if ( v27 )
                goto LABEL_64;
            }
            while ( v32 != -1 && (unsigned __int64)(v32 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v19 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
      }
      if ( v19 )
        v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1080], v19);
LABEL_64:
      MiReturnCommit((__int64)v11, 1LL, v19);
      return v18;
    }
    v23 = MiCheckSlabPfnBitmap(48 * v35 - 0x220000000000LL, 1LL, 1) != 0;
    if ( !v23 )
    {
LABEL_41:
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1118], 1uLL);
      if ( (_BYTE)KiKernelCetEnabled )
      {
        KernelShadowStack = VslAllocateKernelShadowStack(
                              (__int64)(v21 << 25) >> 16,
                              v22,
                              v8,
                              (unsigned int)&v35,
                              BugCheckParameter4,
                              (__int64)a6);
        v18 = KernelShadowStack;
        if ( KernelShadowStack >= 0 )
        {
          v18 = 0;
          *a5 = (__int64)((v21 << 25) + 805306368) >> 16;
          return v18;
        }
        if ( KernelShadowStack == -1073741800
          || KernelShadowStack == -1073741811
          || KernelShadowStack == -1073741790
          || KernelShadowStack == -1073741757 )
        {
          KeBugCheckEx(0x1Au, 0x3500uLL, v21, v8, KernelShadowStack);
        }
      }
      else
      {
        v18 = -1073741637;
      }
      MiDeleteKernelShadowStack((__int64 *)v21, v22, 0LL);
      return v18;
    }
    v24 = v23;
    if ( v11 == (union _SLIST_HEADER *)MiSystemPartition )
    {
      v25 = KeGetCurrentPrcb();
      v26 = (int)v25->CachedResidentAvailable;
      if ( (_DWORD)v26 != -1 )
      {
        if ( (unsigned __int64)v23 + v26 <= 0x100 )
        {
          do
          {
            v28 = _InterlockedCompareExchange((volatile signed __int32 *)&v25->CachedResidentAvailable, v23 + v26, v26);
            v27 = (_DWORD)v26 == v28;
            LODWORD(v26) = v28;
            if ( v27 )
              goto LABEL_40;
          }
          while ( v28 != -1 && (unsigned __int64)v23 + v28 <= 0x100 );
        }
        if ( (int)v26 > 192
          && (_DWORD)v26 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v25->CachedResidentAvailable,
                              192,
                              v26) )
        {
          v24 = (int)v26 - 192 + (unsigned __int64)v23;
        }
      }
    }
    if ( v24 )
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1080], v24);
LABEL_40:
    MiReturnCommit((__int64)v11, v23, v24);
    goto LABEL_41;
  }
  v13 = a6;
  if ( v11 != (union _SLIST_HEADER *)MiSystemPartition )
    goto LABEL_13;
  v14 = _InterlockedExchange64((volatile __int64 *)&v12->CachedShadowStack, 0LL);
  *v13 = v14;
  if ( !v14 )
    goto LABEL_13;
LABEL_19:
  v17 = (*v13 & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
  *a5 = v17;
  MiUpdateKernelShadowStackOwnerData(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000018LL, (__int64)v12, (__int64)v9, a1);
  return 0;
}
