__int64 __fastcall IopCreateLegacyDeviceIds(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // r15
  __int64 v7; // rcx
  unsigned int v8; // r14d
  wchar_t *Pool2; // rdi
  int v10; // ebx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+8h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp+20h] BYREF

  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  if ( a1 && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0 && *(_QWORD *)(v4 + 48) )
  {
    if ( a3 )
    {
      v5 = *(_DWORD *)(a3 + 4);
      if ( (unsigned int)(v5 + 1) > 0x13 )
        v5 = 18;
    }
    else
    {
      v5 = 0;
    }
    v6 = v5;
    v7 = -1LL;
    do
      ++v7;
    while ( (&off_14000A4F8)[v6][v7] );
    v8 = 2 * (*a2 + (_DWORD)v7) + 42;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v8, 1869181008LL);
    if ( Pool2 )
    {
      v10 = RtlStringCchPrintfExW(
              Pool2,
              (unsigned __int64)v8 >> 1,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"%ws%ws\\%wZ",
              L"DETECTED",
              (&off_14000A4F8)[v6],
              a2);
      if ( v10 >= 0 )
      {
        v10 = RtlStringCchPrintfW(ppszDestEnd + 1, pcchRemaining - 1, L"%ws\\%wZ", L"DETECTED", a2);
        if ( v10 >= 0 )
          v10 = CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v4 + 48), 0LL, 3u, 7u, (__int64)Pool2, v8, 0);
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
