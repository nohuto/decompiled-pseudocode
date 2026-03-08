/*
 * XREFs of ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C006720C
 * Callers:
 *     ??_GDMMVIDEOPRESENTSOURCESET@@UEAAPEAXI@Z @ 0x1C0067EF0 (--_GDMMVIDEOPRESENTSOURCESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000511C (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C0067144 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCESET::~DMMVIDEOPRESENTSOURCESET(DMMVIDEOPRESENTSOURCESET *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTSOURCE>'};
  v2 = (DMMVIDEOPRESENTSOURCESET *)((char *)this + 64);
  *((_DWORD *)this + 26) |= 0x6D640000u;
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)v2 = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 12) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 10) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted(v2);
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(this);
}
