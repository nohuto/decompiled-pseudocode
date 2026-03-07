char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e30ba675ae0f62c08cda61183728c725___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  char result; // al
  _DWORD *v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, (void **)&v9) )
    return 0;
  v6 = v9;
  *v9 = 32;
  *(_OWORD *)(v6 + 1) = 0LL;
  *(_QWORD *)(v6 + 5) = 0LL;
  v6[7] = 0;
  v6[1] = 373;
  v6[2] = *(_DWORD *)(a1 + 32);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 72LL);
  if ( v7 )
    v3 = *(_DWORD *)(v7 + 32);
  v6[3] = v3;
  result = 1;
  *((_OWORD *)v6 + 1) = *(_OWORD *)(*(_QWORD *)a3 + 88LL);
  return result;
}
