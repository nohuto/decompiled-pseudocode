__int64 __fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v3; // esi
  NSInstrumentation::CLeakTrackingAllocator *v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // eax
  __int64 Pool2; // rdi
  NTSTATUS v11; // ebx
  _QWORD *v13; // rax
  unsigned int v14; // edx
  char v15; // r14
  __int64 v16; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int64 v21; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = AceListLength + 8;
  if ( AceListLength + 8 < AceListLength || AceListLength + 48 < AceListLength + 8 )
    return 0LL;
  v7 = gpLeakTrackingAllocator;
  v8 = AceListLength + 48;
  v20 = 1702064981;
  v16 = 260LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  v17 = v8;
  if ( !v9 )
  {
    Pool2 = ExAllocatePool2(261LL, (unsigned int)v8, 1702064981LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
    goto LABEL_6;
  }
  if ( v9 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65737355u)
      || v8 + 16 < v8 )
    {
      return 0LL;
    }
    v13 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFCuLL | 1, v8 + 16, v20);
    Pool2 = (__int64)v13;
    if ( !v13
      || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
          *v13 = 1702064981LL,
          Pool2 = (__int64)(v13 + 2),
          v13 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v7 + 1),
        (const void *)0x65737355);
    }
LABEL_6:
    if ( !Pool2 )
      return 0LL;
    goto LABEL_7;
  }
  if ( v9 != 2 )
    return 0LL;
  v21 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x65737355u, &v21) )
  {
    v18[0] = &v16;
    v18[1] = &v20;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
              (__int64)v7,
              (__int64)v18,
              &v17);
    goto LABEL_6;
  }
  v15 = 0;
  if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
  {
    v8 += 16LL;
    v15 = 1;
    v17 = v8;
  }
  Pool2 = ExAllocatePool2(261LL, v8, v14);
  if ( !Pool2 )
    return 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v7,
                            Pool2,
                            v21,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_6;
    }
LABEL_30:
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 0LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v7,
                           Pool2,
                           v21,
                           BackTrace) )
    goto LABEL_30;
LABEL_7:
  RtlCreateSecurityDescriptor((PSECURITY_DESCRIPTOR)Pool2, 1u);
  if ( RtlCreateAcl((PACL)(Pool2 + 40), v3, 2u) >= 0
    && RtlAddAce((PACL)(Pool2 + 40), 2u, 0xFFFFFFFF, AceList, AceListLength) >= 0 )
  {
    v11 = RtlSetDaclSecurityDescriptor((PSECURITY_DESCRIPTOR)Pool2, 1u, (PACL)(Pool2 + 40), DaclDefaulted);
    RtlSetSaclSecurityDescriptor((PSECURITY_DESCRIPTOR)Pool2, 0, 0LL, 0);
    RtlSetOwnerSecurityDescriptor((PSECURITY_DESCRIPTOR)Pool2, 0LL, 0);
    RtlSetGroupSecurityDescriptor((PSECURITY_DESCRIPTOR)Pool2, 0LL, 0);
    if ( v11 >= 0 )
      return Pool2;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  return 0LL;
}
