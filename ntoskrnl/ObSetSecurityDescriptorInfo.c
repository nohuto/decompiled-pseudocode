/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x140751100
 * Callers:
 *     WmipSecurityMethod @ 0x14076BC30 (WmipSecurityMethod.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObLogSecurityDescriptor @ 0x1406965B0 (ObLogSecurityDescriptor.c)
 *     SeComputeQuotaInformationSize @ 0x1406968A0 (SeComputeQuotaInformationSize.c)
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1407510B0 (SeSetSecurityDescriptorInfo.c)
 *     ObAdjustSecurityQuota @ 0x140751258 (ObAdjustSecurityQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(
        _QWORD *Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        __int64 a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // esi
  void *v11; // r14
  int v12; // ebx
  char v13; // al
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v9 = 0;
  v16 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
  v11 = (void *)(*(Object - 1) & 0xFFFFFFFFFFFFFFF0uLL);
  ObjectsSecurityDescriptor = v11;
  v12 = SeSetSecurityDescriptorInfo(
          Object,
          SecurityInformation,
          ModificationDescriptor,
          &ObjectsSecurityDescriptor,
          PoolType,
          GenericMapping);
  if ( v12 < 0 )
  {
    ObjectsSecurityDescriptor = 0LL;
  }
  else
  {
    v12 = ObLogSecurityDescriptor((__int16 *)ObjectsSecurityDescriptor, &v16, 0x10u);
    if ( v12 >= 0 )
    {
      v12 = SeComputeQuotaInformationSize((__int64)ObjectsSecurityDescriptor, &v17);
      if ( v12 >= 0 )
      {
        v12 = ObAdjustSecurityQuota(Object, v17);
        if ( v12 >= 0 )
        {
          v13 = _InterlockedExchange64(Object - 1, (v16 | 0xF) & -(__int64)(v16 != 0));
          v16 = 0LL;
          if ( v11 )
            v9 = (v13 & 0xF) + 1;
        }
      }
    }
  }
  ExReleasePushLockEx(Object - 4, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v16 )
    ObDereferenceSecurityDescriptor(v16, 0x10u);
  if ( v11 && v9 )
    ObDereferenceSecurityDescriptor((__int64)v11, v9);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v12;
}
