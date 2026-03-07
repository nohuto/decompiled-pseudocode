bool __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitAppendSurfaceResources(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v4; // rdx
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  unsigned int v7; // edx
  _DWORD *v8; // r8
  __int64 v9; // rcx
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 23) < *((_DWORD *)this + 22); *((_DWORD *)this + 23) += v5 )
  {
    v4 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v11 = v4;
    if ( (unsigned __int64)v4 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v11) )
        return *((_DWORD *)this + 23) == *((_DWORD *)this + 22);
      v4 = v11;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 22) - *((_DWORD *)this + 23));
    if ( v5 >= ((unsigned __int64)v4 - 16) >> 2 )
      LODWORD(v5) = ((unsigned __int64)v4 - 16) >> 2;
    v11 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v5 + 16), &v11);
    v6 = (char *)v11;
    v7 = 0;
    *(_DWORD *)v11 = 4 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 285;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v6 + 3) = v5; v7 < (unsigned int)v5; ++v8 )
    {
      v9 = v7 + *((_DWORD *)this + 23);
      ++v7;
      *v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8 * v9) + 32LL);
    }
  }
  return *((_DWORD *)this + 23) == *((_DWORD *)this + 22);
}
