/*
 * XREFs of ??_GVIDMM_PROCESS_HEAP_INTERFACE@@UEAAPEAXI@Z @ 0x1C0032070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

VIDMM_PROCESS_HEAP_INTERFACE *__fastcall VIDMM_PROCESS_HEAP_INTERFACE::`scalar deleting destructor'(
        VIDMM_PROCESS_HEAP_INTERFACE *this,
        char a2)
{
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
