/*
 * XREFs of ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1802A46BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6254 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6314 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802A4588 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetFlags(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS *a3)
{
  RTL_SRWLOCK *v3; // rbx
  int v6; // r8d
  bool v7; // dl
  int v8; // r8d
  PVOID Ptr; // rcx
  struct CRenderTarget *v10; // rdx
  CRenderTargetManager *v11; // rcx

  v3 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  v6 = *((_DWORD *)a3 + 2);
  v7 = (HIDWORD(this[14].Ptr) & 0x40) != 0;
  HIDWORD(this[14].Ptr) = v6;
  v8 = v6 & 0x40;
  if ( v7 != (v8 != 0) )
  {
    Ptr = this[10].Ptr;
    if ( Ptr )
    {
      v10 = (struct CRenderTarget *)*((_QWORD *)Ptr + 4);
      if ( v10 )
      {
        v11 = *(CRenderTargetManager **)(*((_QWORD *)Ptr + 3) + 216LL);
        if ( v8 )
          CRenderTargetManager::RemoveRenderTarget(v11, v10);
        else
          CRenderTargetManager::AddRenderTarget(v11, v10);
      }
    }
  }
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
