/*
 * XREFs of ?Reset@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C00E4DA4
 * Callers:
 *     ?InvalidateInputQueues@CInputQueueProp@@IEAAXXZ @ 0x1C00E4D1C (-InvalidateInputQueues@CInputQueueProp@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDynamicArray<IInputQueue *,2003858261>::Reset(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
