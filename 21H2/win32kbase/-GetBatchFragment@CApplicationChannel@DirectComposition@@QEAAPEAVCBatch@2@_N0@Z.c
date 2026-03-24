/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C005E78C
 * Callers:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005B9DC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C005DAF4 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C005DE20 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z @ 0x1C005E4DC (-SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z.c)
 * Callees:
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C005BDE4 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005E9CC (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C005EAC8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C009EE78 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  struct DirectComposition::CBatch *v3; // rdi
  __int64 v5; // rcx
  PSLIST_ENTRY v8; // rax
  DirectComposition::CBatch *v9; // rsi
  struct DirectComposition::CBatch *v10; // rax
  __int64 v11; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v12; // rsi
  __int64 v13; // rcx
  struct _ERESOURCE *v14; // rsi
  unsigned __int64 v16; // rax
  int v17; // ebp
  unsigned __int64 v18[7]; // [rsp+20h] [rbp-38h] BYREF
  struct DirectComposition::CBatch *v19; // [rsp+60h] [rbp+8h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = *((_QWORD *)this + 27);
  v20 = 0LL;
  v18[0] = 0LL;
  v19 = 0LL;
  KeResetEvent(*(PRKEVENT *)(v5 + 8));
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 12);
    v9 = (DirectComposition::CBatch *)v8;
    if ( !v8 )
      break;
    --*((_DWORD *)this + 57);
    v16 = *((_QWORD *)&v8[4].Next + 1);
    if ( v16 > *((_QWORD *)this + 29) )
    {
      *((_BYTE *)this + 240) |= 2u;
      *((_QWORD *)this + 29) = v16;
    }
    DirectComposition::CBatch::Clear(v9);
    *(_QWORD *)v9 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = v9;
  }
  v10 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 21);
  if ( v10 )
  {
    *((_QWORD *)this + 21) = 0LL;
    v3 = v10;
  }
  else
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
      if ( (int)DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
                  (DirectComposition::CApplicationChannel *)((char *)this + 600),
                  v11 + 40,
                  &v20,
                  v18) >= 0
        || !a3 )
      {
        break;
      }
      DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0, 0);
    }
    v12 = v20;
    if ( !v20 )
      return v3;
    v13 = *((_QWORD *)v20 + 5);
    if ( (unsigned __int64)(4096 - v13) >= 0x28 )
      *((_QWORD *)v20 + 5) = v13 + 40;
    v3 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
    if ( v3 )
    {
      *((_QWORD *)this + 23) = *(_QWORD *)v3;
    }
    else
    {
      do
      {
        v17 = DirectComposition::CApplicationChannel::CreateBatch(this, &v19);
        if ( v17 < 0
          && *((int *)this + 57) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0, 0) )
        {
          v3 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
          v17 = 0;
          v19 = v3;
          *((_QWORD *)this + 23) = *(_QWORD *)v3;
        }
        else
        {
          v3 = v19;
        }
      }
      while ( a3 && v17 < 0 );
    }
    if ( v3 )
    {
      *((_QWORD *)v3 + 18) = v18[0];
      *((_QWORD *)v3 + 17) = v12;
    }
    else
    {
      *((_BYTE *)v12 + 64) = 0;
    }
  }
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    if ( a2 )
    {
      *((_DWORD *)v3 + 4) = ++*((_DWORD *)this + 94);
      ++*((_DWORD *)this + 57);
      *((_BYTE *)this + 240) |= 8u;
      v14 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
      if ( v14 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v14, 1u);
        if ( ++*((_DWORD *)this + 56) == 1 )
          KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL));
        ExReleaseResourceLite(*((PERESOURCE *)this + 46));
        KeLeaveCriticalRegion();
      }
    }
  }
  return v3;
}
