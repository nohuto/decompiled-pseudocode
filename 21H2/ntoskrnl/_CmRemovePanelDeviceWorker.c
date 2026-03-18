/*
 * XREFs of _CmRemovePanelDeviceWorker @ 0x140A293B4
 * Callers:
 *     _CmRemovePanelDevice @ 0x140A29270 (_CmRemovePanelDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406994BC (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x1406CB238 (_RegRtlDeleteTreeInternal.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407720B8 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmRemovePanelDeviceWorker(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int CachedContextBaseKey; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
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
  if ( CachedContextBaseKey < 0
    || (a1 ? (v9 = *(_QWORD *)(a1 + 224)) : (v9 = 0LL),
        (CachedContextBaseKey = SysCtxRegOpenKey(v9, *(__int64 *)&DestinationString.Length, a2, 0, 1u, (__int64)&Handle),
         CachedContextBaseKey < 0)
     || (a1 ? (v10 = *(_QWORD *)(a1 + 224)) : (v10 = 0LL),
         CachedContextBaseKey = SysCtxRegOpenKey(v10, (__int64)Handle, (__int64)L"Devices", 0, 3u, (__int64)&KeyHandle),
         CachedContextBaseKey < 0)) )
  {
LABEL_23:
    if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
      CachedContextBaseKey = 0;
    goto LABEL_26;
  }
  DestinationString = 0LL;
  CachedContextBaseKey = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( CachedContextBaseKey >= 0 )
    CachedContextBaseKey = ZwDeleteValueKey(KeyHandle, &DestinationString);
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 || CachedContextBaseKey >= 0 )
  {
    v12 = (int)KeyHandle;
    *a4 = 1;
    CachedContextBaseKey = PnpCtxRegQueryInfoKey(v11, v12, 0, 0, (__int64)&v19, 0LL, 0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( !v19 )
      {
        if ( a1 && (v13 = *(_QWORD *)(a1 + 224)) != 0 )
          v14 = *(_QWORD *)(v13 + 8);
        else
          v14 = 0LL;
        RegRtlDeleteTreeInternal((__int64)KeyHandle, 0LL, v14, 0);
      }
      PnpObjectRaisePropertyChangeEvent(a1, (__int64)a3, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId);
      goto LABEL_26;
    }
    goto LABEL_23;
  }
LABEL_26:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
