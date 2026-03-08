/*
 * XREFs of ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1802A7D88
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x1802A6948 (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7F3C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
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
