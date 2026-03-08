/*
 * XREFs of PopCadHpmiPnpNotification @ 0x140999B60
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

__int64 __fastcall PopCadHpmiPnpNotification(char *NotificationStructure, PVOID Context)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = 0;
  v3 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_HPMI.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_HPMI.Data4;
  if ( v3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( !v4 )
    {
      _m_prefetchw(&PopCadLoadReason);
      if ( !_InterlockedOr(&PopCadLoadReason, 2u) )
        ExQueueWorkItem(&PopCadTriggerDriverLoadWorkItem, DelayedWorkQueue);
    }
  }
  return v2;
}
