/*
 * XREFs of ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18009BA84
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180014810 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x18009B838 (-StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18009B958 (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009BCE0 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x18009B1F8 (-Hide@CAnimatedGlassSheet@@QEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009BBAC (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     McTemplateU0dddd_EtwEventWriteTransfer @ 0x18009BF28 (McTemplateU0dddd_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StopAnimation(CAnimatedGlassSheet *this)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // al
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF

  CAnimatedGlassSheet::UnRegisterGlobalTimer(this);
  v4 = *((_QWORD *)this + 54);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v6 = 1;
    *((_QWORD *)this + 54) = 0LL;
    CDesktopManager::s_fTimelineDirty = v6;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0dddd_EtwEventWriteTransfer(
        v3,
        v2,
        *((_DWORD *)this + 100),
        *((_DWORD *)this + 101),
        *((_DWORD *)this + 102),
        *((_DWORD *)this + 103));
  }
  if ( *((_QWORD *)this + 56) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 111) - 0.0) & _xmm) <= 0.0000011920929 )
    {
      CAnimatedGlassSheet::Hide(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)&UdwmGlassSheetFadeOut_End,
          v7,
          1LL,
          (__int64)v11);
    }
  }
  v8 = *((_QWORD *)this + 56);
  if ( v8 )
  {
    v5 = (*(_DWORD *)(v8 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v9 = 1;
    *((_QWORD *)this + 56) = 0LL;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  return 0LL;
}
