char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36d___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 *a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // xmm1_8
  char result; // al
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v9) )
    return 0;
  v5 = (char *)v9;
  *(_DWORD *)v9 = 36;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_OWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 66;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  v6 = *a3;
  *(_OWORD *)(v5 + 12) = *(_OWORD *)(*a3 + 108);
  v7 = *(_QWORD *)(v6 + 124);
  result = 1;
  *(_QWORD *)(v5 + 28) = v7;
  return result;
}
