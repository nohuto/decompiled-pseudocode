__int64 __fastcall HalpCorrectErrSrc(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
    return HalpCorrectMachineCheckErrSrc();
  v3 = v2 - 1;
  if ( !v3 )
    return HalpCorrectMachineCheckErrSrc();
  v4 = v3 - 2;
  if ( !v4 )
    return HalpCorrectNMIErrSrc(a1, a2);
  v5 = v4 - 2;
  if ( !v5 || v5 == 7 )
    return HalpCorrectGenericErrSrc(a1, a2);
  else
    return 3221225659LL;
}
