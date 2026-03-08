/*
 * XREFs of ??1DMMVIDPNTARGETSET@@UEAA@XZ @ 0x1C0005230
 * Callers:
 *     ??_GDMMVIDPNTARGETSET@@UEAAPEAXI@Z @ 0x1C00051A0 (--_GDMMVIDPNTARGETSET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C000554C (--1-$Set@VDMMVIDPNTARGET@@@@UEAA@XZ.c)
 */

void __fastcall DMMVIDPNTARGETSET::~DMMVIDPNTARGETSET(DMMVIDPNTARGETSET *this)
{
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_DWORD *)this + 22) |= 0x6D640000u;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>();
}
