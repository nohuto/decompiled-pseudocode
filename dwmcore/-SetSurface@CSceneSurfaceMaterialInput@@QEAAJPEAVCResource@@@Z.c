/*
 * XREFs of ?SetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResource@@@Z @ 0x18024E17C
 * Callers:
 *     ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x18024E014 (-ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFA.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::SetSurface(struct CResource **this, struct CResource *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  struct CResource *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != this[10] )
  {
    v4 = CResource::RegisterNotifier((CResource *)this, a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    v7 = *this;
    this[10] = a2;
    (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v7 + 9))(this, 0LL, this);
  }
  return 0LL;
}
