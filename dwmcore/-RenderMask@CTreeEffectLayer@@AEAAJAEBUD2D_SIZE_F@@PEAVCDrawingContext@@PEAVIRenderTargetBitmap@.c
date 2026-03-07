__int64 __fastcall CTreeEffectLayer::RenderMask(
        CTreeEffectLayer *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawingContext *a3,
        struct IRenderTargetBitmap *a4)
{
  float v8; // xmm0_4
  float width; // xmm1_4
  float height; // xmm2_4
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD v18[4]; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v19[4]; // [rsp+50h] [rbp-38h] BYREF

  if ( !a4 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v16 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a4 + 64LL))(a4);
    v17 = *(int *)(*(_QWORD *)(v16 + 8) + 16LL) + v16 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 24LL))(
      v17,
      ((unsigned __int64)a3 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a3 >> 64));
  }
  v8 = *((float *)this + 70);
  width = a2->width;
  height = a2->height;
  v11 = *((_QWORD *)a4 + 1);
  v18[0] = 0;
  v18[1] = 0;
  v19[0] = 0;
  v19[1] = 0;
  *(float *)&v19[2] = width;
  *(float *)&v19[3] = height;
  *(float *)&v18[2] = width / v8;
  *(float *)&v18[3] = height / v8;
  v12 = CDrawingContext::DrawBitmapRealization(
          (_DWORD)a3,
          (int)a4 + *(_DWORD *)(v11 + 16) + 8,
          (unsigned int)v19,
          (unsigned int)v18,
          0,
          0,
          (_DWORD)FLOAT_1_0);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x34Au, 0LL);
  return v14;
}
