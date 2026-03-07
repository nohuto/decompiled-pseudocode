char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85b3d6b2ee95012b0f566bc6f33b2e3e___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 24;
  *(_OWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 1) = 109;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 132LL);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 136LL);
  result = 1;
  *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 140LL);
  return result;
}
