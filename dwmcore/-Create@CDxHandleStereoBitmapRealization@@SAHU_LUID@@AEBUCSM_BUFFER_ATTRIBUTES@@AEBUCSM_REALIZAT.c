__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        struct _LUID a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct ISwapChainRealization **a4)
{
  CDxHandleStereoBitmapRealization *v8; // rax
  __int64 v9; // rcx
  CDxHandleStereoBitmapRealization *v10; // rax
  CDxHandleStereoBitmapRealization *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi

  v8 = (CDxHandleStereoBitmapRealization *)operator new(0x260uLL);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_7;
  }
  v10 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v8, a1, a2, a3);
  v11 = v10;
  if ( !v10 )
  {
LABEL_7:
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x18u, 0LL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CDxHandleStereoBitmapRealization *)((char *)v10 + 8));
  v12 = CDxHandleBitmapRealization::Initialize(v11);
  v14 = v12;
  if ( v12 >= 0 )
  {
    *a4 = (CDxHandleStereoBitmapRealization *)((char *)v11 + 360);
    return v14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Au, 0LL);
  *((_QWORD *)v11 + 31) = 0LL;
LABEL_8:
  *a4 = 0LL;
  if ( v11 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v11);
  return v14;
}
