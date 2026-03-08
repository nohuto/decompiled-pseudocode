/*
 * XREFs of VidMmTerminateDevice @ 0x1C0011CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0011F9C (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 */

void *__fastcall VidMmTerminateDevice(void *a1, unsigned int a2)
{
  void *result; // rax

  if ( a1 )
    return VIDMM_DEVICE::`scalar deleting destructor'(a1, a2);
  return result;
}
