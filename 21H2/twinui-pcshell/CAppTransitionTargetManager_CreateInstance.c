/*
 * XREFs of CAppTransitionTargetManager_CreateInstance @ 0x180439184
 * Callers:
 *     ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18043620C (-_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180135BF8 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0CAppTransitionTargetManager@@QEAA@XZ @ 0x180437408 (--0CAppTransitionTargetManager@@QEAA@XZ.c)
 */

__int64 __fastcall CAppTransitionTargetManager_CreateInstance(IUnknown *punkSite, __int64 a2, _QWORD *a3)
{
  void *v5; // rax
  HRESULT v6; // edi
  CAppTransitionTargetManager *v7; // rbx
  IUnknown *punk; // [rsp+48h] [rbp+10h] BYREF
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  punk = 0LL;
  v5 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  if ( v5 )
  {
    v7 = CAppTransitionTargetManager::CAppTransitionTargetManager((CAppTransitionTargetManager *)v5);
    v6 = (**(__int64 (__fastcall ***)(CAppTransitionTargetManager *, GUID *, IUnknown **))v7)(
           v7,
           &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
           &punk);
    (*(void (__fastcall **)(CAppTransitionTargetManager *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 >= 0 )
    {
      v6 = IUnknown_SetSite(punk, punkSite);
      if ( v6 >= 0 )
        v6 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))punk->lpVtbl->QueryInterface)(
               punk,
               &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
               a3);
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>(&v10);
    v6 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return (unsigned int)v6;
}
