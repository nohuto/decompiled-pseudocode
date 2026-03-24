/*
 * XREFs of ?vRemoveRef@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00679A4
 * Callers:
 *     bDeleteBrush @ 0x1C001D7B0 (bDeleteBrush.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0068010 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall RBRUSH::vRemoveRef(volatile signed __int32 *a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return RBRUSH::vFreeOrCacheRBrush(a1, a2);
  return result;
}
