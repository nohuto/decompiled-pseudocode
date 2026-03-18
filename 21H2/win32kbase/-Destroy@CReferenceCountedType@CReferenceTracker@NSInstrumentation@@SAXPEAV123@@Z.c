/*
 * XREFs of ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1C017A85C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C017A5C8 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *P)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(P);
  ExFreePoolWithTag(P, 0);
}
