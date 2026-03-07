__int64 __fastcall RIMApiSetValidateDeviceSignature(
        struct _DEVICE_OBJECT *a1,
        struct _FILE_OBJECT *a2,
        struct _HIDP_PREPARSED_DATA *a3,
        struct _HIDP_CAPS *a4,
        __int64 a5,
        __int64 *a6)
{
  char v6; // r14
  unsigned int v8; // ebx
  unsigned __int16 v9; // r12
  __int64 v10; // rcx
  int LicensingType; // eax
  int v12; // esi
  bool v13; // zf
  __int64 NumberFeatureValueCaps; // rax
  __int64 v15; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rdi
  unsigned __int64 v17; // rbx
  int v18; // eax
  __int64 Pool2; // rbx
  _QWORD *v20; // rax
  unsigned int v21; // r10d
  __int64 v22; // r11
  int SpecificValueCaps; // edi
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // xmm0_8
  PDEVICE_OBJECT v27; // rcx
  __int16 v28; // r9
  USHORT v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v31; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v32; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  __int64 SystemInformation; // [rsp+70h] [rbp-90h] BYREF
  _HID_COLLECTION_INFORMATION v36; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v37[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  PVOID BackTrace[26]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0;
  v8 = 0;
  v31 = 0;
  v9 = 197;
  if ( !RIMIsRunningOnDesktop((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4) )
    return 0LL;
  EtwTraceTHQAStart(v10);
  SystemInformation = 8LL;
  ReturnLength = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) >= 0
    && (SystemInformation & 0x200000000LL) != 0 )
  {
    LicensingType = _GetLicensingType();
    v8 = 4;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    LicensingType = _GetLicensingType();
  }
  v13 = LicensingType == 0;
  NumberFeatureValueCaps = a4->NumberFeatureValueCaps;
  v15 = 3LL;
  if ( v13 )
    v8 = 3;
  v30[0] = a4->NumberFeatureValueCaps;
  v32 = v8;
  if ( !(_WORD)NumberFeatureValueCaps )
    goto LABEL_57;
  v16 = gpLeakTrackingAllocator;
  v17 = 72 * NumberFeatureValueCaps;
  v33 = 1668707157;
  v38 = 260LL;
  v18 = *(_DWORD *)gpLeakTrackingAllocator;
  *(_QWORD *)&v36.DescriptorSize = v17;
  switch ( v18 )
  {
    case 0:
      Pool2 = ExAllocatePool2(260LL, v17, 1668707157LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
      goto LABEL_29;
    case 1:
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63767355u)
        || v17 + 16 < v17 )
      {
        break;
      }
      v20 = (_QWORD *)ExAllocatePool2(v38 & 0xFFFFFFFFFFFFFFFDuLL, v17 + 16, v33);
      Pool2 = (__int64)v20;
      if ( !v20
        || (_InterlockedIncrement64((volatile signed __int64 *)v16 + 14),
            *v20 = 1668707157LL,
            Pool2 = (__int64)(v20 + 2),
            v20 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v16 + 1),
          0x63767355uLL);
      }
LABEL_29:
      if ( !Pool2 )
        break;
LABEL_32:
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(2LL, 0LL, 0LL, 197LL, Pool2, (__int64)v30, (__int64)a3);
      if ( SpecificValueCaps >= 0 )
      {
LABEL_36:
        v26 = *a6;
        *(_DWORD *)&v36.ProductID = *((_DWORD *)a6 + 2);
        *(_QWORD *)&v36.DescriptorSize = v26;
        RetrieveAndVerifySignature(a1, a2, v9, (struct _HIDP_VALUE_CAPS *)Pool2, a4, a3, &v36, v31, &v32);
LABEL_37:
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
        goto LABEL_58;
      }
      v13 = *(_DWORD *)(a5 + 24) == 7;
      v25 = a4->NumberFeatureValueCaps;
      v30[0] = a4->NumberFeatureValueCaps;
      if ( v13 )
      {
        SpecificValueCaps = CheckForSegmentedSignatureBlob(a3, v25, (struct _HIDP_VALUE_CAPS *)Pool2, &v31);
        if ( SpecificValueCaps >= 0 )
        {
          v9 = 199;
          goto LABEL_36;
        }
        v27 = WPP_GLOBAL_Control;
        LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_47:
          SpecificValueCaps = -1073741668;
          goto LABEL_37;
        }
        v28 = 31;
      }
      else
      {
        v27 = WPP_GLOBAL_Control;
        LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v28 = 32;
      }
      WPP_RECORDER_AND_TRACE_SF_D(
        v27->AttachedDevice,
        v25,
        v24,
        (_DWORD)gRimLog,
        3,
        1,
        v28,
        (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
        SpecificValueCaps);
      goto LABEL_47;
    case 2:
      v37[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668707157, v37) )
      {
        v37[0] = (unsigned __int64)&v38;
        v37[1] = (unsigned __int64)&v33;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v16,
                  (__int64)v37,
                  &v36);
        goto LABEL_29;
      }
      if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
      {
        v17 += 16LL;
        v6 = 1;
        *(_QWORD *)&v36.DescriptorSize = v17;
      }
      Pool2 = ExAllocatePool2(v22, v17, v21);
      if ( !Pool2 )
        break;
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v6 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v16,
               (const void *)Pool2,
               v37[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_29;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v16,
                  Pool2,
                  v37[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_32;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      break;
  }
LABEL_57:
  SpecificValueCaps = -1073741668;
LABEL_58:
  if ( v32 == 1 || v32 == 2 && *(_DWORD *)(a5 + 24) == 7 || v12 )
    *(_DWORD *)(a5 + 360) |= 0x100u;
  EtwTraceTHQAStop(v15);
  if ( !v12 )
  {
    if ( SpecificValueCaps >= 0 )
    {
LABEL_67:
      UserLogError(1073742091);
      return (unsigned int)SpecificValueCaps;
    }
    if ( *(_DWORD *)(a5 + 24) == 7 )
    {
      UserLogError(-1073741554);
      goto LABEL_67;
    }
  }
  return 0LL;
}
