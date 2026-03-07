__int64 __fastcall CDxHandleYUVBitmapRealization::Create(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        _QWORD *a6)
{
  volatile signed __int32 *v10; // rax
  __int64 v11; // rcx
  CDxHandleYUVBitmapRealization *v12; // rbx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  char *v16; // rcx
  CDxHandleYUVBitmapRealization *v17; // rdx
  CDxHandleYUVBitmapRealization *v19; // [rsp+40h] [rbp-18h] BYREF

  v19 = 0LL;
  v10 = (volatile signed __int32 *)operator new(0x208uLL);
  if ( v10 )
    v10 = (volatile signed __int32 *)CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
                                       (__int64)v10,
                                       a1,
                                       a2,
                                       a3,
                                       a4,
                                       (__int64)a5);
  wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(
    (volatile signed __int32 **)&v19,
    v10);
  v12 = v19;
  if ( !v19 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x1Eu, 0LL);
    goto LABEL_7;
  }
  v14 = CDxHandleYUVBitmapRealization::Initialize(v19, 0LL);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1Fu, 0LL);
LABEL_7:
    if ( v12 )
      *((_QWORD *)v12 + 31) = 0LL;
    goto LABEL_9;
  }
  v17 = v12;
  v12 = 0LL;
  if ( !v17 )
  {
LABEL_9:
    v16 = 0LL;
    goto LABEL_12;
  }
  v16 = (char *)v17 + *(int *)(*((_QWORD *)v17 + 2) + 24LL) + 16;
LABEL_12:
  *a6 = v16;
  if ( v12 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v12);
  return v13;
}
