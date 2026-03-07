void __fastcall GetMonitorBrightnessCaps(struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *a1)
{
  _DWORD *v1; // r14
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // edx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  int v12; // eax
  __int64 Pool2; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r10
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID BackTrace[26]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v25; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v26; // [rsp+168h] [rbp+68h] BYREF
  __int64 v27; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v28; // [rsp+178h] [rbp+78h] BYREF

  DeviceObject = 0LL;
  v1 = (_DWORD *)((char *)a1 + 592);
  Object = 0LL;
  AttachedDeviceReference = 0LL;
  memset((char *)a1 + 592, 0, 0x13CuLL);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
  if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, PDEVICE_OBJECT *))(DxgkWin32kInterface + 456))(
         (char *)a1 + 8,
         *((unsigned int *)a1 + 4),
         &Object,
         &DeviceObject) < 0 )
    goto LABEL_5;
  if ( !DeviceObject )
    goto LABEL_8;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( !AttachedDeviceReference )
  {
LABEL_6:
    if ( !AttachedDeviceReference )
      goto LABEL_8;
    goto LABEL_7;
  }
  v27 = 0LL;
  if ( (int)GreDeviceIoControlImpl(AttachedDeviceReference, 0x230C00u, 0LL, 0, &v27, 8u, &v26, 0, 0) < 0 )
  {
LABEL_5:
    memset(v1, 0, 0x13CuLL);
    goto LABEL_6;
  }
  v7 = v1[78] ^ (v1[78] ^ (8 * HIDWORD(v27))) & 8;
  v8 = ((unsigned __int8)v7 ^ (unsigned __int8)(8 * BYTE4(v27))) & 0x10 ^ v7;
  v9 = (BYTE4(v27) ^ (unsigned __int8)v8) & 4 ^ v8;
  if ( (int)v27 > 2 )
    v10 = v9 & 0xFFFFFFFC | 2;
  else
    v10 = v9 & 0xFFFFFFFC | 1;
  v1[78] = v10;
  v11 = gpLeakTrackingAllocator;
  v25 = 1886221383;
  v20 = 260LL;
  v22 = 208LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 208LL, 1886221383LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
LABEL_29:
    if ( !Pool2 )
      goto LABEL_7;
    goto LABEL_32;
  }
  if ( v12 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u) )
      goto LABEL_7;
    v14 = (_QWORD *)ExAllocatePool2(v20 & 0xFFFFFFFFFFFFFFFDuLL, 224LL, v25);
    Pool2 = (__int64)v14;
    if ( !v14
      || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
          *v14 = 1886221383LL,
          Pool2 = (__int64)(v14 + 2),
          v14 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v11 + 1),
        (const void *)0x706D7447);
    }
    goto LABEL_29;
  }
  if ( v12 != 2 )
    goto LABEL_7;
  v28 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v28) )
  {
    v23[0] = &v20;
    v23[1] = &v25;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v11,
              (__int64)v23,
              &v22);
    goto LABEL_29;
  }
  Pool2 = ExAllocatePool2(v15, 224LL, 1886221383LL);
  if ( !Pool2 )
    goto LABEL_7;
  _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v11,
                            Pool2,
                            v28,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_29;
    }
LABEL_41:
    _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_7;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v11,
                           Pool2,
                           v28,
                           BackTrace) )
    goto LABEL_41;
LABEL_32:
  v16 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x230C04u, 0LL, 0, (PVOID)Pool2, 0xD0u, &v26, 0, 0);
  if ( v16 >= 0 )
  {
    v17 = 0LL;
    if ( (v1[78] & 2) != 0 )
    {
      v1[75] = *(_DWORD *)(Pool2 + 4);
      v1[76] = *(_DWORD *)(Pool2 + 8);
      v1[77] = *(_DWORD *)(Pool2 + 12);
      if ( *(_DWORD *)(Pool2 + 8) )
      {
        do
        {
          v18 = 3 * v17;
          v17 = (unsigned int)(v17 + 1);
          v1[v18 + 27] = *(_DWORD *)(Pool2 + 4 * v18 + 16);
          v1[v18 + 28] = *(_DWORD *)(Pool2 + 4 * v18 + 20);
          v1[v18 + 29] = *(_DWORD *)(Pool2 + 4 * v18 + 24);
        }
        while ( (unsigned int)v17 < *(_DWORD *)(Pool2 + 8) );
      }
    }
    else
    {
      v1[26] = *(unsigned __int8 *)(Pool2 + 4);
      if ( *(_BYTE *)(Pool2 + 4) )
      {
        do
        {
          *((_BYTE *)v1 + v17) = *(_BYTE *)(v17 + Pool2 + 5);
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < *(unsigned __int8 *)(Pool2 + 4) );
      }
    }
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  if ( v16 < 0 )
    goto LABEL_5;
LABEL_7:
  ObfDereferenceObject(AttachedDeviceReference);
LABEL_8:
  if ( Object )
    ObfDereferenceObject(Object);
}
