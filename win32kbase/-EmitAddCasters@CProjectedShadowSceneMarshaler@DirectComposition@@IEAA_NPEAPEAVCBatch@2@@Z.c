bool __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitAddCasters(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  void *v4; // rdx
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  unsigned int v7; // r10d
  _DWORD *v8; // r8
  unsigned int i; // r9d
  __int64 v10; // rcx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 21) < *((_DWORD *)this + 20); *((_DWORD *)this + 21) += v5 )
  {
    v4 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v12 = v4;
    if ( (unsigned __int64)v4 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v12) )
        return *((_DWORD *)this + 21) == *((_DWORD *)this + 20);
      v4 = v12;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 20) - *((_DWORD *)this + 21));
    if ( v5 >= ((unsigned __int64)v4 - 16) >> 2 )
      LODWORD(v5) = ((unsigned __int64)v4 - 16) >> 2;
    v12 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v5 + 16), &v12);
    v6 = (char *)v12;
    v7 = 0;
    *(_DWORD *)v12 = 4 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 297;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = v5;
    for ( i = *((_DWORD *)this + 21); v7 < (unsigned int)v5; ++v8 )
    {
      ++v7;
      v10 = i++;
      *v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 8 * v10) + 32LL);
    }
  }
  return *((_DWORD *)this + 21) == *((_DWORD *)this + 20);
}
