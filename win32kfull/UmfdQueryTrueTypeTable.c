__int64 __fastcall UmfdQueryTrueTypeTable(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v12; // eax
  unsigned int v13; // ecx
  _QWORD v15[6]; // [rsp+28h] [rbp-59h] BYREF
  int v16; // [rsp+58h] [rbp-29h]
  int v17; // [rsp+5Ch] [rbp-25h]
  int v18; // [rsp+60h] [rbp-21h]
  int v19; // [rsp+64h] [rbp-1Dh]
  __int64 v20; // [rsp+68h] [rbp-19h]
  _QWORD *v21; // [rsp+70h] [rbp-11h]
  _DWORD *v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+80h] [rbp-1h]
  __int128 v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+98h] [rbp+17h]

  if ( a7 )
    *a7 = 0LL;
  if ( a8 )
    *a8 = 0;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v15, 10);
  v25 = 0LL;
  v15[0] = &QueryTrueTypeTableRequest::`vftable';
  v19 = a5;
  v22 = a8;
  v20 = a6;
  v24 = 0LL;
  v15[5] = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  v21 = a7;
  v23 = -1;
  v12 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 8), (__int64)v15);
  v13 = v23;
  if ( v12 < 0 )
    return (unsigned int)-1;
  return v13;
}
