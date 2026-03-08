/*
 * XREFs of IoCreateSystemThread @ 0x14086FC50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoCreateSystemThread(
        _WORD *Object,
        __int64 a2,
        int a3,
        __int128 *a4,
        void *a5,
        __int64 a6,
        ULONG_PTR BugCheckParameter2,
        __int64 a8)
{
  _QWORD *Pool2; // rax
  void *v13; // rdi
  int SystemThread; // esi

  if ( (unsigned __int16)(*Object - 3) > 1u )
    KeBugCheckEx(0x148u, 0LL, BugCheckParameter2, (ULONG_PTR)Object, 0LL);
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 538996553LL);
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = Object;
  Pool2[1] = BugCheckParameter2;
  Pool2[2] = a8;
  ObfReferenceObject(Object);
  SystemThread = PsCreateSystemThreadEx(a2, a3, a4, a5, a6, (__int64)IopThreadStart, (__int64)v13, 0LL, 0LL);
  if ( SystemThread < 0 )
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)SystemThread;
}
