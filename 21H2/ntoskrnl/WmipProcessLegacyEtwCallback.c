/*
 * XREFs of WmipProcessLegacyEtwCallback @ 0x140933900
 * Callers:
 *     WmipLegacyEtwWorker @ 0x1407C54E0 (WmipLegacyEtwWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x1407576DC (WmipSendWmiIrp.c)
 */

char __fastcall WmipProcessLegacyEtwCallback(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // r14
  unsigned __int8 i; // si
  __int64 v7; // rax
  UNICODE_STRING v8; // xmm0
  __int64 v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v12; // [rsp+48h] [rbp-11h]
  __int64 v13; // [rsp+50h] [rbp-9h]
  UNICODE_STRING v14; // [rsp+58h] [rbp-1h] BYREF
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  __int64 v17; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh]

  result = -*(_BYTE *)(a1 + 36);
  v5 = 0LL;
  for ( i = 5 - (*(_BYTE *)(a1 + 36) != 0); (unsigned int)v5 < *(_DWORD *)(a1 + 32); v5 = (unsigned int)(v5 + 1) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(UNICODE_STRING *)(a2 + 72);
    v9 = *(_QWORD *)(a1 + 8 * v5 + 40);
    v11[1] = 0;
    v13 = 0LL;
    v15 = 0;
    v18 = 0LL;
    v12 = v7;
    v17 = v7;
    v14 = v8;
    v11[0] = 64;
    v16 = 0x20000;
    WmipSendWmiIrp(i, *(_DWORD *)(v9 + 56), &v14, 0x40u, (__int64)v11, &v10);
    result = WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v9);
  }
  return result;
}
