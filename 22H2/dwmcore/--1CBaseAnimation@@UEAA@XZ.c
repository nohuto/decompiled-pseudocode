/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x1800C62C4
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800C6300 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x1801C2B00 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x18024E7DC (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097870 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &IContent::`vftable'{for `IContent'};
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  CResource::~CResource(this);
}
