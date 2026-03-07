void __fastcall IopMcCreateBufferEntryMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  KPROCESSOR_MODE v5; // r8
  ULONG v7; // edx
  void *v8; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  PMDL Mdl; // [rsp+40h] [rbp+8h] BYREF

  v4 = dword_140C5D2E0;
  v5 = *(_BYTE *)(a1 + 44);
  v7 = *(_DWORD *)(a1 + 40);
  v10 = 0LL;
  v8 = *(void **)(a1 + 32);
  Mdl = 0LL;
  if ( (int)IopAllocateAndLockMdl(v8, v7, v5, a4, &Mdl, 0LL) >= 0 )
  {
    IopMcAddMdlPagesToTable(a1, (__int64)Mdl);
    _InterlockedOr(v9, 0);
    if ( v4 == dword_140C5D2E0 )
    {
      *(_QWORD *)(a1 + 56) = Mdl;
    }
    else
    {
      IopMcRemoveMdlPagesFromTable(a1, (__int64)Mdl);
      IopUnlockAndFreeMdl(Mdl);
    }
  }
}
