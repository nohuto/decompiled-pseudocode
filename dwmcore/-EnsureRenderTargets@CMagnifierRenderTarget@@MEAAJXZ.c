/*
 * XREFs of ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801ECD00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E6CD0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801ECDC0 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v4; // r8
  int (__fastcall ***v5)(_QWORD); // rcx
  int v6; // eax
  __int64 v7; // rcx

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 446) )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 220) + 8 * v2);
      v5 = (int (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 8LL));
      if ( (**v5)(v5) < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 446) )
        goto LABEL_6;
    }
    COffScreenRenderTarget::ReleaseRenderTargets(this);
  }
LABEL_6:
  if ( !*((_DWORD *)this + 446) )
  {
    if ( *((_DWORD *)this + 466) )
    {
      v6 = CMagnifierRenderTarget::EnsureSharedRenderTargets(this);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x196u, 0LL);
        COffScreenRenderTarget::ReleaseRenderTargets(this);
      }
    }
  }
  return v1;
}
