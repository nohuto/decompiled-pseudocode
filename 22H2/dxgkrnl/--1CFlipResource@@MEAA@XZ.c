/*
 * XREFs of ??1CFlipResource@@MEAA@XZ @ 0x1C006DA80
 * Callers:
 *     ??1CPoolBufferResource@@UEAA@XZ @ 0x1C006DAD4 (--1CPoolBufferResource@@UEAA@XZ.c)
 *     ??_ECFlipResource@@MEAAPEAXI@Z @ 0x1C006DB20 (--_ECFlipResource@@MEAAPEAXI@Z.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1C006DF3C (--1CContentResource@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C0068A90 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CFlipResource::~CFlipResource(CFlipResource *this)
{
  CFlipPropertySetBase *v2; // rcx
  CFlipResource **v3; // rdx
  CFlipResource **v4; // rcx

  *(_QWORD *)this = &CFlipResource::`vftable';
  v2 = (CFlipPropertySetBase *)*((_QWORD *)this + 4);
  if ( v2 )
    CFlipPropertySetBase::Release(v2);
  v3 = (CFlipResource **)*((_QWORD *)this + 1);
  if ( v3[1] != (CFlipResource *)((char *)this + 8)
    || (v4 = (CFlipResource **)*((_QWORD *)this + 2), *v4 != (CFlipResource *)((char *)this + 8)) )
  {
    __fastfail(3u);
  }
  *v4 = (CFlipResource *)v3;
  v3[1] = (CFlipResource *)v4;
}
