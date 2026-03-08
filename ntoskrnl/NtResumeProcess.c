/*
 * XREFs of NtResumeProcess @ 0x1409B2FE0
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeProcess @ 0x1402FF188 (PsMultiResumeProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtResumeProcess(ULONG_PTR a1)
{
  char PreviousMode; // r9
  int v2; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v2 = ObpReferenceObjectByHandleWithTag(a1, 2048, (__int64)PsProcessType, PreviousMode, 0x75537350u, &Object, 0LL, 0LL);
  if ( v2 >= 0 )
  {
    v2 = PsMultiResumeProcess((__int64)Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return (unsigned int)v2;
}
