__int64 __fastcall IoReserveDependency(__int64 a1, _WORD *a2, int a3)
{
  unsigned int v3; // ebx
  _DWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v5[1] = 0;
  v7[1] = 0;
  if ( a1 && a2 && *a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    v7[0] = 1;
    v8 = a2;
    v9 = a3;
    v5[0] = 0;
    v6 = a1;
    PnpAcquireDependencyRelationsLock(1);
    v3 = PipSetDependency(v5, v7);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
