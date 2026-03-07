_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v9; // eax
  _DWORD *PoolMm; // rax
  _DWORD *v11; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  LOWORD(v9) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64, 0x48uLL, 0x65536D4Du, v9 | 0x80000000);
  v11 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  PoolMm[16] = 2;
  *((_QWORD *)PoolMm + 1) = a2;
  *((_QWORD *)PoolMm + 2) = a3;
  if ( (a4 & 1) != 0 )
  {
    PoolMm[2] |= 8u;
  }
  else if ( (a4 & 4) != 0 )
  {
    PoolMm[2] |= 0xAu;
  }
  else if ( (a4 & 2) != 0 )
  {
    PoolMm[2] |= 9u;
  }
  if ( (a5 & 1) != 0 )
    PoolMm[2] |= 0x20u;
  if ( (a5 & 4) != 0 )
    PoolMm[2] |= 0x40u;
  if ( (a5 & 8) != 0 )
    PoolMm[2] |= 0x80u;
  if ( a4 < 0 )
    PoolMm[2] |= 4u;
  if ( (a4 & 0x40000000) != 0 )
    PoolMm[2] |= 0x10u;
  if ( (a4 & 0x20000000) != 0 )
    PoolMm[2] |= 0x100u;
  MiInsertVadEvent(a1, (unsigned __int64 *)PoolMm, 1);
  MiSetVadFlags(a1, 1LL, 1);
  return v11;
}
