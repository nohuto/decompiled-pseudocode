/*
 * XREFs of ?Allocate@TokenQueueTableEntry@CTokenManager@@SAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0076510
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CTokenManager::TokenQueueTableEntry::Allocate(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return operator new[](ByteSize, 0x65744D54u, 256LL);
}
