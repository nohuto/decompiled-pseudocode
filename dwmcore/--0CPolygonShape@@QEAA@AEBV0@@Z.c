/*
 * XREFs of ??0CPolygonShape@@QEAA@AEBV0@@Z @ 0x180017A7C
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CPolygonShape *__fastcall CPolygonShape::CPolygonShape(CPolygonShape *this, const struct CPolygonShape *a2)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CPolygonShape::`vftable';
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef();
  return this;
}
