/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C01A273C
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0186C6C (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01A2B84 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C01A31F4 (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C01B7260 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(DeadzonePalmTelemetry **this, struct tagHPD_CONTACT *a2, __int64 a3)
{
  unsigned int v5; // ebp
  _BOOL8 v6; // r12
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // edi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  DeadzonePalmTelemetry *v13; // rsi
  __int64 v14; // r14
  DeadzonePalmTelemetry *v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edx
  DeadzonePalmTelemetry *v18; // rax
  DeadzonePalmTelemetry *v19; // rcx
  DeadzonePalmTelemetry *v20; // rcx
  struct tagPOINT v22; // [rsp+60h] [rbp+8h]
  unsigned int Angle; // [rsp+60h] [rbp+8h]
  struct tagPOINT v24; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = 0;
  v6 = (*((_DWORD *)a2 + 665) & 4) == 0 && (*((_DWORD *)a2 + 605) & 4) != 0;
  v7 = *((_DWORD *)this + 4);
  if ( v7 && *((_DWORD *)this + 10) )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v24.x = *((_DWORD *)a2 + 612) / 100;
        v24.y = *((_DWORD *)a2 + 613) / 100;
        v22.x = *((_DWORD *)this + 11) / 100;
        v22.y = *((_DWORD *)this + 12) / 100;
        v9 = (v24.x - v22.x) * (v24.x - v22.x) + (v24.y - v22.y) * (v24.y - v22.y);
        v10 = 0LL;
        Angle = RIMDeadzone::_GetAngle(v24, v22);
        v12 = Angle;
        if ( *((_DWORD *)this + 8) )
        {
          v13 = this[3];
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v12, v11, *((_QWORD *)v13 + 3 * v10)) )
            {
              v14 = 0LL;
              if ( *((_DWORD *)v13 + 6 * v10 + 4) )
                break;
            }
LABEL_23:
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= *((_DWORD *)this + 8) )
              return v5;
            v12 = Angle;
          }
          v15 = v13;
          while ( 1 )
          {
            v16 = *((_QWORD *)v15 + 3 * v10 + 1);
            v11 = *(_DWORD *)(v16 + 8 * v14) / 0x64u * (*(_DWORD *)(v16 + 8 * v14) / 0x64u);
            if ( v9 >= (unsigned int)v11 )
            {
              v17 = *(_DWORD *)(v16 + 8 * v14 + 4) / 0x64u;
              v11 = v17 * v17;
              if ( v9 < (unsigned int)v11 )
                break;
            }
            v18 = v15;
            if ( v6 )
            {
              v19 = this[7];
              if ( v19 )
              {
                if ( v9 < 0x57E4 )
                {
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v19, v9, Angle, 0);
                  v13 = this[3];
                  v18 = v13;
                }
              }
            }
            v14 = (unsigned int)(v14 + 1);
            v15 = v18;
            if ( (unsigned int)v14 >= *((_DWORD *)v18 + 6 * v10 + 4) )
              goto LABEL_23;
          }
          v5 = 1;
          if ( v6 )
          {
            v20 = this[7];
            if ( v20 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v20, v9, Angle, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *((_QWORD *)a2 + 306));
    }
  }
  return v5;
}
