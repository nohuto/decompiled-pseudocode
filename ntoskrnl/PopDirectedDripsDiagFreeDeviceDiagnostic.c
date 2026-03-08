/*
 * XREFs of PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14099B190
 * Callers:
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14099B0EC (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 *     PopDirectedDripsDiagRundownDevices @ 0x14099B8B8 (PopDirectedDripsDiagRundownDevices.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDirectedDripsDiagFreeDeviceDiagnostic(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x67696450u);
  v3 = (void *)P[9];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67696450u);
  v4 = (void *)P[11];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x67696450u);
  v5 = (void *)P[13];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x67696450u);
  v6 = (void *)P[15];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x67696450u);
  ExFreePoolWithTag(P, 0x67696450u);
}
