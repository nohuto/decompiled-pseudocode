/*
 * XREFs of FastGetProfileValue @ 0x1C0060B60
 * Callers:
 *     InitScancodeMap @ 0x1C005FBD0 (InitScancodeMap.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C005FEB0 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     RtlLoadStringOrError @ 0x1C00612C0 (RtlLoadStringOrError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall FastGetProfileValue(
        const UNICODE_STRING *a1,
        unsigned int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        unsigned int Size,
        int a7)
{
  char v7; // r15
  const WCHAR *v9; // r12
  const UNICODE_STRING *v11; // r14
  void *i; // rax
  void *v13; // rsi
  PVOID v14; // r14
  unsigned __int64 v15; // rdx
  ULONG *Pool2; // rbx
  NTSTATUS v17; // eax
  __int64 v19; // rax
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h]
  const UNICODE_STRING *v23; // [rsp+40h] [rbp-C0h]
  void *v24; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+100h] [rbp+0h] BYREF
  _WORD v28[40]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  v24 = a5;
  v22 = a2;
  v9 = a3;
  v23 = a1;
  Length = 0;
  v11 = a1;
  v21 = a7 | gdwPolicyFlags;
  DestinationString = 0LL;
  v27 = 0LL;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v28[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v28);
    v9 = v28;
  }
  for ( i = OpenCacheKeyEx(v11, a2, 131097LL, &v21); ; i = OpenCacheKeyEx(v11, v22, 131097LL, &v21) )
  {
    v13 = i;
    if ( !i )
    {
      if ( (a7 & 0x10) == 0 )
        goto LABEL_18;
      return 0LL;
    }
    if ( Size )
    {
      v14 = gpLeakTrackingAllocator;
      Length = Size + 12;
      v15 = Size + 12;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72707355) == 0x72707355
        && (v19 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != 1919972181 )
        {
          if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_7;
        }
        if ( v15 < 0x1000 || (((_WORD)Size + 12) & 0xFFF) != 0 )
        {
          v7 = 1;
          v15 += 16LL;
        }
        Pool2 = (ULONG *)ExAllocatePool2(261LL, v15);
        if ( !Pool2 )
          goto LABEL_16;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( !v7 || (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          v7 = 0;
          if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v14,
                                   Pool2,
                                   BackTrace) )
          {
LABEL_40:
            ExFreePoolWithTag(Pool2, 0);
            goto LABEL_16;
          }
          goto LABEL_9;
        }
        v7 = 0;
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v14,
                                 Pool2,
                                 BackTrace) )
          goto LABEL_40;
        Pool2 += 4;
      }
      else
      {
LABEL_7:
        Pool2 = (ULONG *)ExAllocatePool2(261LL, v15);
      }
      if ( !Pool2 )
        goto LABEL_16;
LABEL_9:
      v11 = v23;
      goto LABEL_10;
    }
    Length = 16;
    Pool2 = (ULONG *)&v27;
LABEL_10:
    RtlInitUnicodeString(&DestinationString, v9);
    v17 = ZwQueryValueKey(v13, &DestinationString, KeyValuePartialInformation, Pool2, Length, &Length);
    if ( v17 >= 0 )
      break;
    if ( v17 == -2147483643 && !Size )
    {
      ZwClose(v13);
      return Pool2[2];
    }
    if ( !v21 )
    {
      if ( Size && Pool2 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          Pool2);
LABEL_16:
      if ( v13 )
        ZwClose(v13);
LABEL_18:
      if ( a4 )
      {
        memmove(v24, a4, Size);
        return Size;
      }
      return 0LL;
    }
    if ( Size && Pool2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        Pool2);
    ZwClose(v13);
  }
  Length = Pool2[2];
  memmove(v24, Pool2 + 3, Length);
  if ( Size )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      Pool2);
  ZwClose(v13);
  return Length;
}
