__int64 __fastcall OPM::CList<CPhysicalMonitorHandle>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  _QWORD *v7; // rsi
  unsigned __int64 v9; // rdx
  __int64 i; // r8
  __int64 j; // rax

  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 )
    {
      v3 *= 2LL;
      if ( v3 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v3) = 16;
    }
    v7 = OPM::OPMAllocateMemory((OPM *)(8LL * (unsigned int)v3), 0x100uLL, (unsigned __int64)a3);
    if ( !v7 )
      return 3221225495LL;
    v9 = *(unsigned int *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v9; v9 = *(unsigned int *)(a1 + 12) )
    {
      v7[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)v9 < (unsigned int)v3 )
      memset_0(&v7[(unsigned int)v9], 0, 8LL * (unsigned int)(v3 - v9));
    OPM::OPMFreeMemory(*(OPM **)a1, (void *)v9);
    *(_QWORD *)a1 = v7;
    *(_DWORD *)(a1 + 12) = v3;
  }
  for ( j = 0LL; (unsigned int)j < (unsigned int)v3; j = (unsigned int)(j + 1) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * j) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * j) = a2;
      *a3 = j;
      break;
    }
  }
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
