/*
 * XREFs of ??$MakeAndInitialize@VWindowArrangementOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArrangementOperation@@@Z @ 0x180477A18
 * Callers:
 *     ?WindowArrangementOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804787AC (-WindowArrangementOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801BD1B4 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0WindowArrangementOperation@@QEAA@XZ @ 0x180477B74 (--0WindowArrangementOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowArrangementOperation,WindowArrangementOperation,>(
        WindowArrangementOperation **a1)
{
  void *v2; // rax
  int inited; // edi
  WindowArrangementOperation *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  WindowArrangementOperation *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = WindowArrangementOperation::WindowArrangementOperation((WindowArrangementOperation *)v2);
    v7 = v4;
    v6 = 0LL;
    inited = CObjectWithThreadUseDetection::InitApartmentId((WindowArrangementOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(WindowArrangementOperation *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      inited = 0;
    }
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v7);
  }
  else
  {
    inited = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return (unsigned int)inited;
}
