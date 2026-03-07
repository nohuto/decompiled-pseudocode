char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0dca58dedee681c2db4143a7d5c4dddd___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 60;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_OWORD *)(v5 + 20) = 0LL;
  *(_OWORD *)(v5 + 36) = 0LL;
  *(_QWORD *)(v5 + 52) = 0LL;
  *((_DWORD *)v5 + 1) = 236;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*(_QWORD *)a3 + 72LL);
  *(_OWORD *)(v5 + 20) = *(_OWORD *)(*(_QWORD *)a3 + 88LL);
  *((_DWORD *)v5 + 9) = *(_DWORD *)(*(_QWORD *)a3 + 104LL);
  *(_OWORD *)(v5 + 40) = *(_OWORD *)(*(_QWORD *)a3 + 108LL);
  result = 1;
  *((_DWORD *)v5 + 14) = *(_DWORD *)(*(_QWORD *)a3 + 124LL);
  return result;
}
