/*
 * XREFs of ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C015FA04
 * Callers:
 *     GreDeleteServerMetaFile @ 0x1C02B6DA0 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B6FB0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall HmgLockResult<META>::HmgLockResult<META>(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = a1 + 8;
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      v2,
      a1 & ((unsigned __int128)-(__int128)v2 >> 64),
      UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
