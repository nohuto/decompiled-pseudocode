__int64 __fastcall CDrawingContext::Clear(CDrawingContext *this, const struct _D3DCOLORVALUE *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rdi
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r8
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)this + 112LL))(this);
  v6 = 0LL;
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x27Fu, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 3);
    CD2DContext::FlushDrawList((CD2DContext *)(v8 + 16));
    v9 = *(_DWORD *)(v8 + 368);
    if ( v9 )
      v6 = *(_QWORD *)(*(_QWORD *)(v8 + 344) + 8LL * (unsigned int)(v9 - 1));
    CD2DContext::EnsureBeginDraw((CD2DContext *)(v8 + 16));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_CLEAREVENT_Start,
        v10,
        v11,
        *(_DWORD *)(v6 + 60),
        *(_DWORD *)(v6 + 64));
    (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 200LL) + 376LL))(
      *(_QWORD *)(*(_QWORD *)(v6 + 16) + 200LL),
      a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_CLEAREVENT_Stop,
        v12,
        1LL,
        v14);
  }
  return v7;
}
