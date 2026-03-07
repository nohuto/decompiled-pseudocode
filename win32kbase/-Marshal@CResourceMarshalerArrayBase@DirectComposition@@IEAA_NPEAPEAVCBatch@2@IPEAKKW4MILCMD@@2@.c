bool __fastcall DirectComposition::CResourceMarshalerArrayBase::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // r15d
  bool v11; // r13
  void *v13; // rbp
  unsigned __int64 v14; // rbp
  char *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int64 v17; // r10
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  void *v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v7 = a5;
  if ( (*a4 & a5) != 0 )
  {
    *a4 &= ~a5;
    v11 = a1[2] == 0LL;
    while ( a1[2] != *a1 || v11 )
    {
      v11 = 0;
      v13 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v21 = v13;
      if ( (unsigned __int64)v13 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v21) )
        {
          *a4 |= v7;
          return a1[2] == *a1;
        }
        v13 = v21;
      }
      v14 = ((unsigned __int64)v13 - 16) >> 2;
      if ( a1[2] - *a1 < v14 )
        LODWORD(v14) = *((_DWORD *)a1 + 4) - *a1;
      v21 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v14 + 16), &v21);
      v15 = (char *)v21;
      *(_DWORD *)v21 = 4 * v14 + 16;
      v16 = v15 + 16;
      *(_QWORD *)(v15 + 4) = 0LL;
      v17 = (unsigned __int64)&v15[4 * (unsigned int)v14 + 16];
      *((_DWORD *)v15 + 3) = 0;
      v18 = a6;
      if ( *a1 )
        v18 = a7;
      *((_DWORD *)v15 + 1) = v18;
      *((_DWORD *)v15 + 2) = v22;
      *((_DWORD *)v15 + 3) = 4 * v14;
      v19 = *a1;
      while ( (unsigned __int64)v16 < v17 )
      {
        v20 = v19++;
        *v16++ = *(_DWORD *)(*(_QWORD *)(a1[1] + 8 * v20) + 32LL);
      }
      *a1 += (unsigned int)v14;
    }
  }
  return a1[2] == *a1;
}
