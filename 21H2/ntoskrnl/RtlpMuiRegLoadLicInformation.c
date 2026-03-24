/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1403AC89C
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140794628 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     wcspbrk @ 0x1403D4650 (wcspbrk.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlCultureNameToLCID @ 0x140793140 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x140793200 (RtlpGetWindowsPolicy.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // r13
  ULONG_PTR v3; // rdi
  int v4; // r14d
  ULONG_PTR v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  const WCHAR *v13; // r12
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  wchar_t *v18; // r14
  wchar_t *v19; // rax
  PVOID v20; // rax
  int v21; // ebx
  const WCHAR *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  wchar_t *v26; // r14
  wchar_t *v27; // rax
  PVOID v28; // rax
  int v29; // ebx
  const WCHAR *v30; // r12
  wchar_t *v31; // r14
  wchar_t *v32; // rax
  unsigned int v33; // ebx
  __int64 result; // rax
  int v35; // [rsp+20h] [rbp-48h]
  int v36; // [rsp+24h] [rbp-44h]
  int v37; // [rsp+28h] [rbp-40h]
  BOOL v38; // [rsp+2Ch] [rbp-3Ch]
  int v39; // [rsp+30h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  int v42; // [rsp+C0h] [rbp+58h] BYREF
  int v43; // [rsp+C8h] [rbp+60h]

  v39 = -1;
  v42 = 0;
  v43 = 0;
  v1 = a1;
  v2 = 0LL;
  v3 = 0LL;
  v36 = 0;
  v4 = 0;
  v35 = 0;
  v5 = 0LL;
  v37 = 0;
  v38 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v33 = -1073741811;
    goto LABEL_43;
  }
  v38 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v39 = MEMORY[0];
    ExFreeHeapPool(0LL, v6, v7, v8);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
    v2 = (ULONG_PTR)PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, 4uLL);
    if ( !v2 )
    {
      v36 = 0;
      goto LABEL_47;
    }
    memmove((void *)v2, 0LL, 0LL);
    v13 = (const WCHAR *)v2;
    v14 = 0;
    v18 = wcspbrk((const wchar_t *)v2, L";");
    LOWORD(v19) = 0;
    if ( v18 )
    {
      do
      {
        *v18 = 0;
        RtlInitUnicodeString(&DestinationString, v13);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v42) )
          ++v14;
        v13 = v18 + 1;
        v19 = wcspbrk(v18 + 1, L";");
        v18 = v19;
      }
      while ( v19 );
      v1 = a1;
    }
    if ( *v13 != (_WORD)v19 )
    {
      RtlInitUnicodeString(&DestinationString, v13);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v42) )
        ++v14;
    }
    if ( !v14 )
      ExFreeHeapPool(v2, v15, v16, v17);
    v36 = v14 != 0 ? 4 : 0;
    v2 &= -(__int64)(v14 != 0);
    v4 = 0;
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") >= 0 )
  {
    v20 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
    v3 = (ULONG_PTR)v20;
    if ( v20 )
      memset(v20, 0, 4uLL);
    if ( !v3 )
    {
      v4 = 0;
      goto LABEL_47;
    }
    memmove((void *)v3, 0LL, 0LL);
    v21 = 0;
    v22 = (const WCHAR *)v3;
    v26 = wcspbrk((const wchar_t *)v3, L";");
    LOWORD(v27) = 0;
    if ( v26 )
    {
      do
      {
        *v26 = 0;
        RtlInitUnicodeString(&DestinationString, v22);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v42) )
          ++v21;
        v22 = v26 + 1;
        v27 = wcspbrk(v26 + 1, L";");
        v26 = v27;
      }
      while ( v27 );
      v1 = a1;
    }
    if ( *v22 != (_WORD)v27 )
    {
      RtlInitUnicodeString(&DestinationString, v22);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v42) )
        ++v21;
    }
    if ( !v21 )
      ExFreeHeapPool(v3, v23, v24, v25);
    v4 = v21 != 0 ? 4 : 0;
    v35 = v4;
    v3 &= -(__int64)(v21 != 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v28 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
    v5 = (ULONG_PTR)v28;
    if ( v28 )
      memset(v28, 0, 4uLL);
    if ( v5 )
    {
      memmove((void *)v5, 0LL, 0LL);
      v29 = 0;
      v30 = (const WCHAR *)v5;
      v31 = wcspbrk((const wchar_t *)v5, L";");
      LOWORD(v32) = 0;
      if ( v31 )
      {
        do
        {
          *v31 = 0;
          RtlInitUnicodeString(&DestinationString, v30);
          if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v42) )
            ++v29;
          v30 = v31 + 1;
          v32 = wcspbrk(v31 + 1, L";");
          v31 = v32;
        }
        while ( v32 );
        v1 = a1;
      }
      if ( *v30 != (_WORD)v32 )
      {
        RtlInitUnicodeString(&DestinationString, v30);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v42) )
          ++v29;
      }
      if ( !v29 )
        ExFreeHeapPool(v5, v10, v11, v12);
      v37 = v29 != 0 ? 4 : 0;
      v5 &= -(__int64)(v29 != 0);
      v4 = v35;
      goto LABEL_41;
    }
    v37 = 0;
LABEL_47:
    v33 = -1073741801;
    goto LABEL_42;
  }
LABEL_41:
  v33 = 0;
LABEL_42:
  if ( v2 && v3 )
  {
    ExFreeHeapPool(v3, v10, v11, v12);
    v3 = 0LL;
    v4 = 0;
  }
LABEL_43:
  *(_DWORD *)v1 |= 0x800u;
  *(_DWORD *)(v1 + 116) = v38;
  *(_DWORD *)(v1 + 120) = v39;
  *(_DWORD *)(v1 + 148) = v36;
  *(_DWORD *)(v1 + 144) = v37;
  result = v33;
  *(_QWORD *)(v1 + 128) = v2;
  *(_QWORD *)(v1 + 152) = v3;
  *(_DWORD *)(v1 + 160) = v4;
  *(_QWORD *)(v1 + 136) = v5;
  return result;
}
