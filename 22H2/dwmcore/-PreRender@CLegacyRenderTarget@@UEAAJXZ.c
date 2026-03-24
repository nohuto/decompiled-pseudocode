/*
 * XREFs of ?PreRender@CLegacyRenderTarget@@UEAAJXZ @ 0x18008F9CC
 * Callers:
 *     ?PreRender@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F49E0 (-PreRender@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?PreRender@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJXZ @ 0x1800F49F0 (-PreRender@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CleanTree@CDesktopTree@@UEAAJXZ @ 0x18008FA40 (-CleanTree@CDesktopTree@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::PreRender(CLegacyRenderTarget *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this - 2313);
  if ( v3 && *((_QWORD *)this - 2311) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 224LL))(v3);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x99u, 0LL);
    }
    else
    {
      v6 = CDesktopTree::CleanTree(*((CDesktopTree **)this - 2311));
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x9Du, 0LL);
    }
  }
  return v2;
}
