/*
 * XREFs of ?NeedsSurfaceUpdate@CFlipContentToken@@UEBA_NXZ @ 0x1C001A340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipContentToken::NeedsSurfaceUpdate(CFlipContentToken *this)
{
  return *((_BYTE *)this + 212) & 1;
}
