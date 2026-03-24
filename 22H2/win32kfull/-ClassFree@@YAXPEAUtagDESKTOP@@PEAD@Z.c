/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01E882C
 * Callers:
 *     ReferenceClass @ 0x1C00254E0 (ReferenceClass.c)
 *     InternalRegisterClassEx @ 0x1C0079D30 (InternalRegisterClassEx.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(PVOID *a1, char *a2)
{
  if ( a1 )
    RtlFreeHeap(a1[16], 0, a2);
  else
    Win32FreePool(a2);
}
