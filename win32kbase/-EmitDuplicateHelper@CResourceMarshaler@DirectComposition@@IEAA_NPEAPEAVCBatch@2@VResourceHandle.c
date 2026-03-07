char __fastcall DirectComposition::CResourceMarshaler::EmitDuplicateHelper(__int64 a1, __int64 *a2, int a3)
{
  char *v6; // rdx
  __int64 v7; // rax
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( (int)DirectComposition::CBatch::AddSystemResourceRef(*a2, a3) < 0
    || !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x14uLL, &v9) )
  {
    return 0;
  }
  v6 = (char *)v9;
  v7 = *(_QWORD *)(*(_QWORD *)(*a2 + 8) + 40LL);
  *(_DWORD *)v9 = 20;
  *(_OWORD *)(v6 + 4) = 0LL;
  *((_DWORD *)v6 + 1) = 46;
  *((_DWORD *)v6 + 2) = *(_DWORD *)(*(_QWORD *)(v7 + 152) + 28LL);
  *((_DWORD *)v6 + 3) = a3;
  *((_DWORD *)v6 + 4) = *(_DWORD *)(a1 + 32);
  return 1;
}
