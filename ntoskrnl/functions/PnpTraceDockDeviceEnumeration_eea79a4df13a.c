void PnpTraceDockDeviceEnumeration()
{
  __int64 v0; // r9
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-39h] BYREF
  int v3; // [rsp+34h] [rbp-35h] BYREF
  __int64 v4; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v6; // [rsp+60h] [rbp-9h]
  __int64 v7; // [rsp+68h] [rbp-1h]
  _DWORD *v8; // [rsp+70h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+Fh]
  __int64 v10; // [rsp+80h] [rbp+17h]
  _DWORD v11[2]; // [rsp+88h] [rbp+1Fh] BYREF
  int *v12; // [rsp+90h] [rbp+27h]
  __int64 v13; // [rsp+98h] [rbp+2Fh]
  int *v14; // [rsp+A0h] [rbp+37h]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_140C038F0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C038F0, 0x400000000000LL) )
    {
      v4 = 2048LL;
      v6 = &v4;
      v7 = 8LL;
      v8 = v11;
      v10 = *(_QWORD *)(v0 + 48);
      v11[0] = *(unsigned __int16 *)(v0 + 40);
      v2 = *(_DWORD *)(v0 + 568);
      v12 = &v2;
      v14 = &v3;
      v9 = 2LL;
      v11[1] = 0;
      v13 = 4LL;
      v3 = v1;
      v15 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C038F0,
        (unsigned __int8 *)&byte_14002C7C7,
        0LL,
        0LL,
        7u,
        &v5);
    }
  }
}
