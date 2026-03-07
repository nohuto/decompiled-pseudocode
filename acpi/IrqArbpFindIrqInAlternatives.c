__int64 __fastcall IrqArbpFindIrqInAlternatives(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  v4 = *(_DWORD *)(a2 + 48);
  v5 = 0;
  if ( !v4 )
    return 3221226021LL;
  v6 = *(_QWORD *)(a2 + 56);
  while ( 1 )
  {
    v7 = (unsigned __int64)v5 << 6;
    if ( *(_QWORD *)(v7 + v6) <= a3 && *(_QWORD *)(v7 + v6 + 8) >= a3 )
      break;
    if ( ++v5 >= v4 )
      return 3221226021LL;
  }
  *a4 = v5;
  return 0LL;
}
