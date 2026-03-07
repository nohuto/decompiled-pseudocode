__int64 __fastcall CLegacyVisualCaptureRenderTarget::ProcessCaptureBits(
        CLegacyVisualCaptureRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS *a3)
{
  struct CVisualTree *v3; // rdi
  unsigned int v5; // edx
  CVisual *Resource; // rax
  int VisualTree; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  CaptureBitsResponse *v11; // rax
  __int64 v12; // rcx
  struct CaptureBitsResponse *v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-38h]
  struct WICRect v18; // [rsp+40h] [rbp-18h] BYREF
  struct CVisualTree *v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = this;
  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v19 = 0LL;
  if ( !v5 || COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) < 0.0000011920929 )
  {
    v17 = 28;
    goto LABEL_14;
  }
  Resource = (CVisual *)CResourceTable::GetResource(*((_QWORD *)a2 + 4), v5, 0xC4u);
  if ( !Resource )
  {
    v17 = 34;
LABEL_14:
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, v17, 0LL);
    goto LABEL_15;
  }
  VisualTree = CVisual::GetVisualTree(Resource, &v19);
  v10 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, VisualTree, 0x25u, 0LL);
    v3 = v19;
  }
  else
  {
    v18 = (struct WICRect)*((_OWORD *)a3 + 1);
    v11 = (CaptureBitsResponse *)CaptureBitsResponse::operator new();
    v3 = v19;
    if ( v11
      && (v13 = CaptureBitsResponse::CaptureBitsResponse(
                  v11,
                  *((struct CGlobalSurfaceManager **)g_pComposition + 28),
                  a2,
                  v19,
                  1.0 / *((float *)a3 + 3),
                  &v18,
                  (enum DXGI_FORMAT)*((_DWORD *)a3 + 10),
                  *((_QWORD *)a3 + 4))) != 0LL )
    {
      v14 = CLegacySurfaceManager::AddCaptureBitsResponse(
              (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 28) + 152LL),
              v13);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x38u, 0LL);
      (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v13 + 40LL))(v13);
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x32u, 0LL);
    }
  }
LABEL_15:
  if ( v3 )
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v3 + 16LL))(v3);
  return v10;
}
