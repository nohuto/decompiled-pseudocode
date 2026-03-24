/*
 * XREFs of Win32UnmapViewInSessionSpace @ 0x1C01E9960
 * Callers:
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C0110EC4 (-Close@PROXYPORT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall Win32UnmapViewInSessionSpace(void *a1)
{
  return MmUnmapViewInSessionSpace(a1);
}
