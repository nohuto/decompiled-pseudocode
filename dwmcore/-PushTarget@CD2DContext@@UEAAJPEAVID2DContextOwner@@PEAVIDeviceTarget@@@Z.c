__int64 __fastcall CD2DContext::PushTarget(
        unsigned __int64 this,
        struct ID2DContextOwner *a2,
        struct IDeviceTarget *a3)
{
  char *v3; // rsi
  int v4; // eax
  struct ID2D1PrivateDepthBuffer *v5; // r15
  __int64 v6; // r13
  unsigned __int64 v9; // rdi
  struct ID2D1PrivateCompositorRenderer *v10; // rbx
  __int64 v11; // rax
  int v12; // ebx
  char *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  struct ID2D1PrivateCompositorRenderer **v16; // r14
  _QWORD *v17; // rax
  struct ID2D1Bitmap1 *v18; // rcx
  unsigned int v19; // eax
  struct ID2D1PrivateCompositorRenderer *v20; // r8
  unsigned int v21; // edx
  int v22; // ebp
  CD2DTarget *v24; // rax
  struct ID2D1PrivateCompositorRenderer *v25; // rax
  CD2DTarget *v26; // r14
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // ebp
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // [rsp+20h] [rbp-48h]
  struct ID2D1Bitmap1 *v40; // [rsp+70h] [rbp+8h] BYREF
  struct ID2D1PrivateCompositorRenderer *v41; // [rsp+88h] [rbp+20h] BYREF

  v40 = 0LL;
  v3 = (char *)(this + 328);
  v4 = *(_DWORD *)(this + 352);
  v5 = 0LL;
  v6 = 0LL;
  v9 = this;
  if ( v4 )
  {
    this = (unsigned int)(v4 - 1);
    v6 = *(_QWORD *)(*(_QWORD *)v3 + 8 * this);
  }
  if ( *(_QWORD *)(v9 + 152) )
  {
    v12 = -2003292412;
    v39 = 610;
    goto LABEL_47;
  }
  CDrawListBatchManager::CloseCurrentDrawListEntryBatch(v9 + 8, &v41);
  v10 = v41;
  if ( v41 )
  {
    v30 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)v9, v41);
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x21Eu, 0LL);
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v10 + 8);
  }
  v11 = v9 + 1072;
  LODWORD(this) = 1088;
  if ( !v9 )
    v11 = 1088LL;
  v12 = *(_DWORD *)v11;
  if ( *(int *)v11 < 0 )
  {
    v39 = 615;
    goto LABEL_47;
  }
  v13 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 16LL) + 8;
  v14 = (*(__int64 (__fastcall **)(char *, struct ID2D1Bitmap1 **, _QWORD))(*(_QWORD *)v13 + 16LL))(v13, &v40, 0LL);
  v12 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x269u, 0LL);
    goto LABEL_17;
  }
  v5 = (struct ID2D1PrivateDepthBuffer *)(*(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a3 + 48LL))(a3);
  if ( v6 )
  {
LABEL_23:
    v24 = (CD2DTarget *)operator new(0x50uLL);
    if ( v24 )
    {
      v25 = CD2DTarget::CD2DTarget(v24, a2, *(struct CD2DFactory **)(v9 + 176), a3, v40, v5);
      v26 = v25;
      if ( v25 )
      {
        v41 = v25;
        v27 = *((_DWORD *)v3 + 6);
        v28 = v27 + 1;
        if ( v27 + 1 < v27 )
        {
          v12 = -2147024362;
          v29 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else
        {
          v29 = 0;
          if ( v28 <= *((_DWORD *)v3 + 5) )
          {
            *(_QWORD *)(*(_QWORD *)v3 + 8LL * v27) = v26;
            *((_DWORD *)v3 + 6) = v28;
            goto LABEL_28;
          }
          v34 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v41);
          v29 = v34;
          v12 = v34;
          if ( v34 >= 0 )
          {
LABEL_28:
            v12 = v29;
            if ( *(_BYTE *)(v9 + 437) )
            {
              if ( v6 )
                *(_BYTE *)(v6 + 73) = 0;
              CD2DTarget::ApplyState(v26, (struct CD2DContext *)v9);
            }
            goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xC0u, 0LL);
        }
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v29, 0x294u, 0LL);
        CD2DTarget::`scalar deleting destructor'(v26, v38);
        goto LABEL_17;
      }
    }
    v12 = -2147024882;
    v39 = 655;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v12, v39, 0LL);
    goto LABEL_17;
  }
  v16 = (struct ID2D1PrivateCompositorRenderer **)(v9 + 424);
  v17 = *(_QWORD **)(v9 + 424);
  if ( !v17 || (v18 = (struct ID2D1Bitmap1 *)v17[4], v40 != v18) || v5 != (struct ID2D1PrivateDepthBuffer *)v17[5] )
  {
    SAFE_DELETE<CD2DTarget>(v9 + 424);
    goto LABEL_23;
  }
  *v17 = a2;
  v19 = *((_DWORD *)v3 + 6);
  v20 = *v16;
  v41 = *v16;
  v21 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v12 = -2147024362;
    v22 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v18, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v22 = 0;
    if ( v21 <= *((_DWORD *)v3 + 5) )
    {
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v19) = v20;
      *((_DWORD *)v3 + 6) = v21;
LABEL_16:
      v12 = v22;
      *v16 = 0LL;
      goto LABEL_17;
    }
    v32 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v41);
    v22 = v32;
    v12 = v32;
    if ( v32 >= 0 )
      goto LABEL_16;
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xC0u, 0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v22, 0x27Bu, 0LL);
LABEL_17:
  if ( v40 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v40 + 16LL))(v40);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v5 + 16LL))(v5);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((v9 - 16) & -(__int64)(v9 != 0), v12, 0);
}
