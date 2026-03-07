char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0d95967af630741c0c86b451245c298b___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        _DWORD *a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 20;
  *(_OWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 1) = 264;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 3) = *a3;
  *((_DWORD *)v5 + 4) = a3[1];
  return 1;
}
