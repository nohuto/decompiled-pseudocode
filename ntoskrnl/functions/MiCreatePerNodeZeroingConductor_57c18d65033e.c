__int64 __fastcall MiCreatePerNodeZeroingConductor(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  _BYTE *PoolMm; // rax
  _BYTE *v9; // rdi
  void *v10; // r9
  int v11; // ebx
  __int64 v13; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+58h] [rbp-40h] BYREF

  v13 = 0LL;
  v6 = *(_QWORD *)(376LL * a2 + qword_140C65720 + 368);
  v7 = *(_QWORD *)(a1 + 16) + 25408LL * a2;
  PoolMm = ExAllocatePoolMm(64, 0x3D8uLL, 0x635A694Du, a2 | 0x80000000);
  v9 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  *((_DWORD *)PoolMm + 14) = a2;
  *((_QWORD *)PoolMm + 6) = a1;
  *((_DWORD *)PoolMm + 23) = MiNumberNodeDomains(*(_DWORD *)(v6 + 24));
  v9[60] = a3;
  v10 = *(void **)(*(_QWORD *)(a1 + 200) + 120LL);
  v14 = *(_OWORD *)*(_QWORD *)v6;
  v11 = PsCreateSystemThreadEx(
          (__int64)&v13,
          0x1FFFFF,
          0LL,
          v10,
          0LL,
          (__int64)MiNodeZeroConductor,
          (__int64)v9,
          &v14,
          0LL);
  if ( v11 < 0 )
    ExFreePoolWithTag(v9, 0);
  else
    *(_QWORD *)(v7 + 23168) = v13;
  return (unsigned int)v11;
}
