/*
 * XREFs of MiDbgReadWriteEnclave @ 0x140A3AF6C
 * Callers:
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 * Callees:
 *     KeDebugReadEnclaveMemory @ 0x1409715B4 (KeDebugReadEnclaveMemory.c)
 *     KeDebugWriteEnclaveMemory @ 0x14097163C (KeDebugWriteEnclaveMemory.c)
 *     MiDbgReadWriteEnclaveUnaligned @ 0x140A3B05C (MiDbgReadWriteEnclaveUnaligned.c)
 */

__int64 __fastcall MiDbgReadWriteEnclave(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4, __int64 *a5)
{
  __int64 *v5; // r14
  unsigned __int64 v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned __int64 v14; // r15
  __int64 v15; // rbx

  v5 = a5;
  a5 = 0LL;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  *v5 = 0LL;
  v10 = a1 & 7;
  if ( (a1 & 7) != 0 )
  {
    v11 = 8 - v10;
    if ( a3 < 8 - v10 )
      v11 = (unsigned int)a3;
    result = MiDbgReadWriteEnclaveUnaligned(a1, a2, (unsigned int)v11);
    if ( (int)result < 0 )
      return result;
    v9 += v11;
    *v5 = v11;
    v8 = (__int64 *)((char *)v8 + v11);
    v7 -= v11;
  }
  v13 = v7 & 7;
  v14 = v7 & 7;
  v15 = v7 - v14;
  if ( v15 )
  {
    if ( a4 )
      LODWORD(result) = KeDebugReadEnclaveMemory(v9, v8, v15, &a5);
    else
      LODWORD(result) = KeDebugWriteEnclaveMemory(v9, (__int64)v8, v15, &a5);
    *v5 += (__int64)a5;
    if ( (int)result < 0 )
      return (unsigned int)result;
    v9 += v15;
    v8 = (__int64 *)((char *)v8 + v15);
  }
  if ( v13 )
  {
    result = MiDbgReadWriteEnclaveUnaligned(v9, v8, v13);
    if ( (int)result < 0 )
      return result;
    *v5 += v14;
  }
  return 0LL;
}
