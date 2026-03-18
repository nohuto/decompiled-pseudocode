/*
 * XREFs of _CmRemoveDeviceFromContainerWorker @ 0x140A647EC
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x140A646AC (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041C240 (ZwDeleteValueKey.c)
 *     _SysCtxRegOpenKey @ 0x1406CEDD0 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEF60 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140797804 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B738 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140877FDC (_PnpCtxRegQueryInfoKey.c)
 *     _CmDeleteDeviceContainer @ 0x140A636A4 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainerWorker(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, _BYTE *a5)
{
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v18 = 0;
  *a5 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&DestinationString);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( a1 )
      v10 = *(_QWORD *)(a1 + 224);
    else
      v10 = 0LL;
    v11 = 224LL;
    if ( a1 )
      v11 = a1 + 224;
    CachedContextBaseKey = SysCtxRegOpenKey(v10, *(__int64 *)&DestinationString.Length, a2, 0, 1u, (__int64)&v21);
    if ( CachedContextBaseKey >= 0 )
    {
      v12 = a1 ? *(_QWORD *)v11 : 0LL;
      CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)v21, (__int64)L"BaseContainers", 0, 1u, (__int64)&Handle);
      if ( CachedContextBaseKey >= 0 )
      {
        v13 = a1 ? *(_QWORD *)v11 : 0LL;
        CachedContextBaseKey = SysCtxRegOpenKey(v13, (__int64)Handle, a3, 0, 3u, (__int64)&KeyHandle);
        if ( CachedContextBaseKey >= 0 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, a4) >= 0 )
            ZwDeleteValueKey(KeyHandle, &DestinationString);
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v14, KeyHandle, 0LL, 0LL, &v18, 0LL, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( !v18 )
            {
              if ( a1 && *(_QWORD *)v11 )
                v16 = *(_QWORD *)(*(_QWORD *)v11 + 8LL);
              else
                v16 = 0LL;
              RegRtlDeleteTreeInternal(KeyHandle, 0LL, v16, 0);
            }
            CachedContextBaseKey = PnpCtxRegQueryInfoKey(v15, Handle, &v18, 0LL, 0LL, 0LL, 0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( !v18 )
              {
                CachedContextBaseKey = CmDeleteDeviceContainer(a1, a2);
                if ( CachedContextBaseKey >= 0 )
                  *a5 = 1;
              }
              PnpObjectRaisePropertyChangeEvent(a1, (__int64)a4, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
            }
          }
        }
      }
    }
  }
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    CachedContextBaseKey = 0;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  return (unsigned int)CachedContextBaseKey;
}
