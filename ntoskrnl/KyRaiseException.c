/*
 * XREFs of KyRaiseException @ 0x140576670
 * Callers:
 *     KiRaiseException @ 0x140576490 (KiRaiseException.c)
 * Callees:
 *     KeVerifyContextXStateCetU @ 0x1403649C8 (KeVerifyContextXStateCetU.c)
 *     RtlInitializeExtendedContext @ 0x140364A10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140364A90 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x140364D9C (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x1403653D4 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x140416130 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpReadExtendedContext @ 0x1407EDC30 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KyRaiseException(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char PreviousMode; // r15
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v18; // r12d
  unsigned __int8 CurrentIrql; // si
  int v20; // r8d
  unsigned __int64 ExtendedFeatureDisableMask; // rcx
  unsigned int v22; // r14d
  __int64 v23; // r10
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v27; // zf
  __int64 v28; // [rsp+20h] [rbp-10h]
  unsigned int v29; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v30; // [rsp+34h] [rbp+4h] BYREF
  __int64 v31; // [rsp+38h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp+10h] BYREF
  __int64 v33; // [rsp+48h] [rbp+18h]
  __int64 v34; // [rsp+50h] [rbp+20h]
  __int128 v35; // [rsp+58h] [rbp+28h] BYREF
  __int64 v36; // [rsp+68h] [rbp+38h]

  v33 = a4;
  v34 = a3;
  v4 = a2;
  v31 = 0LL;
  v29 = 0;
  v30 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    goto LABEL_11;
  v7 = a2 + 48;
  if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  v29 = *(_DWORD *)v7;
  result = RtlpSanitizeContextFlags(&v29, PreviousMode);
  if ( (int)result >= 0 )
  {
    v9 = v29;
    result = RtlGetExtendedContextLength(v29, (__int64)&v30);
    if ( (int)result >= 0 )
    {
      v10 = v30 + 15LL;
      if ( v10 <= v30 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = alloca(v11);
      v13 = alloca(v11);
      result = RtlInitializeExtendedContext((__int64)&v29, v9, (__int64)&v31);
      if ( (int)result >= 0 )
      {
        v16 = v31 - 1232;
        LOBYTE(v14) = 1;
        result = RtlpReadExtendedContext(v15, v14, v31, v9, v4, 0LL);
        if ( (int)result >= 0 )
        {
          v4 = v16;
LABEL_11:
          CurrentThread = KeGetCurrentThread();
          v18 = 1;
          CurrentIrql = KeGetCurrentIrql();
          if ( !CurrentIrql )
          {
            KeGetCurrentIrql();
            __writecr8(1uLL);
          }
          if ( PreviousMode )
          {
            if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
            {
              v32 = 0LL;
              if ( (int)KeVerifyContextXStateCetU((__int64)CurrentThread, v4, &v32) < 0
                || (v35 = 0LL,
                    v36 = 0LL,
                    (int)KeVerifyContextRecord((__int64)CurrentThread, v4, v20, (int)&v35, (__int64)&v32) < 0) )
              {
                *(_DWORD *)(a1 + 4) |= 1u;
                v18 = 0;
              }
            }
          }
          ExtendedFeatureDisableMask = CurrentThread->ExtendedFeatureDisableMask;
          if ( ExtendedFeatureDisableMask
            && (*(_DWORD *)(v4 + 48) & 0x100040) == 0x100040
            && (ExtendedFeatureDisableMask & *(_QWORD *)(*(int *)(v4 + 1248) + v4 + 1232)) != 0 )
          {
            v22 = -1073741811;
          }
          else
          {
            v23 = v33;
            *(_BYTE *)(v33 + 43) = 1;
            v22 = 0;
            if ( v18 )
            {
              LOBYTE(v28) = PreviousMode;
              KeContextToKframes(v23, v34, v4, *(_DWORD *)(v4 + 48), v28);
            }
          }
          if ( !CurrentIrql )
          {
            if ( KiIrqlFlags )
            {
              v24 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v24 - 2) <= 0xDu )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v27 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
                SchedulerAssist[5] &= 0xFFFF0001;
                if ( v27 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(0LL);
          }
          return v22;
        }
      }
    }
  }
  return result;
}
