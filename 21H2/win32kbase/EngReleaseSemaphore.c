/*
 * XREFs of EngReleaseSemaphore @ 0x1C008DC50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __stdcall EngReleaseSemaphore(HSEMAPHORE hsem)
{
  int v1; // r8d
  __int64 v3; // rcx

  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer((_DWORD)hsem, (unsigned int)&LockRelease, v1, (__int64)hsem);
  if ( hsem )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsem);
    PsLeavePriorityRegion(v3);
  }
}
