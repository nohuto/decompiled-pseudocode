/*
 * XREFs of ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x1801C0ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18022A1C0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 */

void __fastcall CGenericInk::ComputeBackgroundBlendInfo(CGenericInk *this, bool *a2, bool *a3)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v4 = 0;
  v7 = 0LL;
  v5 = CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef((char *)this + 152, 0LL, &v7);
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1F8u, 0LL);
  else
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 80) + 24LL))(*(_QWORD *)(v7 + 80));
  *a3 = v4 != 0;
}
