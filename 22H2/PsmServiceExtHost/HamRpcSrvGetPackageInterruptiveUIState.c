/*
 * XREFs of HamRpcSrvGetPackageInterruptiveUIState @ 0x180080DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007A21C (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 */

__int64 __fastcall HamRpcSrvGetPackageInterruptiveUIState(
        __int64 a1,
        unsigned __int16 *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 result; // rax
  unsigned int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  result = HamSrvGetPackageInterruptiveUIState(
             (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1768),
             a2,
             a3,
             a4,
             a5,
             v7);
  if ( (int)result >= 0 )
  {
    *a6 = v7[0];
    return 0LL;
  }
  return result;
}
