/*
 * XREFs of ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1804190D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804191AC (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804193E4 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 */

void __fastcall CScrollViewerHost::UpdateScrollButtonVisibility(CScrollViewerHost *this)
{
  char v2; // al
  CScrollViewerHost *v3; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 64LL))(*((_QWORD *)this + 30));
  v3 = (CScrollViewerHost *)((char *)this - 208);
  if ( v2 )
  {
    CScrollViewerHost::_LayoutWithScrollButtons(v3);
    (*(void (__fastcall **)(CScrollViewerHost *))(*(_QWORD *)this + 40LL))(this);
  }
  else
  {
    CScrollViewerHost::_LayoutWithoutScrollButtons(v3);
  }
}
