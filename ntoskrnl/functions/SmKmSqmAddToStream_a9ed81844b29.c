NTSTATUS __fastcall SmKmSqmAddToStream(REGHANDLE RegHandle, __int64 a2, __int64 a3, _DWORD *a4)
{
  char *v4; // rdx
  char *v6; // rcx
  __int64 v7; // r10
  int v8; // r8d
  int *v9; // rax
  const wchar_t *v10; // r8
  __int64 v11; // rax
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  int *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  int *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  char v24; // [rsp+A0h] [rbp-60h] BYREF
  char v25; // [rsp+BCh] [rbp-44h] BYREF

  v15 = 2;
  UserData.Ptr = (ULONGLONG)&v13;
  v4 = &v24;
  v14 = 6839;
  v18 = &unk_140C0DC78;
  v13 = 11;
  v20 = &v14;
  v16 = 0;
  v22 = &v15;
  v6 = &v25;
  *(_QWORD *)&UserData.Size = 4LL;
  v7 = 2LL;
  v19 = 16LL;
  v21 = 4LL;
  v23 = 4LL;
  do
  {
    v8 = *a4;
    v9 = a4 + 2;
    *(_QWORD *)v4 = a4;
    *(_QWORD *)(v6 - 20) = 4LL;
    if ( v8 != 1 )
      v9 = &v16;
    *(_QWORD *)(v6 - 12) = v9;
    *(_QWORD *)(v6 - 4) = 4LL;
    if ( v8 == 2 )
      v10 = (const wchar_t *)*((_QWORD *)a4 + 1);
    else
      v10 = L"0";
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    *(_QWORD *)(v6 + 4) = v10;
    *((_DWORD *)v6 + 3) = 2 * v11 + 2;
    a4 += 4;
    *((_DWORD *)v6 + 4) = 0;
    v4 += 48;
    v6 += 48;
    --v7;
  }
  while ( v7 );
  return EtwWriteEx(RegHandle, &SmEventSQMStreamRow, 0LL, 0, 0LL, 0LL, (v4 - (char *)&UserData) >> 4, &UserData);
}
