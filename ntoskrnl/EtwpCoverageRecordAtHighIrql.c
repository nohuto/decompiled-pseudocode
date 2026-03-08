/*
 * XREFs of EtwpCoverageRecordAtHighIrql @ 0x1405FD574
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140871478 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x1402F9DD0 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageValidateCP @ 0x1402F9EFC (EtwpCoverageValidateCP.c)
 *     RtlStringCchCopyA @ 0x1403BD50C (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpCoverageRecordAtHighIrql(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  int v12; // [rsp+20h] [rbp-78h] BYREF
  __int128 v13; // [rsp+28h] [rbp-70h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h]
  char pszDest[64]; // [rsp+40h] [rbp-58h] BYREF

  v12 = 0;
  result = EtwpCoverageValidateCP(a1, &v12);
  if ( (_DWORD)result )
  {
    v3 = a1[2];
    v13 = *(_OWORD *)a1;
    v14 = v3;
    RtlStringCchCopyA(pszDest, 0x40uLL, (NTSTRSAFE_PCSTR)v13);
    HIDWORD(v13) = 0;
    *(_QWORD *)&v13 = pszDest;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v6 = 4;
      if ( CurrentIrql != 2 )
        v6 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v6;
    }
    EtwTelemetryCoverageReport((__int64 *)&v13);
    if ( KiIrqlFlags )
    {
      v7 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    result = HIDWORD(v13);
    *((_DWORD *)a1 + 3) = HIDWORD(v13);
  }
  return result;
}
