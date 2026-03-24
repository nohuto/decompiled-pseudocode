/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C016E20C
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0158960 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C00707BC (PtInRect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C016E774 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C016E9E8 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C0180A30 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagPOINT *a2)
{
  unsigned int v4; // r12d
  __int64 v5; // r13
  int v6; // ecx
  int v7; // ecx
  LONG x; // edi
  unsigned int v9; // r10d
  unsigned int v10; // r15d
  unsigned int v11; // esi
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DeadzonePalmTelemetry *v18; // rcx
  DeadzonePalmTelemetry *v19; // rcx
  struct tagPOINT v21; // [rsp+60h] [rbp+40h]
  unsigned int Angle; // [rsp+60h] [rbp+40h]
  struct tagPOINT v23; // [rsp+68h] [rbp+48h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 576);
  v4 = 0;
  if ( (a2[332].y & 4) != 0 || (v5 = 1LL, (a2[302].y & 4) == 0) )
    v5 = 0LL;
  v6 = *((_DWORD *)this + 4);
  if ( v6 && *((_DWORD *)this + 10) )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v23 = a2[306];
        v21 = *(struct tagPOINT *)((char *)this + 44);
        v23.x /= 100;
        v23.y /= 100;
        v21.x /= 100;
        x = v21.x;
        v21.y /= 100;
        Angle = RIMDeadzone::_GetAngle(v23, v21);
        v9 = Angle;
        v10 = (v23.x - x) * (v23.x - x) + (v23.y - v21.y) * (v23.y - v21.y);
        v11 = 0;
        if ( *((_DWORD *)this + 8) )
        {
          v12 = *((_QWORD *)this + 3);
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v9, *(_QWORD *)(v12 + 24LL * v11)) )
            {
              v14 = v13;
              if ( *(_DWORD *)(v12 + 24LL * v11 + 16) > v13 )
                break;
            }
LABEL_22:
            if ( ++v11 >= *((_DWORD *)this + 8) )
              return v4;
          }
          v15 = v12;
          while ( 1 )
          {
            v16 = *(_QWORD *)(v15 + 24LL * v11 + 8);
            if ( v10 >= *(_DWORD *)(v16 + 8LL * v14) && v10 < *(_DWORD *)(v16 + 8LL * v14 + 4) )
              break;
            v17 = v15;
            if ( v5 )
            {
              v18 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v18 )
              {
                if ( v10 < 0x57E4 )
                {
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v18, v10, v9, 0);
                  v12 = *((_QWORD *)this + 3);
                  v9 = Angle;
                  v17 = v12;
                }
              }
            }
            ++v14;
            v15 = v17;
            if ( v14 >= *(_DWORD *)(v17 + 24LL * v11 + 16) )
              goto LABEL_22;
          }
          v4 = 1;
          if ( v5 )
          {
            v19 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v19 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v19, v10, v9, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *(_QWORD *)&a2[306]);
    }
  }
  return v4;
}
