/*
 * XREFs of ?KeyboardDeviceSpecificCallout@@YAJPEAXPEAU_UNICODE_STRING@@W4_INTERFACE_TYPE@@KPEAPEAU_KEY_VALUE_FULL_INFORMATION@@W4_CONFIGURATION_TYPE@@K34K3@Z @ 0x1C00F52A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardDeviceSpecificCallout(
        _BYTE *Context,
        PUNICODE_STRING PathName,
        INTERFACE_TYPE BusType,
        ULONG BusNumber,
        PKEY_VALUE_FULL_INFORMATION *BusInformation,
        CONFIGURATION_TYPE ControllerType,
        ULONG ControllerNumber,
        PKEY_VALUE_FULL_INFORMATION *ControllerInformation,
        CONFIGURATION_TYPE PeripheralType,
        ULONG PeripheralNumber,
        PKEY_VALUE_FULL_INFORMATION *PeripheralInformation)
{
  int v11; // edx
  PKEY_VALUE_FULL_INFORMATION v12; // r8
  __int64 DataOffset; // rax
  unsigned int v14; // r9d
  char *i; // rax
  __int16 v16; // ax

  v11 = 0;
  if ( !Context[2] )
  {
    v12 = PeripheralInformation[1];
    if ( v12->DataLength )
    {
      DataOffset = v12->DataOffset;
      v14 = *(ULONG *)((char *)&v12->DataLength + DataOffset);
      if ( v14 )
      {
        for ( i = (char *)&v12->NameLength + DataOffset; *i != 5; i += 20 )
        {
          if ( ++v11 >= v14 )
            return 0LL;
        }
        v16 = (*((_WORD *)i + 13) >> 4) & 7;
        Context[2] = 1;
        *(_WORD *)Context = v16;
      }
    }
  }
  return 0LL;
}
