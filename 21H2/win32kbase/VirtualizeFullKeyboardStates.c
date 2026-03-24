/*
 * XREFs of VirtualizeFullKeyboardStates @ 0x1C01AF620
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C0041628 (isRootPartition.c)
 *     GetContainerIdFromProcessId @ 0x1C00CD978 (GetContainerIdFromProcessId.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00CD9D8 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01BB4D0 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 */

char __fastcall VirtualizeFullKeyboardStates(int a1)
{
  unsigned int v2; // eax
  unsigned int ContainerIdFromProcessId; // eax
  const struct CONTAINER_ID *v4; // rdx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  Feature_KeyboardInputVirtualization__private_ReportDeviceUsage();
  LOBYTE(v2) = isRootPartition();
  if ( (_BYTE)v2 )
  {
    LOBYTE(v2) = (_BYTE)gpKeyboardSensor;
    if ( *((_DWORD *)gpKeyboardSensor + 314) )
    {
      ContainerIdFromProcessId = GetContainerIdFromProcessId(a1);
      v6 = ContainerIdFromProcessId;
      if ( (_WORD)ContainerIdFromProcessId || (v2 = HIWORD(ContainerIdFromProcessId), (_WORD)v2) )
        LOBYTE(v2) = IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v6, v4);
    }
  }
  return v2;
}
