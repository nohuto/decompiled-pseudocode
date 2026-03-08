/*
 * XREFs of KiAbCpuBoostOwners @ 0x140357DB4
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 */

_QWORD **__fastcall KiAbCpuBoostOwners(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  _QWORD **result; // rax
  unsigned __int64 v8; // rbx
  __int64 v10; // r12
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF

  result = (_QWORD **)&retaddr;
  v15 = 0;
  v16 = 0;
  v8 = *(_QWORD *)(a1 + 56);
  v10 = a5;
  LOBYTE(v16) = a2;
  while ( v8 && *(char *)(v8 + 24) < a2 )
  {
    KiAbSetMinimumThreadPriority(v8 - 24, (unsigned int)&v16, a3, a4, v10, (__int64)&v15);
    *(_BYTE *)(v8 + 24) = a2;
    v12 = v8;
    result = *(_QWORD ***)(v8 + 8);
    if ( result )
    {
      v13 = *result;
      v8 = *(_QWORD *)(v8 + 8);
      if ( *result )
      {
        do
        {
          result = (_QWORD **)*v13;
          v8 = (unsigned __int64)v13;
          v13 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v8 || *(_QWORD *)v8 == v12 )
          break;
        v12 = v8;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 17) )
    return (_QWORD **)KiAbSetMinimumThreadPriority(a1, (unsigned int)&v16, a3, a4, v10, (__int64)&v15);
  return result;
}
