/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x1405566CC
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1405562E0 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x140294D78 (IopSetFileObjectExtensionFlag.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407700F8 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, __int64 a2)
{
  if ( (unsigned int)IopSetFileObjectExtensionFlag(a1, 4, 1) == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0LL, 0LL, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
