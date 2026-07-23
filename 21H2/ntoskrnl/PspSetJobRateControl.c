/*
 * XREFs of PspSetJobRateControl @ 0x140909810
 * Callers:
 *     PspSetNetRateControl @ 0x140909A24 (PspSetNetRateControl.c)
 * Callees:
 *     PspFreeRateControl @ 0x1405D9FBC (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1405DA00C (PspAllocateRateControl.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140681C50 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspModifyAncestorBits @ 0x14090912C (PspModifyAncestorBits.c)
 *     PspRemoveRateControl @ 0x1409093DC (PspRemoveRateControl.c)
 */

__int64 __fastcall PspSetJobRateControl(_QWORD *Object, __int64 a2, char a3)
{
  int v3; // r14d
  int v4; // edi
  int v5; // eax
  PVOID *v6; // rsi
  int v7; // r14d
  PVOID *RateControl; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v3 = *((_DWORD *)Object + 330);
  v15 = 0LL;
  v4 = 0;
  v5 = v3 & 0x4000000;
  v6 = 0LL;
  v7 = v3 & 0x2000000;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    if ( !v5 )
    {
      if ( v7 )
      {
        v4 = -1073741637;
        goto LABEL_15;
      }
      RateControl = (PVOID *)PspAllocateRateControl(0LL);
      v6 = RateControl;
      if ( !RateControl )
      {
        v4 = -1073741801;
        goto LABEL_15;
      }
      Object[164] = RateControl;
      _InterlockedOr((volatile signed __int32 *)Object + 330, 0x4000000u);
      PspModifyAncestorBits((__int64)Object, 0x2000000u, 1);
    }
    LODWORD(v15) = 0;
    *((_QWORD *)&v14 + 1) = Object;
    BYTE4(v15) = 1;
    v4 = PspEnumJobsAndProcessesInJobHierarchy(
           Object,
           (int)PspSetRateControlJobPreCallback,
           0,
           (int)PspSetRateControlProcessCallback,
           (__int64)v13,
           5);
  }
  else
  {
    if ( !v5 )
    {
      v4 = -1073741811;
      goto LABEL_15;
    }
    PspRemoveRateControl((__int64)Object);
  }
  if ( v4 >= 0 )
    return (unsigned int)v4;
  if ( v6 )
    PspFreeRateControl(v6, 0);
LABEL_15:
  Object[164] = 0LL;
  _InterlockedAnd((volatile signed __int32 *)Object + 330, 0xFBFFFFFF);
  if ( !v7 )
  {
    PspModifyAncestorBits((__int64)Object, 0x2000000u, 0);
    v13[0] &= v10;
    v13[1] &= v10;
    LODWORD(v15) = v10 & v15;
    v14 = 0LL;
    BYTE4(v15) = v10;
    PspEnumJobsAndProcessesInJobHierarchy(
      v11,
      (int)PspSetRateControlJobPreCallback,
      v10,
      (int)PspSetRateControlProcessCallback,
      (__int64)v13,
      5);
  }
  return (unsigned int)v4;
}
