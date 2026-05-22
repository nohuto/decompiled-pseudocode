/*
 * XREFs of ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800163C8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C70 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x18012F868 (-HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDeviceCollection::OnInputReport(PenDeviceCollection *this, int a2, void *a3, unsigned int a4)
{
  int Device; // eax
  unsigned int v7; // ebx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v10; // rax
  PenDeviceManager *v11; // rbx
  void **v12; // [rsp+30h] [rbp-18h] BYREF
  PenDeviceManager *v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, (struct RIMDevice **)&v12, 0LL);
  v7 = Device;
  if ( Device >= 0 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
    v11 = (PenDeviceManager *)v10;
    v13 = (PenDeviceManager *)v10;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
      v11 = v13;
    }
    PenDeviceManager::HandleRIMDeviceInput(v11, v12[2], a3, a4);
    if ( v11 )
      (**((void (__fastcall ***)(__int64))v11 + 2))((__int64)v11 + 16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v7;
  }
}
