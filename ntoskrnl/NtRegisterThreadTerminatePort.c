/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x140795600
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402950E0 (ExAllocatePoolWithQuotaTag.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtRegisterThreadTerminatePort(void *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, LpcPortObjectType, CurrentThread->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x70547350u);
    v4 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      PoolWithQuotaTag[1] = Object;
      *PoolWithQuotaTag = CurrentThread[1].InitialStack;
      result = 0;
      CurrentThread[1].InitialStack = v4;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741670;
    }
  }
  return result;
}
