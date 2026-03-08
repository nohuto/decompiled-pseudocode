/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C01C96E4
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C01A8668 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01C9BC8 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C01CA4C8 (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C01DF478 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagHPD_CONTACT *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // esi
  __int64 v9; // rdx
  DeadzonePalmTelemetry *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int Angle; // r13d
  unsigned int v14; // r12d
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  DeadzonePalmTelemetry *v19; // rcx
  struct tagPOINT v21; // [rsp+60h] [rbp+8h]
  struct tagPOINT v22; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 572);
  v4 = 0;
  if ( (*((_DWORD *)a2 + 671) & 4) != 0 || (v5 = 1LL, (*((_DWORD *)a2 + 611) & 4) == 0) )
    v5 = 0LL;
  v6 = *((_DWORD *)this + 4);
  if ( v6 && *((_DWORD *)this + 10) )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v22.x = *((_DWORD *)a2 + 618) / 100;
        v22.y = *((_DWORD *)a2 + 619) / 100;
        v21.x = *((_DWORD *)this + 11) / 100;
        v21.y = *((_DWORD *)this + 12) / 100;
        v8 = (v22.x - v21.x) * (v22.x - v21.x) + (v22.y - v21.y) * (v22.y - v21.y);
        Angle = RIMDeadzone::_GetAngle(v22, v21);
        v14 = 0;
        if ( *((_DWORD *)this + 8) )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v14);
            v16 = SGDGetUserSessionState(v10, v9, v11, v12);
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(Angle, *(unsigned int *)(v16 + 464), v15) )
            {
              v17 = *((_QWORD *)this + 3);
              v18 = 0LL;
              if ( *(_DWORD *)(v17 + 24LL * v14 + 16) )
                break;
            }
LABEL_20:
            if ( ++v14 >= *((_DWORD *)this + 8) )
              return v4;
          }
          while ( 1 )
          {
            v10 = *(DeadzonePalmTelemetry **)(v17 + 24LL * v14 + 8);
            v12 = *((unsigned int *)v10 + 2 * v18 + 1);
            v9 = *((_DWORD *)v10 + 2 * v18) / 0x64u * (*((_DWORD *)v10 + 2 * v18) / 0x64u);
            if ( v8 >= (unsigned int)v9 )
            {
              v9 = (unsigned int)v12 / 0x64 * ((unsigned int)v12 / 0x64);
              if ( v8 < (unsigned int)v9 )
                break;
            }
            if ( v5 )
            {
              v10 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v10 )
              {
                if ( v8 < 0x57E4 )
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v10, v8, Angle, 0);
              }
            }
            v17 = *((_QWORD *)this + 3);
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 24LL * v14 + 16) )
              goto LABEL_20;
          }
          v4 = 1;
          if ( v5 )
          {
            v19 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v19 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v19, v8, Angle, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *((_QWORD *)a2 + 309));
    }
  }
  return v4;
}
