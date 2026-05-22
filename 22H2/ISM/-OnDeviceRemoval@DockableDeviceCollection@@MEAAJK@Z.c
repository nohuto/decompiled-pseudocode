/*
 * XREFs of ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x18009C720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800163C8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C70 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CD90 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDockableDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x180126CAC (-OnDockableDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockableDeviceCollection::OnDeviceRemoval(DockableDeviceCollection *this, unsigned int a2)
{
  int Device; // ebx
  __int64 v5; // rdx
  int v7; // r8d
  struct RIMDevice *v8; // rdi
  __int64 v9; // rax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v11; // rax
  KeyboardDockServer *v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct RIMDevice *v14; // [rsp+50h] [rbp+18h] BYREF
  KeyboardDockServer *v15; // [rsp+58h] [rbp+20h]

  Device = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( Device < 0 )
  {
    v5 = 102LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v14 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v14, 0LL);
  if ( Device < 0 )
  {
    v5 = (unsigned int)(v7 + 108);
    goto LABEL_3;
  }
  v8 = v14;
  v9 = *((_QWORD *)v14 + 4);
  if ( *(_WORD *)(v9 + 1568) == 1 && *(_WORD *)(v9 + 1570) == 6 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 152LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
    v12 = (KeyboardDockServer *)v11;
    v15 = (KeyboardDockServer *)v11;
    if ( v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v11 + 24), 1u);
      v12 = v15;
    }
    KeyboardDockServer::OnDockableDeviceRemoval(v12, *((struct DockableDeviceInfo **)v8 + 4));
    if ( v12 )
      (**((void (__fastcall ***)(__int64))v12 + 2))((__int64)v12 + 16);
  }
  return 0LL;
}
