/*
 * XREFs of NtSetIoCompletionEx @ 0x1406F7950
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx @ 0x140292850 (IoSetIoCompletionEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetIoCompletionEx(void *a1, void *a2, int a3, int a4, int a5, __int64 a6)
{
  NTSTATUS v9; // eax
  PVOID v10; // rsi
  int v11; // edi
  NTSTATUS v12; // eax
  PVOID v13; // rbx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v16; // [rsp+48h] [rbp-10h] BYREF

  Object = 0LL;
  v9 = ObReferenceObjectByHandle(a1, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  v10 = Object;
  v11 = v9;
  if ( v9 < 0 )
    return (unsigned int)v11;
  v16 = 0LL;
  v12 = ObReferenceObjectByHandle(a2, 2u, ObjectType, KeGetCurrentThread()->PreviousMode, &v16, 0LL);
  v13 = v16;
  v11 = v12;
  if ( v12 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0) )
    {
      v11 = -1073741584;
    }
    else
    {
      v11 = IoSetIoCompletionEx((int)Object, a3, a4, a5, a6, 0, (__int64)v13 + 8);
      if ( v11 >= 0 )
        goto LABEL_5;
      *(_DWORD *)v16 = 0;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
  }
LABEL_5:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v11;
}
