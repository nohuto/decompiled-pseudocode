/*
 * XREFs of ?UninitializeReferenceTracker@@YAXXZ @ 0x1C00A0090
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C009EFD4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C019B8B0 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall UninitializeReferenceTracker(__int64 a1)
{
  __int64 v1; // rbx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v2; // rdi
  __int64 v3; // rbp
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rsi

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_QWORD *)(v1 + 8024) )
  {
    v2 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v1 + 8040);
    v3 = 3LL;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(*v2);
        ExFreePoolWithTag(v4, 0);
      }
      v2 += 2;
      --v3;
    }
    while ( v3 );
    ExFreePoolWithTag(*(PVOID *)(v1 + 8024), 0);
    *(_QWORD *)(v1 + 8024) = 0LL;
  }
}
