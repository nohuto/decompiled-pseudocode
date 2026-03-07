char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f678eeb0d1545915315cd98f9c103f50___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7 + 4;
  *(_DWORD *)v7 = 20;
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)v5 = 141;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(a1 + 32);
  lambda_f678eeb0d1545915315cd98f9c103f50_::operator()(a3);
  return 1;
}
