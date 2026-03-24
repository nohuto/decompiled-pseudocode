/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002B9F0
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0020530 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     GreExtCreateRegion @ 0x1C0022DA0 (GreExtCreateRegion.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0024D00 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0027480 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002AC70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002AF30 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002B038 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C002B1C0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002B874 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C002B8FC (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C00314E0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0032310 (NtGdiDeleteObjectApp.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0033AB0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0034360 (GreCreateRectRgnIndirect.c)
 *     NtGdiCreateRectRgn @ 0x1C007FA80 (NtGdiCreateRectRgn.c)
 *     vRestoreRegion @ 0x1C00848B0 (vRestoreRegion.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C00917D0 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C009E750 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00A5438 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00BD804 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C013E3B0 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C01405B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0140988 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0140A50 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     EngCreateClip @ 0x1C014BE40 (EngCreateClip.c)
 *     EngDeleteClip @ 0x1C014BF10 (EngDeleteClip.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C014D3F0 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C011C62C (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  __int64 v2; // rdi
  void *v3; // rsi
  unsigned __int8 *v4; // rcx

  if ( this && this != prgnDefault )
  {
    v2 = *((_QWORD *)this + 11);
    if ( v2 )
    {
      if ( *((_DWORD *)this + 6) == 112 )
      {
        v3 = RGNMEMOBJ::s_pSCANLookAsideList;
        if ( qword_1C0257D60 && (int)qword_1C0257D60() >= 0 && qword_1C0257D68 )
          qword_1C0257D68(v3, v2);
      }
      else if ( *((_DWORD *)this + 6) > 0x70u )
      {
        Win32FreePool(v2);
      }
      *((_QWORD *)this + 11) = 0LL;
    }
    v4 = gpTypeIsolation[7];
    if ( v4 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v4, this);
  }
}
