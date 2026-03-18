/*
 * XREFs of ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x18021AA08
 * Callers:
 *     ??1CGeometry2D@@MEAA@XZ @ 0x18012E412 (--1CGeometry2D@@MEAA@XZ.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18021AA3C (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18021AC20 (-OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18021E430 (-OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180258D20 (-OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CGeometry2D::FreeCaches(void **this)
{
  void *v2; // rcx

  operator delete(this[8]);
  v2 = this[9];
  this[8] = 0LL;
  operator delete(v2);
  this[9] = 0LL;
}
