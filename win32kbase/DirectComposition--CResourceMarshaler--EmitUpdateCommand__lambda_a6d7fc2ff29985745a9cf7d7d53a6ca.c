char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a6d7fc2ff29985745a9cf7d7d53a6cac___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 *a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 24;
  *(_OWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 1) = 260;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 1) = 260;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*a3 + 32);
  v6 = *a3;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*a3 + 140);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(v6 + 148);
  return 1;
}
