wchar_t *__fastcall AcpiArblibAllocateArbiterInstance(__int64 a1, unsigned int a2)
{
  int v4; // eax
  wchar_t *Pool2; // rax
  wchar_t *v6; // rbx
  signed __int32 v7; // esi
  const wchar_t *v8; // rax
  volatile signed __int32 *v10; // rbp
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rax
  __int64 v13; // rdx
  NTSTRSAFE_PWSTR v14; // r15
  size_t v15; // rdi
  unsigned int v16; // r14d
  volatile signed __int32 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbp
  size_t pcchRemaining; // [rsp+90h] [rbp+18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 > 6 )
    return 0LL;
  v4 = 74;
  if ( !_bittest(&v4, a2) )
    return 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 480LL, 1097884481LL);
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v7 = _InterlockedExchangeAdd(&AcpiArbiterInstanceCount, 1u);
  ppszDestEnd = Pool2;
  pcchRemaining = 64LL;
  if ( a2 == 1 )
  {
    v8 = L"Port";
  }
  else
  {
    v8 = L"Memory";
    if ( a2 != 3 )
      v8 = L"Bus Number";
  }
  if ( RtlStringCchPrintfExW(v6, 0x40uLL, &ppszDestEnd, &pcchRemaining, 0, L"ACPI %s ", v8) < 0 )
  {
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 760);
  AMLIReferenceHandleEx((__int64)v10);
  v12 = (volatile signed __int32 *)AMLIGetParent(v11);
  v14 = ppszDestEnd;
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12, v13);
    v15 = pcchRemaining;
    if ( pcchRemaining >= 5 )
    {
      AMLIGetNSObjectNameSegment((__int64)v10);
      RtlStringCchPrintfW(v14, v15, L"%C%C%C%C");
      v16 = 4;
      v15 -= 4LL;
      v17 = (volatile signed __int32 *)AMLIGetParent((__int64)v10);
      AMLIDereferenceHandleEx(v10, v18);
      v19 = (__int64)v17;
      while ( 1 )
      {
        v21 = AMLIGetParent(v19);
        if ( !v21 )
          goto LABEL_18;
        if ( v15 < 6 || v16 >= 0x40 )
          break;
        memmove(v14 + 5, v14, 2LL * v16);
        v16 += 5;
        v15 -= 5LL;
        AMLIGetNSObjectNameSegment((__int64)v17);
        RtlStringCchPrintfW(v14, 5uLL, L"%C%C%C%C");
        v14[4] = 46;
        AMLIDereferenceHandleEx(v17, v20);
        v19 = v21;
        v17 = (volatile signed __int32 *)v21;
      }
    }
  }
  else
  {
    v15 = pcchRemaining;
  }
  RtlStringCchPrintfW(v14, v15, L"%x", (unsigned int)(v7 + 1));
LABEL_18:
  v6[63] = 0;
  return v6;
}
