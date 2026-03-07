char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaCenterpointAnimations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v5; // di
  char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v5 = 1;
  if ( (v2 & 0x8000000) == 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return 0;
    v6 = (char *)v13;
    *(_DWORD *)v13 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 204;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    v7 = *((_QWORD *)this + 41);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 )
        *((_DWORD *)v6 + 3) = *(_DWORD *)(v8 + 32);
    }
    *((_DWORD *)this + 4) |= 0x8000000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x10000000) != 0 )
    return v5;
  v13 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
    return 0;
  v9 = (char *)v13;
  *(_DWORD *)v13 = 16;
  *(_QWORD *)(v9 + 4) = 0LL;
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 1) = 205;
  *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
  v10 = *((_QWORD *)this + 42);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( v11 )
      *((_DWORD *)v9 + 3) = *(_DWORD *)(v11 + 32);
  }
  *((_DWORD *)this + 4) |= 0x10000000u;
  return v5;
}
