__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  volatile signed __int64 *v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int updated; // edi
  struct _KTHREAD *v11; // rax
  bool v12; // zf
  _QWORD v14[3]; // [rsp+30h] [rbp-F8h] BYREF
  int v15; // [rsp+48h] [rbp-E0h]
  int v16; // [rsp+4Ch] [rbp-DCh]
  __int64 v17; // [rsp+50h] [rbp-D8h]
  _BYTE v18[136]; // [rsp+58h] [rbp-D0h] BYREF

  memset(v18, 0, 0x80uLL);
  v16 = 8;
  v14[1] = 0LL;
  v14[2] = 0LL;
  v8 = (volatile signed __int64 *)(a1 + 440);
  v17 = 0LL;
  v15 = 0;
  v14[0] = v18;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64 *)(a1 + 448),
    *a2,
    (__int64)v14);
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(a1, (_DWORD)a2, a3, a4, (__int64)v14);
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  return updated;
}
