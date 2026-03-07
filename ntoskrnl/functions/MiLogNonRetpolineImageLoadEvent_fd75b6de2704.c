void __fastcall MiLogNonRetpolineImageLoadEvent(__int64 a1, int a2)
{
  unsigned __int16 *v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-59h] BYREF
  int v7; // [rsp+34h] [rbp-55h] BYREF
  __int64 v8; // [rsp+38h] [rbp-51h] BYREF
  __int64 v9; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  _DWORD *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  __int64 v15; // [rsp+90h] [rbp+7h]
  _DWORD v16[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  int *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  __int64 *v21; // [rsp+C0h] [rbp+37h]
  __int64 v22; // [rsp+C8h] [rbp+3Fh]

  if ( **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000000LL) )
    {
      v8 = 1LL;
      v12 = 8LL;
      v11 = &v8;
      v22 = 8LL;
      v13 = v16;
      v15 = *((_QWORD *)v3 + 1);
      v16[0] = *v3;
      v14 = 2LL;
      v17 = &v6;
      v19 = &v7;
      v9 = 2164260864LL;
      v21 = &v9;
      v16[1] = 0;
      v6 = a2;
      v18 = 4LL;
      v7 = v5;
      v20 = 4LL;
      tlgWriteAgg(v4, (unsigned __int8 *)&byte_14003865D, 0LL, 8u, &v10);
    }
  }
}
