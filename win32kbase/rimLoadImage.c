__int64 __fastcall rimLoadImage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  struct _UNICODE_STRING v5; // xmm6
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r14d
  wchar_t *v21; // rax
  const WCHAR *v22; // rax
  NTSTATUS v23; // eax
  NSInstrumentation::CLeakTrackingAllocator *v24; // rbx
  unsigned __int64 v25; // rdi
  int v26; // eax
  __int64 Pool2; // rsi
  NTSTATUS v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // rdi
  char *v31; // rdi
  PVOID v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v51; // rax
  __int64 v52; // r10
  char v53; // r15
  ULONG ReturnLength; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v55; // [rsp+30h] [rbp-D8h] BYREF
  ULONG Size[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v57; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 AnsiString; // [rsp+50h] [rbp-B8h] BYREF
  struct _STRING AnsiString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING SourceString_8; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v63[2]; // [rsp+88h] [rbp-80h] BYREF
  PVOID BackTrace[20]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE SystemInformation[304]; // [rsp+138h] [rbp+30h] BYREF

  DestinationString_8 = 0LL;
  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  *(_OWORD *)(v4 + 32) = 0LL;
  *(_OWORD *)(v4 + 48) = 0LL;
  *(_OWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 80) = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\SystemRoot\\System32\\Drivers\\hidparse.sys");
  v5 = DestinationString_8;
  *(struct _UNICODE_STRING *)(SGDGetUserSessionState(v7, v6, v8, v9) + 32) = v5;
  v14 = SGDGetUserSessionState(v11, v10, v12, v13);
  v15 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, (PVOID)(v14 + 32), 0x38uLL);
  v20 = 0;
  if ( v15 >= 0 )
    return SGDGetUserSessionState(v17, v16, v18, v19) + 32;
  if ( v15 != -1073741554 )
    return 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  ReturnLength = 0;
  AnsiString_8 = 0LL;
  SourceString_8 = 0LL;
  v21 = wcsrchr(L"\\SystemRoot\\System32\\Drivers\\hidparse.sys", 0x5Cu);
  v22 = v21 ? v21 + 1 : L"\\SystemRoot\\System32\\Drivers\\hidparse.sys";
  RtlInitUnicodeString(&SourceString_8, v22);
  if ( RtlUnicodeStringToAnsiString(&AnsiString_8, &SourceString_8, 1u) < 0 )
    return 0LL;
  v23 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
  if ( (int)(v23 + 0x80000000) >= 0 && v23 != -1073741820 )
    goto LABEL_19;
  while ( 1 )
  {
    v24 = gpLeakTrackingAllocator;
    v25 = ReturnLength;
    v55 = 1684825170;
    v58 = 260LL;
    v26 = *(_DWORD *)gpLeakTrackingAllocator;
    AnsiString = ReturnLength;
    if ( !v26 )
    {
      Pool2 = ExAllocatePool2(260LL, ReturnLength, 1684825170LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v24 + 14);
LABEL_10:
      if ( !Pool2 )
        goto LABEL_19;
      goto LABEL_11;
    }
    if ( v26 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x646C6452u)
        || v25 + 16 < v25 )
      {
        goto LABEL_19;
      }
      v51 = (_QWORD *)ExAllocatePool2(v58 & 0xFFFFFFFFFFFFFFFDuLL, v25 + 16, v55);
      Pool2 = (__int64)v51;
      if ( !v51
        || (_InterlockedIncrement64((volatile signed __int64 *)v24 + 14),
            *v51 = 1684825170LL,
            Pool2 = (__int64)(v51 + 2),
            v51 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v24 + 1),
          (const void *)0x646C6452);
      }
      goto LABEL_10;
    }
    if ( v26 != 2 )
      goto LABEL_19;
    v57 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x646C6452u, &v57) )
    {
      v63[0] = &v58;
      v63[1] = &v55;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v24,
                (__int64)v63,
                &AnsiString);
      goto LABEL_10;
    }
    v53 = 0;
    if ( v25 < 0x1000 || (v25 & 0xFFF) != 0 )
    {
      v25 += 16LL;
      v53 = 1;
      AnsiString = v25;
    }
    Pool2 = ExAllocatePool2(v52, v25, 1684825170LL);
    if ( !Pool2 )
      goto LABEL_19;
    _InterlockedIncrement64((volatile signed __int64 *)v24 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v53 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v24,
                               Pool2,
                               v57,
                               BackTrace) )
        goto LABEL_43;
      Pool2 += 16LL;
      goto LABEL_10;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v24,
                             Pool2,
                             v57,
                             BackTrace) )
    {
LABEL_43:
      _InterlockedIncrement64((volatile signed __int64 *)v24 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      goto LABEL_19;
    }
LABEL_11:
    v28 = ZwQuerySystemInformation(SystemModuleInformation, (PVOID)Pool2, ReturnLength, &ReturnLength);
    if ( v28 != -1073741820 )
      break;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
  }
  if ( v28 >= 0 )
  {
    v29 = 0;
    if ( *(_DWORD *)Pool2 )
    {
      while ( 1 )
      {
        v30 = 296LL * v29;
        if ( !strnicmp(
                (const char *)(Pool2 + v30 + *(unsigned __int16 *)(v30 + Pool2 + 46) + 48LL),
                AnsiString_8.Buffer,
                AnsiString_8.Length) )
          break;
        if ( ++v29 >= *(_DWORD *)Pool2 )
          goto LABEL_18;
      }
      v31 = *(char **)(v30 + Pool2 + 24);
      Size[0] = 0;
      v32 = RtlImageDirectoryEntryToData(v31, 1u, 0, Size);
      *(_QWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 72) = v32;
      v37 = &v31[RtlImageNtHeader(v31)->OptionalHeader.AddressOfEntryPoint];
      *(_QWORD *)(SGDGetUserSessionState(v39, v38, v40, v41) + 48) = v31;
      *(_QWORD *)(SGDGetUserSessionState(v43, v42, v44, v45) + 56) = 0LL;
      v20 = 1;
      *(_QWORD *)(SGDGetUserSessionState(v47, v46, v48, v49) + 64) = v37;
    }
  }
LABEL_18:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
LABEL_19:
  RtlFreeAnsiString(&AnsiString_8);
  if ( v20 == 1 )
    return SGDGetUserSessionState(v17, v16, v18, v19) + 32;
  return 0LL;
}
