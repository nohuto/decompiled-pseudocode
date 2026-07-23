/*
 * XREFs of _CmRemoveDeviceFromContainerWorker @ 0x14072C0D0
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x14072BF9C (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     _CmDeleteDeviceContainer @ 0x14072C32C (_CmDeleteDeviceContainer.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainerWorker(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, _BYTE *a5)
{
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
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
    v10 = 0LL;
    if ( a1 )
      v10 = *(_QWORD *)(a1 + 224);
    CachedContextBaseKey = SysCtxRegOpenKey(v10, *(__int64 *)&DestinationString.Length, a2, 0, 1u, (__int64)&v21);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *(_QWORD *)(a1 + 224);
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)v21, (__int64)L"BaseContainers", 0, 1u, (__int64)&Handle);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *(_QWORD *)(a1 + 224);
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)Handle, a3, 0, 3u, (__int64)&KeyHandle);
        if ( CachedContextBaseKey >= 0 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, a4) >= 0 )
            ZwDeleteValueKey(KeyHandle, &DestinationString);
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v13, KeyHandle, 0LL, 0LL, &v18, 0LL, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( !v18 )
            {
              if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
                v16 = *(_QWORD *)(v15 + 8);
              else
                v16 = 0LL;
              RegRtlDeleteTreeInternal(KeyHandle, 0LL, v16, 0LL);
            }
            CachedContextBaseKey = PnpCtxRegQueryInfoKey(v14, Handle, &v18, 0LL, 0LL, 0LL, 0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( !v18 )
              {
                CachedContextBaseKey = CmDeleteDeviceContainer(a1, a2);
                if ( CachedContextBaseKey >= 0 )
                  *a5 = 1;
              }
              PnpObjectRaisePropertyChangeEvent(a1, (_DWORD)a4, 1, 0, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
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
