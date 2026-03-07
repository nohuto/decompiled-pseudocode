void PnpTraceIommuDeviceProperties()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v5; // [rsp+60h] [rbp+7h]
  __int64 v6; // [rsp+68h] [rbp+Fh]
  _DWORD *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  __int64 v9; // [rsp+80h] [rbp+27h]
  _DWORD v10[2]; // [rsp+88h] [rbp+2Fh] BYREF
  int *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140C038F0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C038F0, 0x400000000000LL) )
    {
      v10[1] = 0;
      v5 = &v3;
      v2 = v0;
      v7 = v10;
      v9 = *(_QWORD *)(v1 + 48);
      v10[0] = *(unsigned __int16 *)(v1 + 40);
      v11 = &v2;
      v3 = 2048LL;
      v6 = 8LL;
      v8 = 2LL;
      v12 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C038F0,
        (unsigned __int8 *)&word_14002C716,
        0LL,
        0LL,
        6u,
        &v4);
    }
  }
}
