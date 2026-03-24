/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1403A76C0
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140790108 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x1403D3F50 (wcspbrk.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlCultureNameToLCID @ 0x14078EC20 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x14078ECE0 (RtlpGetWindowsPolicy.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // r13
  ULONG_PTR v3; // rdi
  int v4; // r14d
  ULONG_PTR v5; // r15
  PVOID PoolWithTag; // rax
  const WCHAR *v7; // r12
  int v8; // ebx
  wchar_t *v9; // r14
  wchar_t *v10; // rax
  PVOID v11; // rax
  int v12; // ebx
  const WCHAR *v13; // r12
  wchar_t *v14; // r14
  wchar_t *v15; // rax
  PVOID v16; // rax
  int v17; // ebx
  const WCHAR *v18; // r12
  wchar_t *v19; // r14
  wchar_t *v20; // rax
  unsigned int v21; // ebx
  __int64 result; // rax
  int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+24h] [rbp-44h]
  int v25; // [rsp+28h] [rbp-40h]
  BOOL v26; // [rsp+2Ch] [rbp-3Ch]
  int v27; // [rsp+30h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  int v30; // [rsp+C0h] [rbp+58h] BYREF
  int v31; // [rsp+C8h] [rbp+60h]

  v27 = -1;
  v30 = 0;
  v31 = 0;
  v1 = a1;
  v2 = 0LL;
  v3 = 0LL;
  v24 = 0;
  v4 = 0;
  v23 = 0;
  v5 = 0LL;
  v25 = 0;
  v26 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v21 = -1073741811;
    goto LABEL_43;
  }
  v26 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v27 = MEMORY[0];
    ExFreeHeapPool(0LL);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
    v2 = (ULONG_PTR)PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, 4uLL);
    if ( !v2 )
    {
      v24 = 0;
      goto LABEL_47;
    }
    memmove((void *)v2, 0LL, 0LL);
    v7 = (const WCHAR *)v2;
    v8 = 0;
    v9 = wcspbrk((const wchar_t *)v2, L";");
    LOWORD(v10) = 0;
    if ( v9 )
    {
      do
      {
        *v9 = 0;
        RtlInitUnicodeString(&DestinationString, v7);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v30) )
          ++v8;
        v7 = v9 + 1;
        v10 = wcspbrk(v9 + 1, L";");
        v9 = v10;
      }
      while ( v10 );
      v1 = a1;
    }
    if ( *v7 != (_WORD)v10 )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v30) )
        ++v8;
    }
    if ( !v8 )
      ExFreeHeapPool(v2);
    v24 = v8 != 0 ? 4 : 0;
    v2 &= -(__int64)(v8 != 0);
    v4 = 0;
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") >= 0 )
  {
    v11 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
    v3 = (ULONG_PTR)v11;
    if ( v11 )
      memset(v11, 0, 4uLL);
    if ( !v3 )
    {
      v4 = 0;
      goto LABEL_47;
    }
    memmove((void *)v3, 0LL, 0LL);
    v12 = 0;
    v13 = (const WCHAR *)v3;
    v14 = wcspbrk((const wchar_t *)v3, L";");
    LOWORD(v15) = 0;
    if ( v14 )
    {
      do
      {
        *v14 = 0;
        RtlInitUnicodeString(&DestinationString, v13);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v30) )
          ++v12;
        v13 = v14 + 1;
        v15 = wcspbrk(v14 + 1, L";");
        v14 = v15;
      }
      while ( v15 );
      v1 = a1;
    }
    if ( *v13 != (_WORD)v15 )
    {
      RtlInitUnicodeString(&DestinationString, v13);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v30) )
        ++v12;
    }
    if ( !v12 )
      ExFreeHeapPool(v3);
    v4 = v12 != 0 ? 4 : 0;
    v23 = v4;
    v3 &= -(__int64)(v12 != 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v16 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
    v5 = (ULONG_PTR)v16;
    if ( v16 )
      memset(v16, 0, 4uLL);
    if ( v5 )
    {
      memmove((void *)v5, 0LL, 0LL);
      v17 = 0;
      v18 = (const WCHAR *)v5;
      v19 = wcspbrk((const wchar_t *)v5, L";");
      LOWORD(v20) = 0;
      if ( v19 )
      {
        do
        {
          *v19 = 0;
          RtlInitUnicodeString(&DestinationString, v18);
          if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v30) )
            ++v17;
          v18 = v19 + 1;
          v20 = wcspbrk(v19 + 1, L";");
          v19 = v20;
        }
        while ( v20 );
        v1 = a1;
      }
      if ( *v18 != (_WORD)v20 )
      {
        RtlInitUnicodeString(&DestinationString, v18);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v30) )
          ++v17;
      }
      if ( !v17 )
        ExFreeHeapPool(v5);
      v25 = v17 != 0 ? 4 : 0;
      v5 &= -(__int64)(v17 != 0);
      v4 = v23;
      goto LABEL_41;
    }
    v25 = 0;
LABEL_47:
    v21 = -1073741801;
    goto LABEL_42;
  }
LABEL_41:
  v21 = 0;
LABEL_42:
  if ( v2 && v3 )
  {
    ExFreeHeapPool(v3);
    v3 = 0LL;
    v4 = 0;
  }
LABEL_43:
  *(_DWORD *)v1 |= 0x800u;
  *(_DWORD *)(v1 + 116) = v26;
  *(_DWORD *)(v1 + 120) = v27;
  *(_DWORD *)(v1 + 148) = v24;
  *(_DWORD *)(v1 + 144) = v25;
  result = v21;
  *(_QWORD *)(v1 + 128) = v2;
  *(_QWORD *)(v1 + 152) = v3;
  *(_DWORD *)(v1 + 160) = v4;
  *(_QWORD *)(v1 + 136) = v5;
  return result;
}
