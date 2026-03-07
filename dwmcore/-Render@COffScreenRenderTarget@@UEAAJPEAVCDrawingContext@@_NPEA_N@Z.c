__int64 __fastcall COffScreenRenderTarget::Render(
        LARGE_INTEGER *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  struct _D3DCOLORVALUE v4; // xmm0
  COffScreenRenderTarget *v5; // r15
  LARGE_INTEGER v7; // rax
  int v9; // ebx
  __int64 v10; // r13
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rcx
  CComposition **v14; // rdi
  LARGE_INTEGER v15; // rax
  char *v16; // rcx
  __int64 v17; // rax
  int ResampleMode; // eax
  __int64 v19; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v20; // r8
  __int64 *QuadPart; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rax
  struct IDeviceTarget *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct CColorTransformResource *v30; // r8
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  struct CVisualTree *v34; // rdx
  int v35; // eax
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rcx
  char *v40; // rdx
  char v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+44h] [rbp-BCh]
  char v44; // [rsp+48h] [rbp-B8h]
  int v45; // [rsp+4Ch] [rbp-B4h]
  _DWORD v46[2]; // [rsp+50h] [rbp-B0h] BYREF
  COcclusionContext *v47; // [rsp+58h] [rbp-A8h]
  struct _D3DCOLORVALUE v48; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v49[4]; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+C0h] [rbp-40h]
  _OWORD v51[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v52; // [rsp+110h] [rbp+10h]
  __int128 v53; // [rsp+120h] [rbp+20h] BYREF
  __int64 v54; // [rsp+130h] [rbp+30h] BYREF
  __int128 *v55; // [rsp+138h] [rbp+38h]
  __int128 v56; // [rsp+140h] [rbp+40h] BYREF
  int v57; // [rsp+150h] [rbp+50h]
  int v58; // [rsp+154h] [rbp+54h]

  *(struct _D3DCOLORVALUE *)&v4.r = *(struct _D3DCOLORVALUE *)((char *)&this[-224].QuadPart + 4);
  v5 = (COffScreenRenderTarget *)&this[-239];
  *a4 = 0;
  v7 = this[-239];
  *(struct _D3DCOLORVALUE *)&v48.r = *(struct _D3DCOLORVALUE *)&v4.r;
  v9 = 0;
  v42 = 0;
  v10 = 0LL;
  v44 = 0;
  LOBYTE(v11) = 0;
  v45 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(LARGE_INTEGER *))(v7.QuadPart + 264))(this - 239) )
  {
    v12 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v5 + 280LL))(v5);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xFCu, 0LL);
      v14 = (CComposition **)&this[-237];
