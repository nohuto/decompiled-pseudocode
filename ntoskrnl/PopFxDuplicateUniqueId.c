/*
 * XREFs of PopFxDuplicateUniqueId @ 0x1403936FC
 * Callers:
 *     PopFxCreateDeviceCommon @ 0x1403934D4 (PopFxCreateDeviceCommon.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxDuplicateUniqueId(const void **a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int16 v5; // si
  void *Pool2; // rax
  unsigned int v7; // ebx
  void *v8; // rbp

  v2 = *(unsigned __int16 *)a1;
  if ( *((unsigned __int16 *)a1 + 1) < (unsigned __int64)(v2 + 2) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = v2 + 2;
    Pool2 = (void *)ExAllocatePool2(64LL, v5, 1297630800LL);
    v7 = 0;
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a1[1], v5);
      *(_WORD *)a2 = *(_WORD *)a1;
      *(_QWORD *)(a2 + 8) = v8;
      *(_WORD *)(a2 + 2) = v5;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
