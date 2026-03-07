char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2646d8dfdaeffa67c2bd0b1cb7e2cfaf___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  _DWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v9) )
    return 0;
  v6 = v9;
  *v9 = 16;
  *(_QWORD *)(v6 + 1) = 0LL;
  v6[3] = 0;
  v6[1] = 295;
  v6[2] = *(_DWORD *)(a1 + 32);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 72LL);
  if ( v7 )
    v3 = *(_DWORD *)(v7 + 32);
  v6[3] = v3;
  return 1;
}
