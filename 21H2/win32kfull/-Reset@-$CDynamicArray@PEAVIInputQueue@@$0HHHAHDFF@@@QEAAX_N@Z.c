/*
 * XREFs of ?Reset@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C01112D4
 * Callers:
 *     ?InvalidateInputQueues@CInputQueueProp@@IEAAXXZ @ 0x1C011124C (-InvalidateInputQueues@CInputQueueProp@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDynamicArray<IInputQueue *,2003858261>::Reset(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = Win32FreePool(v2);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 2) = 0;
  return result;
}
