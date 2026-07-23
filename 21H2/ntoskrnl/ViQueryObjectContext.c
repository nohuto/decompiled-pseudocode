/*
 * XREFs of ViQueryObjectContext @ 0x1409C95A4
 * Callers:
 *     VfQueryDeviceContext @ 0x1405A0B50 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1405A0B90 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1405A0BD0 (VfQueryIrpContext.c)
 *     VfQueryThreadContext @ 0x1405A0C10 (VfQueryThreadContext.c)
 * Callees:
 *     ViGetContextPointer @ 0x1409C94D4 (ViGetContextPointer.c)
 *     ViLockContextPointer @ 0x1409C955C (ViLockContextPointer.c)
 */

signed __int64 *__fastcall ViQueryObjectContext(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  signed __int64 *result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rdx

  v3 = a3;
  v4 = 0LL;
  result = (signed __int64 *)ViGetContextPointer(a1, a2);
  v9 = result;
  if ( result )
  {
    if ( ViLockContextPointer(result, v6, v7, v8) )
    {
      v10 = *(_QWORD *)(*v9 + 8 * v3 + 8);
      if ( v10 )
      {
        v4 = *(_QWORD *)(*v9 + 8 * v3 + 8);
        _InterlockedAdd((volatile signed __int32 *)(v10 + 4), 1u);
      }
      _InterlockedExchangeAdd64(v9, 1uLL);
    }
    return (signed __int64 *)v4;
  }
  return result;
}
