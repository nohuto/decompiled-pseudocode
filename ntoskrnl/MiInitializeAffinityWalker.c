/*
 * XREFs of MiInitializeAffinityWalker @ 0x1402A7028
 * Callers:
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiObtainParkedCoreMasks @ 0x1402A7130 (MiObtainParkedCoreMasks.c)
 *     MiInitializeDpcGroupAffinity @ 0x1402A9390 (MiInitializeDpcGroupAffinity.c)
 */

_DWORD *__fastcall MiInitializeAffinityWalker(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // r14
  _DWORD *Pool; // rax
  _DWORD *v8; // rsi
  int v9; // ecx

  v6 = *(_QWORD *)(376LL * a2 + qword_140C65720 + 368);
  Pool = MiAllocatePool(64, 16 * (*(unsigned __int16 *)(v6 + 8) + 19LL), 0x7741694Du);
  v8 = Pool;
  if ( Pool )
  {
    *Pool = 0;
    Pool[1] = *(unsigned __int16 *)(v6 + 8);
    *((_QWORD *)Pool + 1) = Pool + 76;
    MiObtainParkedCoreMasks(Pool + 10);
    MiInitializeDpcGroupAffinity(*((_QWORD *)v8 + 1), *(_QWORD *)v6, (unsigned int)v8[1], a1);
    v8[4] = 0;
    v9 = *(_DWORD *)(KeNodeBlock[(unsigned __int16)a2] + 292);
    v8[6] = a2;
    if ( !v9 )
      v9 = 1;
    v8[7] = a3;
    v8[5] = v9;
    v8[8] = a1;
  }
  return v8;
}
