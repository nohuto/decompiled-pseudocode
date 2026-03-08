/*
 * XREFs of HUBPSM30_DoesDeviceSupportsReAttachWithResetInProgress @ 0x1C0012030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_DoesDeviceSupportsReAttachWithResetInProgress(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1336LL) & 2) != 0 ? 3089 : 3005;
}
