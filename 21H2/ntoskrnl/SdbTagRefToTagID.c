/*
 * XREFs of SdbTagRefToTagID @ 0x1407C25B0
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x140755F34 (KsepDbCacheReadDeviceInternal.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 *     PiIsDriverBlocked @ 0x14077E4C4 (PiIsDriverBlocked.c)
 *     SdbReadEntryInformation @ 0x1407C1F5C (SdbReadEntryInformation.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SdbpOpenLocalDatabaseEx @ 0x1409669E4 (SdbpOpenLocalDatabaseEx.c)
 */

__int64 __fastcall SdbTagRefToTagID(__int64 a1, unsigned int a2, _QWORD *a3, int *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ecx
  int v8; // ebx
  __int128 *v9; // r8
  int v11; // edx
  __int128 v13; // xmm0
  unsigned int v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0LL;
  v14 = a2 >> 28;
  v7 = 1;
  v15 = 0LL;
  v8 = a2 & 0xFFFFFFF;
  v9 = (__int128 *)(a1 + 32 * ((a2 >> 28) + 1LL));
  v11 = *((_DWORD *)v9 + 6);
  if ( (v11 & 2) != 0 )
  {
    v6 = *((_QWORD *)v9 + 2);
    *(_OWORD *)(v6 + 28) = *v9;
    goto LABEL_3;
  }
  if ( (v11 & 1) != 0 )
  {
    v13 = *v9;
    *((_DWORD *)v9 + 6) = 0;
    v16 = v13;
    v7 = SdbpOpenLocalDatabaseEx(a1, (unsigned int)&v16, (_DWORD)v9, (unsigned int)&v15, (__int64)&v14);
    v6 = v15;
LABEL_3:
    if ( v6 )
      goto LABEL_4;
  }
  v7 = 0;
LABEL_4:
  if ( !v7 )
  {
    v6 = 0LL;
    v8 = 0;
  }
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v8;
  return v7;
}
