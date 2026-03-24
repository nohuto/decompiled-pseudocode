/*
 * XREFs of UpdateKeyLights @ 0x1C00B0BA0
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0008690 (xxxChangeForegroundKeyboardTable.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004D1F0 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C00C5210 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 * Callees:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0049F30 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UpdateKeyLights(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int16 v3; // r8
  char v4; // cl
  int v5; // eax
  int v6; // eax
  __int16 v7; // ax

  v1 = a1;
  HIWORD(gklp) = 0;
  v2 = 4LL;
  if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
  {
    byte_1C024F5E5 |= 2u;
    HIWORD(gklp) = 4;
  }
  else
  {
    byte_1C024F5E5 &= ~2u;
  }
  v3 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
  if ( (BYTE4(xmmword_1C024F640) & 2) != 0 )
  {
    HIWORD(gklp) = v3 | 2;
    v4 = byte_1C024F604 | 2;
  }
  else
  {
    v4 = byte_1C024F604 & 0xFD;
  }
  if ( (BYTE4(xmmword_1C024F640) & 8) != 0 )
  {
    v7 = v3 | 2;
    if ( (BYTE4(xmmword_1C024F640) & 2) == 0 )
      v7 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
    HIWORD(gklp) = v7 | 1;
    LOBYTE(a1) = v4 | 8;
  }
  else
  {
    LOBYTE(a1) = v4 & 0xF7;
  }
  byte_1C024F604 = a1;
  if ( (_BYTE)gKeyboardInfo == 7
    || (!qword_1C0257050 ? (v5 = 0) : (v5 = qword_1C0257050(a1, 4LL)), v5 && (_DWORD)gRemoteClientKeyboardType == 7) )
  {
    if ( (BYTE5(gafAsyncKeyState) & 8) != 0 )
    {
      HIWORD(gklp) |= 8u;
      byte_1C024F5E5 |= 8u;
    }
    else
    {
      byte_1C024F5E5 &= ~8u;
    }
  }
  if ( qword_1C0257050 )
    v6 = qword_1C0257050(a1, v2);
  else
    v6 = 0;
  if ( v6 )
  {
    if ( v1 )
      HIWORD(gklp) |= 0x8000u;
    else
      HIWORD(gklp) &= ~0x8000u;
  }
  gdwUpdateKeyboard |= 2u;
  CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
}
