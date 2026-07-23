/*
 * XREFs of _CmRemovePanelDeviceWorker @ 0x140978DBC
 * Callers:
 *     _CmRemovePanelDevice @ 0x140978C78 (_CmRemovePanelDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14067313C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall CmRemovePanelDeviceWorker(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int CachedContextBaseKey; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  HANDLE v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v19 = 0;
  *a4 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11, (__int64)&DestinationString);
  if ( CachedContextBaseKey >= 0 )
  {
    v9 = a1 ? *(_QWORD *)(a1 + 224) : 0LL;
    CachedContextBaseKey = SysCtxRegOpenKey(v9, *(__int64 *)&DestinationString.Length, a2, 0, 1u, (__int64)&Handle);
    if ( CachedContextBaseKey >= 0 )
    {
      v10 = a1 ? *(_QWORD *)(a1 + 224) : 0LL;
      CachedContextBaseKey = SysCtxRegOpenKey(v10, (__int64)Handle, (__int64)L"Devices", 0, 3u, (__int64)&KeyHandle);
      if ( CachedContextBaseKey >= 0 )
      {
        DestinationString = 0LL;
        CachedContextBaseKey = RtlInitUnicodeStringEx(&DestinationString, a3);
        if ( CachedContextBaseKey >= 0 )
          CachedContextBaseKey = ZwDeleteValueKey(KeyHandle, &DestinationString);
        if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 || CachedContextBaseKey >= 0 )
        {
          v12 = KeyHandle;
          *a4 = 1;
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v11, v12, 0LL, 0LL, &v19, 0LL, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( !v19 )
            {
              if ( a1 && (v13 = *(_QWORD *)(a1 + 224)) != 0 )
                v14 = *(_QWORD *)(v13 + 8);
              else
                v14 = 0LL;
              RegRtlDeleteTreeInternal((char *)KeyHandle, 0LL, v14, 0);
            }
            PnpObjectRaisePropertyChangeEvent(a1, (__int64)a3, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId);
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
  return (unsigned int)CachedContextBaseKey;
}
