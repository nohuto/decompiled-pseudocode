/*
 * XREFs of ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C007897C
 * Callers:
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0078950 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0078C00 (-Discard@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00789DC (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 */

void __fastcall CFlipToken::ConfirmIndependentFlipEntry(CFlipToken *this)
{
  if ( *((_BYTE *)this + 561) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 71),
      *((_QWORD *)this + 12),
      *((_DWORD *)this + 146),
      *((_DWORD *)this + 147),
      *((_QWORD *)this + 72));
    *((_BYTE *)this + 561) = 0;
  }
}
