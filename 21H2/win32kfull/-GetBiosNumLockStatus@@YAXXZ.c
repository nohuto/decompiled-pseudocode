/*
 * XREFs of ?GetBiosNumLockStatus@@YAXXZ @ 0x1C011F9CC
 * Callers:
 *     InitKeyboard @ 0x1C011F950 (InitKeyboard.c)
 * Callees:
 *     <none>
 */

void GetBiosNumLockStatus(void)
{
  enum _INTERFACE_TYPE v0; // ebx
  int Context; // [rsp+50h] [rbp+8h] BYREF
  enum _CONFIGURATION_TYPE PeripheralType; // [rsp+58h] [rbp+10h] BYREF
  enum _CONFIGURATION_TYPE ControllerType; // [rsp+60h] [rbp+18h] BYREF
  enum _INTERFACE_TYPE BusType; // [rsp+68h] [rbp+20h] BYREF

  Context = 0;
  v0 = Internal;
  ControllerType = KeyboardController;
  PeripheralType = KeyboardPeripheral;
  while ( 1 )
  {
    BusType = v0;
    IoQueryDeviceDescription(
      &BusType,
      0LL,
      &ControllerType,
      0LL,
      &PeripheralType,
      0LL,
      KeyboardDeviceSpecificCallout,
      &Context);
    if ( BYTE2(Context) )
      break;
    if ( (unsigned int)++v0 >= (MaximumInterfaceType|Eisa) )
      return;
  }
  gklpBootTime[1] = Context;
}
