__int64 __fastcall AdtpBuildIPv6Strings(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _BYTE *a5)
{
  unsigned int v9; // ebx
  __int64 Pool2; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *(_WORD *)a1 != 23 )
  {
    v9 = -1073741503;
    goto LABEL_14;
  }
  if ( a2 && a3 )
  {
    *(_WORD *)(a2 + 2) = 110;
    Pool2 = ExAllocatePool2(256LL, 110LL, 1799447891LL);
    *(_QWORD *)(a2 + 8) = Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741801;
      goto LABEL_15;
    }
    *a3 = 1;
    *(_WORD *)a2 = 2
                 * ((__int64)((unsigned int)RtlIpv6AddressToStringW(
                                              (const struct in6_addr *)(a1 + 8),
                                              *(PWSTR *)(a2 + 8))
                            - *(_DWORD *)(a2 + 8)) >> 1);
  }
  if ( !a4 || !a5 )
    return 0;
  *(_WORD *)(a4 + 2) = 16;
  v11 = ExAllocatePool2(256LL, 16LL, 1799447891LL);
  *(_QWORD *)(a4 + 8) = v11;
  if ( !v11 )
  {
    v9 = -1073741801;
    goto LABEL_14;
  }
  *a5 = 1;
  if ( StringCchPrintfW(*(STRSAFE_LPWSTR *)(a4 + 8), 8uLL, L"%d", (unsigned __int16)__ROL2__(*(_WORD *)(a1 + 2), 8)) >= 0 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * v12) );
    *(_WORD *)a4 = 2 * v12;
    return 0;
  }
  v9 = -1073741811;
LABEL_14:
  if ( a3 )
  {
LABEL_15:
    if ( *a3 )
    {
      *a3 = 0;
      ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
    }
  }
  if ( a5 && *a5 )
  {
    *a5 = 0;
    ExFreePoolWithTag(*(PVOID *)(a4 + 8), 0);
  }
  return v9;
}
