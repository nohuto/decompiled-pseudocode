/*
 * XREFs of ?Cleanup@JointResize@@AEAAXXZ @ 0x18048C678
 * Callers:
 *     ?OnArrangedWindowBorderExit@JointResize@@UEAAXXZ @ 0x18048D360 (-OnArrangedWindowBorderExit@JointResize@@UEAAXXZ.c)
 *     ?OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z @ 0x18048D3B0 (-OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z.c)
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x18048D490 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x18048D9F0 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 */

void __fastcall JointResize::Cleanup(JointResize *this)
{
  JointResize::RegisterViewChanges(this, 0);
  *((_WORD *)this + 112) = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  *((_QWORD *)this + 29) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 72) = -2;
  *((_BYTE *)this + 424) = 0;
}
