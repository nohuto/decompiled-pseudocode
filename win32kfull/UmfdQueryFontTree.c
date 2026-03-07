__int64 __fastcall UmfdQueryFontTree(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  __int64 result; // rax
  _QWORD v10[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+5Ch] [rbp-24h]
  _QWORD *v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int128 v16; // [rsp+70h] [rbp-10h]

  *a5 = 0LL;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v10, 1);
  v15 = 0LL;
  v10[0] = &QueryFontTreeRequest::`vftable';
  v16 = 0LL;
  v10[5] = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = a5;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a2 + 8), (__int64)v10) < 0 )
    return 0LL;
  result = v15;
  if ( !v15 )
  {
    if ( *((_QWORD *)&v16 + 1) )
      UmfdDrvFreeInternal(*((_QWORD *)&v16 + 1), *v14, *(unsigned int *)(v11 + 8));
    return 0LL;
  }
  return result;
}
