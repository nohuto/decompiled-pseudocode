void PopTracePowerReconfig()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-69h] BYREF
  int v3; // [rsp+34h] [rbp-65h] BYREF
  int v4; // [rsp+38h] [rbp-61h] BYREF
  int v5; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v6; // [rsp+40h] [rbp-59h] BYREF
  int v7; // [rsp+44h] [rbp-55h] BYREF
  _DWORD v8[2]; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v10; // [rsp+70h] [rbp-29h]
  __int64 v11; // [rsp+78h] [rbp-21h]
  int *v12; // [rsp+80h] [rbp-19h]
  __int64 v13; // [rsp+88h] [rbp-11h]
  int *v14; // [rsp+90h] [rbp-9h]
  __int64 v15; // [rsp+98h] [rbp-1h]
  int *v16; // [rsp+A0h] [rbp+7h]
  __int64 v17; // [rsp+A8h] [rbp+Fh]
  int *v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  int *v20; // [rsp+C0h] [rbp+27h]
  __int64 v21; // [rsp+C8h] [rbp+2Fh]
  int *v22; // [rsp+D0h] [rbp+37h]
  __int64 v23; // [rsp+D8h] [rbp+3Fh]

  v8[0] = MEMORY[0xFFFFF78000000014];
  v8[1] = MEMORY[0xFFFFF78000000018];
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v5 = v0;
      v10 = v8;
      v2 = dword_140C3CB54;
      v11 = 8LL;
      v12 = &v2;
      v3 = xmmword_140C3CBA4;
      v14 = &v3;
      v16 = &v4;
      v18 = &v5;
      v6 = (unsigned __int8)byte_140C3CCE8;
      v20 = &v6;
      v7 = qword_140C3CCFC;
      v22 = &v7;
      v13 = 4LL;
      v15 = 4LL;
      v4 = v1;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)byte_14002EFEB, 0LL, 0LL, 9u, &v9);
    }
  }
}
