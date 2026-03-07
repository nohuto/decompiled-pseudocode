void __fastcall PopDiagTraceInvalidBootStat(int a1, int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r10d
  char v6; // r9
  int v7; // r11d
  char v8; // [rsp+30h] [rbp-49h] BYREF
  int v9; // [rsp+34h] [rbp-45h] BYREF
  int v10; // [rsp+38h] [rbp-41h] BYREF
  int v11; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-29h] BYREF
  int *v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  int *v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  int *v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  char *v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]
  __int64 *v26; // [rsp+B0h] [rbp+37h]
  int v27; // [rsp+B8h] [rbp+3Fh]
  int v28; // [rsp+BCh] [rbp+43h]

  if ( dword_140C03928 && tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL) && v5 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, v4) )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v14 = &v9;
      v17 = &v10;
      v20 = &v11;
      v23 = &v8;
      v26 = &v12;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      v8 = v6;
      v9 = a1;
      v10 = a2;
      v11 = v7;
      v24 = 1;
      v12 = 0x1000000LL;
      v27 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)byte_140030105,
        0LL,
        0LL,
        7u,
        &v13);
    }
  }
}
