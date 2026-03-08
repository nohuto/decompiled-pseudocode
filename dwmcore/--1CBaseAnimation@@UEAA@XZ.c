/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x1800C5864
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800C58A0 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x1801BF8D0 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x18024B0FC (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &IContent::`vftable'{for `IContent'};
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  CResource::~CResource(this);
}
