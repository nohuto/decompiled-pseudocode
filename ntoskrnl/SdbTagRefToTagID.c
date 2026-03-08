/*
 * XREFs of SdbTagRefToTagID @ 0x140800B74
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14079EF10 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x140800448 (KsepDbGetShimInfo.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1408012E8 (KsepDbCacheReadDeviceInternal.c)
 *     SdbQueryDataEx @ 0x140A4C284 (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x140A4C714 (SdbReadEntryInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SdbpOpenLocalDatabaseEx @ 0x140A4F86C (SdbpOpenLocalDatabaseEx.c)
 */

__int64 __fastcall SdbTagRefToTagID(__int64 a1, unsigned int a2, _QWORD *a3, int *a4)
{
  int v6; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  int v10; // ecx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF

  v14 = 0LL;
  v13 = a2 >> 28;
  v6 = a2 & 0xFFFFFFF;
  v7 = 32LL * (a2 >> 28);
  result = 1LL;
  v10 = *(_DWORD *)(v7 + a1 + 64);
  if ( (v10 & 2) != 0 )
  {
    v11 = *(_QWORD *)(v7 + a1 + 56);
    *(_OWORD *)(v11 + 28) = *(_OWORD *)(v7 + a1 + 40);
  }
  else
  {
    if ( (v10 & 1) == 0 )
      goto LABEL_10;
    v12 = *(_OWORD *)(v7 + a1 + 40);
    *(_DWORD *)(v7 + a1 + 64) = 0;
    v15 = v12;
    result = SdbpOpenLocalDatabaseEx(a1, (unsigned int)&v15, v7, (unsigned int)&v14, (__int64)&v13);
    v11 = v14;
  }
  if ( v11 )
  {
    if ( (_DWORD)result )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  result = 0LL;
LABEL_11:
  v11 = 0LL;
  v6 = 0;
LABEL_5:
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = v6;
  return result;
}
