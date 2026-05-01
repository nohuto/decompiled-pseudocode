/*
 * XREFs of ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x18041E7A8
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x1804B2810 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x1804B3558 (-Initialize@VirtualDesktopGestureWindow@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_7814dccf_97c7_4f4f_8fc2_a3c6c8107597,
           a2);
}
