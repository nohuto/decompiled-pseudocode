/*
 * XREFs of ?Present@CVisualCapture@@UEAAJ_N@Z @ 0x180256188
 * Callers:
 *     ?Present@CVisualCapture@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x18011E5A0 (-Present@CVisualCapture@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180255B8C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::Present(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 1968));
  if ( !*((_BYTE *)this - 55) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 244) + 656LL) + 32LL))(
      *(_QWORD *)(*((_QWORD *)this - 244) + 656LL),
      0LL,
      1024LL);
  return 0LL;
}
