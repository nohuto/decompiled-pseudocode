/*
 * XREFs of ?OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180255660
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1802174A8 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::OnChanged(__int64 a1)
{
  *(_DWORD *)(a1 + 160) |= 3u;
  CGeometry2D::FreeCaches((void **)a1);
  return 1LL;
}
