/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x14075AB3C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1406FD420 (PiDcHandleCustomDeviceEvent.c)
 *     _CmDeleteDeviceWorker @ 0x14072CF38 (_CmDeleteDeviceWorker.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14075912C (PiDcUpdateDeviceContainerMembership.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D40B0 (wcscmp.c)
 *     _CmValidateDeviceContainerName @ 0x1406084A0 (_CmValidateDeviceContainerName.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmIsDeviceInContainer @ 0x14075ACD4 (_CmIsDeviceInContainer.c)
 *     _RegRtlEnumKey @ 0x140766D3C (_RegRtlEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(__int64 a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  int v4; // edi
  int CachedContextBaseKey; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  char v14; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v15[7]; // [rsp+41h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  int v17; // [rsp+50h] [rbp-41h]
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-31h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  v15[0] = 0;
  v14 = 0;
  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&KeyHandle);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = CmIsDeviceInContainer(
                                 a1,
                                 (_DWORD)KeyHandle,
                                 (_DWORD)a3,
                                 (_DWORD)a3,
                                 a2,
                                 (__int64)v15,
                                 (__int64)&v14);
        if ( CachedContextBaseKey >= 0 && !v14 )
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
              v13 = CmValidateDeviceContainerName(v12, pszSrc);
              CachedContextBaseKey = v13;
              if ( v13 != -1073741773 )
              {
                if ( v13 < 0 )
                  return (unsigned int)CachedContextBaseKey;
                CachedContextBaseKey = CmIsDeviceInContainer(
                                         a1,
                                         (_DWORD)KeyHandle,
                                         (unsigned int)pszSrc,
                                         (_DWORD)a3,
                                         a2,
                                         (__int64)v15,
                                         (__int64)&v14);
                if ( CachedContextBaseKey < 0 )
                  return (unsigned int)CachedContextBaseKey;
                if ( v15[0] )
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                if ( CachedContextBaseKey < 0 || v14 )
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
