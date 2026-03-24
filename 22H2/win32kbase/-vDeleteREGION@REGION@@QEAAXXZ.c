/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C00219A0 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     GreExtCreateRegion @ 0x1C0024210 (GreExtCreateRegion.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0026170 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C00288F0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002C0E0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002C3A0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002C4A8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C002C630 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002CCE4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C002CD6C (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0032950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0033780 (NtGdiDeleteObjectApp.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0034F20 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C00357D0 (GreCreateRectRgnIndirect.c)
 *     NtGdiCreateRectRgn @ 0x1C0080D10 (NtGdiCreateRectRgn.c)
 *     vRestoreRegion @ 0x1C00857B0 (vRestoreRegion.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C0092670 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C009F510 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00A61F8 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00BDA24 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C013E6C0 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0140900 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0140CD8 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0140DA0 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     EngCreateClip @ 0x1C014C130 (EngCreateClip.c)
 *     EngDeleteClip @ 0x1C014C200 (EngDeleteClip.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C014D314 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C011C8FC (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
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
        if ( qword_1C0256D60 && (int)qword_1C0256D60() >= 0 && qword_1C0256D68 )
          qword_1C0256D68(v3, v2);
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
