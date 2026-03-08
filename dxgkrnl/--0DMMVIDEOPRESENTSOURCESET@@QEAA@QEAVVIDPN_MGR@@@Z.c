/*
 * XREFs of ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C001FA44
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C02067E8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x1C0015D24 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDEOPRESENTSOURCESET *__fastcall DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(
        DMMVIDEOPRESENTSOURCESET *this,
        struct VIDPN_MGR *const a2)
{
  unsigned __int8 (__fastcall ***v2)(_QWORD); // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 8);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 8) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 18) = 1;
  v4 = (_QWORD *)((char *)this + 80);
  *((_DWORD *)this + 26) = 1833172993;
  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `ReferenceCounted'};
  *v4 = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 12) = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTSOURCESET>'};
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v4, (__int64)a2);
  if ( !(**v2)(v2) )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = *((int *)this + 4);
  return this;
}
