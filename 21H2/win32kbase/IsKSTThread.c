/*
 * XREFs of IsKSTThread @ 0x1C0037C20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 */

bool IsKSTThread()
{
  return CInputThreadBase::IsInputThread(gpKernelSensorThread);
}
