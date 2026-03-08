/*
 * XREFs of MiLogContinueTrim @ 0x1406329F8
 * Callers:
 *     MiCheckSystemTrimEndCriteria @ 0x140631E4C (MiCheckSystemTrimEndCriteria.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void MiLogContinueTrim()
{
  int v0; // edx
  char *v1; // r9
  __int64 v2; // r10
  __int64 v3; // r11
  char v4; // al
  int v5; // [rsp+30h] [rbp-59h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  __int64 v9; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-29h] BYREF
  int *v11; // [rsp+80h] [rbp-9h]
  int v12; // [rsp+88h] [rbp-1h]
  int v13; // [rsp+8Ch] [rbp+3h]
  __int64 *v14; // [rsp+90h] [rbp+7h]
  int v15; // [rsp+98h] [rbp+Fh]
  int v16; // [rsp+9Ch] [rbp+13h]
  __int64 *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A8h] [rbp+1Fh]
  int v19; // [rsp+ACh] [rbp+23h]
  __int64 *v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+2Fh]
  int v22; // [rsp+BCh] [rbp+33h]
  __int64 *v23; // [rsp+C0h] [rbp+37h]
  int v24; // [rsp+C8h] [rbp+3Fh]
  int v25; // [rsp+CCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140C69568 && **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 1LL) )
    {
      v4 = *v1;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v5 = v4 & 0x7F;
      v11 = &v5;
      v6 = *((_QWORD *)v1 + 12);
      v14 = &v6;
      v7 = *((_QWORD *)v1 + 10);
      v17 = &v7;
      v8 = *((_QWORD *)v1 + 9);
      v20 = &v8;
      v9 = *(_QWORD *)(v3 + 17216);
      v23 = &v9;
      v15 = v0 + 7;
      v18 = v0 + 7;
      v21 = v0 + 7;
      v24 = v0 + 7;
      v12 = 4;
      tlgWriteTransfer_EtwWriteTransfer(v2, (unsigned __int8 *)byte_1400385F3, 0LL, 0LL, 7u, &v10);
    }
  }
}
