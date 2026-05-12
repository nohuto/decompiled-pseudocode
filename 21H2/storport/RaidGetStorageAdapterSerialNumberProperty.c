/*
 * XREFs of RaidGetStorageAdapterSerialNumberProperty @ 0x1C00757E4
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0072880 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0013DF4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00194F0 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     RtlStringCchCopyW @ 0x1C0033300 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1C0033348 (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCopyString @ 0x1C0033400 (RtlUnicodeStringCopyString.c)
 */

signed int __fastcall RaidGetStorageAdapterSerialNumberProperty(__int64 a1, wchar_t *a2, unsigned __int64 *a3)
{
  signed int result; // eax
  unsigned __int64 v7; // rax
  wchar_t *v8; // r14
  const wchar_t *v9; // r8
  size_t v10; // rdi
  __int64 v11; // rcx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  wchar_t *PoolWithTag; // rax
  size_t pcchLength; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+54h] [rbp-ACh]
  _BYTE v20[264]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t pszSrc[128]; // [rsp+160h] [rbp+60h] BYREF

  memset(v20, 0, 0x104uLL);
  pcchLength = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 17) )
    return -1073741637;
  v7 = *a3;
  if ( *a3 < 8 )
  {
    result = -1073741789;
LABEL_31:
    *a3 = 264LL;
    return result;
  }
  *(_DWORD *)a2 = 264;
  *((_DWORD *)a2 + 1) = 264;
  if ( v7 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  *a3 = 0LL;
  v8 = a2 + 4;
  memset(a2 + 4, 0, 0x100uLL);
  v9 = *(const wchar_t **)(a1 + 5208);
  if ( v9 )
  {
    result = RtlStringCchCopyW(a2 + 4, 0x80uLL, v9);
    if ( result >= 0 )
      goto LABEL_31;
  }
  else
  {
    v18 = 1;
    v19 = 268;
    result = RaCallMiniportAdapterControl(a1 + 320);
    if ( result >= 0 )
    {
      if ( v20[0] == 1 )
      {
        result = RtlStringCchLengthW((STRSAFE_PCNZWCH)&v20[1], 0x7FFFFFFFuLL, &pcchLength);
        v10 = pcchLength;
      }
      else
      {
        v11 = 0x7FFFFFFFLL;
        v12 = &v20[1];
        do
        {
          if ( !*v12 )
            break;
          ++v12;
          --v11;
        }
        while ( v11 );
        result = v11 == 0 ? 0xC000000D : 0;
        v13 = v11 ? 0x7FFFFFFF - v11 : 0LL;
        v10 = v13 & -(__int64)(v11 != 0);
      }
      if ( result >= 0 )
      {
        if ( v10 - 1 > 0x7E )
          return -1073739509;
        DestinationString.Buffer = pszSrc;
        DestinationString.MaximumLength = 256;
        if ( v20[0] == 1 )
        {
          result = RtlUnicodeStringCopyString(&DestinationString, (NTSTRSAFE_PCWSTR)&v20[1]);
        }
        else
        {
          RtlInitAnsiString(&SourceString, &v20[1]);
          result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
        }
        if ( result >= 0 )
        {
          result = RtlStringCchCopyW(v8, 0x80uLL, pszSrc);
          if ( result >= 0 )
          {
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v10 + 2, 0x54456152u);
            *(_QWORD *)(a1 + 5208) = PoolWithTag;
            if ( PoolWithTag )
              RtlStringCchCopyW(PoolWithTag, v10 + 1, pszSrc);
            result = 0;
            goto LABEL_31;
          }
        }
      }
    }
  }
  return result;
}
