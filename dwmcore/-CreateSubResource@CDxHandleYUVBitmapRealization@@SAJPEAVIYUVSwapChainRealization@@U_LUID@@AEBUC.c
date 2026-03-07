__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResource(
        struct IYUVSwapChainRealization *a1,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5,
        struct ISwapChainRealization **a6)
{
  CDxHandleYUVBitmapRealization *v6; // rbx
  volatile signed __int32 *v11; // rax
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  CDxHandleYUVBitmapRealization *v15; // rdx
  struct ISwapChainRealization *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  CDxHandleYUVBitmapRealization *v19; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v19 = 0LL;
  if ( !a1 || (**(unsigned int (__fastcall ***)(struct IYUVSwapChainRealization *))a1)(a1) || !*((_DWORD *)a4 + 8) )
  {
    v12 = -2147024809;
    v18 = 85;
    goto LABEL_13;
  }
  v11 = (volatile signed __int32 *)operator new(0x208uLL);
  if ( v11 )
    v11 = (volatile signed __int32 *)CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
                                       (__int64)v11,
                                       *((_DWORD *)a1 - 70),
                                       *(_QWORD *)&a2,
                                       (__int64)a3,
                                       (__int64)a4,
                                       (__int64)a5);
  wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(
    (volatile signed __int32 **)&v19,
    v11);
  v6 = v19;
  if ( !v19 )
  {
    v12 = -2147024882;
    v18 = 79;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, v12, v18, 0LL);
LABEL_14:
    if ( v6 )
      *((_QWORD *)v6 + 31) = 0LL;
    goto LABEL_16;
  }
  v13 = CDxHandleYUVBitmapRealization::Initialize(v19, a1);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x51u, 0LL);
    goto LABEL_14;
  }
  v15 = v6;
  v6 = 0LL;
  if ( v15 )
  {
    v16 = (CDxHandleYUVBitmapRealization *)((char *)v15 + *(int *)(*((_QWORD *)v15 + 2) + 24LL) + 16);
    goto LABEL_17;
  }
LABEL_16:
  v16 = 0LL;
LABEL_17:
  *a6 = v16;
  if ( v6 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v6);
  return v12;
}
