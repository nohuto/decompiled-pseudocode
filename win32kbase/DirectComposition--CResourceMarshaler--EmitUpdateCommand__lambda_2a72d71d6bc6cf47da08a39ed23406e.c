char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2a72d71d6bc6cf47da08a39ed23406ed___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 36;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_OWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 326;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *(_OWORD *)(v5 + 20) = *(_OWORD *)(*(_QWORD *)a3 + 72LL);
  result = 1;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
  return result;
}
