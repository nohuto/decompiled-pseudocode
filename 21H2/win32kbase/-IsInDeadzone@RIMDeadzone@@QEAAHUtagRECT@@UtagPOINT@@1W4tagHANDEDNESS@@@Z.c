/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C016E4E0
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0158ACC (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0158BE4 (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C004159C (RIMGetOneCoreEdition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C016E7C8 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C016E844 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C016E95C (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C016EA08 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C016EAB8 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  RIMDeadzone *v5; // r13
  unsigned int v6; // r15d
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // r9d
  unsigned int v14; // ebp
  __int64 v15; // r10
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // r11d
  unsigned int v19; // eax
  __int64 v20; // rdx
  struct tagPOINT v21; // [rsp+20h] [rbp-58h]
  struct tagPOINT v22; // [rsp+80h] [rbp+8h]
  unsigned int Angle; // [rsp+80h] [rbp+8h]
  int v25; // [rsp+94h] [rbp+1Ch]
  int v26; // [rsp+9Ch] [rbp+24h]

  v26 = HIDWORD(a4);
  v25 = HIDWORD(a3);
  v5 = RIMDeadzone::s_pRimDeadzoneInstance;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 4) || a5 != *(_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance )
  {
    if ( *((_QWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 3) )
      RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone::s_pRimDeadzoneInstance);
    v9 = a5 ? RIMDeadzone::_InitializeRightHandedDeadzone(v5) : RIMDeadzone::_InitializeLeftHandedDeadzone(v5);
    if ( v9 < 0 )
      return 0LL;
  }
  v21.x = v8 / 100;
  v21.y = v25 / 100;
  v22.x = v7 / 100;
  v22.y = v26 / 100;
  Angle = RIMDeadzone::_GetAngle(v21, v22);
  v11 = Angle;
  v12 = *((_DWORD *)v5 + 8);
  v13 = 0;
  v14 = (v8 / 100 - v7 / 100) * (v8 / 100 - v7 / 100) + (v25 / 100 - v26 / 100) * (v25 / 100 - v26 / 100);
  if ( v12 )
  {
    v15 = *((_QWORD *)v5 + 3);
    while ( 1 )
    {
      if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v11, *(_QWORD *)(v15 + 24LL * v13)) )
      {
        v18 = *(_DWORD *)(v15 + 8 * v16 + 16);
        v19 = 0;
        if ( v18 )
          break;
      }
LABEL_19:
      v13 = v17 + 1;
      if ( v13 >= v12 )
        goto LABEL_20;
    }
    v20 = *(_QWORD *)(v15 + 8 * v16 + 8);
    while ( v14 < *(_DWORD *)(v20 + 8LL * v19) || v14 >= *(_DWORD *)(v20 + 8LL * v19 + 4) )
    {
      if ( ++v19 >= v18 )
      {
        v11 = Angle;
        goto LABEL_19;
      }
    }
    return 1;
  }
LABEL_20:
  if ( (unsigned int)RIMGetOneCoreEdition() == 6 )
    return v6;
  if ( a5 != 1 )
  {
    if ( a5 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 760);
    if ( v25 > a2[3] - 1000 && v8 <= v7 )
      return 1;
    if ( v8 >= *a2 + 530 )
      return v6;
    goto LABEL_31;
  }
  if ( v25 > a2[3] - 1000 && v8 >= v7 )
    return 1;
  if ( v8 > a2[2] - 530 )
  {
LABEL_31:
    if ( v25 >= v26 )
      return 1;
  }
  return v6;
}
