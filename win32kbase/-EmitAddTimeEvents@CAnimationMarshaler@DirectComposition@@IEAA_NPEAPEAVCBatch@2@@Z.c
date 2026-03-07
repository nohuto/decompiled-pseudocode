bool __fastcall DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v5; // rdx
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  unsigned int v8; // ecx
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 61) < *((_DWORD *)this + 60) )
  {
    do
    {
      v5 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v9 = v5;
      if ( (unsigned __int64)v5 < 0x1C )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v9) )
          return *((_DWORD *)this + 61) == *((_DWORD *)this + 60);
        v5 = v9;
      }
      v6 = (unsigned int)(*((_DWORD *)this + 60) - *((_DWORD *)this + 61));
      if ( v6 >= ((unsigned __int64)v5 - 12) >> 4 )
        LODWORD(v6) = ((unsigned __int64)v5 - 12) >> 4;
      v9 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(16 * v6 + 12), &v9);
      v7 = (char *)v9;
      *(_DWORD *)v9 = 16 * v6 + 12;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 1) = 1;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 12);
      memmove(
        v7 + 12,
        (const void *)(*((_QWORD *)this + 29) + 16LL * *((unsigned int *)this + 61)),
        (unsigned int)(16 * v6));
      v8 = v6 + *((_DWORD *)this + 61);
      *((_DWORD *)this + 61) = v8;
    }
    while ( v8 < *((_DWORD *)this + 60) );
  }
  return *((_DWORD *)this + 61) == *((_DWORD *)this + 60);
}
