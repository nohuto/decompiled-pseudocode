/*
 * XREFs of IopSymlinkFreeRelatedMountPointChain @ 0x1406837F8
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140650C60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x140682B0C (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x140682C94 (IopSymlinkRememberJunction.c)
 *     IopSymlinkCleanupECP @ 0x1406837E0 (IopSymlinkCleanupECP.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
