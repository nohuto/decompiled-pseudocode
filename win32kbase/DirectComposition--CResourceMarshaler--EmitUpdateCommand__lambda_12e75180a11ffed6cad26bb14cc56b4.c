char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12e75180a11ffed6cad26bb14cc56b49___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        _DWORD **a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 341;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 3) = **a3;
  result = 1;
  *(_QWORD *)(v5 + 20) = *((_QWORD *)*a3 + 1);
  return result;
}
