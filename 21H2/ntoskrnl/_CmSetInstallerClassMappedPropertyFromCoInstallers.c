/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A2C72C
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140A2C51C (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _RegRtlSetValue @ 0x1406D5A30 (_RegRtlSetValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromCoInstallers(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        int a4,
        void *a5,
        ULONG a6)
{
  __int64 result; // rax
  int v8; // ecx
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  if ( a4 != 8210 )
    return 3221225485LL;
  result = PnpCtxGetCachedContextBaseKey(a1, 13, (__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    v8 = RegRtlSetValue(KeyHandle, a2, 7u, a5, a6);
    if ( v8 == -1073741444 )
    {
      return 3221225701LL;
    }
    else
    {
      result = 0LL;
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  return result;
}
