void __fastcall PspFreeStorage(_QWORD *P)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx

  v2 = P + 1;
  v3 = 32LL;
  do
  {
    if ( *v2 >= 2uLL )
      NT_ASSERT(
        "(Storage->StorageArray[Index].Object == ((void *)0)) || (Storage->StorageArray[Index].Object == (PVOID)((ULONG_PTR)1))");
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v4 = (_QWORD *)P[64];
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = 256LL;
    do
    {
      if ( *v5 >= 2uLL )
        NT_ASSERT(
          "(Storage->StorageExpansionArray[Index].Object == ((void *)0)) || (Storage->StorageExpansionArray[Index].Object"
          " == (PVOID)((ULONG_PTR)1))");
      v5 += 2;
      --v6;
    }
    while ( v6 );
    ExFreePoolWithTag(v4, 0x78457350u);
  }
  ExFreePoolWithTag(P, 0x74537350u);
}
