/*
 * XREFs of PfpUpdateRepurposedByPrefetch @ 0x1406A2DC0
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1406A2A70 (PfpPrefetchFilesTrickle.c)
 *     PfpVolumePrefetchMetadata @ 0x1407667FC (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140766EA8 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x14097B268 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140236738 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfpGetPageListCount @ 0x1406A2EDC (PfpGetPageListCount.c)
 */

_OWORD *__fastcall PfpUpdateRepurposedByPrefetch(_OWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 PageListCount; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  _OWORD *result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD *v17; // rdi
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v21[11]; // [rsp+40h] [rbp-C8h] BYREF

  memset(v21, 0, sizeof(v21));
  LODWORD(v20) = 0;
  MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v21, 0xB0u, v4, &v20);
  PfpGetPageListCount((char *)a1 + 104, 0LL, 7LL);
  PageListCount = PfpGetPageListCount((char *)&v21[6] + 8, 0LL, v5);
  v8 = PageListCount - v7;
  if ( v8 > a2 )
    v8 = a2;
  if ( v8 )
    _InterlockedExchangeAdd64(&qword_140C64D80, v8);
  result = v21;
  v10 = v21[1];
  *a1 = v21[0];
  v11 = v21[2];
  a1[1] = v10;
  v12 = v21[3];
  a1[2] = v11;
  v13 = v21[4];
  a1[3] = v12;
  v14 = v21[5];
  a1[4] = v13;
  v15 = v21[6];
  a1[5] = v14;
  v16 = v21[8];
  a1[6] = v15;
  v17 = a1 + 8;
  *(v17 - 1) = v21[7];
  v18 = v21[9];
  *v17 = v16;
  v19 = v21[10];
  v17[1] = v18;
  v17[2] = v19;
  return result;
}
