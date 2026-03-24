/*
 * XREFs of MouseClassSetWmiDataBlock @ 0x1C000E380
 * Callers:
 *     <none>
 * Callees:
 *     MouseToggleWaitWake @ 0x1C000543C (MouseToggleWaitWake.c)
 */

NTSTATUS __fastcall MouseClassSetWmiDataBlock(PDEVICE_OBJECT DeviceObject, PIRP Irp, int a3, int a4, int a5, char *a6)
{
  ULONG v6; // ebx
  NTSTATUS v9; // eax

  v6 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v6 = 1;
      if ( a5 )
      {
        if ( a4 )
          v9 = -1073741808;
        else
          v9 = MouseToggleWaitWake((__int64)DeviceObject->DeviceExtension, *a6);
      }
      else
      {
        v9 = -1073741789;
      }
    }
    else
    {
      v9 = -1073741163;
    }
  }
  else
  {
    v9 = -1073741114;
  }
  return WmiCompleteRequest(DeviceObject, Irp, v9, v6, 0);
}
