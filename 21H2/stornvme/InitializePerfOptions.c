/*
 * XREFs of InitializePerfOptions @ 0x1C0006584
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     <none>
 */

char __fastcall InitializePerfOptions(__int64 a1)
{
  bool v1; // zf
  int v3; // ecx
  _OWORD v5[3]; // [rsp+20h] [rbp-30h] BYREF

  v1 = *(_BYTE *)(a1 + 20) == 0;
  memset((char *)v5 + 8, 0, 32);
  if ( !v1 )
    return 1;
  *(_QWORD *)&v5[0] = 0x2800000006LL;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 1LL, v5)
    || (BYTE8(v5[0]) & 1) == 0
    || (BYTE8(v5[0]) & 2) == 0
    || (BYTE8(v5[0]) & 4) == 0
    || (BYTE8(v5[0]) & 8) == 0 )
  {
    return 0;
  }
  if ( (BYTE8(v5[0]) & 0x40) == 0 )
    *(_DWORD *)(a1 + 64) &= ~8u;
  v1 = (*(_DWORD *)(a1 + 64) & 8) == 0;
  v3 = 15;
  v5[0] = 0x2800000006uLL;
  memset(&v5[1], 0, 24);
  if ( !v1 )
    v3 = 79;
  v1 = (*(_DWORD *)(a1 + 116) & 0x200) == 0;
  DWORD2(v5[0]) = v3;
  if ( !v1 )
    DWORD2(v5[0]) = v3 | 0x80;
  if ( *(_WORD *)(a1 + 272) <= 1u )
  {
    *(_QWORD *)&v5[1] = 0LL;
  }
  else
  {
    DWORD1(v5[1]) = *(unsigned __int16 *)(a1 + 306);
    LODWORD(v5[1]) = 1;
  }
  HIDWORD(v5[0]) = *(unsigned __int16 *)(a1 + 234);
  *(_QWORD *)&v5[2] = *(_QWORD *)(a1 + 288);
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 0LL, v5) )
    return 0;
  *(_DWORD *)(a1 + 244) = DWORD2(v5[1]);
  return 1;
}
