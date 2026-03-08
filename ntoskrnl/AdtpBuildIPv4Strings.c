/*
 * XREFs of AdtpBuildIPv4Strings @ 0x140A57A18
 * Callers:
 *     AdtpBuildSockAddrString @ 0x140A5877C (AdtpBuildSockAddrString.c)
 * Callees:
 *     StringCchPrintfW @ 0x1402FAA78 (StringCchPrintfW.c)
 *     RtlIpv4AddressToStringW @ 0x1403B97E0 (RtlIpv4AddressToStringW.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildIPv4Strings(const struct in_addr *a1, __int64 a2, _BYTE *a3, __int64 a4, _BYTE *a5)
{
  unsigned int v9; // ebx
  __int64 Pool2; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( a1->S_un.S_un_w.s_w1 != 2 )
  {
    v9 = -1073741503;
    goto LABEL_14;
  }
  if ( a2 && a3 )
  {
    *(_WORD *)(a2 + 2) = 32;
    Pool2 = ExAllocatePool2(256LL, 32LL, 1799447891LL);
    *(_QWORD *)(a2 + 8) = Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741801;
      goto LABEL_15;
    }
    *a3 = 1;
    *(_WORD *)a2 = 2
                 * ((__int64)((unsigned int)RtlIpv4AddressToStringW(a1 + 1, *(PWSTR *)(a2 + 8)) - *(_DWORD *)(a2 + 8)) >> 1);
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
  if ( StringCchPrintfW(*(STRSAFE_LPWSTR *)(a4 + 8), 8uLL, L"%d", (unsigned __int16)__ROL2__(a1->S_un.S_un_w.s_w2, 8)) >= 0 )
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
