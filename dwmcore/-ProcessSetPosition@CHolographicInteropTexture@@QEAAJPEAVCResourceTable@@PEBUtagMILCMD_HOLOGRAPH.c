__int64 __fastcall CHolographicInteropTexture::ProcessSetPosition(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION *a3)
{
  unsigned int *v3; // r15
  unsigned int v5; // esi
  unsigned int *v6; // r14
  unsigned int v7; // r12d
  RTL_SRWLOCK *v8; // rbx
  CMILMatrix *v10; // rcx

  v3 = (unsigned int *)((char *)this + 252);
  v5 = *((_DWORD *)this + 63);
  v6 = (unsigned int *)((char *)this + 256);
  v7 = *((_DWORD *)this + 64);
  v8 = (RTL_SRWLOCK *)((char *)this + 408);
  AcquireSRWLockExclusive((PSRWLOCK)this + 51);
  *v3 = *((_DWORD *)a3 + 2);
  *v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 65) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 66) = *((_DWORD *)a3 + 5);
  **((_DWORD **)this + 42) = 0;
  *((_BYTE *)this + 240) = 1;
  ReleaseSRWLockExclusive(v8);
  if ( __PAIR64__(*v6, v5) != __PAIR64__(v7, *v3) )
  {
    CompositorTracing::DwmHolographicInteropTextureSizeChanged<unsigned int &,unsigned int &,unsigned int &>(
      (unsigned int *)this + 56,
      v3,
      v6);
    CHolographicInteropTexture::ReleaseResources(this);
  }
  CMILMatrix::SetToIdentity((CHolographicInteropTexture *)((char *)this + 268));
  CMILMatrix::Translate(v10, (float)-*((_DWORD *)this + 65), (float)-*((_DWORD *)this + 66));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 32LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
    0LL,
    0x8000LL);
  return 0LL;
}
