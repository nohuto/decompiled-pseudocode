/*
 * XREFs of UpdateKeyLights @ 0x1C0042A40
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0051CD0 (xxxChangeForegroundKeyboardTable.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C00C5600 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 * Callees:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00400A0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UpdateKeyLights(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  char v5; // cl
  __int16 v6; // ax

  v3 = a1;
  HIWORD(gklp) = 0;
  v4 = 4LL;
  if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
  {
    byte_1C0295765 |= 2u;
    HIWORD(gklp) = 4;
  }
  else
  {
    byte_1C0295765 &= ~2u;
  }
  LOWORD(a3) = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
  if ( (BYTE4(xmmword_1C0294E70) & 2) != 0 )
  {
    HIWORD(gklp) = a3 | 2;
    v5 = byte_1C0295784 | 2;
  }
  else
  {
    v5 = byte_1C0295784 & 0xFD;
  }
  if ( (BYTE4(xmmword_1C0294E70) & 8) != 0 )
  {
    v6 = a3 | 2;
    if ( (BYTE4(xmmword_1C0294E70) & 2) == 0 )
      v6 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
    HIWORD(gklp) = v6 | 1;
    LOBYTE(a1) = v5 | 8;
  }
  else
  {
    LOBYTE(a1) = v5 & 0xF7;
  }
  byte_1C0295784 = a1;
  if ( (_BYTE)gKeyboardInfo == 7
    || qword_1C029CC70 && (unsigned int)qword_1C029CC70(a1, 4LL, a3) && (_DWORD)gRemoteClientKeyboardType == 7 )
  {
    if ( (BYTE5(gafAsyncKeyState) & 8) != 0 )
    {
      HIWORD(gklp) |= 8u;
      byte_1C0295765 |= 8u;
    }
    else
    {
      byte_1C0295765 &= ~8u;
    }
  }
  if ( qword_1C029CC70 && (unsigned int)qword_1C029CC70(a1, v4, a3) )
  {
    if ( v3 )
      HIWORD(gklp) |= 0x8000u;
    else
      HIWORD(gklp) &= ~0x8000u;
  }
  gdwUpdateKeyboard |= 2u;
  CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
}
