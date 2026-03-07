bool __fastcall DirectComposition::CCompositionCubeMapMarshaler::EmitSurfaces(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  char *v7; // rcx
  unsigned int v8; // r9d
  char *v9; // rcx
  unsigned int i; // r8d
  __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // eax
  void *v15; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 17) < *((_DWORD *)this + 16); *((_DWORD *)this + 17) += v5 )
  {
    v4 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v15 = v4;
    if ( (unsigned __int64)v4 < 0x24 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v15) )
        return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
      v4 = v15;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 16) - *((_DWORD *)this + 17));
    v6 = ((unsigned __int64)v4 - 16) / 0x14;
    if ( v5 >= v6 )
      LODWORD(v5) = v6;
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(20 * v5 + 16), &v15);
    v7 = (char *)v15;
    v8 = 0;
    *(_DWORD *)v15 = 20 * v5 + 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 78;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v7 + 3) = v5;
    v9 = v7 + 16;
    for ( i = *((_DWORD *)this + 17); v8 < (unsigned int)v5; v9 += 20 )
    {
      v11 = 3LL * i;
      v12 = *(_QWORD *)(*((_QWORD *)this + 7) + 24LL * i);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 32);
      else
        v13 = 0;
      *(_DWORD *)v9 = v13;
      ++v8;
      ++i;
      *(_OWORD *)(v9 + 4) = *(_OWORD *)(*((_QWORD *)this + 7) + 8 * v11 + 8);
    }
  }
  return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
}
