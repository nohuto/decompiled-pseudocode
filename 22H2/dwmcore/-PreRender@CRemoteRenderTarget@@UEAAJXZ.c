/*
 * XREFs of ?PreRender@CRemoteRenderTarget@@UEAAJXZ @ 0x1800E54A4
 * Callers:
 *     ?PreRender@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F4A50 (-PreRender@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CleanTree@CDesktopTree@@UEAAJXZ @ 0x18008FA40 (-CleanTree@CDesktopTree@@UEAAJXZ.c)
 */

__int64 __fastcall CRemoteRenderTarget::PreRender(CDesktopTree **this)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rcx

  v1 = 0;
  if ( *(this - 25) )
  {
    if ( *(this - 23) )
    {
      if ( *((int *)*(this - 43) + 238) <= 3 )
      {
        v2 = CDesktopTree::CleanTree(*(this - 23));
        v1 = v2;
        if ( v2 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x8Bu, 0LL);
      }
    }
  }
  return v1;
}
