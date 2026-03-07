__int64 __fastcall CDrawingContext::EndFrame(CDrawingContext *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdi
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  CDrawingContext::PopAllStacks(this);
  if ( *((_QWORD *)this + 4) )
  {
    v4 = CDrawingContext::PopRenderTargetInternal(this, 1);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x143u, 0LL);
  }
  v6 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) == 2 )
    {
      *(_QWORD *)(v6 + 1496) = GetCurrentFrameId() + 5;
      ScheduleCompositionPass(1000LL, 0x20000LL);
    }
    CMILRefCountBaseT<IUnknown>::InternalRelease(v6);
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 428) = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
      v3,
      1LL,
      v8);
  return v2;
}
