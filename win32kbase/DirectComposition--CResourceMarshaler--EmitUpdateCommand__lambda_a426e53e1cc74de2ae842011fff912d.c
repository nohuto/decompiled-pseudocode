char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d3___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 20;
  *(_OWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 1) = 62;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 80LL);
  result = 1;
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 84LL);
  return result;
}
