/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N0@Z @ 0x1C0060A74
 * Callers:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C005FC4C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00600B0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C005E290 (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005E2BC (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C005EE98 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0061350 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C00BF8F4 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        int a2,
        char a3,
        char a4)
{
  struct DirectComposition::CBatch *v5; // rsi
  __int64 v6; // rcx
  char v8; // r14
  int v9; // r15d
  PSLIST_ENTRY v10; // rax
  DirectComposition::CBatch *v11; // rdi
  struct DirectComposition::CBatch *v12; // rax
  DirectComposition::CBatchSharedMemoryPool *v13; // r14
  __int64 v14; // rax
  DirectComposition::CBatchSharedMemoryPool *v15; // rdi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r15
  DirectComposition::CBatchSharedMemoryPool **v18; // rax
  __int64 v19; // rax
  struct _ERESOURCE *v20; // rdi
  unsigned __int64 v22; // rax
  int v23; // ebp
  DirectComposition::CBatchSharedMemoryPool *v24; // rax
  DirectComposition::CBatchSharedMemoryPool *v25; // rcx
  DirectComposition::CBatchSharedMemoryPool *v26; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v27[8]; // [rsp+28h] [rbp-40h] BYREF
  struct DirectComposition::CBatch *v28; // [rsp+70h] [rbp+8h] BYREF
  int v29; // [rsp+78h] [rbp+10h]
  char v30; // [rsp+80h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 27);
  v8 = a3;
  v28 = 0LL;
  v9 = a2;
  KeResetEvent(*(PRKEVENT *)(v6 + 8));
  while ( 1 )
  {
    v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 12);
    v11 = (DirectComposition::CBatch *)v10;
    if ( !v10 )
      break;
    --*((_DWORD *)this + 57);
    v22 = *((_QWORD *)&v10[4].Next + 1);
    if ( v22 > *((_QWORD *)this + 29) )
    {
      *((_BYTE *)this + 240) |= 2u;
      *((_QWORD *)this + 29) = v22;
    }
    DirectComposition::CBatch::Clear(v11);
    *(_QWORD *)v11 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = v11;
  }
  v12 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 21);
  if ( v12 )
  {
    *((_QWORD *)this + 21) = 0LL;
    v5 = v12;
LABEL_19:
    if ( v5 )
    {
      *((_DWORD *)v5 + 4) = v9;
      *(_QWORD *)v5 = 0LL;
      if ( v8 )
      {
        ++*((_DWORD *)this + 57);
        *((_BYTE *)this + 240) |= 8u;
        v20 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
        if ( v20 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v20, 1u);
          if ( ++*((_DWORD *)this + 56) == 1 )
            KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL));
          ExReleaseResourceLite(*((PERESOURCE *)this + 46));
          KeLeaveCriticalRegion();
        }
      }
    }
    return v5;
  }
  v13 = (DirectComposition::CApplicationChannel *)((char *)this + 2592);
  while ( 1 )
  {
    v14 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    v27[0] = 0LL;
    v26 = 0LL;
    v15 = *(DirectComposition::CBatchSharedMemoryPool **)v13;
    v16 = v14 + 40;
    while ( v15 != v13 )
    {
      if ( !*((_BYTE *)v15 + 64) )
      {
        v17 = *((_QWORD *)v15 + 5);
        if ( v16 <= 4096 - v17 )
        {
          *((_BYTE *)v15 + 64) = 1;
          v18 = (DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v15 + 1);
          if ( v18 == (DirectComposition::CBatchSharedMemoryPool **)v13 )
            goto LABEL_11;
          v25 = *(DirectComposition::CBatchSharedMemoryPool **)v15;
          if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v15 + 8LL) != v15
            || *v18 != v15
            || (*v18 = v25,
                *((_QWORD *)v25 + 1) = v18,
                v24 = *(DirectComposition::CBatchSharedMemoryPool **)v13,
                *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v13 + 8LL) != v13) )
          {
LABEL_49:
            __fastfail(3u);
          }
          goto LABEL_35;
        }
      }
      v15 = *(DirectComposition::CBatchSharedMemoryPool **)v15;
    }
    if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                (DirectComposition::CApplicationChannel *)((char *)this + 2592),
                *((_BYTE *)this + 2616),
                &v26) >= 0 )
      break;
    if ( !a4 )
      return v5;
    DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
  }
  v15 = v26;
  DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v26, v16, v27);
  v24 = *(DirectComposition::CBatchSharedMemoryPool **)v13;
  if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v13 + 8LL) != v13 )
    goto LABEL_49;
  v17 = v27[0];
LABEL_35:
  *(_QWORD *)v15 = v24;
  *((_QWORD *)v15 + 1) = v13;
  *((_QWORD *)v24 + 1) = v15;
  *(_QWORD *)v13 = v15;
LABEL_11:
  if ( v15 )
  {
    v19 = *((_QWORD *)v15 + 5);
    if ( (unsigned __int64)(4096 - v19) >= 0x28 )
      *((_QWORD *)v15 + 5) = v19 + 40;
    v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
    if ( v5 )
    {
      *((_QWORD *)this + 23) = *(_QWORD *)v5;
    }
    else
    {
      do
      {
        v23 = DirectComposition::CApplicationChannel::CreateBatch(this, &v28);
        if ( v23 < 0
          && *((int *)this + 57) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
        {
          v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
          v23 = 0;
          v28 = v5;
          *((_QWORD *)this + 23) = *(_QWORD *)v5;
        }
        else
        {
          v5 = v28;
        }
      }
      while ( a4 && v23 < 0 );
    }
    v8 = v30;
    if ( v5 )
    {
      *((_QWORD *)v5 + 17) = v15;
      *((_QWORD *)v5 + 18) = v17;
    }
    else
    {
      *((_BYTE *)v15 + 64) = 0;
    }
    v9 = v29;
    goto LABEL_19;
  }
  return v5;
}
