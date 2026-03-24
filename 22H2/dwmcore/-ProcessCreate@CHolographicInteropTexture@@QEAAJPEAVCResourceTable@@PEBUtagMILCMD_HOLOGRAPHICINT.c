/*
 * XREFs of ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x180259354
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x180252B80 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessCreate(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE *a3)
{
  CHolographicManager *v4; // rcx

  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 4);
  *((_BYTE *)this + 224) = 1;
  *(_QWORD *)((char *)this + 252) = 1065353216LL;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *((_DWORD *)this + 67) = 0;
  *((_QWORD *)this + 34) = 1065353216LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)((char *)this + 292) = 1065353216LL;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 1065353216;
  *((_WORD *)this + 158) = 32085;
  v4 = *(CHolographicManager **)(*((_QWORD *)this + 2) + 136LL);
  *((_QWORD *)this + 10) = v4;
  if ( v4 )
  {
    CHolographicManager::AddInteropTexture(v4, this);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 504LL) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 504LL),
      0LL,
      0x8000LL);
  }
  return 0LL;
}
