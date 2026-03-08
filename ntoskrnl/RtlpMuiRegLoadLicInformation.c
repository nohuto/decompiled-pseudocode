/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x14036F370
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140843F90 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x1403D64C0 (wcspbrk.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlCultureNameToLCID @ 0x1407FE570 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x1407FE630 (RtlpGetWindowsPolicy.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  wchar_t *v2; // r13
  wchar_t *v3; // r12
  int v4; // esi
  wchar_t *Pool2; // rax
  const wchar_t *v6; // rbx
  wchar_t *i; // r14
  wchar_t *v8; // rax
  const wchar_t *v9; // rbx
  int v10; // esi
  wchar_t *j; // r14
  wchar_t *v12; // rax
  const wchar_t *v13; // rbx
  int v14; // esi
  wchar_t *v15; // r14
  unsigned int v16; // ebx
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+24h] [rbp-34h]
  BOOL v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+2Ch] [rbp-2Ch]
  wchar_t *v22; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v24; // [rsp+A8h] [rbp+50h] BYREF
  int v25; // [rsp+B0h] [rbp+58h]
  int v26; // [rsp+B8h] [rbp+60h]

  LODWORD(v21) = -1;
  v24 = 0;
  v25 = 0;
  v2 = 0LL;
  v3 = 0LL;
  v18 = 0;
  v4 = 0;
  v26 = 0;
  v22 = 0LL;
  v19 = 0;
  v20 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v16 = -1073741811;
    goto LABEL_35;
  }
  v20 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v21 = MEMORY[0];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v18 = 4;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 4LL, 1920232557LL);
    v6 = Pool2;
    v2 = Pool2;
    if ( !Pool2 )
    {
      v18 = 0;
LABEL_43:
      v16 = -1073741801;
      goto LABEL_34;
    }
    memmove(Pool2, 0LL, 0LL);
    for ( i = wcspbrk(v6, L";"); i; i = wcspbrk(i + 1, L";") )
    {
      *i = 0;
      RtlInitUnicodeString(&DestinationString, v6);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v24) )
        ++v4;
      v6 = i + 1;
    }
    if ( *v6 )
    {
      RtlInitUnicodeString(&DestinationString, v6);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v24) )
        ++v4;
    }
    if ( !v4 )
    {
      ExFreePoolWithTag(v2, 0);
      v18 = 0;
      v2 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") < 0 )
    goto LABEL_20;
  v26 = 4;
  v8 = (wchar_t *)ExAllocatePool2(256LL, 4LL, 1920232557LL);
  v9 = v8;
  v3 = v8;
  if ( !v8 )
  {
    v4 = 0;
    goto LABEL_43;
  }
  memmove(v8, 0LL, 0LL);
  v10 = 0;
  for ( j = wcspbrk(v9, L";"); j; j = wcspbrk(j + 1, L";") )
  {
    *j = 0;
    RtlInitUnicodeString(&DestinationString, v9);
    if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v24) )
      ++v10;
    v9 = j + 1;
  }
  if ( *v9 )
  {
    RtlInitUnicodeString(&DestinationString, v9);
    if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v24) )
      ++v10;
  }
  if ( !v10 )
  {
    ExFreePoolWithTag(v3, 0);
    v26 = 0;
    v3 = 0LL;
  }
LABEL_20:
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v19 = 4;
    v12 = (wchar_t *)ExAllocatePool2(256LL, 4LL, 1920232557LL);
    v22 = v12;
    v13 = v12;
    if ( !v12 )
    {
      v19 = 0;
      v16 = -1073741801;
      goto LABEL_33;
    }
    memmove(v12, 0LL, 0LL);
    v14 = 0;
    v22 = (wchar_t *)v13;
    v15 = wcspbrk(v13, L";");
    if ( v15 )
    {
      v22 = (wchar_t *)v13;
      do
      {
        *v15 = 0;
        RtlInitUnicodeString(&DestinationString, v13);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v24) )
          ++v14;
        v13 = v15 + 1;
        v15 = wcspbrk(v15 + 1, L";");
      }
      while ( v15 );
    }
    if ( *v13 )
    {
      RtlInitUnicodeString(&DestinationString, v13);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v24) )
        ++v14;
    }
    if ( !v14 )
    {
      ExFreePoolWithTag(v22, 0);
      v19 = 0;
      v22 = 0LL;
    }
  }
  v16 = 0;
LABEL_33:
  v4 = v26;
LABEL_34:
  if ( v2 && v3 )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
    v4 = 0;
  }
LABEL_35:
  *(_DWORD *)a1 |= 0x800u;
  *(_DWORD *)(a1 + 116) = v20;
  *(_DWORD *)(a1 + 120) = v21;
  *(_DWORD *)(a1 + 148) = v18;
  *(_QWORD *)(a1 + 136) = v22;
  *(_DWORD *)(a1 + 144) = v19;
  result = v16;
  *(_QWORD *)(a1 + 128) = v2;
  *(_QWORD *)(a1 + 152) = v3;
  *(_DWORD *)(a1 + 160) = v4;
  return result;
}
