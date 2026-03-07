char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_050ea75d8595f0edb25d7def78c25e14___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        _QWORD **a3)
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
  *((_DWORD *)v5 + 1) = 16;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 1) = 16;
  *((_DWORD *)v5 + 2) = *((_DWORD *)*a3 + 8);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)(*a3[1] + 16LL) + 32LL);
  *((_DWORD *)v5 + 4) = *((_DWORD *)a3[1] + 2);
  *((_DWORD *)v5 + 5) = *((_DWORD *)a3[1] + 3);
  result = 1;
  *((_DWORD *)v5 + 6) = *((_DWORD *)a3[1] + 4);
  return result;
}
