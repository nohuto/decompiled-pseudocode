/*
 * XREFs of ??1DMMVIDPNSOURCE@@UEAA@XZ @ 0x1C0005D84
 * Callers:
 *     ??_GDMMVIDPNSOURCE@@UEAAPEAXI@Z @ 0x1C0005D40 (--_GDMMVIDPNSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPNSOURCE::~DMMVIDPNSOURCE(DMMVIDPNSOURCE *this)
{
  __int64 v2; // rax
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( (unsigned __int64)*(int *)(v2 + 96) > 1 )
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 13), this);
    *(_QWORD *)(*((_QWORD *)this + 13) + 112LL) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
    WdLogSingleEntry1(2LL, *((unsigned int *)this + 6));
  v3 = (void *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `NonReferenceCounted'};
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_QWORD *)this + 19) = &SetElement::`vftable';
  *((_QWORD *)this + 16) = &SetElement::`vftable';
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
    ReferenceCounted::Release((ReferenceCounted *)(v4 + 88));
  *((_QWORD *)this + 15) = 0LL;
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
}
