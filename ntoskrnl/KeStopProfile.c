/*
 * XREFs of KeStopProfile @ 0x140571BAC
 * Callers:
 *     KeStartProfile @ 0x140571A6C (KeStartProfile.c)
 *     EtwpDisableKernelTrace @ 0x1407864C4 (EtwpDisableKernelTrace.c)
 *     EtwTimeProfileReset @ 0x140860A78 (EtwTimeProfileReset.c)
 *     EtwpCoverageSamplerStop @ 0x1409F08E4 (EtwpCoverageSamplerStop.c)
 *     ExpProfileDelete @ 0x140A015C0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140A01C50 (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiStopProfileTarget @ 0x140572310 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
