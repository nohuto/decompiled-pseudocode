char __fastcall InitializePerfOptions(__int64 a1)
{
  bool v1; // zf
  int v4; // ecx
  __int64 v5; // rax
  _OWORD v6[3]; // [rsp+20h] [rbp-30h] BYREF

  v1 = *(_BYTE *)(a1 + 20) == 0;
  memset((char *)v6 + 8, 0, 32);
  if ( !v1 )
    return 1;
  *(_QWORD *)&v6[0] = 0x2800000007LL;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 1LL, v6)
    || (BYTE8(v6[0]) & 1) == 0
    || (BYTE8(v6[0]) & 2) == 0
    || (BYTE8(v6[0]) & 4) == 0
    || (BYTE8(v6[0]) & 8) == 0 )
  {
    return 0;
  }
  if ( (BYTE8(v6[0]) & 0x40) == 0 )
    *(_DWORD *)(a1 + 64) &= ~8u;
  v1 = (*(_BYTE *)(a1 + 64) & 8) == 0;
  *(_QWORD *)&v6[2] = 0LL;
  v4 = 15;
  v6[0] = 0x2800000007uLL;
  if ( !v1 )
    v4 = 79;
  v1 = (*(_DWORD *)(a1 + 116) & 0x200) == 0;
  v6[1] = 0LL;
  if ( !v1 )
    v4 |= 0x80u;
  if ( *(_WORD *)(a1 + 280) <= 1u )
  {
    *(_QWORD *)&v6[1] = 0LL;
  }
  else
  {
    DWORD1(v6[1]) = *(unsigned __int16 *)(a1 + 338);
    LODWORD(v6[1]) = 1;
  }
  HIDWORD(v6[0]) = *(unsigned __int16 *)(a1 + 242);
  v5 = *(_QWORD *)(a1 + 296);
  DWORD2(v6[0]) = v4 | 0x100;
  *(_QWORD *)&v6[2] = v5;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 0LL, v6) )
    return 0;
  *(_DWORD *)(a1 + 252) = DWORD2(v6[1]);
  return 1;
}
