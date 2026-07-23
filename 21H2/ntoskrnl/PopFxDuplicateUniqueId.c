/*
 * XREFs of PopFxDuplicateUniqueId @ 0x1403BEF6C
 * Callers:
 *     PopFxCreateDeviceCommon @ 0x1403BED38 (PopFxCreateDeviceCommon.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxDuplicateUniqueId(const void **a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int16 v5; // si
  PVOID PoolWithTag; // rax
  unsigned int v7; // ebx
  PVOID v8; // rbp

  v2 = *(unsigned __int16 *)a1;
  if ( *((unsigned __int16 *)a1 + 1) < (unsigned __int64)(v2 + 2) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = v2 + 2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4D584650u);
    v7 = 0;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, a1[1], v5);
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
