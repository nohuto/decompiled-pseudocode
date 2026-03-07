char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f41058___(
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
  *((_DWORD *)v5 + 1) = 233;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 64LL);
  *((_DWORD *)v5 + 6) = *(_DWORD *)(*(_QWORD *)a3 + 80LL);
  *((_DWORD *)v5 + 7) = *(_DWORD *)(*(_QWORD *)a3 + 84LL);
  result = 1;
  *((_DWORD *)v5 + 8) = *(_DWORD *)(*(_QWORD *)a3 + 132LL);
  return result;
}
