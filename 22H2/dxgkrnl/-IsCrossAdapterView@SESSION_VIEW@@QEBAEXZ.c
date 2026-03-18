/*
 * XREFs of ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0355520
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01AB50C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C021D210 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0180FCC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01863CC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 */

unsigned __int8 __fastcall SESSION_VIEW::IsCrossAdapterView(SESSION_VIEW *this)
{
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v2; // r10
  struct DISPLAY_SOURCE *NextDisplaySource; // rdx
  __int64 v4; // r9
  SESSION_VIEW *v5; // r10
  __int64 v6; // r9

  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(this);
  if ( !PrimaryDisplaySource )
    return 0;
  NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v2, PrimaryDisplaySource);
  if ( !NextDisplaySource )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL);
  while ( *(_QWORD *)(*((_QWORD *)NextDisplaySource + 1) + 16LL) == v6 )
  {
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v5, NextDisplaySource);
    if ( !NextDisplaySource )
      return 0;
  }
  return 1;
}
