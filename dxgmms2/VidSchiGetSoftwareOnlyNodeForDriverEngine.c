/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0014FEC
 * Callers:
 *     VidSchCreateContext @ 0x1C00AC500 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C00C2444 (VidSchCreateSystemDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 80));
}
