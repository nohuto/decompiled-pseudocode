__int64 __fastcall AllocateLocalSystemSid(void **a1)
{
  ULONG v2; // eax
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  unsigned __int64 v4; // rbx
  int v5; // eax
  __int64 Pool2; // rbx
  NTSTATUS v7; // edi
  _QWORD *v9; // rax
  char v10; // si
  __int64 v11; // [rsp+28h] [rbp-99h] BYREF
  __int64 v12; // [rsp+30h] [rbp-91h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-89h] BYREF
  PVOID BackTrace[20]; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int64 IdentifierAuthority[2]; // [rsp+E8h] [rbp+27h] BYREF

  *a1 = 0LL;
  v2 = RtlLengthRequiredSid(1u);
  v3 = gpLeakTrackingAllocator;
  v4 = v2;
  LODWORD(v11) = 1702064981;
  v12 = 260LL;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v13 = v4;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(261LL, (unsigned int)v4, 1702064981LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
LABEL_4:
    if ( Pool2 )
      goto LABEL_5;
    return (unsigned int)-1073741801;
  }
  if ( v5 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65737355u)
      || v4 + 16 < v4 )
    {
      return (unsigned int)-1073741801;
    }
    v9 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFCuLL | 1, v4 + 16, (unsigned int)v11);
    Pool2 = (__int64)v9;
    if ( !v9
      || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
          *v9 = 1702064981LL,
          Pool2 = (__int64)(v9 + 2),
          v9 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        (const void *)0x65737355);
    }
    goto LABEL_4;
  }
  if ( v5 != 2 )
    return (unsigned int)-1073741801;
  IdentifierAuthority[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
          gpLeakTrackingAllocator,
          0x65737355u,
          IdentifierAuthority) )
  {
    IdentifierAuthority[0] = (unsigned __int64)&v12;
    IdentifierAuthority[1] = (unsigned __int64)&v11;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
              (__int64)v3,
              (__int64)IdentifierAuthority,
              &v13);
    goto LABEL_4;
  }
  v10 = 0;
  if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
  {
    v4 += 16LL;
    v10 = 1;
    v13 = v4;
  }
  Pool2 = ExAllocatePool2(261LL, v4, 1702064981LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v3,
                            Pool2,
                            IdentifierAuthority[0],
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_27:
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return (unsigned int)-1073741801;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v3,
                           Pool2,
                           IdentifierAuthority[0],
                           BackTrace) )
    goto LABEL_27;
LABEL_5:
  LODWORD(IdentifierAuthority[0]) = 0;
  WORD2(IdentifierAuthority[0]) = 1280;
  v7 = RtlInitializeSid((PSID)Pool2, (PSID_IDENTIFIER_AUTHORITY)IdentifierAuthority, 1u);
  if ( v7 < 0 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  }
  else
  {
    *RtlSubAuthoritySid((PSID)Pool2, 0) = 18;
    *a1 = (void *)Pool2;
  }
  return (unsigned int)v7;
}
