__int64 __fastcall McTemplateU0ffff_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, float a4, char a5, char a6)
{
  int v6; // xmm2_4
  _BYTE v8[16]; // [rsp+30h] [rbp-19h] BYREF
  int *v9; // [rsp+40h] [rbp-9h]
  __int64 v10; // [rsp+48h] [rbp-1h]
  float *v11; // [rsp+50h] [rbp+7h]
  __int64 v12; // [rsp+58h] [rbp+Fh]
  char *v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  char *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+B0h] [rbp+67h] BYREF
  float v18; // [rsp+B8h] [rbp+6Fh] BYREF

  v18 = a4;
  v17 = v6;
  v10 = 4LL;
  v9 = &v17;
  v12 = 4LL;
  v11 = &v18;
  v13 = &a5;
  v15 = &a6;
  v14 = 4LL;
  v16 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, a2, a3, 5LL, v8);
}
