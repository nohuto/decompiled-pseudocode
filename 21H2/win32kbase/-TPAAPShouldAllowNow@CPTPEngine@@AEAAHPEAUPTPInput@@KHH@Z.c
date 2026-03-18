/*
 * XREFs of ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C02043C8
 * Callers:
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C00E9CE0 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01FF558 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C02007A8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C02016CC (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020273C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0203810 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendSqmOutput@CBasePTPEngine@@IEAAXK@Z @ 0x1C0203E9C (-SendSqmOutput@CBasePTPEngine@@IEAAXK@Z.c)
 */

_BOOL8 __fastcall CPTPEngine::TPAAPShouldAllowNow(CPTPEngine *this, struct PTPInput *a2, int a3, int a4, int a5)
{
  __int64 v5; // r14
  int v6; // ebp
  __int64 v7; // r11
  __int64 v8; // rsi
  __int64 v11; // rcx
  int v12; // r8d
  BOOL v13; // ebx
  unsigned __int64 v14; // rcx
  int v16; // r9d
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  _DWORD v20[10]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( !*((_DWORD *)this + 5) )
  {
    LODWORD(v11) = 0;
LABEL_3:
    v12 = 0;
    v13 = v11 == 4;
    goto LABEL_4;
  }
  v11 = *((int *)this + 115);
  if ( !(_DWORD)v11 || (_DWORD)v11 == 4 && a4 )
    goto LABEL_3;
  v12 = a3 & 2;
  if ( v12 && (v6 = 1, (*((_DWORD *)this + 984) & 0x20000) != 0) )
  {
    v13 = 1;
  }
  else
  {
    v13 = 0;
    v12 = a3;
    v16 = a3 & 0x6C;
    if ( (a3 & 0x6C) != 0 )
    {
      v6 = 1;
      v17 = v11;
      if ( v16 == 32 )
      {
        v18 = *((_DWORD *)this + v11 + 130);
      }
      else
      {
        v18 = *((_DWORD *)this + v11 + 119);
        if ( v16 == 64 )
          v18 = *((_DWORD *)this + v17 + 138);
      }
      v7 = *((_QWORD *)a2 + 1);
      v8 = *((_QWORD *)a2 + 2);
      if ( v7 > 0 )
      {
        if ( v8 <= v7 )
        {
          v18 = *((_DWORD *)this + 129);
          v19 = v5 - v7;
        }
        else
        {
          v19 = v5 - v8;
        }
        v12 = a3;
        if ( (__int64)((unsigned __int64)(1000 * v19) / *((_QWORD *)this + 12)) < v18 )
        {
          v13 = 1;
          v12 = a3 & 0x6C;
        }
      }
    }
  }
LABEL_4:
  v14 = *((_QWORD *)this + 12);
  v20[4] = v12;
  v20[3] = v13;
  v20[0] = 1000 * v7 / v14;
  v20[1] = 1000 * v8 / v14;
  v20[2] = 1000 * v5 / v14;
  CBasePTPEngine::SendEtwOutput((__int64)this, 0, (__int64)v20);
  if ( a5 )
  {
    if ( v6 )
    {
      CBasePTPEngine::SendSqmOutput(this, 11611);
      if ( v13 )
        CBasePTPEngine::SendSqmOutput(this, 11610);
    }
  }
  return !v13;
}
