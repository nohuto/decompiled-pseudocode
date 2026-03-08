/*
 * XREFs of ?Confirm@CFlipContentToken@@UEAAXXZ @ 0x1C0089150
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00789DC (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 */

void __fastcall CFlipContentToken::Confirm(CFlipContentToken *this)
{
  if ( *((_BYTE *)this + 289) )
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 37),
      *((_QWORD *)this + 13) - 1LL,
      *((_DWORD *)this + 76),
      *((_DWORD *)this + 77),
      *((_QWORD *)this + 39));
  *((_DWORD *)this + 6) = 4;
}
