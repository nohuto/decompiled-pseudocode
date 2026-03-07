char __fastcall HsaUpdateRemappingTableEntry(__int64 a1, char a2, ULONG a3, _DWORD *a4)
{
  char v4; // bl
  __int64 v5; // rdi
  unsigned __int64 DeviceAperture; // rax
  __int64 v8; // rcx
  __int128 *v9; // r14
  ULONG_PTR v10; // rdi
  int v11; // edx
  __int64 v13; // rax
  signed __int64 v14; // r9
  __int64 i; // r8
  ULONG_PTR v16; // rcx
  signed __int64 v17; // rcx
  __int128 v18; // rax
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = a3;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  if ( a2 )
  {
    DeviceAperture = HsaGetDeviceAperture(a3);
    v5 &= 0x1FFu;
    v9 = (__int128 *)(DeviceAperture + 8);
    if ( !*(_QWORD *)(DeviceAperture + 16) )
      ExtEnvCriticalFailure(v8, 0LL, 0LL, 0LL, 0LL);
    RtlSetBits((PRTL_BITMAP)(DeviceAperture + 32), v5, 1u);
  }
  else
  {
    v9 = &HsaSharedRemappingTable;
    RtlClearBits((PRTL_BITMAP)(&NumberOfBytes + 1), a3, 1u);
  }
  v10 = *((_QWORD *)v9 + 1) + 16 * v5;
  if ( (*(_BYTE *)v10 & 1) == 0 && (a4[3] & 0x10) == 0 )
    return 0;
  v11 = a4[3];
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( (v11 & 0x10) != 0 )
  {
    if ( a4[5] != 1 )
      return 0;
    v13 = (unsigned __int8)(LOBYTE(BugCheckParameter3[1]) ^ a4[12]);
    BugCheckParameter3[0] = (2LL * (v11 & 2)) | 1;
    BugCheckParameter3[1] ^= v13;
    HsaUpdateInterruptDestination((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)(a4 + 6));
  }
  v14 = BugCheckParameter3[0];
  if ( (*(_BYTE *)v10 & BugCheckParameter3[0] & 1) != 0 )
  {
    for ( i = 0LL; i < 2; ++i )
      BugCheckParameter4[i] = BugCheckParameter3[i] ^ *(ULONG_PTR *)((char *)&BugCheckParameter3[i]
                                                                   + v10
                                                                   - (_QWORD)BugCheckParameter3);
    v16 = BugCheckParameter4[1] & 0xFFFFFFFFFFFFFFLL;
    BugCheckParameter4[0] &= 0xFFFFFFFF000000FFuLL;
    BugCheckParameter4[1] &= 0xFFFFFFFFFFFFFFuLL;
    if ( BugCheckParameter4[0] || v16 )
      KeBugCheckEx(0x5Cu, 0x7000uLL, 0x20uLL, v10, (ULONG_PTR)BugCheckParameter4);
  }
  v17 = BugCheckParameter3[1];
  if ( *(_QWORD *)v10 != v14 || *(_QWORD *)(v10 + 8) != BugCheckParameter3[1] )
  {
    v18 = *(_OWORD *)v10;
    do
    {
      v19 = v18;
      v20 = _InterlockedCompareExchange128((volatile signed __int64 *)v10, v17, v14, (signed __int64 *)&v19);
      v18 = v19;
    }
    while ( !v20 );
    return 1;
  }
  return v4;
}
