/*
 * XREFs of ?ReleaseD2DResources@CD2DInk@@UEAAXXZ @ 0x180299640
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Ink@@@@YAXAEAPEAUID2D1Ink@@@Z @ 0x18022BDBC (--$ReleaseInterface@UID2D1Ink@@@@YAXAEAPEAUID2D1Ink@@@Z.c)
 */

void __fastcall CD2DInk::ReleaseD2DResources(CD2DInk *this)
{
  ReleaseInterface<ID2D1Ink>((__int64 *)this + 10);
  ReleaseInterface<ID2D1InkStyle>((__int64 *)this + 11);
}
