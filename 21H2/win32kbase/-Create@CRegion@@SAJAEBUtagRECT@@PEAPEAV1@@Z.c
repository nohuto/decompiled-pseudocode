/*
 * XREFs of ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C016BCD0
 * Callers:
 *     ?CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z @ 0x1C016BD80 (-CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C008EF30 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegion::Create(struct _RECTL *a1, struct CRegion **a2)
{
  int v4; // edi
  __int64 v5; // rax
  struct CRegion *v6; // rbx

  *a2 = 0LL;
  v4 = -1073741801;
  v5 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
         260LL,
         0x18uLL,
         1852273223);
  v6 = (struct CRegion *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 12) = 0;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)v5 = &CRegion::`vftable';
    *(_DWORD *)(v5 + 8) = 1;
    v4 = CRegion::InitializeFromRect((CRegion *)v5, a1);
    if ( v4 < 0 )
      (**(void (__fastcall ***)(struct CRegion *))v6)(v6);
    else
      *a2 = v6;
  }
  return (unsigned int)v4;
}
