/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1403C64C0
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x14082FBD4 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     wcspbrk @ 0x1403E39D0 (wcspbrk.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCultureNameToLCID @ 0x140830F20 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x140830FE0 (RtlpGetWindowsPolicy.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  ULONG_PTR v2; // r13
  ULONG_PTR v3; // r12
  int v4; // r14d
  _WORD *PoolWithTag; // rax
  _WORD *v6; // rbx
  int v7; // esi
  wchar_t *i; // r14
  _WORD *v9; // rax
  _WORD *v10; // rbx
  int v11; // esi
  wchar_t *j; // r14
  _WORD *v13; // rax
  _WORD *v14; // rbx
  int v15; // esi
  wchar_t *v16; // r14
  unsigned int v17; // ebx
  __int64 result; // rax
  int v19; // [rsp+20h] [rbp-38h]
  int v20; // [rsp+24h] [rbp-34h]
  BOOL v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+2Ch] [rbp-2Ch]
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v25; // [rsp+A8h] [rbp+50h] BYREF
  int v26; // [rsp+B0h] [rbp+58h]
  int v27; // [rsp+B8h] [rbp+60h]

  LODWORD(v22) = -1;
  v25 = 0;
  v26 = 0;
  v2 = 0LL;
  v3 = 0LL;
  v19 = 0;
  v4 = 0;
  v27 = 0;
  BugCheckParameter3 = 0LL;
  v20 = 0;
  v21 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v17 = -1073741811;
    goto LABEL_41;
  }
  v21 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v22 = MEMORY[0];
    ExFreeHeapPool(0LL);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v19 = 4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, 4uLL);
    v7 = 0;
    v2 = (ULONG_PTR)v6;
    if ( !v6 )
    {
      v19 = 0;
LABEL_50:
      v17 = -1073741801;
      goto LABEL_40;
    }
    memmove(v6, 0LL, 0LL);
    for ( i = wcspbrk(v6, L";"); i; i = wcspbrk(i + 1, L";") )
    {
      *i = 0;
      RtlInitUnicodeString(&DestinationString, v6);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v25) )
        ++v7;
      v6 = i + 1;
    }
    if ( *v6 )
    {
      RtlInitUnicodeString(&DestinationString, v6);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v25) )
        ++v7;
    }
    if ( !v7 )
    {
      ExFreeHeapPool(v2);
      v19 = 0;
      v2 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") < 0 )
    goto LABEL_24;
  v27 = 4;
  v9 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
  v10 = v9;
  if ( v9 )
    memset(v9, 0, 4uLL);
  v11 = 0;
  v3 = (ULONG_PTR)v10;
  if ( !v10 )
  {
    v4 = 0;
    goto LABEL_50;
  }
  memmove(v10, 0LL, 0LL);
  for ( j = wcspbrk(v10, L";"); j; j = wcspbrk(j + 1, L";") )
  {
    *j = 0;
    RtlInitUnicodeString(&DestinationString, v10);
    if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v25) )
      ++v11;
    v10 = j + 1;
  }
  if ( *v10 )
  {
    RtlInitUnicodeString(&DestinationString, v10);
    if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v25) )
      ++v11;
  }
  if ( !v11 )
  {
    ExFreeHeapPool(v3);
    v27 = 0;
    v3 = 0LL;
  }
LABEL_24:
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v20 = 4;
    v13 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x72746C6Du);
    v14 = v13;
    if ( v13 )
      memset(v13, 0, 4uLL);
    v15 = 0;
    BugCheckParameter3 = (ULONG_PTR)v14;
    if ( !v14 )
    {
      v20 = 0;
      v17 = -1073741801;
      goto LABEL_39;
    }
    memmove(v14, 0LL, 0LL);
    BugCheckParameter3 = (ULONG_PTR)v14;
    v16 = wcspbrk(v14, L";");
    if ( v16 )
    {
      BugCheckParameter3 = (ULONG_PTR)v14;
      do
      {
        *v16 = 0;
        RtlInitUnicodeString(&DestinationString, v14);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v25) )
          ++v15;
        v14 = v16 + 1;
        v16 = wcspbrk(v16 + 1, L";");
      }
      while ( v16 );
    }
    if ( *v14 )
    {
      RtlInitUnicodeString(&DestinationString, v14);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v25) )
        ++v15;
    }
    if ( !v15 )
    {
      ExFreeHeapPool(BugCheckParameter3);
      v20 = 0;
      BugCheckParameter3 = 0LL;
    }
  }
  v17 = 0;
LABEL_39:
  v4 = v27;
LABEL_40:
  if ( v2 && v3 )
  {
    ExFreeHeapPool(v3);
    v3 = 0LL;
    v4 = 0;
  }
LABEL_41:
  *(_DWORD *)a1 |= 0x800u;
  *(_DWORD *)(a1 + 116) = v21;
  *(_DWORD *)(a1 + 120) = v22;
  *(_DWORD *)(a1 + 148) = v19;
  *(_QWORD *)(a1 + 136) = BugCheckParameter3;
  *(_DWORD *)(a1 + 144) = v20;
  result = v17;
  *(_QWORD *)(a1 + 128) = v2;
  *(_QWORD *)(a1 + 152) = v3;
  *(_DWORD *)(a1 + 160) = v4;
  return result;
}
