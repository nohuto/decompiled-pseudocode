/*
 * XREFs of ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C016E844
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C016E2DC (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C016E4E0 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::_GetAngle(struct tagPOINT a1, struct tagPOINT a2)
{
  int v2; // r14d
  int v3; // esi
  int v4; // ebx
  int v5; // ebp
  unsigned int v6; // edi
  unsigned int v7; // ecx
  signed int v8; // eax
  signed int *v9; // rdx
  bool v10; // cc
  int v11; // esi
  int v12; // esi
  int v13; // eax

  v2 = a1.x - a2.x;
  v3 = 4;
  v4 = a1.y - a2.y;
  v5 = 0;
  if ( a1.x == a2.x )
  {
    v6 = 90;
  }
  else
  {
    v7 = 0;
    v8 = abs32(100 * v4 / v2);
    v9 = (signed int *)&RIMDeadzone::s_adwTangentLookup;
    do
    {
      if ( v8 <= *v9 )
        break;
      ++v7;
      ++v9;
    }
    while ( v7 < 0x12 );
    if ( v7 == 18 )
    {
      v6 = 90;
    }
    else
    {
      v6 = 5 * v7;
      if ( 5 * v7 > 0x5A )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 262);
    }
    v10 = v2 <= 0;
    if ( v2 < 0 )
      goto LABEL_13;
  }
  if ( v4 >= 0 )
    goto LABEL_16;
  v10 = v2 <= 0;
LABEL_13:
  if ( v10 )
  {
    LOBYTE(v5) = v4 >= 0;
    v3 = v5 + 2;
  }
  else
  {
    v3 = 1;
  }
LABEL_16:
  v11 = v3 - 2;
  if ( !v11 )
  {
    v13 = 180;
    goto LABEL_22;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v13 = 360;
LABEL_22:
      v6 = v13 - v6;
    }
  }
  else
  {
    v6 += 180;
  }
  return v6 % 0x168;
}
