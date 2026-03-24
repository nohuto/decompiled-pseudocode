/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x1403142D0
 * Callers:
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x140682C94 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x140683108 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140683164 (IopGraftName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetMostRecentlyUsedName(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 8) )
    a1 = i;
  return a1;
}
