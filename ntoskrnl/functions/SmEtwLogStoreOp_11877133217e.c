NTSTATUS __fastcall SmEtwLogStoreOp(
        REGHANDLE *a1,
        int a2,
        ULONGLONG a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  const EVENT_DESCRIPTOR *v8; // r10
  ULONG UserDataCount; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  char *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  UserData.Ptr = a3;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = 8LL;
  v8 = (const EVENT_DESCRIPTOR *)(&SmEtwDescriptorPtrs)[a2];
  v15 = 4LL;
  v12 = &a6;
  v14 = &a5;
  UserDataCount = 3;
  if ( a2 != 1 )
  {
    v17 = 2LL;
    v16 = &a7;
    v18 = &a8;
    UserDataCount = 5;
    v19 = 2LL;
  }
  return EtwWriteEx(*a1, v8, 0LL, 1u, 0LL, 0LL, UserDataCount, &UserData);
}
