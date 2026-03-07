void __fastcall SdbCloseDatabaseRead(_QWORD *P)
{
  __int64 v1; // rax
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v1 = P[330];
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v4 = *(void **)(v1 + 8);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x74705041u);
    v5 = (void *)P[330];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x74705041u);
    P[330] = 0LL;
    v6 = (void *)P[331];
    if ( v6 )
    {
      AslHashFree(v6);
      P[331] = 0LL;
    }
  }
  v3 = *((_DWORD *)P + 6);
  if ( (v3 & 8) != 0 && (v3 & 1) != 0 )
  {
    v7 = (void *)P[1];
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x74705041u);
      P[1] = 0LL;
      *((_DWORD *)P + 5) = 0;
    }
  }
  AslFileMappingDelete((PVOID)*P);
  ExFreePoolWithTag(P, 0x74705041u);
}
