/*
 * XREFs of ??1CImage@@EEAA@XZ @ 0x18003ED08
 * Callers:
 *     ??_GCImage@@EEAAPEAXI@Z @ 0x18003ECC0 (--_GCImage@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImage::~CImage(CImage *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CImage::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 35) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
