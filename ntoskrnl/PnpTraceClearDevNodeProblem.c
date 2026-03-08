/*
 * XREFs of PnpTraceClearDevNodeProblem @ 0x140866ADC
 * Callers:
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 * Callees:
 *     _tlgWriteAgg @ 0x14035EDD0 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PnpTraceClearDevNodeProblem(unsigned __int16 *a1, __int64 a2, int a3)
{
  int v4; // r9d
  int v5; // r10d
  unsigned __int16 *v6; // r11
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  __int64 v9; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-29h]
  __int64 v12; // [rsp+68h] [rbp-21h]
  _DWORD *v13; // [rsp+70h] [rbp-19h]
  __int64 v14; // [rsp+78h] [rbp-11h]
  __int64 v15; // [rsp+80h] [rbp-9h]
  _DWORD v16[2]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD *v17; // [rsp+90h] [rbp+7h]
  __int64 v18; // [rsp+98h] [rbp+Fh]
  __int64 v19; // [rsp+A0h] [rbp+17h]
  _DWORD v20[2]; // [rsp+A8h] [rbp+1Fh] BYREF
  int *v21; // [rsp+B0h] [rbp+27h]
  __int64 v22; // [rsp+B8h] [rbp+2Fh]
  int *v23; // [rsp+C0h] [rbp+37h]
  __int64 v24; // [rsp+C8h] [rbp+3Fh]

  if ( a3 != 1 && (unsigned int)dword_140C06968 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C06968, 0x800000000000LL) )
    {
      v8 = v4;
      v11 = &v9;
      v9 = 1LL;
      v13 = v16;
      v15 = *((_QWORD *)a1 + 1);
      v16[0] = *a1;
      v17 = v20;
      v19 = *((_QWORD *)v6 + 1);
      v20[0] = *v6;
      v21 = &v7;
      v23 = &v8;
      v12 = 8LL;
      v14 = 2LL;
      v16[1] = 0;
      v18 = 2LL;
      v20[1] = 0;
      v7 = v5;
      v22 = 4LL;
      v24 = 4LL;
      tlgWriteAgg((__int64)&dword_140C06968, (unsigned __int8 *)&dword_14002CD2C, 0LL, 9u, &v10);
    }
  }
}
