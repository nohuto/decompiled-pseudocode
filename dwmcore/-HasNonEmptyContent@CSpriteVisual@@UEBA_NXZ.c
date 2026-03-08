/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800D76F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004DC0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18012F6FA (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  _QWORD *ProjectedShadowReceivers; // rax
  struct CDropShadow *DropShadow; // rax

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3) )
    return 1;
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this);
    if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
      return 1;
  }
  if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)DropShadow + 192LL))(DropShadow) )
      return 1;
  }
  return v2;
}
