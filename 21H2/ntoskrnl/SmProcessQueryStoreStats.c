/*
 * XREFs of SmProcessQueryStoreStats @ 0x140929FF0
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406A53B4 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x140936BDC (EtwpLogMemInfoWs.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SmpProcessQueryStoreStats @ 0x14059D288 (SmpProcessQueryStoreStats.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(void *a1, _QWORD *a2, _QWORD *a3)
{
  int StoreStats; // r9d
  unsigned int *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD v12[384]; // [rsp+20h] [rbp-628h] BYREF

  memset(v12, 0, sizeof(v12));
  StoreStats = SmpProcessQueryStoreStats(a1);
  if ( StoreStats >= 0 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v7 = &v12[11];
      v8 = v12[3];
      v9 = 8LL;
      do
      {
        v10 = *v7;
        v7 += 2;
        *a2 += v8 * v10;
        --v9;
      }
      while ( v9 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v12[8] << 12;
  }
  return (unsigned int)StoreStats;
}
