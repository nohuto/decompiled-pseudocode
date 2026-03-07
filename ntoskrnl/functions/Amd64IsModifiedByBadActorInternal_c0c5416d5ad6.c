__int64 __fastcall Amd64IsModifiedByBadActorInternal(unsigned int a1, __int64 a2, bool *a3)
{
  __int64 v5; // r9
  unsigned int Number; // eax
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // ecx
  int v13; // ecx

  v5 = a1;
  if ( a1 >= Amd64NumberCounters )
    return 3221225711LL;
  _mm_lfence();
  Number = KeGetPcr()->Prcb.Number;
  v8 = 0;
  v9 = 0LL;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v10 = HalpCounterStatus;
  else
    v10 = HalpCounterStatus + 8LL * HalpNumberOfCounters * Number;
  v11 = *(_QWORD *)(v10 + 8 * v5);
  v12 = *(_DWORD *)(v11 + 24);
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
        return (unsigned int)-1073740024;
      else
        *a3 = a2 != 0;
      return v8;
    }
  }
  else
  {
    v9 = 0x100000LL;
  }
  *a3 = a2 != (**(_QWORD **)(v11 + 16) | v9 | 0x400000);
  return v8;
}
