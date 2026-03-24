/*
 * XREFs of ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x18018418C
 * Callers:
 *     ?PresentNeeded@COverlayContext@@QEAA_NXZ @ 0x18002FC98 (-PresentNeeded@COverlayContext@@QEAA_NXZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18009258C (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x180183B20 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@IEAAJXZ @ 0x180183E74 (-Deactivate@CDirectFlipInfo@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDirectFlipInfo::IsIndependentFlip(CDirectFlipInfo *this)
{
  char v2; // al
  char v3; // dl
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 2) + 248LL))(*((_QWORD *)this + 2), &v5);
  v3 = 0;
  if ( v2 )
    return v5 == *((_DWORD *)this + 24);
  return v3;
}
