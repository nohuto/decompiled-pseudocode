/*
 * XREFs of PsAssignImpersonationToken @ 0x14064FBF0
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall PsAssignImpersonationToken(PETHREAD Thread, HANDLE Token)
{
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS v4; // ebx
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // r9
  struct _DMA_ADAPTER *v7; // rsi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !Token )
  {
    PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
    return 0;
  }
  PreviousMode = CurrentThread->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Token, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v7 = (struct _DMA_ADAPTER *)Object;
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      return -1073741656;
    }
    v4 = PsImpersonateClient(Thread, Object, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Object + 49));
    HalPutDmaAdapter(v7);
    return v4;
  }
  return result;
}