LABEL_37:
      CComposition::RestoreCursors(*v14);
      return (unsigned int)v9;
    }
    if ( this[-16].LowPart )
    {
      QueryPerformanceCounter(this - 218);
      (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v5 + 296LL))(v5);
      v14 = (CComposition **)&this[-237];
      *(_BYTE *)(this[-237].QuadPart + 1274) = 1;
      if ( this[-227].QuadPart )
      {
        v15 = this[-229];
        v52 = 0;
        v47 = 0LL;
        v53 = 0LL;
        v16 = (char *)&this[-229] + *(int *)(v15.QuadPart + 12);
        (*(void (__fastcall **)(char *, _DWORD *))(*(_QWORD *)v16 + 16LL))(v16, v46);
        v54 = 0LL;
        v10 = *(_QWORD *)(this[-227].QuadPart + 64);
        v17 = *(_QWORD *)v5;
        *((float *)&v55 + 1) = (float)v46[1];
        *(float *)&v55 = (float)v46[0];
        (*(void (__fastcall **)(COffScreenRenderTarget *, _OWORD *))(v17 + 248))(v5, v51);
        v11 = (int)(*(_DWORD *)(v10 + 104) << 18) >> 28;
        v44 = *(_DWORD *)(v10 + 104);
        ResampleMode = CVisual::GetResampleMode(v10);
        *(_BYTE *)(v10 + 104) |= 2u;
        *(_DWORD *)(v10 + 104) &= 0xFFFFC7FF;
        *(_DWORD *)(v10 + 104) |= 0x400u;
        v45 = ResampleMode;
        CVisual::SetResampleMode(v10, this[-219].LowPart);
        v49[0] = v51[0];
        v49[1] = v51[1];
        v49[2] = v51[2];
        v49[3] = v51[3];
        v50 = v52;
        if ( CMILMatrix::Invert((CMILMatrix *)v49, v19, v20) )
        {
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v49, (struct MilRectF *)&v54, (float *)&v53);
          if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v49) )
          {
            QuadPart = (__int64 *)this[-227].QuadPart;
            v22 = *QuadPart;
            v54 = 1LL;
            v55 = &v53;
            if ( (*(int (__fastcall **)(__int64 *, __int64 *, LARGE_INTEGER *))(v22 + 200))(QuadPart, &v54, this - 214) >= 0 )
              v47 = (COcclusionContext *)&this[-214];
          }
        }
        else
        {
          v53 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        v23 = 0LL;
        v43 = 0;
        if ( this[-16].LowPart )
        {
          while ( 1 )
          {
            v25 = *(_QWORD *)v5;
            v54 = *(_QWORD *)(this[-19].QuadPart + 8 * v23);
            v24 = v54;
            (*(void (__fastcall **)(COffScreenRenderTarget *))(v25 + 288))(v5);
            v26 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24);
            v27 = CDrawingContext::BeginFrame(a2, v26, (const struct CMILMatrix *)v51, &v48, 0LL);
            v9 = v27;
            if ( v27 < 0 )
              break;
            v30 = (struct CColorTransformResource *)this[-221].QuadPart;
            if ( v30 )
            {
              v31 = CDrawingContext::PushColorTransformLayer((struct IDeviceTarget **)a2, v28, v30);
              v9 = v31;
              if ( v31 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x159u, 0LL);
LABEL_26:
                CDrawingContext::EndFrame(a2);
                goto LABEL_30;
              }
              v42 = 1;
            }
            ++dword_1803E29F8;
            v33 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v5 + 232LL))(v5);
            v34 = (struct CVisualTree *)this[-227].QuadPart;
            v57 = 0;
            v58 = 0;
            v56 = v53;
            v35 = CDrawingContext::DrawVisualTree(a2, v34, (float *)&v56, v47, v33, 0, 0LL);
            v9 = v35;
            if ( v35 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v35, 0x163u, 0LL);
              goto LABEL_26;
            }
            if ( v42 )
            {
              v42 = 0;
              v36 = CDrawingContext::PopLayerInternal((__int64)a2);
              v9 = v36;
              if ( v36 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v36, 0x168u, 0LL);
                CDrawingContext::EndFrame(a2);
                goto LABEL_32;
              }
            }
            v37 = !g_LockAndReadOffscreenTarget;
            BYTE5(this[-20].QuadPart) = *((_BYTE *)a2 + 8094);
            if ( !v37 )
            {
              v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 64LL))(v54);
              if ( a2 )
                v40 = (char *)a2 + 24;
              else
                v40 = 0LL;
              v39 = *(int *)(*(_QWORD *)(v38 + 8) + 16LL) + v38 + 8;
              (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v39 + 24LL))(v39, v40);
            }
            CDrawingContext::EndFrame(a2);
            v23 = (unsigned int)(v43 + 1);
            v43 = v23;
            if ( (unsigned int)v23 >= this[-16].LowPart )
              goto LABEL_30;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v27, 0x150u, 0LL);
        }
      }
LABEL_30:
      if ( v42 )
        CDrawingContext::PopLayerInternal((__int64)a2);
LABEL_32:
      if ( v10 )
      {
        *(_BYTE *)(v10 + 104) = v44;
        *(_DWORD *)(v10 + 104) &= 0xFFFFC3FF;
        *(_DWORD *)(v10 + 104) |= (v11 & 0xF) << 10;
        CVisual::SetResampleMode(v10, v45);
      }
      *((_BYTE *)*v14 + 1274) = 0;
      (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v5 + 304LL))(v5);
      if ( v9 >= 0 )
        COffScreenRenderTarget::SetNeedsFlush(v5);
      goto LABEL_37;
    }
  }
  return (unsigned int)v9;
}
