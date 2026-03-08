/*
 * XREFs of PopDiagTraceIrpFinishTelemetry @ 0x1402BB8E4
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x1402BB864 (PopDiagTraceIrpFinish.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopComputeWatchdogTimeout @ 0x1402BB3D0 (PopComputeWatchdogTimeout.c)
 *     IoFindDeviceThatFailedIrp @ 0x1402FC254 (IoFindDeviceThatFailedIrp.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagGetDriverName @ 0x14058F424 (PopDiagGetDriverName.c)
 */

NTSTATUS __fastcall PopDiagTraceIrpFinishTelemetry(__int64 a1)
{
  int v2; // r13d
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 UnbiasedInterruptTime; // rax
  int v7; // r11d
  __int64 v8; // r8
  char v9; // di
  unsigned __int64 v10; // r12
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  int *v15; // rdi
  __int64 DeviceThatFailedIrp; // rax
  const size_t *v17; // r9
  int v18; // r10d
  int v19; // r11d
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+68h] [rbp-A0h] BYREF
  int *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  __int64 *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  __int64 *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  char v35[16]; // [rsp+B8h] [rbp-50h] BYREF
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  __int64 *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  char v46[128]; // [rsp+118h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 288));
  LOBYTE(v5) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v5);
  v8 = *(_QWORD *)(v3 + 48);
  v24 = UnbiasedInterruptTime;
  v9 = 0;
  v10 = (UnbiasedInterruptTime - v8) / 0x2710uLL;
  if ( v8 )
  {
    if ( *(_DWORD *)(v3 + 296) == v7 )
    {
      v9 = 0;
      if ( (unsigned int)v10 >= 0x1388 )
        v9 = v7;
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)(v3 + 288));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v14 = (result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  if ( v9 )
  {
    if ( v2 < 0 )
    {
      v15 = (int *)(v3 + 188);
      if ( !*(_DWORD *)(v3 + 188) )
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1);
        PopDiagGetDriverName(DeviceThatFailedIrp, v46);
      }
    }
    else
    {
      v15 = (int *)(v3 + 188);
    }
    result = PopComputeWatchdogTimeout(v3);
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      result = tlgKeywordOn(&dword_140C03928, 0x400000000000LL);
      if ( (_BYTE)result )
      {
        v20 = v10;
        v29 = &v20;
        v25 = *(_QWORD *)(v3 + 48);
        v31 = &v25;
        v26 = v24;
        v33 = &v26;
        v30 = 4LL;
        v32 = 8LL;
        v34 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v35, v17);
        v21 = v18;
        v36 = &v21;
        v22 = *v15;
        v37 = 4LL;
        v38 = &v22;
        v39 = 4LL;
        v40 = &v23;
        v42 = &v24;
        v44 = &v27;
        v23 = v19;
        v41 = 4LL;
        LODWORD(v24) = v2;
        v43 = 4LL;
        v27 = 0x1000000LL;
        v45 = 8LL;
        return tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C03928,
                 (unsigned __int8 *)byte_140030173,
                 0LL,
                 0LL,
                 0xBu,
                 &v28);
      }
    }
  }
  return result;
}
