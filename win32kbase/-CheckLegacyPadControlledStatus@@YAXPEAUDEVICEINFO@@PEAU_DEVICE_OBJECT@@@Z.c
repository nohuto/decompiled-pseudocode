/*
 * XREFs of ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01BFCD4
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1C003017C (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall CheckLegacyPadControlledStatus(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2)
{
  struct _UNICODE_STRING *v3; // r14
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // di
  __int64 v16; // rax
  unsigned __int64 v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[24]; // [rsp+90h] [rbp-70h] BYREF
  ULONG ResultLength; // [rsp+168h] [rbp+68h] BYREF
  int v24; // [rsp+16Ch] [rbp+6Ch]
  unsigned int v25; // [rsp+170h] [rbp+70h] BYREF
  void *KeyHandle; // [rsp+178h] [rbp+78h] BYREF

  v24 = HIDWORD(a2);
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyControlled");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v3 = (struct _UNICODE_STRING *)((char *)a1 + 888);
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)((char *)a1 + 888),
           KeyValuePartialInformation,
           0LL,
           0,
           &ResultLength) == -1073741772
      || !ResultLength )
    {
      goto LABEL_33;
    }
    v4 = gpLeakTrackingAllocator;
    v5 = ResultLength;
    v19 = ResultLength;
    v25 = 2019914581;
    v18 = 260LL;
    v6 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, ResultLength, 2019914581LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
LABEL_24:
      if ( Pool2 )
      {
LABEL_27:
        if ( ZwQueryValueKey(KeyHandle, v3, KeyValuePartialInformation, (PVOID)Pool2, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(Pool2 + 4) == 4 )
        {
          v15 = *(_BYTE *)(Pool2 + 12);
          if ( (v15 & 1) != 0 )
          {
            v16 = SGDGetUserSessionState(v12, v11, v13, v14);
            *(_DWORD *)(v16 + 16804) |= v15 & 7;
          }
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      }
LABEL_33:
      ZwClose(KeyHandle);
      return;
    }
    if ( v6 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78657355u)
        || v5 + 16 < v5 )
      {
        goto LABEL_33;
      }
      v8 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, v5 + 16, v25);
      Pool2 = (__int64)v8;
      if ( !v8
        || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
            *v8 = 2019914581LL,
            Pool2 = (__int64)(v8 + 2),
            v8 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v4 + 1),
          0x78657355uLL);
      }
      goto LABEL_24;
    }
    if ( v6 != 2 )
      goto LABEL_33;
    v17[0] = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2019914581, v17) )
    {
      v17[0] = (unsigned __int64)&v18;
      v17[1] = (unsigned __int64)&v25;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v4,
                (__int64)v17,
                &v19);
      goto LABEL_24;
    }
    v10 = 0;
    if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
    {
      v5 += 16LL;
      v10 = 1;
      v19 = v5;
    }
    Pool2 = ExAllocatePool2(v9, v5, 2019914581LL);
    if ( !Pool2 )
      goto LABEL_33;
    _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v4,
             (const void *)Pool2,
             v17[0],
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_24;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v4,
                Pool2,
                v17[0],
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_27;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_33;
  }
}
