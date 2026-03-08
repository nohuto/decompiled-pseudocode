/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E7E28
 * Callers:
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x18009A2D0 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E7D34 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800E7EB8 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E8034 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     McTemplateU0pp_EventWriteTransfer @ 0x18019F3C8 (McTemplateU0pp_EventWriteTransfer.c)
 */

__int64 __fastcall CInteraction::SetVisual(CInteraction *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // rax
  unsigned int v7; // edi
  struct CVisual *v8; // rax
  int v9; // eax

  v2 = 0LL;
  v3 = (char *)this + 112;
  v4 = *((_QWORD *)this + 14);
  v7 = 0;
  if ( v4 )
    v8 = *(struct CVisual **)(v4 + 16);
  else
    v8 = 0LL;
  if ( a2 != v8
    && (ReleaseInterface<CWeakReference<CVisual>>((char *)this + 112), a2)
    && (v9 = CWeakReference<CVisual>::Create(a2, v3), v7 = v9, v9 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v9, 0xB1u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    if ( *(_QWORD *)v3 )
      v2 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
    McTemplateU0pp_EventWriteTransfer(this, &INTERACTION_VISUAL_UPDATE, this, v2);
  }
  return v7;
}
