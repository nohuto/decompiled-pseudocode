__int64 __fastcall RIMDeadzone::_GetAngle(struct tagPOINT a1, struct tagPOINT a2)
{
  int v2; // esi
  int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  signed int v6; // eax
  signed int *v7; // rdx
  unsigned int v8; // eax
  int v9; // edi

  v2 = a1.x - a2.x;
  v3 = a1.y - a2.y;
  if ( a1.x == a2.x )
  {
    v4 = 90;
  }
  else
  {
    v5 = 0;
    v6 = abs32(100 * v3 / v2);
    v7 = (signed int *)&RIMDeadzone::s_adwTangentLookup;
    while ( v6 > *v7 )
    {
      ++v5;
      ++v7;
      if ( v5 >= 0x12 )
      {
        if ( v5 == 18 )
        {
          v4 = 90;
          goto LABEL_10;
        }
        break;
      }
    }
    v4 = 5 * v5;
    if ( 5 * v5 > 0x5A )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 261);
LABEL_10:
    if ( v2 < 0 )
      goto LABEL_13;
  }
  v8 = v4;
  if ( v3 >= 0 )
  {
    v9 = 360;
LABEL_17:
    v4 = v9 - v8;
    return v4 % 0x168;
  }
LABEL_13:
  v8 = v4;
  if ( v2 <= 0 )
  {
    if ( v3 < 0 )
    {
      v9 = 180;
      goto LABEL_17;
    }
    v4 += 180;
  }
  return v4 % 0x168;
}
