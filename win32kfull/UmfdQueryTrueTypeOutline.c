__int64 __fastcall UmfdQueryTrueTypeOutline(__int64 a1, __int64 a2, int a3, int a4, void *a5, int a6, __int64 a7)
{
  int v11; // eax
  unsigned int v12; // ecx
  _QWORD v14[7]; // [rsp+28h] [rbp-51h] BYREF
  int v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+64h] [rbp-15h]
  void *v17; // [rsp+68h] [rbp-11h]
  int v18; // [rsp+70h] [rbp-9h]
  __int64 v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+80h] [rbp+7h]
  __int128 v21; // [rsp+88h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+1Fh]

  if ( a5 )
    memset_0(a5, 0, 0x40uLL);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v14, 11);
  v22 = 0LL;
  v14[0] = &QueryTrueTypeOutlineRequest::`vftable';
  v18 = a6;
  v17 = a5;
  v19 = a7;
  v21 = 0LL;
  v14[5] = a1;
  v14[6] = a2;
  v15 = a3;
  v16 = a4;
  v20 = -1;
  v11 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 8LL), (__int64)v14);
  v12 = v20;
  if ( v11 < 0 )
    return (unsigned int)-1;
  return v12;
}
