/*
 * XREFs of PsAssignImpersonationToken @ 0x14087A440
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall PsAssignImpersonationToken(PETHREAD Thread, HANDLE Token)
{
  NTSTATUS v2; // edi
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // r9
  PVOID v7; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !Token )
  {
    PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
    return v2;
  }
  PreviousMode = CurrentThread->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Token, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v7 = Object;
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      ObfDereferenceObject(Object);
      return -1073741656;
    }
    v2 = PsImpersonateClient(Thread, Object, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Object + 49));
    ObfDereferenceObject(v7);
    return v2;
  }
  return result;
}
