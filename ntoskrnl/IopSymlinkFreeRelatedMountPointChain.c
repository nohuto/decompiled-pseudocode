/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x14078B018
 * Callers:
 *     IopSymlinkCleanupECP @ 0x14078B000 (IopSymlinkCleanupECP.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x14087A7D0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x14087BDFC (IopSymlinkUpdateECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopSymlinkFreeRelatedMountPointChain(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[1];
      ExFreePoolWithTag(v2, 0x69536F49u);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
