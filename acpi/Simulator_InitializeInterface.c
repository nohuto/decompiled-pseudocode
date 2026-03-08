/*
 * XREFs of Simulator_InitializeInterface @ 0x1C00AB290
 * Callers:
 *     DriverEntry @ 0x1C00A7300 (DriverEntry.c)
 * Callees:
 *     Simulator_UnInitializeInterface @ 0x1C00AB538 (Simulator_UnInitializeInterface.c)
 */

__int64 Simulator_InitializeInterface()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !g_SimulatorCallbackObject )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\AcpiSimulator");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 16;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback((PCALLBACK_OBJECT *)&g_SimulatorCallbackObject, &ObjectAttributes, 0, 1u) >= 0
      && g_SimulatorCallbackObject )
    {
      g_SimulatorCallbackFuncHandle = ExRegisterCallback(
                                        (PCALLBACK_OBJECT)g_SimulatorCallbackObject,
                                        (PCALLBACK_FUNCTION)Simulator_CallbackWorker,
                                        0LL);
      if ( !g_SimulatorCallbackFuncHandle )
        Simulator_UnInitializeInterface(v1, v0);
    }
    else
    {
      g_SimulatorCallbackObject = 0LL;
    }
  }
  return 0LL;
}
