/*
 * XREFs of ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x1C0007D70
 * Callers:
 *     ??_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z @ 0x1C0027E10 (--_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z @ 0x1C0027E20 (--_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z @ 0x1C0027E30 (--_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DMMVIDPNTARGET::`vector deleting destructor'(_QWORD *P, char a2)
{
  __int64 *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  *P = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  v3 = P + 13;
  P[4] = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  P[6] = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  P[8] = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  P[10] = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v5 = P[13];
  if ( v5 )
  {
    if ( (unsigned __int64)*(int *)(v5 + 96) > 1 )
      WdLogSingleEntry2(2LL, *v3, P);
    *(_QWORD *)(*v3 + 112) = 0LL;
  }
  if ( P[14] )
    WdLogSingleEntry1(2LL, *((unsigned int *)P + 6));
  ReferenceCounted::Release((ReferenceCounted *)(P[12] + 64LL));
  v6 = P[15];
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1LL);
  v7 = P[14];
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  P[14] = 0LL;
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v3, 0LL);
  P[10] = &SetElement::`vftable';
  *((_DWORD *)P + 14) |= 0x6D640000u;
  P[5] = 0LL;
  P[6] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  P[4] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *P = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
