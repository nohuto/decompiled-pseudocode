__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  __int64 v5; // rcx
  CCachedVisualImage *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CCachedVisualImage *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = (CCachedVisualImage *)CCachedVisualImage::operator new();
  if ( v4 )
    v4 = CCachedVisualImage::CCachedVisualImage(v4, *((struct CComposition **)this + 2), 0, 1);
  wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::operator=((__int64 *)&v13, (__int64)v4);
  v6 = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x17u, 0LL);
    goto LABEL_16;
  }
  v8 = (*(__int64 (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v13 + 48LL))(v13);
  v7 = v8;
  if ( v8 < 0 )
  {
    v12 = 25;
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 20) )
  {
    if ( *((_DWORD *)this + 21) )
    {
      v8 = CCachedVisualImage::SetForDCompSnapshot(v6, a2, (const struct D2D_SIZE_U *)this + 10, *((_BYTE *)this + 88));
      v7 = v8;
      if ( v8 < 0 )
      {
        v12 = 33;
LABEL_15:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v12, 0LL);
        goto LABEL_16;
      }
    }
  }
  v8 = CComposition::RegisterRenderSnapshotToPerform(*((CComposition **)this + 2), v6);
  v7 = v8;
  if ( v8 < 0 )
  {
    v12 = 37;
    goto LABEL_15;
  }
  v10 = *((_QWORD *)this + 9);
  v13 = 0LL;
  *((_QWORD *)this + 9) = v6;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_16:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v13);
  return v7;
}
