bool __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        unsigned int *a4,
        void *a5)
{
  unsigned int *i; // rdi
  void *v11; // rdx
  unsigned __int64 v12; // rbp
  char *v13; // rcx
  unsigned int v14; // r9d
  _DWORD *v15; // rdx
  unsigned int j; // r8d
  __int64 v17; // rax

  for ( i = (unsigned int *)a5; *i < *a4; *i += v12 )
  {
    v11 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    a5 = v11;
    if ( (unsigned __int64)v11 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&a5) )
        return *i == *a4;
      v11 = a5;
    }
    v12 = *a4 - *i;
    if ( v12 >= ((unsigned __int64)v11 - 16) >> 2 )
      LODWORD(v12) = ((unsigned __int64)v11 - 16) >> 2;
    a5 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v12 + 16), &a5);
    v13 = (char *)a5;
    v14 = 0;
    *(_DWORD *)a5 = 4 * v12 + 16;
    v15 = v13 + 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 83;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v13 + 3) = v12;
    for ( j = *i; v14 < (unsigned int)v12; ++v15 )
    {
      v17 = j;
      ++v14;
      ++j;
      *v15 = *(_DWORD *)(*(_QWORD *)(a3 + 8 * v17) + 32LL);
    }
  }
  return *i == *a4;
}
