/*
 * XREFs of FreeData @ 0x1C00036E8
 * Callers:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     ParseCall @ 0x1C0006B60 (ParseCall.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     Store @ 0x1C000AAB0 (Store.c)
 *     ValidateTarget @ 0x1C000B264 (ValidateTarget.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000BAC4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIGetWorkerForString @ 0x1C000C4F0 (ACPIGetWorkerForString.c)
 *     LinkNodeCrackPrt @ 0x1C000EC74 (LinkNodeCrackPrt.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001C330 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     AMLIFreeDataBuffs @ 0x1C001D940 (AMLIFreeDataBuffs.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026CF0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 */

__int64 __fastcall FreeData(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData();
  }
  else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_WORD *)(a1 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(_DWORD **)(a1 + 32));
    FreeObjData(a1);
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
