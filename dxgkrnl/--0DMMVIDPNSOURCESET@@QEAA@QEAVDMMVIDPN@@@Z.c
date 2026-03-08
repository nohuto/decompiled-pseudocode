/*
 * XREFs of ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0003D30
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0181300 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C000634C (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCESET *__fastcall DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(DMMVIDPNSOURCESET *this, struct DMMVIDPN *const a2)
{
  _QWORD *v3; // rcx

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 2;
  v3 = (_QWORD *)((char *)this + 8);
  *v3 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  v3[3] = v3 + 2;
  v3[2] = v3 + 2;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCESET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCESET>'};
  *((_DWORD *)this + 22) = 1833172998;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))*v3)(v3) )
    ContainedBy<DMMVIDPN>::SetContainer((char *)this + 64, a2);
  else
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 4);
  return this;
}
