/*
 * XREFs of CmFcpConnectToAlpcServer @ 0x140680B8C
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _filwbuf_s @ 0x140410D54 (_filwbuf_s.c)
 *     ZwAlpcConnectPortEx @ 0x14041B5E0 (ZwAlpcConnectPortEx.c)
 */

__int64 __fastcall CmFcpConnectToAlpcServer(_QWORD *a1, char a2)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // ebx
  _QWORD v8[3]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int128 v11; // [rsp+90h] [rbp-70h]
  __int128 v12; // [rsp+A0h] [rbp-60h]
  __int128 v13; // [rsp+B0h] [rbp-50h]
  __int64 v14; // [rsp+C0h] [rbp-40h]
  __int64 v15; // [rsp+C8h] [rbp-38h]
  __int64 v16; // [rsp+D0h] [rbp-30h]
  __int64 v17; // [rsp+D8h] [rbp-28h]
  __int128 v18; // [rsp+E0h] [rbp-20h]
  _QWORD v19[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v20; // [rsp+110h] [rbp+10h]
  int v21; // [rsp+120h] [rbp+20h]
  __int64 v22; // [rsp+124h] [rbp+24h]
  __int16 v23; // [rsp+12Ch] [rbp+2Ch]
  __int16 v24; // [rsp+12Eh] [rbp+2Eh]
  __int64 v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+138h] [rbp+38h]
  __int64 v27; // [rsp+140h] [rbp+40h]
  __int64 v28; // [rsp+148h] [rbp+48h]
  __int64 v29; // [rsp+150h] [rbp+50h]
  __int64 v30; // [rsp+158h] [rbp+58h]
  int v31; // [rsp+160h] [rbp+60h]
  int v32; // [rsp+164h] [rbp+64h]

  v19[0] = 48LL;
  v19[3] = 512LL;
  v14 = 48LL;
  v17 = 512LL;
  v24 = 0;
  v32 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\RPC Control\\FconAlpcPort");
  v8[0] = 0LL;
  v8[1] = -50000000LL;
  v11 = 0LL;
  v19[2] = &DestinationString;
  v4 = 0;
  v12 = 0LL;
  Interval.QuadPart = -10000000LL;
  v13 = 0LL;
  v19[1] = 0LL;
  v20 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v21 = 1179648;
  v25 = filwbuf_s();
  v27 = 0xFFFFFFFFLL;
  v28 = 0xFFFFFFFFLL;
  v30 = 0xFFFFFFFFLL;
  v29 = 0xFFFFFFFFLL;
  WORD2(v11) |= 0x8000u;
  v31 = 0;
  v26 = 0LL;
  v22 = 12LL;
  v23 = 1;
  LODWORD(v11) = 3145736;
  DWORD2(v13) = 1;
  v8[2] = 48LL;
  do
  {
    v5 = ZwAlpcConnectPortEx((__int64)v8, (__int64)v19);
    v6 = v5;
    if ( !a2 || v5 != -1073741772 && v5 != -1073740031 )
      break;
    ++v4;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  while ( v4 < 0xA );
  if ( v6 >= 0 )
    *a1 = v8[0];
  return (unsigned int)v6;
}
