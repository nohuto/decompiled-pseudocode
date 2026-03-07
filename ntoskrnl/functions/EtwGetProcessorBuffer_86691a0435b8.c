__int64 __fastcall EtwGetProcessorBuffer(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax

  v3 = 0;
  v4 = a2;
  if ( (unsigned __int8)EtwpBootPhase <= 1u )
    return 3221225473LL;
  if ( a1 >= *(_DWORD *)(EtwpHostSiloState + 16) )
    return (unsigned int)-1073741816;
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * a1);
  if ( (v7 & 1) != 0 )
  {
    return (unsigned int)-1073741816;
  }
  else if ( *(_DWORD *)(v7 + 300) == 1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (*(_DWORD *)(v7 + 12) & 0x10000000) != 0 )
    {
      v8 = (_QWORD *)(v7 + 128);
    }
    else
    {
      v9 = *(_QWORD *)(v7 + 1096);
      v10 = a1;
      if ( v9 == EtwpHostSiloState )
        v11 = *(_QWORD *)(*(_QWORD *)(KeGetPrcb(v4) + 34472) + 320LL);
      else
        v11 = *(_QWORD *)((v4 << 6) + *(_QWORD *)(v9 + 4144));
      v8 = (_QWORD *)(v11 + 8 * v10);
    }
    v12 = (unsigned int *)(*v8 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v12 )
    {
      *(_DWORD *)(a3 + 8) = *v12;
      v13 = v12[2];
      *(_QWORD *)a3 = v12;
      if ( v13 <= *v12 )
        v14 = v12[2];
      else
        v14 = v12[1];
      *(_DWORD *)(a3 + 12) = v14;
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v3;
}
