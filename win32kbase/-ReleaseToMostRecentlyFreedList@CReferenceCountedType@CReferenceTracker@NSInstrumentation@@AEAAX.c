/*
 * XREFs of ?ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAXPEAUSCircularBuffer@123@@Z @ 0x1C019BE04
 * Callers:
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C019A314 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReleaseToMostRecentlyFreedList(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        void *a2,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a3)
{
  unsigned __int32 v3; // r9d
  void *v4; // rbx
  void **v5; // rcx
  void ***v6; // rax

  do
  {
    v3 = _InterlockedIncrement((volatile signed __int32 *)this + 10) % 0x60u;
    v4 = (void *)*((_QWORD *)this + 2 * v3 + 7);
  }
  while ( v4 != (void *)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)this + 2 * v3 + 7,
                          (signed __int64)a3,
                          (signed __int64)v4) );
  *((_QWORD *)this + 2 * v3 + 6) = a2;
  if ( v4 )
  {
    while ( *(void **)v4 != v4 )
    {
      v5 = (void **)*((_QWORD *)v4 + 1);
      if ( *v5 != v4 || (v6 = (void ***)v5[1], *v6 != v5) )
        __fastfail(3u);
      *((_QWORD *)v4 + 1) = v6;
      *v6 = (void **)v4;
      ExFreePoolWithTag(v5, 0);
    }
    ExFreePoolWithTag(*((PVOID *)v4 + 2), 0);
    ExFreePoolWithTag(*((PVOID *)v4 + 3), 0);
    ExFreePoolWithTag(v4, 0);
  }
}
