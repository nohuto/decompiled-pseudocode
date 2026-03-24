/*
 * XREFs of ?ReleaseD2DResources@CD2DCommandList@@UEAAXXZ @ 0x18024B420
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800C16BC (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 */

void __fastcall CD2DCommandList::ReleaseD2DResources(CD2DCommandList *this)
{
  int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
    ReleaseInterface<CResource>((__int64 *)(*((_QWORD *)this + 11) + 8LL * i));
  CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll((__int64)this + 80);
}
