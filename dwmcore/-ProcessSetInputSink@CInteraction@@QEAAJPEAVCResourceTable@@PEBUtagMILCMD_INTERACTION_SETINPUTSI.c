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
