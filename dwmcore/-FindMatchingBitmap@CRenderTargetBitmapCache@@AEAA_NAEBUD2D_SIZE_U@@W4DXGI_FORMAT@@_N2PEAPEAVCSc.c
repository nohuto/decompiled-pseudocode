char __fastcall CRenderTargetBitmapCache::FindMatchingBitmap(
        CRenderTargetBitmapCache *this,
        const struct D2D_SIZE_U *a2,
        enum DXGI_FORMAT a3,
        char a4,
        bool a5,
        struct CScratchRenderTargetBitmap **a6)
{
  UINT32 v8; // ecx
  float v9; // xmm6_4
  unsigned int v10; // r13d
  char v11; // si
  UINT32 v12; // eax
  struct CScratchRenderTargetBitmap *v13; // rbx
  float v14; // xmm8_4
  _BYTE *v15; // rdi
  UINT32 width; // eax
  float v17; // xmm1_4
  UINT32 v20; // [rsp+28h] [rbp-90h]
  UINT32 v21; // [rsp+2Ch] [rbp-8Ch]
  _BYTE *v23; // [rsp+38h] [rbp-80h] BYREF
  struct CScratchRenderTargetBitmap **v24; // [rsp+40h] [rbp-78h]
  _BYTE v25[16]; // [rsp+48h] [rbp-70h] BYREF

  v8 = a2->width + 63;
  v9 = FLOAT_3_4028235e38;
  v10 = *((_DWORD *)this + 6);
  v24 = a6;
  v11 = 0;
  v12 = a2->height + 63;
  v13 = 0LL;
  v23 = 0LL;
  v14 = 1.0 / (float)(int)((v8 & 0xFFFFFFC0) * (v12 & 0xFFFFFFC0));
  if ( !v10 )
    goto LABEL_14;
  while ( 1 )
  {
    v15 = *(_BYTE **)(*(_QWORD *)this + 8LL * --v10);
    if ( (int)CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(v15 + 192)) < 0 )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, v10);
      v15[176] = 0;
      CMILRefCountBaseT<IUnknown>::InternalRelease(v15);
      goto LABEL_11;
    }
    if ( a3 == *(_DWORD *)CRenderTargetBitmap::GetPixelFormatInfo(v15 + 216, v25)
      && a4 == CRenderTargetBitmap::IsHardwareProtected((CRenderTargetBitmap *)(v15 + 192)) )
    {
      CRenderTargetBitmap::GetSize((CRenderTargetBitmap *)(v15 + 240));
      width = a2->width;
      if ( !a5 )
      {
        if ( v20 >= width && v21 >= a2->height )
        {
          v17 = (float)(int)(v20 * v21);
          if ( (float)(v17 * v14) < 4.0 && v9 > v17 )
          {
            v13 = (struct CScratchRenderTargetBitmap *)v15;
            v9 = (float)(int)(v20 * v21);
            v23 = v15;
          }
        }
        goto LABEL_11;
      }
      if ( v20 == width && v21 == a2->height )
        break;
    }
LABEL_11:
    if ( !v10 )
      goto LABEL_12;
  }
  v13 = (struct CScratchRenderTargetBitmap *)v15;
  v23 = v15;
LABEL_12:
  if ( v13 )
  {
    DynArray<CScratchRenderTargetBitmap *,0>::Remove(this, &v23);
    v11 = 1;
  }
LABEL_14:
  *v24 = v13;
  return v11;
}
