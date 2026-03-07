DMMVIDEOPRESENTTARGETSET *__fastcall DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(
        DMMVIDEOPRESENTTARGETSET *this,
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
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::`vftable';
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &IndexedSet<DMMVIDEOPRESENTTARGET>::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 8) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 18) = 1;
  v4 = (_QWORD *)((char *)this + 80);
  *((_DWORD *)this + 26) = 1833172994;
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `ReferenceCounted'};
  *v4 = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 12) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGETSET>'};
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v4, (__int64)a2);
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  if ( !(**v2)(v2) )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = *((int *)this + 4);
  return this;
}
