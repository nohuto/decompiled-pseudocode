/*
 * XREFs of VfMiscExInitializeResourceLite_Exit @ 0x140AA3D80
 * Callers:
 *     <none>
 * Callees:
 *     VfTrackResource @ 0x140AA16A4 (VfTrackResource.c)
 */

char __fastcall VfMiscExInitializeResourceLite_Exit(__int64 a1)
{
  char result; // al

  if ( *(int *)(a1 + 16) >= 0 )
    return VfTrackResource(*(_QWORD *)(a1 + 8));
  return result;
}
