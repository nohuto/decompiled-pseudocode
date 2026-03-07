__int64 __fastcall CHolographicInteropTexture::ProcessCreate(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE *a3)
{
  RTL_SRWLOCK *v4; // rcx
  struct CVisual *v5; // rdx
  struct CResourceTable *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 57) = *((_DWORD *)a3 + 4);
  *((_BYTE *)this + 240) = 1;
  CMILMatrix::SetToIdentity((CHolographicInteropTexture *)((char *)this + 268));
  v4 = *(RTL_SRWLOCK **)(*((_QWORD *)this + 2) + 264LL);
  *((_QWORD *)this + 11) = v4;
  if ( v4 )
  {
    CHolographicManager::AddInteropTexture(v4, this);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 32LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
      0LL,
      0x8000LL);
  }
  v5 = (struct CVisual *)*((_QWORD *)this + 13);
  if ( v5 )
  {
    *((_QWORD *)this + 13) = 0LL;
    v7 = v5;
    CHolographicInteropTexture::SetRootVisual(this, v5);
    ReleaseInterface<CVisual>((__int64 *)&v7);
  }
  return 0LL;
}
