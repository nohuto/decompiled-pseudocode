char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_08fab9d56937b2df5c8c3c8f32b86a45___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rax
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 152;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  lambda_08fab9d56937b2df5c8c3c8f32b86a45_::operator()(a3);
  return 1;
}
