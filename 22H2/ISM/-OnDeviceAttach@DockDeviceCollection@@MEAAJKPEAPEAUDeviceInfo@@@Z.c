/*
 * XREFs of ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009BD60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002149C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C70 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034B20 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAAEAUGetInputReportResult@@$$QEAU2@@Z @ 0x18009BA88 (--$emplace_back@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UGetInputRep.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18009E598 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x18009EA68 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DockDeviceCollection::OnDeviceAttach(wil::details **this, int a2, struct DeviceInfo **a3)
{
  struct RIMDevice *v6; // rbx
  int Device; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // r8d
  int DockInputReport; // eax
  const struct std::nothrow_t *v12; // rdx
  int v13; // eax
  void *v14; // rdx
  int v15; // eax
  struct DeviceInfo *v17[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  void *v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct RIMDevice *v22; // [rsp+A8h] [rbp+48h] BYREF

  v6 = (struct RIMDevice *)operator new(0x694uLL);
  v22 = v6;
  memset_0(v6, 0, 0x694uLL);
  *((_DWORD *)v6 + 2) = 1548;
  v17[1] = v6;
  v17[0] = v6;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, v17);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 100LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_16;
  }
  v22 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v22, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = (unsigned int)(v10 + 106);
    goto LABEL_7;
  }
  Device = DockDevice::Initialize(v22, v6);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 108LL;
    goto LABEL_7;
  }
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  DockInputReport = DockDevice::TryGetDockInputReport(v22, (struct GetInputReportResult *)&v18);
  if ( DockInputReport >= 0 )
  {
    v22 = (struct RIMDevice *)(this + 352);
    v13 = _Mtx_lock((_Mtx_t)(this + 352));
    if ( v13 )
      std::_Throw_C_error(v13);
    std::deque<GetInputReportResult>::emplace_back<GetInputReportResult>((__int64)(this + 347), (__int64)&v18);
    wil::details::SetEvent(this[346], v14);
    v15 = _Mtx_unlock((_Mtx_t)(this + 352));
    if ( v15 )
      std::_Throw_C_error(v15);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      112LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)DockInputReport);
  }
  *a3 = v17[0];
  v6 = 0LL;
  v8 = 0;
  if ( v19 )
    operator delete(v19, v12);
LABEL_16:
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x694);
  return v8;
}
