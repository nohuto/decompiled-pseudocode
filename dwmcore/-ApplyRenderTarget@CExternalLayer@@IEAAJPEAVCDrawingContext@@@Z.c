__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  struct IDeviceTarget *v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  void (__fastcall ***v9)(_QWORD, _DWORD *); // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  float v16; // xmm1_4
  int v17; // eax
  __int64 v18; // rcx
  _DWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  int v21; // [rsp+38h] [rbp-18h] BYREF
  int v22; // [rsp+3Ch] [rbp-14h]
  float v23; // [rsp+40h] [rbp-10h]
  float v24; // [rsp+44h] [rbp-Ch]

  v4 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
  v5 = CDrawingContext::PushRenderTarget(a2, v4);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x64u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 33) = 1;
    v9 = (void (__fastcall ***)(_QWORD, _DWORD *))(v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 16LL));
    (**v9)(v9, v20);
    v21 = 0;
    v22 = 0;
    v23 = (float)v20[0];
    v24 = (float)v20[1];
    v10 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v21, D2D1_ANTIALIAS_MODE_ALIASED, 1);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x77u, 0LL);
    }
    else
    {
      v12 = (**((__int64 (__fastcall ***)(char *, __int64 *))a2 + 2))(
              (char *)a2 + 16,
              &`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x7Au, 0LL);
        CDrawingContext::PopGpuClipRectInternal(a2, 0);
      }
      else
      {
        v14 = *((_DWORD *)a2 + 796);
        if ( v14 )
          *((_DWORD *)a2 + 796) = v14 - 1;
        v15 = *((_QWORD *)a2 + 113);
        v21 = 0;
        v22 = 0;
        --*(_QWORD *)(v15 - 184);
        *((_BYTE *)a2 + 8169) = 1;
        v16 = (float)*((int *)this + 7);
        v23 = (float)*((int *)this + 6);
        v24 = v16;
        v17 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v21, D2D1_ANTIALIAS_MODE_ALIASED, 1);
        v7 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x87u, 0LL);
        else
          *((_BYTE *)this + 34) = 1;
      }
    }
  }
  return v7;
}
