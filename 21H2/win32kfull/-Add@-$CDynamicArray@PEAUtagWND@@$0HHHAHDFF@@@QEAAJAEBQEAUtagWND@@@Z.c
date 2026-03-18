/*
 * XREFs of ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1C0243634
 * Callers:
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0243670 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0243848 (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CDynamicArray<tagWND *,2003858261>::Add(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = CDynamicArray<tagWND *,2003858261>::Grow();
  if ( (int)result >= 0 )
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  return result;
}
