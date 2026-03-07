char __fastcall KiInitializeTimer2(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  _BYTE *v4; // r11
  __int64 v5; // r10
  char v6; // r9
  char *i; // rax
  char result; // al

  v4 = (_BYTE *)a1;
  v5 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = (a4 >= 0) + 24;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a2), KiWaitNever);
  *(_QWORD *)(a1 + 104) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a3), KiWaitNever);
  *(_QWORD *)(a1 + 112) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 120) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v6 = a4 & 0xE;
  if ( !v6
    && !KeGetPcr()->Prcb.NestingLevel
    && (unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process) )
  {
    v6 = 16;
  }
  v4[129] = v6;
  for ( i = KiTimer2Combinations; *i != v6; i += 3 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 6 )
      __fastfail(5u);
  }
  v4[130] = KiTimer2Combinations[3 * v5 + 1];
  result = KiTimer2Combinations[3 * v5 + 2];
  v4[131] = result;
  return result;
}
