/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C00188D8
 * Callers:
 *     VidSchCreateContext @ 0x1C0090040 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C00C1F44 (VidSchCreateSystemDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 80));
}
