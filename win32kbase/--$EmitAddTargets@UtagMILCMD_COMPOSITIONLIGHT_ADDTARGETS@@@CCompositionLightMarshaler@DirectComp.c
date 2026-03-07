bool __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        unsigned int *a4,
        void *a5)
{
  unsigned int *i; // rdi
  void *v10; // rdx
  unsigned __int64 v11; // rbp
  char *v12; // rcx
  unsigned int v13; // r9d
  _DWORD *v14; // rdx
  unsigned int j; // r8d
  __int64 v16; // rax

  for ( i = (unsigned int *)a5; *i < *a4; *i += v11 )
  {
    v10 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    a5 = v10;
    if ( (unsigned __int64)v10 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&a5) )
        return *i == *a4;
      v10 = a5;
    }
    v11 = *a4 - *i;
    if ( v11 >= ((unsigned __int64)v10 - 16) >> 2 )
      LODWORD(v11) = ((unsigned __int64)v10 - 16) >> 2;
    a5 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v11 + 16), &a5);
    v12 = (char *)a5;
    v13 = 0;
    *(_DWORD *)a5 = 4 * v11 + 16;
    v14 = v12 + 16;
    *(_QWORD *)(v12 + 4) = 0LL;
    *((_DWORD *)v12 + 3) = 0;
    *((_DWORD *)v12 + 1) = 84;
    *((_DWORD *)v12 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v12 + 3) = v11;
    for ( j = *i; v13 < (unsigned int)v11; ++v14 )
    {
      v16 = j;
      ++v13;
      ++j;
      *v14 = *(_DWORD *)(*(_QWORD *)(a3 + 8 * v16) + 32LL);
    }
  }
  return *i == *a4;
}
