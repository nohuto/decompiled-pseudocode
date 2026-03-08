/*
 * XREFs of ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0004DB4
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01817A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C000854C (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 */

DMMVIDPNTARGETSET *__fastcall DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(
        DMMVIDPNTARGETSET *this,
        const struct DMMVIDPNTARGETSET *a2)
{
  *(_QWORD *)this = &Set<DMMVIDPNTARGET>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
    (char *)this + 8,
    (char *)a2 + 8);
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETSET>'};
  return this;
}
