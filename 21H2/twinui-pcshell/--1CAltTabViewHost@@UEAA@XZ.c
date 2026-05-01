/*
 * XREFs of ??1CAltTabViewHost@@UEAA@XZ @ 0x1803FBDD4
 * Callers:
 *     ??_ECAltTabViewHost@@UEAAPEAXI@Z @ 0x1803FBEE0 (--_ECAltTabViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x1800D3948 (--1-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA@XZ.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CAltTabViewHost::~CAltTabViewHost(CAltTabViewHost *this)
{
  __int64 v2; // rax

  tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::~tip_test<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>((void **)this + 26);
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    *(_QWORD *)(v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  *((_DWORD *)this + 33) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
}
