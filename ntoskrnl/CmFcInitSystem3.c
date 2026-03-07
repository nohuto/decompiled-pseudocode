char CmFcInitSystem3()
{
  char result; // al
  char *v1; // r9
  char v2; // [rsp+30h] [rbp-D0h] BYREF
  char v3; // [rsp+31h] [rbp-CFh] BYREF
  char v4; // [rsp+32h] [rbp-CEh] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-B0h] BYREF
  char *v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  char *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  char *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  int *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  int *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int64 *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]

  TlgRegisterAggregateProvider(&dword_140C067D0);
  result = KeLoaderBlock_0;
  if ( (unsigned int)dword_140C067D0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C067D0, 0x400000000000LL);
    if ( result )
    {
      v2 = *v1;
      v13 = 1LL;
      v12 = &v2;
      v3 = v1[1];
      v14 = &v3;
      v4 = v1[2];
      v16 = &v4;
      v5 = *((_DWORD *)v1 + 1);
      v18 = &v5;
      v6 = *((_DWORD *)v1 + 2);
      v20 = &v6;
      v7 = *((_DWORD *)v1 + 3);
      v22 = &v7;
      v8 = *((_DWORD *)v1 + 4);
      v24 = &v8;
      v9 = *((_DWORD *)v1 + 5);
      v26 = &v9;
      v28 = &v10;
      v15 = 1LL;
      v17 = 1LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v10 = 0x1000000LL;
      v29 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C067D0,
               (unsigned __int8 *)word_140036602,
               0LL,
               0LL,
               0xBu,
               &v11);
    }
  }
  return result;
}
