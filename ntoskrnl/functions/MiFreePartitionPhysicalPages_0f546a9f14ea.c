void __fastcall MiFreePartitionPhysicalPages(_QWORD *a1, unsigned __int16 *a2)
{
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v5; // eax
  ULONG_PTR *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rbx

  BugCheckParameter4 = a1[2130];
  MiReturnPartitionPagesToParent((ULONG_PTR)a1);
  v5 = 0;
  if ( KeNumberNodes )
  {
    v6 = (ULONG_PTR *)(a1[2] + 23136LL);
    do
    {
      if ( *v6 )
        KeBugCheckEx(0x1Au, 0x41008uLL, *v6, 0LL, 0LL);
      v6 += 3176;
      ++v5;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  if ( a1[840] )
    KeBugCheckEx(0x1Au, 0x41006uLL, BugCheckParameter4, a1[2130], a1[2152]);
  if ( a1[2130] )
    KeBugCheckEx(0x1Au, 0x41005uLL, BugCheckParameter4, a1[2130], a1[2152]);
  if ( a1[2152] )
    KeBugCheckEx(0x1Au, 0x41004uLL, BugCheckParameter4, a1[2152], 0LL);
  if ( a1[2197] )
    KeBugCheckEx(0x1Au, 0x41009uLL, a1[2197], a1[2227], BugCheckParameter4);
  if ( a1[2160] != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41003uLL, BugCheckParameter4, a1[2160], a1[2227]);
  MiReturnResident((__int64)a2, a1[2160]);
  v8 = a1[2227];
  if ( a2 == MiSystemPartition )
  {
    MiReturnCommit((__int64)a2, v8, v7);
    _InterlockedExchangeAdd64(&qword_140C69630, -(__int64)v8);
  }
  else
  {
    MiIncreaseCommitLimits((__int64)a2, v8, v8, 0, 0LL);
  }
}
