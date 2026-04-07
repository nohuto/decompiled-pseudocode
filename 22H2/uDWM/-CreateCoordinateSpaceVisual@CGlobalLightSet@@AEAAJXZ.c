/*
 * XREFs of ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180047440
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x1800468B0 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180011B00 (-Initialize@UdwmDcompVisual@@QEAAJXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180034C08 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043078 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800431F8 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180047578 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z @ 0x1800475A0 (-InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z.c)
 *     ?Attach@?$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z @ 0x180047650 (-Attach@-$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z.c)
 *     memset_0 @ 0x180057E72 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalLightSet::CreateCoordinateSpaceVisual(CGlobalLightSet *this)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  struct UdwmDcompVisual **v4; // rdi
  CGlobalLightSet *v5; // rcx
  int inserted; // ebx
  struct CVisual *v7; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CGlobalLightSet *v9; // rcx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   88LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x58uLL);
    v3[2] = 1;
    *(_QWORD *)v3 = &UdwmDcompVisual::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    *((_QWORD *)v3 + 10) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (struct UdwmDcompVisual **)((char *)this + 96);
  Microsoft::WRL::ComPtr<UdwmDcompVisual>::Attach((char *)this + 96, v3);
  if ( *((_QWORD *)this + 12) )
  {
    inserted = UdwmDcompVisual::Initialize(*((struct IDCompositionDesktopDevicePartner ***)this + 12));
    if ( inserted < 0 )
    {
      v11 = 410LL;
    }
    else
    {
      if ( !CGlobalLightSet::ValidateUdwmDCompVisual(v5, *v4) )
        return 2147549183LL;
      inserted = CGlobalLightSet::PositionCoordinateSpaceVisual(this);
      if ( inserted < 0 )
      {
        v11 = 416LL;
      }
      else
      {
        v7 = (struct CVisual *)*((_QWORD *)CWindowList::GetMagnifierControlForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                             *((_QWORD *)this + 11))
                               + 4);
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                             *((_QWORD *)this + 11));
        inserted = CGlobalLightSet::InsertUdwmDCompVisualBetween(v9, *v4, RenderTargetRootVisualForDesktop, v7);
        if ( inserted >= 0 )
          return 0LL;
        v11 = 422LL;
      }
    }
  }
  else
  {
    inserted = -2147024882;
    v11 = 409LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
