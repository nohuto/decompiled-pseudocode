/*
 * XREFs of ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1C023A6B4
 * Callers:
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C00F5A22 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0235884 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0236AD8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0237B1C (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C00F5918 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowNow(CPTPEngine *this, struct PTPInput *a2, int a3, int a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebx
  int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  int v12; // r8d
  unsigned __int64 v13; // rcx
  int v15; // r9d
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  _DWORD v19[10]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( !*((_DWORD *)this + 5) )
  {
    LODWORD(v11) = 0;
LABEL_3:
    v12 = 0;
    LOBYTE(v8) = (_DWORD)v11 == 4;
    goto LABEL_4;
  }
  v11 = *((int *)this + 115);
  if ( !(_DWORD)v11 || (_DWORD)v11 == 4 && a4 )
    goto LABEL_3;
  v12 = a3 & 2;
  if ( v12 && (*((_DWORD *)this + 984) & 0x20000) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v12 = a3;
    v15 = a3 & 0x6C;
    if ( (a3 & 0x6C) != 0 )
    {
      v16 = v11;
      if ( v15 == 32 )
      {
        v17 = *((_DWORD *)this + v11 + 130);
      }
      else
      {
        v17 = *((_DWORD *)this + v11 + 119);
        if ( v15 == 64 )
          v17 = *((_DWORD *)this + v16 + 138);
      }
      v9 = *((_QWORD *)a2 + 1);
      v10 = *((_QWORD *)a2 + 2);
      if ( v9 > 0 )
      {
        if ( v10 <= v9 )
        {
          v17 = *((_DWORD *)this + 129);
          v18 = v4 - v9;
        }
        else
        {
          v18 = v4 - v10;
        }
        v12 = a3;
        if ( (__int64)((unsigned __int64)(1000 * v18) / *((_QWORD *)this + 12)) < v17 )
        {
          v8 = 1;
          v12 = a3 & 0x6C;
        }
      }
    }
  }
LABEL_4:
  v13 = *((_QWORD *)this + 12);
  v19[4] = v12;
  v19[3] = v8;
  v19[0] = 1000 * v9 / v13;
  v19[1] = 1000 * v10 / v13;
  v19[2] = 1000 * v4 / v13;
  CBasePTPEngine::SendEtwOutput((__int64)this, 0, (__int64)v19);
  LOBYTE(v5) = v8 == 0;
  return v5;
}
