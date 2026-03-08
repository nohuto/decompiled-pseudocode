/*
 * XREFs of MiLogAddPhysicalMemory @ 0x1406194D0
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall MiLogAddPhysicalMemory(unsigned __int16 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  _UNKNOWN **v5; // rax
  int v9; // r9d
  __int64 v10; // r10
  unsigned __int8 *v11; // rdx
  int v12; // r9d
  _DWORD *v13; // r11
  ULONG v15; // [rsp+38h] [rbp-61h]
  int v16; // [rsp+48h] [rbp-51h] BYREF
  int v17; // [rsp+4Ch] [rbp-4Dh] BYREF
  __int64 v18; // [rsp+50h] [rbp-49h] BYREF
  __int64 v19; // [rsp+58h] [rbp-41h] BYREF
  __int64 v20; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+68h] [rbp-31h] BYREF
  int *v22; // [rsp+88h] [rbp-11h]
  __int64 v23; // [rsp+90h] [rbp-9h]
  __int64 *v24; // [rsp+98h] [rbp-1h]
  __int64 v25; // [rsp+A0h] [rbp+7h]
  __int64 *v26; // [rsp+A8h] [rbp+Fh]
  __int64 v27; // [rsp+B0h] [rbp+17h]
  int *v28; // [rsp+B8h] [rbp+1Fh]
  __int64 v29; // [rsp+C0h] [rbp+27h]
  __int64 *v30; // [rsp+C8h] [rbp+2Fh]
  __int64 v31; // [rsp+D0h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    if ( a5 )
    {
      if ( **(_DWORD **)&qword_140C69568 > 5u )
      {
        LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 256LL);
        if ( (_BYTE)v5 )
        {
          v11 = (unsigned __int8 *)&word_1400380C2;
          v17 = *a1;
          v22 = &v17;
          v19 = *a2;
          v24 = &v19;
          v20 = *a3;
          v26 = &v20;
          v28 = &v16;
          LODWORD(v18) = *v13;
          v30 = &v18;
          v15 = 7;
          v16 = v12;
          v31 = 4LL;
          goto LABEL_9;
        }
      }
    }
    else if ( **(_DWORD **)&qword_140C69568 > 5u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 256LL);
      if ( (_BYTE)v5 )
      {
        v11 = (unsigned __int8 *)word_14003806A;
        v16 = *a1;
        v22 = &v16;
        v18 = *a2;
        v24 = &v18;
        v19 = *a3;
        v26 = &v19;
        v28 = &v17;
        v15 = 6;
        v17 = v9;
LABEL_9:
        v23 = 4LL;
        v25 = 8LL;
        v27 = 8LL;
        v29 = 4LL;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(v10, v11, 0LL, 1u, 0, 0, v15, &v21);
      }
    }
  }
  return (char)v5;
}
