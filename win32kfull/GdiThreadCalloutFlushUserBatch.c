/*
 * XREFs of GdiThreadCalloutFlushUserBatch @ 0x1C00D4EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 GdiThreadCalloutFlushUserBatch()
{
  struct _NT_TIB *Self; // rcx
  int StackLimit; // edi
  PVOID *p_ArbitraryUserPointer; // rbx
  unsigned __int64 p_Self; // rsi
  unsigned __int64 result; // rax
  __int64 v5; // r14

  Self = KeGetPcr()->NtTib.Self;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  p_Self = (unsigned __int64)&Self[35].Self;
  result = (unsigned int)(StackLimit - 1);
  if ( (unsigned int)result <= 0x134 )
  {
    do
    {
      v5 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      result = (unsigned __int64)p_ArbitraryUserPointer + v5;
      if ( (unsigned __int64)p_ArbitraryUserPointer + v5 > p_Self )
        break;
      if ( *((_WORD *)p_ArbitraryUserPointer + 1) == 8 )
        NtGdiDeleteObjectApp(p_ArbitraryUserPointer[1], 1LL);
      --StackLimit;
      result = ((_DWORD)v5 + 7) & 0xFFFFFFF8;
      p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + result);
      if ( !StackLimit )
        break;
      result = (unsigned __int64)p_ArbitraryUserPointer + 4;
    }
    while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
  }
  return result;
}
