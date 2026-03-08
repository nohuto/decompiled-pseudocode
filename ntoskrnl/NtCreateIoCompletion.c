/*
 * XREFs of NtCreateIoCompletion @ 0x140729910
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x1402A8580 (KeInitializeQueue.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateIoCompletion(__int64 a1, __int64 a2, int a3, ULONG a4)
{
  ULONG v4; // ebx
  _QWORD *v5; // rdi
  char PreviousMode; // si
  int Object; // ecx
  ULONG v8; // edx
  PRKQUEUE v9; // rbx
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue; // [rsp+60h] [rbp-28h]

  v4 = a4;
  v5 = (_QWORD *)a1;
  v11 = 0LL;
  Queue = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a4) = PreviousMode;
  LOBYTE(a1) = PreviousMode;
  Object = ObCreateObjectEx(a1, (_DWORD)IoCompletionObjectType, a3, a4);
  if ( Object >= 0 )
  {
    v8 = v4;
    v9 = Queue;
    KeInitializeQueue(Queue, v8);
    *(_QWORD *)&v9[1].Header.Lock = 0LL;
    LOBYTE(v9[1].Header.WaitListHead.Flink) = 0;
    Object = ObInsertObjectEx(v9, 0LL, 0, 0LL, (__int64)&v11);
    if ( Object >= 0 )
      *v5 = v11;
  }
  return (unsigned int)Object;
}
