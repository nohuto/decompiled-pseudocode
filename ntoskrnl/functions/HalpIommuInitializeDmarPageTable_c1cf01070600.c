__int64 __fastcall HalpIommuInitializeDmarPageTable(
        int a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *a7)
{
  __int64 (__fastcall **v10)(); // rax
  unsigned int v11; // edx
  int v12; // r9d
  __int64 *v13; // rcx
  unsigned int v14; // eax
  PVOID v15; // rax
  __int64 v16; // rdi
  int v17; // r14d
  unsigned int v18; // ebp
  _DWORD *v20; // r15
  unsigned int v21; // r13d
  __int64 v22; // r12
  PVOID v23; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  memset(a7, 0, 0x60uLL);
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      v10 = HsaFlPhyPteInterface;
    }
    else
    {
      if ( a1 != 3 )
        return 3221225485LL;
      v10 = HsaSlPhyPteInterface;
    }
  }
  else
  {
    v10 = IvtSlPhyPteInterface;
  }
  v11 = 0;
  *((_DWORD *)a7 + 7) = 3;
  *((_QWORD *)a7 + 11) = v10;
  *(_DWORD *)a7 = a1;
  *((_DWORD *)a7 + 6) = a3;
  v12 = 12;
  if ( a3 )
  {
    v13 = DmarCommonPageTableBits;
    do
    {
      *(_DWORD *)((char *)v13 + a7 - (char *)DmarCommonPageTableBits + 36) = *(_DWORD *)v13;
      v14 = a3 - v11++;
      *(_DWORD *)&a7[4 * v14 + 56] = v12;
      v12 += *(_DWORD *)v13;
      v13 = (__int64 *)((char *)v13 + 4);
    }
    while ( v11 < a3 );
  }
  *((_DWORD *)a7 + 8) = 0;
  v15 = HalpIommuAllocateAndZeroPageTable((__int64)a7, 0, a6);
  *((_QWORD *)a7 + 2) = v15;
  v16 = (__int64)v15;
  if ( v15 )
  {
    v17 = 0;
    v18 = a3 - a2;
    if ( a3 == a2 )
    {
LABEL_8:
      *((_QWORD *)a7 + 1) = 0LL;
      return 0LL;
    }
    v20 = a7 + 36;
    while ( 1 )
    {
      v21 = v17 + 1;
      v22 = 1 << *v20 << *((_DWORD *)a7 + 7);
      v23 = HalpIommuAllocateAndZeroPageTable((__int64)a7, v17 + 1, a6);
      *(_QWORD *)(v22 + v16) = v23;
      if ( !v23 )
        break;
      PhysicalAddress = MmGetPhysicalAddress(v23);
      (**((void (__fastcall ***)(__int64, _QWORD, PHYSICAL_ADDRESS))a7 + 11))(v16, a3 - v17 - 1, PhysicalAddress);
      if ( !HalpIommuPageTableCacheCoherent )
        KeInvalidateRangeAllCachesNoIpi(v16, 1 << *((_DWORD *)a7 + 7));
      v16 = *(_QWORD *)(v22 + v16);
      ++v20;
      ++v17;
      if ( v21 >= v18 )
        goto LABEL_8;
    }
  }
  return 3221225626LL;
}
