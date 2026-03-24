/*
 * XREFs of SmStoreDelete @ 0x14092A4D0
 * Callers:
 *     SmcCacheCleanup @ 0x14092D438 (SmcCacheCleanup.c)
 *     SmcStoreDelete @ 0x14092DE00 (SmcStoreDelete.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1403FCFA0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092A558 (SmStorePhysicalRequestIssue.c)
 */

int *__fastcall SmStoreDelete(int a1, int a2)
{
  int *result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-20h] BYREF
  int *v4; // [rsp+38h] [rbp-18h]
  __int64 v5; // [rsp+40h] [rbp-10h]
  int v6; // [rsp+70h] [rbp+20h] BYREF
  int v7; // [rsp+74h] [rbp+24h]
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF

  v5 = 8LL;
  v8 = 0LL;
  result = &v6;
  v3[1] = 4;
  v4 = &v6;
  v7 = a2;
  v3[0] = 1;
  v6 = 1;
  if ( !a1 )
    return (int *)SmStorePhysicalRequestIssue(DeviceObject, 0, (__int64)&v8);
  if ( a1 == 1 )
    return (int *)ZwSetSystemInformation(109LL, (__int64)v3);
  return result;
}
