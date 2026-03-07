__int64 __fastcall ViCtxSetPrivateConnectParameters(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  __int64 *v5; // rsi
  int v7; // ecx
  int v8; // ecx
  __int64 v10; // rbx
  __int64 v11; // r8
  _QWORD *IsrContext; // rax

  v3 = *a2;
  *a3 = 0LL;
  v5 = 0LL;
  *(_OWORD *)a1 = v3;
  *(_OWORD *)(a1 + 16) = a2[1];
  *(_OWORD *)(a1 + 32) = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 64) = a2[4];
  v7 = *(_DWORD *)a1 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 != 1 )
      return 3221225659LL;
    v5 = (__int64 *)(a1 + 24);
    v10 = 56LL;
  }
  else
  {
    v10 = 24LL;
  }
  if ( v5 )
    v11 = *v5;
  else
    v11 = 0LL;
  IsrContext = ViCtxAllocateIsrContext(*(_QWORD *)(v10 + a1), *(_QWORD *)(a1 + 32), v11);
  *a3 = IsrContext;
  if ( !IsrContext )
    return 3221225626LL;
  *(_QWORD *)(a1 + 32) = IsrContext;
  if ( !v5 || (*v5 = (__int64)ViCtxIsrMessageBased, *(_QWORD *)(v10 + a1)) )
    *(_QWORD *)(v10 + a1) = ViCtxIsr;
  return 0LL;
}
