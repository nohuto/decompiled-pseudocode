bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetSources(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v4; // rdx
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  unsigned int v7; // edx
  _DWORD *v8; // r8
  int v9; // r9d
  __int64 v10; // rax
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 51) < *((_DWORD *)this + 50); *((_DWORD *)this + 51) += v5 )
  {
    v4 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v12 = v4;
    if ( (unsigned __int64)v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v12) )
        return *((_DWORD *)this + 51) == *((_DWORD *)this + 50);
      v4 = v12;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 50) - *((_DWORD *)this + 51));
    if ( v5 >= ((unsigned __int64)v4 - 20) >> 2 )
      LODWORD(v5) = ((unsigned __int64)v4 - 20) >> 2;
    v12 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(4 * v5 + 20),
      &v12);
    v6 = (char *)v12;
    v7 = 0;
    *(_DWORD *)v12 = 4 * v5 + 20;
    v8 = v6 + 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 146;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = v5;
    for ( *((_DWORD *)v6 + 4) = *((_DWORD *)this + 50); v7 < (unsigned int)v5; ++v8 )
    {
      v9 = 0;
      v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL * (v7 + *((_DWORD *)this + 51))) + 16LL);
      if ( v10 )
        v9 = *(_DWORD *)(v10 + 32);
      *v8 = v9;
      ++v7;
    }
  }
  return *((_DWORD *)this + 51) == *((_DWORD *)this + 50);
}
