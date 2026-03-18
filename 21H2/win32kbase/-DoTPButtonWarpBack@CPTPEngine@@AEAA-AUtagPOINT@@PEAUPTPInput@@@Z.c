/*
 * XREFs of ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C0200194
 * Callers:
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0203B20 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0203D58 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01FF02C (-CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0203CB4 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C0204048 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

struct tagPOINT __fastcall CPTPEngine::DoTPButtonWarpBack(CPTPEngine *this, struct PTPInput *a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rbx
  unsigned __int64 v8; // r12
  char *v9; // rdi
  unsigned __int64 v10; // rbp

  v3 = *((_DWORD *)this + 911) == 2;
  v5 = *(_QWORD *)(a3 + 28);
  *(_QWORD *)a2 = v5;
  if ( v3 )
  {
    v8 = *((_QWORD *)this + 12);
    v9 = (char *)this + 400 * *((unsigned int *)this + 902) + 1208;
    v10 = *(_QWORD *)a3 - *((_QWORD *)v9 + 14);
    if ( v10 < v8 * *((unsigned int *)this + 93) / 0x3E8
      && !CPTPEngine::CrossedTPButtonWarpBackThreshold(this, (struct CContactState *)v9, *(struct tagPOINT *)(v9 + 8))
      && ((_DWORD)v5 != *((_DWORD *)v9 + 16) || *(_DWORD *)(a3 + 32) != *((_DWORD *)v9 + 17)) )
    {
      CBasePTPEngine::SendWarpbackTelemetry(this, 13LL, v5, *((_QWORD *)v9 + 8), 1000 * v10 / v8);
      CBasePTPEngine::SendMouseOutput(this, 5LL, *((_QWORD *)v9 + 8));
      *(_QWORD *)a2 = *((_QWORD *)v9 + 8);
    }
  }
  return (struct tagPOINT)a2;
}
