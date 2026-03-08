/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x140750F44
 * Callers:
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140750EA4 (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObLogSecurityDescriptor @ 0x1406965B0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1407510B0 (SeSetSecurityDescriptorInfo.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, ULONG *a2, void *a3, POOL_TYPE a4, PGENERIC_MAPPING a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *GenericMapping; // r13
  volatile signed __int64 *v11; // rbx
  int v12; // ebp
  unsigned int v13; // edx
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+70h] [rbp+8h] BYREF

  ObjectsSecurityDescriptor = 0LL;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  GenericMapping = a5;
  while ( 1 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v11;
    v12 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, a4, GenericMapping);
    if ( v12 < 0 )
      break;
    v12 = ObLogSecurityDescriptor((__int16 *)ObjectsSecurityDescriptor, &v15, 1u);
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
    if ( v12 < 0 )
      goto LABEL_13;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = v15;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite(&IopSecurityResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v13 = 2;
LABEL_9:
      ObDereferenceSecurityDescriptor((__int64)v11, v13);
      return (unsigned int)v12;
    }
    ExReleaseResourceLite(&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ObDereferenceSecurityDescriptor((__int64)v11, 1u);
    ObDereferenceSecurityDescriptor(v15, 1u);
  }
  if ( v11 )
  {
LABEL_13:
    v13 = 1;
    goto LABEL_9;
  }
  return (unsigned int)v12;
}
