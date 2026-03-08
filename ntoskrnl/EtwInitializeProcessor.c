/*
 * XREFs of EtwInitializeProcessor @ 0x14080B24C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     EtwpCCSwapDeleteProcessor @ 0x140601E2C (EtwpCCSwapDeleteProcessor.c)
 *     EtwpCCSwapInitializeProcessor @ 0x14080B358 (EtwpCCSwapInitializeProcessor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwInitializeProcessor(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rdi
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  if ( EtwpHostSiloState )
  {
    Pool2 = ExAllocatePool2(64LL, 448LL, 1886876741LL);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v4 = EtwpCCSwapInitializeProcessor(Pool2);
      if ( v4 >= 0 )
      {
        v5 = ExAllocatePool2(72LL, 8LL * *(unsigned int *)(EtwpHostSiloState + 16), 1635218501LL);
        v3[41] = v5;
        if ( v5 )
        {
          v6 = ExAllocatePool2(72LL, 8LL * *(unsigned int *)(EtwpHostSiloState + 16), 1635218501LL);
          v3[40] = v6;
          if ( v6 )
          {
            v7 = ExAllocatePool2(72LL, 8LL * *(unsigned int *)(EtwpHostSiloState + 16), 1635218501LL);
            v3[42] = v7;
            if ( v7 )
            {
              *(_QWORD *)(a1 + 34472) = v3;
              return (unsigned int)v4;
            }
          }
        }
        v4 = -1073741801;
      }
      v9 = (void *)v3[41];
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      v10 = (void *)v3[40];
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      v11 = (void *)v3[42];
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      EtwpCCSwapDeleteProcessor((__int64)v3);
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 34472) = 0LL;
      return (unsigned int)v4;
    }
    return (unsigned int)-1073741801;
  }
  return 0LL;
}
