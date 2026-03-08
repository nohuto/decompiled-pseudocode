/*
 * XREFs of Simulator_UnInitializeInterface @ 0x1C00AB538
 * Callers:
 *     Simulator_InitializeInterface @ 0x1C00AB290 (Simulator_InitializeInterface.c)
 * Callees:
 *     <none>
 */

void Simulator_UnInitializeInterface()
{
  if ( g_SimulatorCallbackObject )
  {
    ObfDereferenceObject(g_SimulatorCallbackObject);
    g_SimulatorCallbackObject = 0LL;
  }
  if ( g_SimulatorCallbackFuncHandle )
  {
    ExUnregisterCallback(g_SimulatorCallbackFuncHandle);
    g_SimulatorCallbackFuncHandle = 0LL;
  }
}
