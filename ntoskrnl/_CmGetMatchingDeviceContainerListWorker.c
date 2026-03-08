/*
 * XREFs of _CmGetMatchingDeviceContainerListWorker @ 0x140823B98
 * Callers:
 *     _CmGetMatchingDeviceContainerList @ 0x140823A94 (_CmGetMatchingDeviceContainerList.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpGetGenericObjectList @ 0x140823C28 (_PnpGetGenericObjectList.c)
 */

__int64 __fastcall CmGetMatchingDeviceContainerListWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v9; // ebx
  __int64 result; // rax
  int v11; // r8d
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  v9 = a1;
  result = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&v12);
  if ( (int)result >= 0 )
  {
    v13[0] = a2;
    v13[1] = a3;
    return PnpGetGenericObjectList(v9, v12, v11, (unsigned int)v13, a4, a5, a6);
  }
  return result;
}
