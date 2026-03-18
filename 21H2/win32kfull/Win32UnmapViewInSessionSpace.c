/*
 * XREFs of Win32UnmapViewInSessionSpace @ 0x1C01E4170
 * Callers:
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C014E86C (-Close@PROXYPORT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall Win32UnmapViewInSessionSpace(void *a1)
{
  return MmUnmapViewInSessionSpace(a1);
}
