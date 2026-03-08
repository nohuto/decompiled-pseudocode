/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800E5348
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800E53C4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     McTemplateU0pp_EventWriteTransfer @ 0x18019F3C8 (McTemplateU0pp_EventWriteTransfer.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  int updated; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rbx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x187u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 14);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 )
      {
        CVisual::PropagateFlags(v9, 0x10u);
        *(_BYTE *)(v9 + 100) |= 0x20u;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0pp_EventWriteTransfer(v6, &EVTDESC_INTERACTION_SET_INPUT_SINK, this, a3[1]);
  }
  return v7;
}
