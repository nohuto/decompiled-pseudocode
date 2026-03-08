/*
 * XREFs of MiLogWsEmptyControl @ 0x140650470
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A408A4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiFillLogProcessInfo @ 0x140224D68 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall MiLogWsEmptyControl(__int64 a1)
{
  _DWORD *v1; // r10
  int v2; // edx
  __int64 v3; // r9
  char v4; // al
  ULONG v5; // r9d
  int v6; // r11d
  __int64 v7; // r8
  __int64 v8; // r10
  int v9; // [rsp+20h] [rbp-59h]
  int v10; // [rsp+28h] [rbp-51h]
  char v11; // [rsp+40h] [rbp-39h] BYREF
  int v12; // [rsp+44h] [rbp-35h] BYREF
  const CHAR *v13; // [rsp+48h] [rbp-31h] BYREF
  int v14; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-19h] BYREF
  char *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  _BYTE v19[16]; // [rsp+90h] [rbp+17h] BYREF
  int *v20; // [rsp+A0h] [rbp+27h]
  ULONG v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]
  const CHAR **v23; // [rsp+B0h] [rbp+37h]
  ULONG v24; // [rsp+B8h] [rbp+3Fh]
  int v25; // [rsp+BCh] [rbp+43h]

  v13 = 0LL;
  v12 = 0;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    MiFillLogProcessInfo(a1, &v12, &v13);
    if ( *v1 > 5u )
    {
      if ( tlgKeywordOn((__int64)v1, 16LL) )
      {
        v4 = *(_BYTE *)(v3 + 184);
        v18 = 0;
        v11 = v4 & 7;
        v16 = &v11;
        v17 = v2 - 15;
        tlgCreate1Sz_char((__int64)v19, v13);
        v22 = 0;
        v25 = 0;
        v20 = &v14;
        v14 = v12;
        v23 = &v13;
        v21 = v5 + 3;
        v24 = v5 + 3;
        LODWORD(v13) = v6;
        tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&byte_14003918F, v7, v5, v9, v10, 6u, &v15);
      }
    }
  }
}
