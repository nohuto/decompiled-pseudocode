DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(
        DMMVIDPNTARGETMODE *this,
        const struct DMMVIDPNTARGETMODE *a2)
{
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a2 + 72);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a2 + 88);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 104);
  *((_QWORD *)this + 15) = *((_QWORD *)a2 + 15);
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *(_QWORD *)this = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGETMODE::`vftable'{for `ContainedBy<DMMVIDPNTARGETMODESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETMODE::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_BYTE *)this + 140) = *((_BYTE *)a2 + 140);
  *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
  *((_QWORD *)this + 19) = *((_QWORD *)a2 + 19);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  return this;
}
