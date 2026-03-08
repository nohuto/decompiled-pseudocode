/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x1406C3AD8
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140688AC8 (PiDcHandleCustomDeviceEvent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D5DD0 (wcscmp.c)
 *     _CmIsDeviceInContainer @ 0x1406C3C74 (_CmIsDeviceInContainer.c)
 *     _CmValidateDeviceContainerName @ 0x1406C3EDC (_CmValidateDeviceContainerName.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlEnumKey @ 0x140868D44 (_RegRtlEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(__int64 a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  int v4; // edi
  NTSTATUS CachedContextBaseKey; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  char v15; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v16[3]; // [rsp+41h] [rbp-40h] BYREF
  int v17; // [rsp+44h] [rbp-3Dh]
  HANDLE KeyHandle; // [rsp+48h] [rbp-39h] BYREF
  wchar_t pszSrc[40]; // [rsp+50h] [rbp-31h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  v16[0] = 0;
  v15 = 0;
  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10LL, &KeyHandle);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = CmIsDeviceInContainer(
                                 a1,
                                 (_DWORD)KeyHandle,
                                 (_DWORD)a3,
                                 (_DWORD)a3,
                                 a2,
                                 (__int64)v16,
                                 (__int64)&v15);
        if ( CachedContextBaseKey >= 0 && !v15 )
        {
          while ( 1 )
          {
            v17 = 39;
            v11 = RegRtlEnumKey(KeyHandle);
            CachedContextBaseKey = v11;
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -1073741789 )
            {
              if ( v11 < 0 )
                return (unsigned int)CachedContextBaseKey;
              v14 = CmValidateDeviceContainerName(v12, pszSrc, v13);
              CachedContextBaseKey = v14;
              if ( v14 != -1073741773 )
              {
                if ( v14 < 0 )
                  return (unsigned int)CachedContextBaseKey;
                CachedContextBaseKey = CmIsDeviceInContainer(
                                         a1,
                                         (_DWORD)KeyHandle,
                                         (unsigned int)pszSrc,
                                         (_DWORD)a3,
                                         a2,
                                         (__int64)v16,
                                         (__int64)&v15);
                if ( CachedContextBaseKey < 0 )
                  return (unsigned int)CachedContextBaseKey;
                if ( v16[0] )
                {
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                  if ( CachedContextBaseKey < 0 )
                    return (unsigned int)CachedContextBaseKey;
                }
                if ( v15 )
                  return (unsigned int)CachedContextBaseKey;
              }
            }
            ++v4;
          }
          return 0;
        }
      }
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
