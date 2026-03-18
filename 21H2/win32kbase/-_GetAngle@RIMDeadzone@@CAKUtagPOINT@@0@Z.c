/*
 * XREFs of ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01A2B84
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C01A273C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::_GetAngle(struct tagPOINT a1, struct tagPOINT a2, __int64 a3)
{
  int v3; // esi
  int v4; // ebx
  unsigned int v5; // edi
  signed int v6; // eax
  signed int *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // edi

  v3 = a1.x - a2.x;
  v4 = a1.y - a2.y;
  if ( a1.x == a2.x )
  {
    v5 = 90;
  }
  else
  {
    v6 = abs32(100 * v4 / v3);
    v7 = (signed int *)&RIMDeadzone::s_adwTangentLookup;
    v8 = 0LL;
    while ( v6 > *v7 )
    {
      v8 = (unsigned int)(v8 + 1);
      ++v7;
      if ( (unsigned int)v8 >= 0x12 )
      {
        if ( (_DWORD)v8 == 18 )
        {
          v5 = 90;
          goto LABEL_10;
        }
        break;
      }
    }
    v5 = 5 * v8;
    if ( (unsigned int)(5 * v8) > 0x5A )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, a3);
LABEL_10:
    if ( v3 < 0 )
      goto LABEL_13;
  }
  v9 = v5;
  if ( v4 >= 0 )
  {
    v10 = 360;
LABEL_17:
    v5 = v10 - v9;
    return v5 % 0x168;
  }
LABEL_13:
  v9 = v5;
  if ( v3 <= 0 )
  {
    if ( v4 < 0 )
    {
      v10 = 180;
      goto LABEL_17;
    }
    v5 += 180;
  }
  return v5 % 0x168;
}
