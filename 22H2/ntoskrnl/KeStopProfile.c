/*
 * XREFs of KeStopProfile @ 0x1405740BC
 * Callers:
 *     KeStartProfile @ 0x140573F7C (KeStartProfile.c)
 *     EtwpDisableKernelTrace @ 0x1407D5984 (EtwpDisableKernelTrace.c)
 *     EtwTimeProfileReset @ 0x140865088 (EtwTimeProfileReset.c)
 *     EtwpCoverageSamplerStop @ 0x1409F3774 (EtwpCoverageSamplerStop.c)
 *     ExpProfileDelete @ 0x140A042B0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140A04940 (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x14039A940 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiStopProfileTarget @ 0x140574820 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context; // [rsp+20h] [rbp-148h] BYREF
  int v3; // [rsp+28h] [rbp-140h]
  int v4; // [rsp+2Ch] [rbp-13Ch]
  int v5; // [rsp+30h] [rbp-138h]
  _DWORD v6[69]; // [rsp+34h] [rbp-134h] BYREF

  v4 = KeNumberProcessors_0;
  Context = a1;
  v3 = KeNumberProcessors_0;
  v5 = 2097153;
  memset(v6, 0, sizeof(v6));
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget((ULONG_PTR)&Context);
  else
    KeIpiGenericCall(KiStopProfileTarget, (ULONG_PTR)&Context);
  if ( *(_QWORD *)&v6[65] )
    ExFreePoolWithTag(*(PVOID *)&v6[65], 0);
  return v6[67];
}
