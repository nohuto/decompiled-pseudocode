/*
 * XREFs of ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C0078CE0
 * Callers:
 *     ldevLoadDriver @ 0x1C0075290 (ldevLoadDriver.c)
 * Callees:
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00792B8 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct _LDEV *ldevBindDisplayStub(void)
{
  struct _LDEV *i; // rdi
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  struct _LDEV *v3; // rcx
  __int64 v5; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-B8h] BYREF
  void *v7; // [rsp+28h] [rbp-B0h]
  PVOID BackTrace[21]; // [rsp+30h] [rbp-A8h] BYREF

  for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
  {
    if ( (*((_DWORD *)i + 8) & 8) != 0 )
    {
      ++*((_DWORD *)i + 7);
      return i;
    }
  }
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646C47) == 0x76646C47
    && (v5 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1986292807 )
    {
      if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_6;
    }
    Pool2 = ExAllocatePool2(260LL, 920LL);
    if ( !Pool2 )
      return 0LL;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v1,
                              Pool2,
                              BackTrace) )
      {
        i = (struct _LDEV *)Pool2;
        goto LABEL_8;
      }
LABEL_24:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return 0LL;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
      goto LABEL_24;
    Pool2 += 16LL;
  }
  else
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, 904LL);
  }
  i = (struct _LDEV *)Pool2;
  if ( !Pool2 )
    return i;
LABEL_8:
  *(_DWORD *)(Pool2 + 32) |= 0xAu;
  *(_DWORD *)(Pool2 + 60) = 0;
  *(_QWORD *)(Pool2 + 896) = Pool2 + 64;
  *(_DWORD *)(Pool2 + 24) = 1;
  *(_DWORD *)(Pool2 + 28) = 1;
  v6[0] = 196864;
  v6[1] = 16;
  v7 = &unk_1C028ED50;
  if ( !(unsigned int)ldevFillTable(Pool2, v6) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
    return 0LL;
  }
  if ( gpldevDrivers )
    *((_QWORD *)gpldevDrivers + 1) = Pool2;
  v3 = gpldevDrivers;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)Pool2 = v3;
  gpldevDrivers = (struct _LDEV *)Pool2;
  return i;
}
