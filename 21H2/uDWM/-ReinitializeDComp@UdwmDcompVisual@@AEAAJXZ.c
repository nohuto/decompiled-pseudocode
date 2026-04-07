/*
 * XREFs of ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BAFA0
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x180012234 (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180012388 (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 *     ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180012814 (--4-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDes.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001286C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800812E4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_9058ab511b3899de936a0f37fc55bd19_::operator() @ 0x1800BAE5C (_lambda_9058ab511b3899de936a0f37fc55bd19_--operator().c)
 *     ?Attach@?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAXPEAVCVisual@@@Z @ 0x1800BAEEC (-Attach@-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z @ 0x1800BB290 (-SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z.c)
 */

__int64 __fastcall UdwmDcompVisual::ReinitializeDComp(UdwmDcompVisual *this)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rsi
  CBaseObject *v3; // rdx
  CBaseObject *v4; // rdx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  char v11; // r14
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int inserted; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  _QWORD v22[3]; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  CBaseObject *v25; // [rsp+78h] [rbp+28h] BYREF
  CBaseObject *v26; // [rsp+80h] [rbp+30h] BYREF

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(this);
  if ( !DCompositionInteropDevice )
    goto LABEL_32;
  v3 = (CBaseObject *)*((_QWORD *)this + 2);
  v26 = 0LL;
  Microsoft::WRL::ComPtr<CVisual>::Attach(&v26, v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 2) = 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<CVisual>::Attach(&v25, v4);
  *((_QWORD *)this + 6) = 0LL;
  v22[1] = &v26;
  v22[0] = this;
  v22[2] = &v25;
  v5 = UdwmDcompVisual::InitializeDComp(this, DCompositionInteropDevice);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CBaseObject *, CBaseObject *))(*(_QWORD *)v25 + 72LL))(v25, v26);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 504LL;
      goto LABEL_6;
    }
    v11 = 1;
    v12 = VisualCollection::Remove((CBaseObject *)((char *)v26 + 32), v25);
    v6 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 511LL;
LABEL_24:
      v16 = retaddr;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        v16,
        (void *)v14,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)v13);
      if ( v11 )
      {
        v19 = (*(__int64 (__fastcall **)(CBaseObject *, _QWORD))(*(_QWORD *)v25 + 72LL))(v25, 0LL);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            508LL,
            (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
            (const char *)(unsigned int)v19);
          __debugbreak();
        }
      }
      goto LABEL_7;
    }
    v11 = 0;
    v6 = UdwmDcompVisual::SwapVisual(v26, *((struct CVisual **)this + 2));
    if ( v6 < 0 )
    {
      inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v26 + 32), v25, 0LL, 0, 1);
      v16 = retaddr;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          518LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)inserted);
        __debugbreak();
      }
      v13 = (unsigned int)v6;
      v14 = 519LL;
      goto LABEL_25;
    }
    v6 = UdwmDcompVisual::SwapVisual(v25, *((struct CVisual **)this + 6));
    if ( v6 < 0 )
    {
      v17 = UdwmDcompVisual::SwapVisual(v26, *((struct CVisual **)this + 2));
      if ( v17 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          527LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      v18 = VisualCollection::InsertRelative((CBaseObject *)((char *)v26 + 32), v25, 0LL, 0, 1);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          528LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)v18);
        __debugbreak();
      }
      v13 = (unsigned int)v6;
      v14 = 529LL;
      goto LABEL_24;
    }
    v20 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      CBaseObject::Release(v20);
    }
    v21 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      CBaseObject::Release(v21);
    }
LABEL_32:
    Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(
      (__int64 *)this + 10,
      (__int64)DCompositionInteropDevice);
    return 0LL;
  }
  v7 = 499LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  v23 = 0;
  lambda_9058ab511b3899de936a0f37fc55bd19_::operator()(v22);
  v8 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    CBaseObject::Release(v8);
  }
  v9 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    CBaseObject::Release(v9);
  }
  return (unsigned int)v6;
}
