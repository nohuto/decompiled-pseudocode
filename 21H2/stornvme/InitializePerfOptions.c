/*
 * XREFs of InitializePerfOptions @ 0x1C000BE94
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 * Callees:
 *     <none>
 */

char __fastcall InitializePerfOptions(__int64 a1)
{
  bool v1; // zf
  int v4; // eax
  _OWORD v5[3]; // [rsp+20h] [rbp-30h] BYREF

  v1 = *(_BYTE *)(a1 + 16) == 0;
  memset((char *)v5 + 8, 0, 32);
  if ( !v1 )
    return 1;
  *(_QWORD *)&v5[0] = 0x2800000005LL;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 1LL, v5)
    || (BYTE8(v5[0]) & 1) == 0
    || (BYTE8(v5[0]) & 2) == 0
    || (BYTE8(v5[0]) & 4) == 0
    || (BYTE8(v5[0]) & 8) == 0 )
  {
    return 0;
  }
  if ( (BYTE8(v5[0]) & 0x40) == 0 )
    *(_DWORD *)(a1 + 56) &= ~8u;
  v1 = (*(_DWORD *)(a1 + 56) & 8) == 0;
  v4 = 15;
  v5[0] = 0x2800000005uLL;
  memset(&v5[1], 0, 24);
  if ( !v1 )
    v4 = 79;
  DWORD2(v5[0]) = v4;
  if ( *(_WORD *)(a1 + 256) <= 1u )
  {
    *(_QWORD *)&v5[1] = 0LL;
  }
  else
  {
    DWORD1(v5[1]) = *(unsigned __int16 *)(a1 + 290);
    LODWORD(v5[1]) = 1;
  }
  HIDWORD(v5[0]) = *(unsigned __int16 *)(a1 + 218);
  *(_QWORD *)&v5[2] = *(_QWORD *)(a1 + 272);
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 0LL, v5) )
    return 0;
  *(_DWORD *)(a1 + 228) = DWORD2(v5[1]);
  return 1;
}
