void __fastcall RIMIDESetPointerDeviceType(struct tagHID_POINTER_DEVICE_INFO *a1, struct tagHIDDESC *a2)
{
  if ( *((_WORD *)a2 + 21) != 13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 70);
  switch ( *((_WORD *)a2 + 20) )
  {
    case 1:
      *((_DWORD *)a1 + 6) = 6;
      break;
    case 2:
      *((_DWORD *)a1 + 6) = 5;
      break;
    case 4:
      *((_DWORD *)a1 + 6) = 3;
      break;
    case 5:
      *((_DWORD *)a1 + 6) = 7;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 87);
      break;
  }
}
