/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x140615DEC
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140616AC8 (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall MiLogOutswappedProcessCommitReacquire(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r11
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  __int16 *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r11
  int v13; // ecx
  int v14; // [rsp+20h] [rbp-39h]
  int v15; // [rsp+28h] [rbp-31h]
  int v16; // [rsp+40h] [rbp-19h] BYREF
  __int64 v17; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  __int64 *v23; // [rsp+90h] [rbp+37h]
  int v24; // [rsp+98h] [rbp+3Fh]
  int v25; // [rsp+9Ch] [rbp+43h]

  if ( *(_QWORD *)&qword_140C69568 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 4LL) )
        {
          tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v11 + 1448));
          v10 = word_140037FC2;
          goto LABEL_13;
        }
      }
      else if ( **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 4LL) )
      {
        tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v12 + 1448));
        v10 = (__int16 *)&word_140038016;
        goto LABEL_13;
      }
    }
    else if ( **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 4LL) )
    {
      tlgCreate1Sz_char((__int64)v19, (const CHAR *)(v5 + 1448));
      v10 = word_140037F72;
LABEL_13:
      v13 = *(_DWORD *)(v9 + 1088);
      v22 = 0;
      v25 = 0;
      v20 = &v16;
      v23 = &v17;
      v21 = v7;
      v16 = v13;
      v17 = a2;
      v24 = 8;
      tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)v10, v6, 1u, v14, v15, 5u, &v18);
    }
  }
}
