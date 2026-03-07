char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v7) )
    return 0;
  v5 = (char *)v7 + 4;
  *(_DWORD *)v7 = 48;
  *(_OWORD *)v5 = 0LL;
  *((_OWORD *)v5 + 1) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_DWORD *)v5 + 10) = 0;
  *(_DWORD *)v5 = 319;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(a1 + 32);
  lambda_adea4d0abd8eda5f6785acddb97df7f7_::operator()(a3);
  return 1;
}
