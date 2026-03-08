/*
 * XREFs of PopDiagTraceBsdWriteTime @ 0x1402B9E34
 * Callers:
 *     PopWriteBsdPoInfo @ 0x1402B9F3C (PopWriteBsdPoInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceBsdWriteTime(__int64 a1, int a2, int a3)
{
  __int64 v3; // r9
  int v4; // r10d
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  __int64 v9; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-19h] BYREF
  int *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  __int64 *v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  int *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  __int64 *v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  if ( (a3 < 0 || a2) && (unsigned int)dword_140C03928 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_140C03928, 0x200000000000LL) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v11 = &v6;
      v14 = &v8;
      v17 = &v7;
      v12 = 4;
      v20 = &v9;
      v8 = v3;
      v15 = 8;
      v18 = 4;
      v21 = 8;
      v6 = v5;
      v7 = v4;
      v9 = 0x1000000LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&byte_14002D96F,
        0LL,
        0LL,
        6u,
        &v10);
    }
  }
}
