/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0005F80
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0005B4C (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C00066E0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C00079B0 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  DMMVIDPNSOURCEMODESET *v4; // rbx
  char *v5; // rbx
  __int64 v6; // rax
  DMMVIDPNSOURCEMODESET *v8; // rax

  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
    (char *)this + 32,
    (char *)a2 + 32);
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173004;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 4))((char *)this + 32) )
  {
    v4 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    if ( v4 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    {
      v5 = (char *)v4 - 8;
      while ( v5 )
      {
        if ( *((_QWORD *)v5 + 5) )
          WdLogSingleEntry0(1LL);
        *((_QWORD *)v5 + 5) = this;
        v8 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)v5 + 1);
        v5 = (char *)v8 - 8;
        if ( v8 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
          v5 = 0LL;
      }
    }
    v6 = *((_QWORD *)a2 + 18);
    if ( v6 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((char *)this + 24, *(unsigned int *)(v6 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
