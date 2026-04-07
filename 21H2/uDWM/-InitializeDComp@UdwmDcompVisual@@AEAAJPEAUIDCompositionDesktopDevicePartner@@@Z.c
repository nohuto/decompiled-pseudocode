/*
 * XREFs of ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180012388
 * Callers:
 *     ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180012340 (-Initialize@UdwmDcompVisual@@QEAAJXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BAFA0 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDcompVisual@@_N@Z @ 0x180012470 (-CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDc.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UdwmDcompVisual::InitializeDComp(
        UdwmDcompVisual *this,
        struct IDCompositionDesktopDevicePartner *a2)
{
  __int64 *v4; // r14
  int SharedVisual; // edi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
    return 0LL;
  v4 = (__int64 *)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    SharedVisual = UdwmDcompVisual::CreateSharedVisual(this, a2, (UdwmDcompVisual *)((char *)this + 16), 1);
    if ( SharedVisual < 0 )
    {
      v13 = 427LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)SharedVisual);
      return (unsigned int)SharedVisual;
    }
  }
  v6 = *((_QWORD *)this + 6);
  if ( !v6 )
  {
    v7 = UdwmDcompVisual::CreateSharedVisual(0LL, a2, (UdwmDcompVisual *)((char *)this + 48), 0);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B0,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    v6 = *((_QWORD *)this + 6);
  }
  v9 = *v4;
  *(_QWORD *)(v9 + 240) = v6;
  *(_QWORD *)(v6 + 240) = v9;
  SharedVisual = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 128LL))(
                   *((_QWORD *)this + 3),
                   *((_QWORD *)this + 7),
                   1LL);
  if ( SharedVisual < 0 )
  {
    v13 = 440LL;
    goto LABEL_12;
  }
  v10 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 24LL))(a2);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B9,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
