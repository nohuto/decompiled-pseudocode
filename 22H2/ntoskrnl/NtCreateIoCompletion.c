/*
 * XREFs of NtCreateIoCompletion @ 0x1406806F0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x140310CC0 (KeInitializeQueue.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateIoCompletion(__int64 *a1, ACCESS_MASK a2, int a3, ULONG a4)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  int Object; // ecx
  ULONG v10; // edx
  PRKQUEUE v11; // rbx
  char *v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue[4]; // [rsp+60h] [rbp-28h] BYREF

  v14 = 0LL;
  Queue[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  Object = ObCreateObjectEx(PreviousMode, IoCompletionObjectType, a3, PreviousMode, v13, 80, 0, 0, Queue, 0LL);
  if ( Object >= 0 )
  {
    v10 = a4;
    v11 = Queue[0];
    KeInitializeQueue(Queue[0], v10);
    *(_QWORD *)&v11[1].Header.Lock = 0LL;
    LOBYTE(v11[1].Header.WaitListHead.Flink) = 0;
    Object = ObInsertObjectEx((PADAPTER_OBJECT)v11, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v14);
    if ( Object >= 0 )
      *a1 = v14;
  }
  return (unsigned int)Object;
}
