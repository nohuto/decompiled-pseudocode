/*
 * XREFs of ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C0067274
 * Callers:
 *     ??_GDMMVIDEOPRESENTTARGETSET@@UEAAPEAXI@Z @ 0x1C0067F40 (--_GDMMVIDEOPRESENTTARGETSET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000511C (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C0067174 (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGETSET::~DMMVIDEOPRESENTTARGETSET(DMMVIDEOPRESENTTARGETSET *this)
{
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 10) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 12) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGETSET>'};
  if ( *((DMMVIDEOPRESENTTARGETSET **)this + 14) != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 112) )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)this + 26) |= 0x6D640000u;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 10) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGETSET *)((char *)this + 64));
  *(_QWORD *)this = &IndexedSet<DMMVIDEOPRESENTTARGET>::`vftable';
  Set<DMMVIDEOPRESENTTARGET>::~Set<DMMVIDEOPRESENTTARGET>(this);
}
