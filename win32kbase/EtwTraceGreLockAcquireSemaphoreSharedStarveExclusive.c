/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00D8BE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // r8

  result = SGDGetSessionState(a1);
  v6 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v6 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(v5, (unsigned int)&LockAcquireSharedStarveExclusive, v6, a2, a1);
  }
  return result;
}
