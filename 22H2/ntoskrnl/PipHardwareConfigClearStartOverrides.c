/*
 * XREFs of PipHardwareConfigClearStartOverrides @ 0x14089B61C
 * Callers:
 *     PipHardwareConfigInit @ 0x140A512F4 (PipHardwareConfigInit.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14032EBA4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406BB5E8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407B18C8 (_PnpCtxRegEnumKeyWithCallback.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x14089F810 (PiOpenDriverRedirectedStateRootKey.c)
 */

__int64 __fastcall PipHardwareConfigClearStartOverrides(__int64 a1)
{
  HANDLE v1; // rdi
  int v2; // ebp
  int v3; // eax
  int v4; // esi
  HANDLE v5; // rbx
  int CachedContextBaseKey; // eax
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  void *v9; // [rsp+48h] [rbp-A0h] BYREF
  wchar_t pszDest[64]; // [rsp+50h] [rbp-98h] BYREF

  v1 = 0LL;
  Handle = 0LL;
  v2 = a1;
  v9 = 0LL;
  v3 = PiOpenDriverRedirectedStateRootKey(a1, &Handle);
  if ( v3 == -1073741275 )
  {
    v4 = 0;
LABEL_3:
    v5 = Handle;
    goto LABEL_10;
  }
  if ( v3 >= 0 )
  {
    v5 = Handle;
  }
  else
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 6, (__int64)&v9);
    v1 = v9;
    v4 = CachedContextBaseKey;
    if ( CachedContextBaseKey < 0 )
      goto LABEL_3;
    v5 = v9;
  }
  v4 = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v2);
  if ( v4 >= 0 )
    v4 = PnpCtxRegEnumKeyWithCallback(
           *(__int64 *)&PiPnpRtlCtx,
           v5,
           (__int64)PipHardwareConfigClearStartOverrideCallback,
           (__int64)pszDest);
LABEL_10:
  if ( v5 && v5 != v1 )
    ZwClose(v5);
  return (unsigned int)v4;
}
