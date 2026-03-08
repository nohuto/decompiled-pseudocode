/*
 * XREFs of PiSwFindSwDevice @ 0x14086740C
 * Callers:
 *     PiSwIrpCleanup @ 0x140807E94 (PiSwIrpCleanup.c)
 *     PiSwProcessParentRemoveIrp @ 0x140867324 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     RtlLookupElementGenericTableAvl @ 0x140245A20 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PiSwFindSwDevice(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v2; // rbx
  wchar_t *v4; // rax
  PVOID v5; // rax
  _QWORD *Buffer; // [rsp+20h] [rbp-288h] BYREF
  _QWORD v7[26]; // [rsp+30h] [rbp-278h] BYREF
  wchar_t pszDest[5]; // [rsp+100h] [rbp-1A8h] BYREF
  wchar_t Str[195]; // [rsp+10Ah] [rbp-19Eh] BYREF

  memset(v7, 0, sizeof(v7));
  Buffer = v7;
  v2 = 0LL;
  if ( !wcsnicmp(pszSrc, L"SWD\\", 4uLL) && RtlStringCbCopyW(pszDest, 0x190uLL, pszSrc) >= 0 )
  {
    v7[1] = pszDest;
    v4 = wcschr(Str, 0x5Cu);
    if ( v4 )
    {
      *v4 = 0;
      v7[2] = v4 + 1;
      v5 = RtlLookupElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
      if ( v5 )
        return *(_QWORD *)v5;
    }
  }
  return v2;
}
