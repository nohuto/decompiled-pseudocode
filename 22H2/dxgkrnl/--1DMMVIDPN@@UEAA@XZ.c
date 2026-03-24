/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1C0141854
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C000AFE0 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000B060 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000B0F0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000B140 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C000B16C (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax

  v3 = *((_QWORD *)this + 6);
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*(_QWORD *)(v3 + 40) + 16LL) != CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = Set<DMMVIDPN>::FindByValue(v3 + 96, (__int64)this);
    if ( DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v3 + 104, v7) )
    {
      v9 = (_QWORD *)(v10 + 8);
      v8 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(v8 + 8) != v10 + 8 || (v11 = *(_QWORD **)(v10 + 16), (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v8;
      *(_QWORD *)(v8 + 8) = v11;
      *v9 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      --*(_QWORD *)(v3 + 136);
    }
    v12 = WdLogNewEntry5_WdTrace(v9, v8);
    *(_QWORD *)(v12 + 32) = v3;
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = this;
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdWarning(v18);
  }
  v15 = *((_QWORD *)this + 39);
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, 1LL);
  v16 = *((_QWORD *)this + 38);
  if ( v16 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, 1LL);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24), v17);
  *(_QWORD *)this = &SetElement::`vftable';
}
