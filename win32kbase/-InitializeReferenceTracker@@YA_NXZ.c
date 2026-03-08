/*
 * XREFs of ?InitializeReferenceTracker@@YA_NXZ @ 0x1C00CF19C
 * Callers:
 *     HmgCreate @ 0x1C002CDD0 (HmgCreate.c)
 * Callees:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C019BA80 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 */

char __fastcall InitializeReferenceTracker(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *Pool2; // rax
  unsigned int v3; // edi
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType **i; // rsi
  int v5; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType *v7; // rax

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( v1 == -8032 )
    return 1;
  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 16LL, 961114965LL);
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
  }
  *(_QWORD *)(v1 + 8024) = Pool2;
  if ( Pool2 )
  {
    v3 = 0;
    for ( i = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v1 + 8040); ; i += 2 )
    {
      v5 = *(_DWORD *)(v1 + 8016);
      if ( _bittest(&v5, v3) )
      {
        v7 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(
               *(struct _LIST_ENTRY **)(v1 + 8024),
               *((_DWORD *)i - 2));
        if ( !v7 )
          return 0;
        *i = v7;
      }
      if ( ++v3 >= 3 )
        return 1;
    }
  }
  return 0;
}
