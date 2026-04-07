/*
 * XREFs of ?UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ @ 0x1800874F4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800157E0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180037690 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?ShouldClearRenderTargets@CWindowList@@QEBA_NXZ @ 0x180099CBC (-ShouldClearRenderTargets@CWindowList@@QEBA_NXZ.c)
 */

void __fastcall CDesktopManager::UpdateEnableClearForRenderTargets(CDesktopManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  bool ShouldClearRenderTargets; // bp
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]
  unsigned int v11; // [rsp+38h] [rbp-10h]

  v9 = 0;
  v10 = 0;
  v2 = *((_QWORD *)this + 21);
  v11 = 0;
  v8 = 0LL;
  if ( (int)CDWMDisplaySet::GetAllDisplaysNoRef(v2, (__int64)&v8) >= 0 )
  {
    ShouldClearRenderTargets = CWindowList::ShouldClearRenderTargets(*((CWindowList **)this + 61));
    if ( v11 )
    {
      v5 = v8;
      v6 = v11;
      do
      {
        v7 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
        if ( v7 )
        {
          LOBYTE(v3) = ShouldClearRenderTargets;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v3);
        }
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v8);
}
