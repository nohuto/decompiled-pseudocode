__int64 __fastcall UserAllocDefaultCompositionSecurityDescriptor(int a1, __int64 *a2)
{
  char v2; // r12
  __int64 Pool2; // rbx
  NTSTATUS InformationToken; // edi
  ULONG v6; // eax
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  ULONG v8; // r15d
  unsigned __int64 v9; // r14
  int v10; // ecx
  unsigned __int64 v11; // rbx
  PSID v12; // r8
  __int64 v13; // rax
  void *v14; // rsi
  unsigned __int64 v15; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  PSID *QuotaZInit; // r14
  NTSTATUS v18; // eax
  NSInstrumentation::CLeakTrackingAllocator *v19; // r14
  unsigned __int64 v20; // rsi
  int v21; // eax
  __int64 UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64; // rsi
  __int64 v23; // rax
  __int64 SecurityDescriptor; // rax
  _QWORD *v26; // rax
  unsigned int v27; // edx
  __int64 v28; // r10
  char v29; // si
  _QWORD *v30; // rax
  unsigned int v31; // r10d
  ULONG v32; // [rsp+30h] [rbp-D0h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C0h] BYREF
  int TokenInformation; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v37[2]; // [rsp+58h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  ULONG v40; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  PSID v42; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v47; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v48; // [rsp+A8h] [rbp-58h]
  PVOID BackTrace[20]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v50[26]; // [rsp+150h] [rbp+50h] BYREF
  ULONG AceListLength; // [rsp+240h] [rbp+140h] BYREF
  ULONG TokenInformationLength; // [rsp+248h] [rbp+148h] BYREF

  v2 = 0;
  Sid = 0LL;
  Pool2 = 0LL;
  v42 = 0LL;
  TokenHandle = 0LL;
  *a2 = 0LL;
  InformationToken = AllocateLocalSystemSid(&Sid);
  if ( InformationToken < 0 )
    goto LABEL_28;
  v6 = RtlLengthSid(Sid);
  v7 = gpLeakTrackingAllocator;
  v8 = v6;
  v34 = 1702064981;
  v44 = 260LL;
  v9 = v6 + 8;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  v11 = v9;
  v45 = v9;
  if ( !v10 )
  {
    Pool2 = ExAllocatePool2(261LL, (unsigned int)v9, 1702064981LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
LABEL_5:
    if ( Pool2 )
      goto LABEL_6;
LABEL_56:
    Pool2 = 0LL;
LABEL_57:
    InformationToken = -1073741801;
    goto LABEL_28;
  }
  if ( v10 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65737355u)
      || v9 + 16 <= v9 )
    {
      goto LABEL_56;
    }
    v26 = (_QWORD *)ExAllocatePool2(v44 & 0xFFFFFFFFFFFFFFFCuLL | 1, v9 + 16, v34);
    Pool2 = (__int64)v26;
    if ( !v26
      || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
          *v26 = 1702064981LL,
          Pool2 = (__int64)(v26 + 2),
          v26 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v7 + 1),
        (const void *)0x65737355);
    }
    goto LABEL_5;
  }
  if ( v10 != 2 )
    goto LABEL_56;
  *(_QWORD *)v37 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
          gpLeakTrackingAllocator,
          0x65737355u,
          (unsigned __int64 *)v37) )
  {
    v47 = &v44;
    v48 = &v34;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
              v7,
              &v47,
              &v45);
    goto LABEL_5;
  }
  v29 = 0;
  if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
  {
    v11 = v9 + 16;
    v29 = 1;
    v45 = v9 + 16;
  }
  Pool2 = ExAllocatePool2(v28, v11, v27);
  if ( !Pool2 )
    goto LABEL_56;
  _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v29 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v7,
                            Pool2,
                            *(_QWORD *)v37,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_5;
    }
LABEL_55:
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_56;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v7,
                           Pool2,
                           *(_QWORD *)v37,
                           BackTrace) )
    goto LABEL_55;
