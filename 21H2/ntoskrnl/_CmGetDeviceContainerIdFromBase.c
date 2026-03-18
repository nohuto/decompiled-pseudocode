/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x14076CE48
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x14076C764 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14078C2F8 (PiDcHandleCustomDeviceEvent.c)
 *     _CmDeleteDeviceWorker @ 0x140A245FC (_CmDeleteDeviceWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     _RegRtlEnumKey @ 0x1406CB3B4 (_RegRtlEnumKey.c)
 *     _CmIsDeviceInContainer @ 0x14076CFE4 (_CmIsDeviceInContainer.c)
 *     _CmValidateDeviceContainerName @ 0x14076D788 (_CmValidateDeviceContainerName.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(__int64 a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  ULONG v4; // edi
  NTSTATUS CachedContextBaseKey; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  char v14; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v15[7]; // [rsp+41h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v17[4]; // [rsp+50h] [rbp-41h] BYREF
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
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10LL, &KeyHandle);
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
            v17[0] = 39;
            v11 = RegRtlEnumKey(KeyHandle, v4, (char *)pszSrc, v17);
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
                {
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                  if ( CachedContextBaseKey < 0 )
                    return (unsigned int)CachedContextBaseKey;
                }
                if ( v14 )
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
