/*
 * XREFs of ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x180259474
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180041E0C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x1802581DC (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x180259664 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

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

  v3 = (unsigned int *)((char *)this + 236);
  v5 = *((_DWORD *)this + 59);
  v6 = (unsigned int *)((char *)this + 240);
  v7 = *((_DWORD *)this + 60);
  v8 = (RTL_SRWLOCK *)((char *)this + 392);
  AcquireSRWLockExclusive((PSRWLOCK)this + 49);
  *v3 = *((_DWORD *)a3 + 2);
  *v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 61) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 62) = *((_DWORD *)a3 + 5);
  **((_DWORD **)this + 40) = 0;
  *((_BYTE *)this + 224) = 1;
  ReleaseSRWLockExclusive(v8);
  if ( __PAIR64__(*v6, v5) != __PAIR64__(v7, *v3) )
  {
    CompositorTracing::DwmHolographicInteropTextureSizeChanged<unsigned int &,unsigned int &,unsigned int &>(
      (unsigned int *)this + 52,
      v3,
      v6);
    CHolographicInteropTexture::ReleaseResources(this);
  }
  *((_DWORD *)this + 63) = 1065353216;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 1065353216LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)((char *)this + 292) = 1065353216LL;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 1065353216;
  *((_WORD *)this + 158) = 32085;
  CMILMatrix::Translate(
    (CHolographicInteropTexture *)((char *)this + 252),
    (float)-*((_DWORD *)this + 61),
    (float)-*((_DWORD *)this + 62));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 504LL) + 96LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 504LL),
    0LL,
    0x8000LL);
  return 0LL;
}
