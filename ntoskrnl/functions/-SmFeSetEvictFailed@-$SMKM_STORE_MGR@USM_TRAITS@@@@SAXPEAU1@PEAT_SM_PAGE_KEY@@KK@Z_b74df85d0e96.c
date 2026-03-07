char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __m128i *v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  _BYTE *v16; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-81h] BYREF
  int v18; // [rsp+48h] [rbp-71h]
  int v19; // [rsp+4Ch] [rbp-6Dh]
  __int64 v20; // [rsp+50h] [rbp-69h]
  _BYTE v21[136]; // [rsp+58h] [rbp-61h] BYREF

  v3 = *a2;
  memset(v21, 0, 0x80uLL);
  v17[0] = 0LL;
  v17[1] = 0LL;
  v20 = 0LL;
  v18 = 0;
  v16 = v21;
  v19 = 8;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64 *)(a1 + 448),
    v3,
    (__int64)&v16);
  if ( v18 == -1 || !v18 )
    v8 = (__m128i *)v17;
  else
    v8 = (__m128i *)&v16[16 * (v18 - 1)];
  v9 = v8->m128i_i64[0];
  v10 = _mm_srli_si128(*v8, 8).m128i_u64[0] - 8;
  do
  {
    if ( v9 )
    {
      v10 += 8LL;
      v11 = v10;
      if ( v10 >= v9 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v9 + 2) )
      {
        v12 = *(_QWORD *)(v9 + 8);
        if ( v12 )
        {
          v9 = *(_QWORD *)(v9 + 8);
          v10 = v12 + 16;
        }
        v11 = (v12 + 16) & ((unsigned __int128)-(__int128)v12 >> 64);
      }
    }
    else
    {
      v11 = 0LL;
    }
    *(_BYTE *)(v11 + 7) |= 1u;
    ++v6;
    *(_BYTE *)(v11 + 6) = 3;
  }
  while ( v6 != a3 );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  v13 = KeGetCurrentThread();
  if ( v13->SpecialApcDisable++ == -1 )
  {
    v13 = (struct _KTHREAD *)((char *)v13 + 152);
    if ( *(struct _KTHREAD **)&v13->Header.Lock != v13 )
      LOBYTE(v13) = KiCheckForKernelApcDelivery();
  }
  return (char)v13;
}
