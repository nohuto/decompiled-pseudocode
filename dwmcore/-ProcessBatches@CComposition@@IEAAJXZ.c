/*
 * XREFs of ?ProcessBatches@CComposition@@IEAAJXZ @ 0x18004FB10
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180129D70 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180129DEE (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::ProcessBatches(CComposition *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebp
  __int64 i; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Start, this);
  v2 = (*(__int64 (__fastcall **)(_QWORD, CComposition *, _QWORD))(**((_QWORD **)this + 81) + 32LL))(
         *((_QWORD *)this + 81),
         this,
         *((_QWORD *)this + 62));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xD2Eu, 0LL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 116); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 55) + 8 * i);
    if ( v6 && *(_DWORD *)(v6 + 88) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
        McTemplateU0qqq_EventWriteTransfer(
          v3,
          (unsigned int)&CHANNELBATCHES_PROCESSED,
          *(_DWORD *)(v6 + 16),
          *(_DWORD *)(v6 + 20),
          *(_DWORD *)(v6 + 88));
      dword_1803E2A98 += *(_DWORD *)(v6 + 88);
      ++*(_DWORD *)(*(_QWORD *)(v6 + 48) + 36LL);
      *(_DWORD *)(v6 + 88) = 0;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(v3, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop, this);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 162) + 24LL))(*((_QWORD *)this + 162), 3LL);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xD3Bu, 0LL);
  if ( v4 && (v4 < 0 || v9 >= 0) )
    return (unsigned int)v4;
  else
    return (unsigned int)v9;
}
