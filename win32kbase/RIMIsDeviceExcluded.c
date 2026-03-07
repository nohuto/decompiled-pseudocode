__int64 __fastcall RIMIsDeviceExcluded(__int16 a1, struct _UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rsi
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 Pool2; // rdi
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // r14
  unsigned __int64 v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[26]; // [rsp+90h] [rbp-70h] BYREF
  ULONG ResultLength; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v19; // [rsp+180h] [rbp+80h] BYREF
  void *KeyHandle; // [rsp+188h] [rbp+88h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( a1 == 1 )
  {
    ResultLength = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\ExcludedDEvices");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
        || !ResultLength )
      {
        goto LABEL_34;
      }
      v4 = gpLeakTrackingAllocator;
      v5 = ResultLength;
      v19 = 2019914578;
      v13 = 260LL;
      v6 = *(_DWORD *)gpLeakTrackingAllocator;
      v14 = ResultLength;
      if ( !v6 )
      {
        Pool2 = ExAllocatePool2(260LL, ResultLength, 2019914578LL);
        if ( Pool2 )
          _InterlockedAdd64((volatile signed __int64 *)v4 + 14, 1uLL);
LABEL_25:
        if ( Pool2 )
        {
LABEL_28:
          if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)Pool2, ResultLength, &ResultLength) >= 0
            && *(_DWORD *)(Pool2 + 4) == 4
            && (_DWORD)Pool2 == -11 )
          {
            v2 = 1;
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
        }
LABEL_34:
        ZwClose(KeyHandle);
        return v2;
      }
      if ( v6 == 1 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78657352u)
          || v5 + 16 < v5 )
        {
          goto LABEL_34;
        }
        v8 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, v5 + 16, v19);
        Pool2 = (__int64)v8;
        if ( !v8
          || (_InterlockedAdd64((volatile signed __int64 *)v4 + 14, 1uLL),
              *v8 = 2019914578LL,
              Pool2 = (__int64)(v8 + 2),
              v8 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v4 + 1),
            0x78657352uLL);
        }
        goto LABEL_25;
      }
      if ( v6 != 2 )
        goto LABEL_34;
      v12[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2019914578, v12) )
      {
        v12[0] = (unsigned __int64)&v13;
        v12[1] = (unsigned __int64)&v19;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v4,
                  (__int64)v12,
                  &v14);
        goto LABEL_25;
      }
      v10 = 0;
      if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
      {
        v5 += 16LL;
        v10 = 1;
        v14 = v5;
      }
      Pool2 = ExAllocatePool2(v9, v5, 2019914578LL);
      if ( !Pool2 )
        goto LABEL_34;
      _InterlockedAdd64((volatile signed __int64 *)v4 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v4,
               (const void *)Pool2,
               v12[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_25;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v4,
                  Pool2,
                  v12[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_28;
      }
      _InterlockedAdd64((volatile signed __int64 *)v4 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      goto LABEL_34;
    }
  }
  return v2;
}
