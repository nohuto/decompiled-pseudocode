void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v1 = *((_QWORD *)this + 6);
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  if ( v1 )
  {
    if ( *(struct _KTHREAD **)(v1 + 64) != KeGetCurrentThread() )
      WdLogSingleEntry0(1LL);
    v3 = Set<DMMVIDPN>::FindByValue(v1 + 136, (__int64)this);
    v5 = v4 + 8;
    if ( DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v4 + 8, v3) )
    {
      v7 = (_QWORD *)(v10 + 8);
      v6 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(v6 + 8) != v10 + 8 || (v11 = *(_QWORD **)(v10 + 16), (_QWORD *)*v11 != v7) )
        __fastfail(3u);
      *v11 = v6;
      *(_QWORD *)(v6 + 8) = v11;
      *v7 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      --*(_QWORD *)(v5 + 32);
    }
    v12 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 32) = v1;
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = this;
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
  }
  auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>((__int64 *)this + 39);
  auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>((__int64 *)this + 38);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24));
  *(_QWORD *)this = &SetElement::`vftable';
}
