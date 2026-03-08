/*
 * XREFs of SmStoreDelete @ 0x1409D4D34
 * Callers:
 *     SmcCacheCleanup @ 0x1409D7CF4 (SmcCacheCleanup.c)
 *     SmcStoreDelete @ 0x1409D86C8 (SmcStoreDelete.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x140415A30 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D4DC0 (SmStorePhysicalRequestIssue.c)
 */

int *__fastcall SmStoreDelete(__int64 a1, int a2, int a3)
{
  int *result; // rax
  __int64 v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[2]; // [rsp+38h] [rbp-18h] BYREF
  int *v6; // [rsp+40h] [rbp-10h]
  __int64 v7; // [rsp+48h] [rbp-8h]
  int v8; // [rsp+78h] [rbp+28h] BYREF
  int v9; // [rsp+7Ch] [rbp+2Ch]

  v7 = 8LL;
  v4 = 0LL;
  result = &v8;
  v5[1] = 4;
  v6 = &v8;
  v9 = a3;
  v5[0] = 1;
  v8 = 1;
  if ( !a2 )
    return (int *)SmStorePhysicalRequestIssue(*(PDEVICE_OBJECT *)(a1 + 1904), 0, (__int64)&v4);
  if ( a2 == 1 )
    return (int *)ZwSetSystemInformation(109LL, (__int64)v5);
  return result;
}
