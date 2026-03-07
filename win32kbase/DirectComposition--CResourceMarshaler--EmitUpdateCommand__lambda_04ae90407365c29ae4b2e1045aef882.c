char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_04ae90407365c29ae4b2e1045aef8826___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 *a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  char result; // al
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v9) )
    return 0;
  v5 = (char *)v9;
  *(_DWORD *)v9 = 52;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_OWORD *)(v5 + 20) = 0LL;
  *(_OWORD *)(v5 + 36) = 0LL;
  *((_DWORD *)v5 + 1) = 150;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  v6 = *a3;
  *(_OWORD *)(v5 + 12) = *(_OWORD *)(*a3 + 184);
  *(_OWORD *)(v5 + 28) = *(_OWORD *)(v6 + 200);
  v7 = *(_QWORD *)(v6 + 216);
  result = 1;
  *(_QWORD *)(v5 + 44) = v7;
  return result;
}
