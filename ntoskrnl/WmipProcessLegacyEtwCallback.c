/*
 * XREFs of WmipProcessLegacyEtwCallback @ 0x1409DEC30
 * Callers:
 *     WmipLegacyEtwWorker @ 0x14084D950 (WmipLegacyEtwWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x14069CD88 (WmipSendWmiIrp.c)
 */

char __fastcall WmipProcessLegacyEtwCallback(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rbp
  char i; // si
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v11[8]; // [rsp+40h] [rbp-68h] BYREF

  result = -*(_BYTE *)(a1 + 36);
  v5 = 0LL;
  for ( i = 5 - (*(_BYTE *)(a1 + 36) != 0); (unsigned int)v5 < *(_DWORD *)(a1 + 32); v5 = (unsigned int)(v5 + 1) )
  {
    memset(v11, 0, sizeof(v11));
    v7 = *(_OWORD *)(a2 + 72);
    v8 = *(_QWORD *)(a1 + 8 * v5 + 40);
    v11[1] = *(_QWORD *)(a1 + 24);
    LOBYTE(v9) = i;
    v11[6] = v11[1];
    *(_OWORD *)&v11[3] = v7;
    LODWORD(v11[0]) = 64;
    HIDWORD(v11[5]) = 0x20000;
    WmipSendWmiIrp(v9, *(unsigned int *)(v8 + 56), (__int64)&v11[3], 64, (__int64)v11, &v10);
    result = WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v8);
  }
  return result;
}
