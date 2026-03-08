/*
 * XREFs of NtSuspendThread @ 0x1407DC8F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x1407DC9C0 (PsSuspendThread.c)
 */

__int64 __fastcall NtSuspendThread(ULONG_PTR BugCheckParameter1, _DWORD *a2)
{
  char PreviousMode; // r9
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // edi
  int v8; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a2 )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             2,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v7 = PsSuspendThread(Object, &v8);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( a2 )
      *a2 = v8;
    return v7;
  }
  return result;
}
