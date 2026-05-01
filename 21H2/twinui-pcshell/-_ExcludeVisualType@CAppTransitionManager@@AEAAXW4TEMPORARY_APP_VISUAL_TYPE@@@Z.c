/*
 * XREFs of ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x180435A58
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180434520 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppTransitionManager::_ExcludeVisualType(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 24LL))(v4, &v8);
    v5 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = 0LL;
        v6 = *(_QWORD *)(a1 + 208);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
               v6,
               v5,
               &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
               &v9) >= 0
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == a2 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        if ( ++v5 >= v8 )
          return;
      }
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL))(v9);
      DwmpTransitionWindow(v7, 43LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
  }
}
