__int64 __fastcall CLegacyRenderTarget::RenderDebugFrameCounter(CLegacyRenderTarget *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  CDebugFrameCounter *v4; // rdi
  int v5; // eax
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  unsigned int FrameRate; // r14d
  unsigned int CPUTimePerFrame; // eax
  __int64 v11; // rcx
  CDisplayDebugFrameCounter *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  __int128 v20; // [rsp+48h] [rbp-29h] BYREF
  float v21; // [rsp+58h] [rbp-19h] BYREF
  float v22; // [rsp+5Ch] [rbp-15h]
  float v23; // [rsp+60h] [rbp-11h]
  float v24; // [rsp+64h] [rbp-Dh]

  v2 = 0;
  v4 = (CDebugFrameCounter *)*((_QWORD *)g_pComposition + 78);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 26);
    v21 = 0.0;
    v6 = 0.0;
    v22 = 0.0;
    v7 = (float)v5;
    v8 = (float)*((int *)this + 27);
    v23 = (float)v5;
    v20 = 0LL;
    v24 = v8;
    FrameRate = CDebugFrameCounter::GetFrameRate(v4);
    CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame(v4);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qx_EventWriteTransfer(v11, &EVTDESC_DEBUG_FRAME_COUNTER_EVENT, FrameRate, CPUTimePerFrame);
    v12 = (CDebugFrameCounter *)((char *)v4 + 4640);
    if ( v12 )
    {
      v13 = CDisplayDebugFrameCounter::Display(
              v12,
              FrameRate,
              (__int64)this + 18216,
              (__int64)&v21,
              (void *)(CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0),
              (__int64)&v20);
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x5B6u, 0LL);
        return v2;
      }
      v15 = *(float *)&v20;
      v8 = v24;
      v7 = v23;
      v6 = v22;
      if ( v21 > *(float *)&v20 )
      {
        *(float *)&v20 = v21;
        v15 = v21;
      }
    }
    else
    {
      v15 = *(float *)&v20;
    }
    v16 = *((float *)&v20 + 1);
    if ( v6 > *((float *)&v20 + 1) )
    {
      *((float *)&v20 + 1) = v6;
      v16 = v6;
    }
    v17 = *((float *)&v20 + 2);
    if ( *((float *)&v20 + 2) > v7 )
    {
      *((float *)&v20 + 2) = v7;
      v17 = v7;
    }
    v18 = *((float *)&v20 + 3);
    if ( *((float *)&v20 + 3) > v8 )
    {
      *((float *)&v20 + 3) = v8;
      v18 = v8;
    }
    if ( v17 <= v15 || v18 <= v16 )
      v20 = 0uLL;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v20) )
      CLegacyRenderTarget::NotifyRenderedRect((__int64)this, (struct MilRectF *)&v20, 1);
  }
  return v2;
}
