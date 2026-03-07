DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODE::DMMVIDPNSOURCEMODE(DMMVIDPNSOURCEMODE *this, int a2)
{
  DMMVIDPNSOURCEMODE *result; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, a2);
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCEMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
  result = this;
  *((_DWORD *)this + 14) = 1833173006;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *(_OWORD *)((char *)this + 92) = 0LL;
  return result;
}
