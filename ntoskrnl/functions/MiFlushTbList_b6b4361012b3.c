void __fastcall MiFlushTbList(int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  _KPROCESS *Process; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 *v8; // rdi

  v2 = (unsigned int)a1[3];
  if ( !(_DWORD)v2 )
    return;
  v3 = *((unsigned __int8 *)a1 + 4);
  v4 = qword_140C65810;
  if ( (v3 & 2) != 0 || *a1 != 1 )
  {
    v6 = *a1;
    if ( *a1 != 1 )
    {
      if ( (v3 & 8) != 0 )
        v7 = 2LL;
      else
        v7 = 1LL;
      goto LABEL_8;
    }
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.StaticBitmap[5] || Process->SecureState.SecureHandle )
    {
      v6 = *a1;
      v4 = -1LL;
    }
    else
    {
      v6 = *a1;
    }
  }
  v7 = 0LL;
LABEL_8:
  v8 = (unsigned __int64 *)(a1 + 4);
  if ( *((_BYTE *)a1 + 5) || *v8 > v4 )
  {
    if ( (v3 & 1) != 0 )
      KeFlushCurrentTbOnly(v6, v7, v3, v4);
    else
      KeFlushTb(v6, v7);
    *((_BYTE *)a1 + 5) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    KeFlushMultipleRangeCurrentTb(v2, a1 + 6, v6);
  }
  else
  {
    KeFlushMultipleRangeTb(v2, a1 + 6, v6, (unsigned int)v7);
  }
  *((_BYTE *)a1 + 4) &= ~8u;
  *v8 = 0LL;
  a1[3] = 0;
}
