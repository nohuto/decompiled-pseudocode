/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x140360210
 * Callers:
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void MiLogProcessWorkingSetsStop()
{
  ULONG v0; // edx
  __int64 v1; // r8
  __int64 v2; // r10
  _QWORD *v3; // r11
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-49h]
  int v6; // [rsp+28h] [rbp-41h]
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+48h] [rbp-21h] BYREF
  __int64 v9; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+80h] [rbp+17h]
  int v12; // [rsp+88h] [rbp+1Fh]
  int v13; // [rsp+8Ch] [rbp+23h]
  __int64 *v14; // [rsp+90h] [rbp+27h]
  int v15; // [rsp+98h] [rbp+2Fh]
  int v16; // [rsp+9Ch] [rbp+33h]
  __int64 *v17; // [rsp+A0h] [rbp+37h]
  int v18; // [rsp+A8h] [rbp+3Fh]
  int v19; // [rsp+ACh] [rbp+43h]

  if ( *(_QWORD *)&qword_140C69568 && **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 1LL) )
    {
      v4 = v3[2152];
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v7 = v4;
      v11 = &v7;
      v8 = v3[2200];
      v14 = &v8;
      v9 = v3[2228];
      v17 = &v9;
      v12 = 8;
      v15 = 8;
      v18 = 8;
      tlgWriteEx_EtwWriteEx(v2, (unsigned __int8 *)&byte_140038477, v1, v0, v5, v6, 5u, &v10);
    }
  }
}
