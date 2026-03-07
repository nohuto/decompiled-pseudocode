__int64 __fastcall ADAPTER_DISPLAY::GetPostCompositionCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        float *a3,
        float *a4)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  ADAPTER_RENDER *v9; // rcx
  int PostCompositionCaps; // eax
  float MaxShrinkFactor; // xmm1_4
  _DXGKARG_GETPOSTCOMPOSITIONCAPS v13; // [rsp+50h] [rbp-48h] BYREF

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    LODWORD(v8) = 0;
    *a3 = 1.0;
    *a4 = 1.0;
    v9 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2928LL);
    if ( v9
      && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v9)
      && DXGADAPTER::SupportGetPostCompositionCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 2928LL) + 16LL))
      && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v7) )
    {
      *(_QWORD *)&v13.MaxStretchFactor = 0LL;
      v13.VidPnSourceId = v7;
      PostCompositionCaps = ADAPTER_DISPLAY::DdiGetPostCompositionCaps(this, &v13);
      v8 = PostCompositionCaps;
      if ( PostCompositionCaps < 0 )
      {
        WdLogSingleEntry3(2LL, PostCompositionCaps, *(_QWORD *)(*((_QWORD *)this + 2) + 280LL), v7);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned error (0x%I64x) from GetPostCompositionCaps: Adapter (0x%I64x), VidPnSourceId (0x%I64x)",
          v8,
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          v7,
          0LL,
          0LL);
      }
      else
      {
        MaxShrinkFactor = v13.MaxShrinkFactor;
        *a3 = v13.MaxStretchFactor;
        *a4 = MaxShrinkFactor;
      }
    }
    return (unsigned int)v8;
  }
}
