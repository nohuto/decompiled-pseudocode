/*
 * XREFs of MiSetPfnKernelStack @ 0x1402A7DF0
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402A7A08 (MiInPageSingleKernelStack.c)
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     MiMarkKernelStack @ 0x140371560 (MiMarkKernelStack.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x1402A7E34 (MiMarkPfnTradable.c)
 */

__int64 __fastcall MiSetPfnKernelStack(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *a1 ^ (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *a1 = result;
  if ( a2 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0 )
      return MiMarkPfnTradable();
  }
  return result;
}
