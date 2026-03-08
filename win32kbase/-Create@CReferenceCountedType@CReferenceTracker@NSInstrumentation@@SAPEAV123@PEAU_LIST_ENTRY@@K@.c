/*
 * XREFs of ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C019BA80
 * Callers:
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C00CF19C (-InitializeReferenceTracker@@YA_NXZ.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C019B8B0 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C019BEDC (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ @ 0x1C019CB14 (-Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ.c)
 */

struct NSInstrumentation::CReferenceTracker::CReferenceCountedType *__fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::Create(
        struct _LIST_ENTRY *a1,
        int a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rbx
  struct NSInstrumentation::CPointerHashTable *v6; // rax
  struct NSInstrumentation::CBackTraceStoreEx *v7; // rax
  struct _LIST_ENTRY *Flink; // rax

  Pool2 = ExAllocatePool2(262LL, 1584LL, 1632203605LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_DWORD *)(Pool2 + 16) = a2;
  v6 = NSInstrumentation::CPointerHashTable::Create(0);
  *(_QWORD *)(v5 + 24) = v6;
  if ( !v6 || (v7 = NSInstrumentation::CBackTraceStoreEx::Create(), (*(_QWORD *)(v5 + 32) = v7) == 0LL) )
  {
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType((NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v5);
    ExFreePoolWithTag((PVOID)v5, 0);
    return 0LL;
  }
  Flink = a1->Flink;
  if ( a1->Flink->Blink != a1 )
    __fastfail(3u);
  *(_QWORD *)v5 = Flink;
  *(_QWORD *)(v5 + 8) = a1;
  Flink->Blink = (struct _LIST_ENTRY *)v5;
  *(_DWORD *)(v5 + 40) = 0;
  a1->Flink = (struct _LIST_ENTRY *)v5;
  memset((void *)(v5 + 48), 0, 0x600uLL);
  return (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v5;
}