LABEL_6:
  v12 = Sid;
  AceListLength = v9;
  *(_WORD *)Pool2 = 0;
  *(_WORD *)(Pool2 + 2) = v9;
  *(_DWORD *)(Pool2 + 4) = 0x10000000;
  RtlCopySid(v8, (PSID)(Pool2 + 8), v12);
  InformationToken = AllocateWindowManagerSid(&v42);
  if ( InformationToken < 0 )
    goto LABEL_28;
  v13 = AllocAce((void *)Pool2, v42, (__int64)&AceListLength);
  v14 = (void *)v13;
  if ( !v13 )
    goto LABEL_57;
  Pool2 = v13;
  if ( !a1 )
  {
LABEL_25:
    SecurityDescriptor = CreateSecurityDescriptor((PVOID)Pool2, AceListLength, 0);
    if ( !SecurityDescriptor )
      InformationToken = -1073741801;
    *a2 = SecurityDescriptor;
    goto LABEL_28;
  }
  TokenInformation = 0;
  InformationToken = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( InformationToken < 0 )
    goto LABEL_28;
  ReturnLength = 0;
  ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
  if ( !TokenInformation )
    goto LABEL_16;
  TokenInformationLength = 0;
  ZwQueryInformationToken(TokenHandle, TokenAppContainerSid, 0LL, 0, &TokenInformationLength);
  QuotaZInit = (PSID *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v16,
                         v15,
                         TokenInformationLength,
                         0x65737355u);
  if ( !QuotaZInit )
  {
    InformationToken = -1073741801;
    Pool2 = (__int64)v14;
    goto LABEL_28;
  }
  v40 = 0;
  InformationToken = ZwQueryInformationToken(
                       TokenHandle,
                       TokenAppContainerSid,
                       QuotaZInit,
                       TokenInformationLength,
                       &v40);
  Pool2 = (__int64)v14;
  if ( InformationToken >= 0 )
  {
    Pool2 = AllocAce(v14, *QuotaZInit, (__int64)&AceListLength);
    if ( !Pool2 )
    {
      InformationToken = -1073741801;
      Pool2 = (__int64)v14;
    }
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
  if ( InformationToken >= 0 )
  {
LABEL_16:
    v32 = 0;
    v18 = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &v32);
    v19 = gpLeakTrackingAllocator;
    v20 = v32;
    InformationToken = v18;
    v36 = 1702064981;
    v46 = 260LL;
    v21 = *(_DWORD *)gpLeakTrackingAllocator;
    v43 = v32;
    if ( !v21 )
    {
      UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = ExAllocatePool2(
                                                                                         261LL,
                                                                                         v32,
                                                                                         1702064981LL);
      if ( UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v19 + 14);
LABEL_19:
      if ( !UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
        goto LABEL_24;
      goto LABEL_20;
    }
    if ( v21 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65737355u)
        || v20 + 16 < v20 )
      {
        goto LABEL_24;
      }
      v30 = (_QWORD *)ExAllocatePool2(v46 & 0xFFFFFFFFFFFFFFFCuLL | 1, v20 + 16, v36);
      UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = (__int64)v30;
      if ( !v30
        || (_InterlockedIncrement64((volatile signed __int64 *)v19 + 14),
            *v30 = 1702064981LL,
            UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = (__int64)(v30 + 2),
            v30 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v19 + 1),
          (const void *)0x65737355);
      }
      goto LABEL_19;
    }
    if ( v21 != 2 )
      goto LABEL_24;
    v41 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x65737355u, &v41) )
    {
      v47 = &v46;
      v48 = &v36;
      UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                                                                                         v19,
                                                                                         &v47,
                                                                                         &v43);
      goto LABEL_19;
    }
    if ( v20 < 0x1000 || (v20 & 0xFFF) != 0 )
    {
      v20 += 16LL;
      v2 = 1;
      v43 = v20;
    }
    UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = ExAllocatePool2(261LL, v20, v31);
    if ( !UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
    {
LABEL_24:
      if ( InformationToken < 0 )
        goto LABEL_28;
      goto LABEL_25;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v19 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(v50);
    if ( v2
      && (unsigned __int64)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v19,
                              UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                              v41,
                              v50) )
      {
        UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 += 16LL;
        goto LABEL_19;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v19,
                                 UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                                 v41,
                                 v50) )
    {
LABEL_20:
      v37[0] = 0;
      InformationToken = ZwQueryInformationToken(
                           TokenHandle,
                           TokenUser,
                           (PVOID)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                           v32,
                           v37);
      if ( InformationToken >= 0 )
      {
        v23 = AllocAce(
                (void *)Pool2,
                *(PSID *)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                (__int64)&AceListLength);
        if ( v23 )
          Pool2 = v23;
        else
          InformationToken = -1073741801;
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(
        gpLeakTrackingAllocator,
        (void *)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64);
      goto LABEL_24;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v19 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64);
    goto LABEL_24;
  }
LABEL_28:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( Sid )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Sid);
  if ( v42 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v42);
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  return (unsigned int)InformationToken;
}
