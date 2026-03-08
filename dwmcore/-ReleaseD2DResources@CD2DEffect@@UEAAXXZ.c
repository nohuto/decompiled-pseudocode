/*
 * XREFs of ?ReleaseD2DResources@CD2DEffect@@UEAAXXZ @ 0x180299AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DEffect::ReleaseD2DResources(CD2DEffect *this)
{
  ReleaseInterface<ID2D1Effect>((__int64 *)this + 10);
}
