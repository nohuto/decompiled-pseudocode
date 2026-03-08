/*
 * XREFs of IopGetMountFlag @ 0x1402F6CEC
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 */

bool __fastcall IopGetMountFlag(__int64 a1)
{
  bool v2; // di
  KIRQL v3; // dl
  __int64 v4; // rax

  v2 = 0;
  v3 = KeAcquireQueuedSpinLock(9uLL);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    v2 = (*(_BYTE *)(v4 + 4) & 1) != 0;
  KeReleaseQueuedSpinLock(9uLL, v3);
  return v2;
}
