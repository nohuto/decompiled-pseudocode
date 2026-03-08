/*
 * XREFs of VfMiscExInitializeResourceLite_Exit @ 0x140ADCBF0
 * Callers:
 *     <none>
 * Callees:
 *     VfTrackResource @ 0x140AE15E4 (VfTrackResource.c)
 */

__int64 __fastcall VfMiscExInitializeResourceLite_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(int *)(a1 + 16) >= 0 )
    return VfTrackResource(*(_QWORD *)(a1 + 8));
  return result;
}
