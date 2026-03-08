/*
 * XREFs of CimfsInitialize @ 0x140B55208
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PnpBootDeviceWait @ 0x14038932C (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlStringFromGUID @ 0x140733E70 (RtlStringFromGUID.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     IoCreateSymbolicLink @ 0x14086DC10 (IoCreateSymbolicLink.c)
 *     CimfsGetDiskParameters @ 0x140B97ED0 (CimfsGetDiskParameters.c)
 */

__int64 __fastcall CimfsInitialize(__int64 a1)
{
  int DiskParameters; // ebx
  _QWORD *v3; // r14
  ULONG_PTR v4; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int128 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DeviceName; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v14[144]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v15[12]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t pszDest[64]; // [rsp+180h] [rbp+80h] BYREF
  wchar_t v17[64]; // [rsp+200h] [rbp+100h] BYREF

  v9 = 0LL;
  SymbolicLinkName = 0LL;
  DeviceName = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  memset(v14, 0, 0x8CuLL);
  DiskParameters = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v3 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( strstr(*(const char **)(a1 + 184), "cimfs{") )
  {
    v6 = *(_QWORD **)(a1 + 232);
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 != v6 )
    {
      while ( !v7[7] )
      {
        v7 = (_QWORD *)*v7;
        if ( v7 == v6 )
        {
          v4 = 0LL;
          goto LABEL_3;
        }
      }
      v3 = v7;
    }
  }
  v4 = 0LL;
  if ( v3 )
  {
    DiskParameters = CimfsGetDiskParameters(v3[7], v14, &v9);
    if ( DiskParameters >= 0 )
    {
      v15[0] = v14;
      v15[1] = v9;
      DiskParameters = PnpBootDeviceWait(
                         a1,
                         1,
                         (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&CimfsInitializeBootDisk,
                         (__int64)v15);
      if ( DiskParameters >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)&v15[2]);
        DiskParameters = CimfsMountBootVolume(a1, &DestinationString);
        if ( DiskParameters >= 0 )
        {
          DiskParameters = RtlStringFromGUID((const GUID *const)(*(_QWORD *)(a1 + 240) + 3816LL), &UnicodeString);
          if ( DiskParameters >= 0 )
          {
            DiskParameters = RtlStringCbPrintfW(pszDest, 0x78uLL, L"\\ArcName\\cimfs%wZ", &UnicodeString);
            if ( DiskParameters >= 0 )
            {
              DWORD1(v8) = *(_DWORD *)(&UnicodeString.MaximumLength + 1);
              *((_QWORD *)&v8 + 1) = _mm_srli_si128((__m128i)UnicodeString, 8).m128i_u64[0] + 2;
              LOWORD(v8) = UnicodeString.Length - 4;
              WORD1(v8) = UnicodeString.MaximumLength - 4;
              DiskParameters = RtlStringCbPrintfW(v17, 0x78uLL, L"\\Device\\cimfs\\%wZ", &v8);
              if ( DiskParameters >= 0 )
              {
                RtlInitUnicodeString(&SymbolicLinkName, pszDest);
                RtlInitUnicodeString(&DeviceName, v17);
                v4 = 0LL;
                DiskParameters = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
                if ( DiskParameters < 0 )
                  v4 = 7LL;
              }
              else
              {
                v4 = 6LL;
              }
            }
            else
            {
              v4 = 5LL;
            }
          }
          else
          {
            v4 = 4LL;
          }
        }
        else
        {
          v4 = 3LL;
        }
      }
      else
      {
        v4 = 2LL;
      }
    }
    else
    {
      v4 = 1LL;
    }
  }
LABEL_3:
  RtlFreeUnicodeString(&UnicodeString);
  if ( DiskParameters < 0 )
    KeBugCheckEx(0x7Bu, v4, DiskParameters, 0LL, 0LL);
  return (unsigned int)DiskParameters;
}
