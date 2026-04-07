/*
 * XREFs of ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x180089328
 * Callers:
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800859E0 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CIconicBitmapRegistry::~CIconicBitmapRegistry(CIconicBitmapRegistry *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CIconicBitmapRegistry::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v2 )
    CBaseObject::Release(v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 6);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 2);
}
