char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetManipulations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bp
  unsigned int v3; // eax
  char v4; // r14
  char *v7; // rcx
  _DWORD *v8; // rbx
  _DWORD *v9; // rsi
  bool i; // cf
  void *v11; // rdx
  unsigned __int64 v12; // r12
  char *v13; // rcx
  unsigned int v14; // edx
  _DWORD *v15; // r8
  __int64 v16; // r9
  int v17; // eax
  void *v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = 1;
  v3 = *((_DWORD *)this + 90);
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) != 0 || v3 )
  {
    v9 = (_DWORD *)((char *)this + 364);
    for ( i = *((_DWORD *)this + 91) < v3; ; i = *v9 < *((_DWORD *)this + 90) )
    {
      v8 = v9;
      if ( !i )
        break;
      v11 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v19 = v11;
      if ( (unsigned __int64)v11 < 0x18 )
      {
        v8 = v9;
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v19) )
          break;
        v11 = v19;
      }
      v12 = (unsigned int)(*((_DWORD *)this + 90) - *v9);
      if ( v12 >= ((unsigned __int64)v11 - 16) >> 3 )
        LODWORD(v12) = ((unsigned __int64)v11 - 16) >> 3;
      v19 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(8 * v12 + 16), &v19);
      v13 = (char *)v19;
      v14 = 0;
      *(_DWORD *)v19 = 8 * v12 + 16;
      v15 = v13 + 16;
      *(_QWORD *)(v13 + 4) = 0LL;
      *((_DWORD *)v13 + 3) = 0;
      *((_DWORD *)v13 + 1) = 209;
      *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
      for ( *((_DWORD *)v13 + 3) = v12; v14 < (unsigned int)v12; v15 += 2 )
      {
        *v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (v14 + *v9)) + 32LL);
        v16 = *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (v14 + *v9) + 8);
        if ( v16 )
          v17 = *(_DWORD *)(v16 + 32);
        else
          v17 = 0;
        v15[1] = v17;
        ++v14;
      }
      *v9 += v12;
    }
  }
  else
  {
    v19 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v19) )
    {
      v7 = (char *)v19;
      *(_DWORD *)v19 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 209;
      *((_QWORD *)v7 + 1) = *((unsigned int *)this + 8);
    }
    else
    {
      v4 = 0;
    }
    v8 = (_DWORD *)((char *)this + 364);
  }
  if ( *v8 != *((_DWORD *)this + 90) || !v4 )
    return 0;
  return v2;
}
