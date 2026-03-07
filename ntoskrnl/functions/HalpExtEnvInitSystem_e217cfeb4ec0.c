__int64 __fastcall HalpExtEnvInitSystem(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v3 = a1 - 1;
  if ( !v3 )
  {
    HalpExtEnvLoaderBlock = a3;
    return 0LL;
  }
  v4 = v3 - 6;
  if ( !v4 )
  {
    ExtEnvAllocationLock = 0LL;
    qword_140C5FEA8 = (__int64)&ExtEnvAllocationList;
    ExtEnvAllocationList = (__int64)&ExtEnvAllocationList;
    qword_140C5FEB8 = (__int64)&ExtEnvLockList;
    ExtEnvLockList = (__int64)&ExtEnvLockList;
    return 0LL;
  }
  v5 = v4 - 8;
  if ( !v5 )
    goto LABEL_11;
  v6 = v5 - 2;
  if ( !v6 )
    goto LABEL_10;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_11:
    HalpExtEnvAllocationPhase = 2;
    return 0LL;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    HalpExtEnvLoaderBlock = 0LL;
    return 0LL;
  }
  if ( v8 == 1 )
LABEL_10:
    HalpExtEnvAllocationPhase = 1;
  return 0LL;
}
