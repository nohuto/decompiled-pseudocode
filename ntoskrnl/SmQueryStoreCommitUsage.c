/*
 * XREFs of SmQueryStoreCommitUsage @ 0x1405C7730
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x1405C0AA0 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 */

__int64 __fastcall SmQueryStoreCommitUsage(struct _EPROCESS *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  _DWORD v9[384]; // [rsp+20h] [rbp-618h] BYREF

  memset(v9, 0, sizeof(v9));
  result = SmpProcessQueryStoreStats(a1, (struct _ST_STATS *)v9);
  if ( (int)result >= 0 )
  {
    v5 = 0LL;
    v6 = &v9[11];
    v7 = 8LL;
    do
    {
      v8 = *v6;
      v6 += 2;
      v5 += v8;
      --v7;
    }
    while ( v7 );
    *a2 = v5 * v9[3];
    return 0LL;
  }
  return result;
}
