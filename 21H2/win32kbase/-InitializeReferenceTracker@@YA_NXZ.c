/*
 * XREFs of ?InitializeReferenceTracker@@YA_NXZ @ 0x1C006B76C
 * Callers:
 *     HmgCreate @ 0x1C006B24C (HmgCreate.c)
 * Callees:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C014DC44 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 */

char InitializeReferenceTracker(void)
{
  _QWORD *PoolWithTag; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v1; // rdi
  unsigned int v2; // ebx
  unsigned int v3; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x10uLL, 0x39497355u);
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    v1 = &qword_1C024C3F8;
    *PoolWithTag = PoolWithTag;
    v2 = 0;
    gpReferenceTracker = PoolWithTag;
    do
    {
      v3 = gReferenceTrackedTypes;
      if ( _bittest((const int *)&v3, v2) )
      {
        v5 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(
               (struct _LIST_ENTRY *)gpReferenceTracker,
               *((_DWORD *)v1 - 2));
        if ( !v5 )
          return 0;
        *v1 = v5;
      }
      ++v2;
      v1 += 2;
    }
    while ( v2 < 3 );
    return 1;
  }
  else
  {
    gpReferenceTracker = 0LL;
    return 0;
  }
}
