/*
 * XREFs of ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18008C1CC
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     PubSebRegisterRpc @ 0x1800FCF58 (PubSebRegisterRpc.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18012B918 (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_NI@Z @ 0x1801E4340 (-SignalSEB@CFSVPProvider@@AEAAX_NI@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x1801E43FC (McTemplateU0zqq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180279114 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CLegacyRenderTarget::CheckForMajorityScreenVideoNotifications(
        CLegacyRenderTarget *this,
        int a2,
        int a3)
{
  char v4; // bp
  __int64 v5; // rcx
  const struct COverlayContext::OverlayPlaneInfo *v6; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v7; // r14
  unsigned __int64 v8; // rbx
  char *v9; // rsi
  struct _SEB_RPC_PUBLISH_DATA **v10; // r15
  __int64 v11; // r14
  struct _SEB_RPC_PUBLISH_DATA **v12; // rbx
  char updated; // bp
  struct _SEB_RPC_PUBLISH_DATA *v14; // rcx
  _BYTE *v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  char v21; // al
  unsigned int v22; // ebx
  char v23[16]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-48h]

  if ( *((float *)this + 4543) == 0.0
    && *((float *)this + 4544) == 0.0
    && *((_BYTE *)this + 18697)
    && *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v8 = 0LL;
    if ( !*((_BYTE *)this + 18696) )
      goto LABEL_11;
  }
  v5 = *((_QWORD *)this + 1421);
  if ( v5
    && (v20 = *(_QWORD *)(v5 + 16)) != 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 88LL))(v20) == 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 1421) + 16LL);
  }
  else
  {
    v6 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 938);
    v7 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 939);
    while ( 1 )
    {
      if ( v6 == v7 )
      {
        v8 = 0LL;
        goto LABEL_10;
      }
      if ( COverlayContext::IsFullscreen((CLegacyRenderTarget *)((char *)this + 200), v6)
        && (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v6 + 2) + 88LL))(*((_QWORD **)v6 + 2)) == 1 )
      {
        break;
      }
      v6 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v6 + 224);
    }
    v8 = *((_QWORD *)v6 + 2);
  }
LABEL_10:
  if ( *((_BYTE *)this + 18696) )
  {
    v21 = *((_BYTE *)this + 18699);
    if ( v8 )
    {
      if ( !v21 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 272LL))(*((_QWORD *)this + 23), 1LL);
        *((_BYTE *)this + 18699) = 1;
      }
    }
    else if ( v21 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 23) + 272LL))(*((_QWORD *)this + 23), 0LL);
      *((_BYTE *)this + 18699) = 0;
    }
  }
LABEL_11:
  v9 = (char *)this + 18664;
  v10 = (struct _SEB_RPC_PUBLISH_DATA **)((char *)this + 18680);
  v11 = v8 & -(__int64)(v4 != 0);
  if ( !*((_QWORD *)this + 2335) )
  {
    v16 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (char *)this + 18680);
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180353AB0, 2u, v16, 0x6Fu, 0LL);
      return;
    }
  }
  v12 = (struct _SEB_RPC_PUBLISH_DATA **)((char *)this + 18688);
  if ( !*((_QWORD *)this + 2336) )
  {
    v18 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, (char *)this + 18688);
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180353AB0, 2u, v18, 0x75u, 0LL);
      return;
    }
  }
  if ( !v11 )
  {
    updated = 0;
    if ( *v12 && *((_BYTE *)this + 18673) )
      PubSebiUpdateLevelEventRpc(*v12, 0);
    v14 = *v10;
    if ( *v10 )
    {
      if ( !*((_BYTE *)this + 18672) )
        goto LABEL_19;
      updated = PubSebiUpdateLevelEventRpc(v14, 0);
    }
    if ( *((_BYTE *)this + 18672) )
    {
      v15 = (char *)this + 18673;
LABEL_45:
      v9[8] = 0;
      *v15 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0zqq_EventWriteTransfer((_DWORD)v14, a2, a3, 0, updated);
      return;
    }
LABEL_19:
    v15 = (char *)this + 18673;
    if ( !v9[9] )
      return;
    goto LABEL_45;
  }
  v22 = 100;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 392LL))(v11, v23) )
    v22 = v24;
  CFSVPProvider::SignalSEB((CLegacyRenderTarget *)((char *)this + 18664), 1, v22);
}
