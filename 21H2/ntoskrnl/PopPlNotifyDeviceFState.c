/*
 * XREFs of PopPlNotifyDeviceFState @ 0x14045EA32
 * Callers:
 *     PopPepNotifyIdleState @ 0x14045E5E0 (PopPepNotifyIdleState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x14045E6A0 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepCompleteComponentIdleState @ 0x1405D4C64 (PopPepCompleteComponentIdleState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14024A9B0 (_tlgWriteEx_EtwWriteEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     _tlgCreate1Sz_char @ 0x1403699D0 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopPlCalculateDevicePowerDraw @ 0x1405DE2E4 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405DE728 (PopPlPublishSystemPowerChange.c)
 */

__int64 __fastcall PopPlNotifyDeviceFState(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 result; // rax
  bool v8; // cf
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // r14d
  const CHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r8
  ULONG v20; // r9d
  unsigned __int64 v21; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v24; // zf
  __int16 v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-A4h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  char v38[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  int *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  int *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  __int64 *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  _DWORD *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 v51; // [rsp+120h] [rbp+20h]
  _DWORD v52[2]; // [rsp+128h] [rbp+28h] BYREF

  v26 = a2;
  v27 = a4;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * a2);
  v32 = result;
  if ( *(_QWORD *)(result + 432) )
  {
    v8 = a4 < a3;
    if ( a4 > a3 )
    {
      if ( !a5 )
        return result;
      v8 = a4 < a3;
    }
    if ( !v8 || !a5 )
    {
      v9 = *(_QWORD *)(a1 + 1184);
      v10 = *(_QWORD *)(v9 + 16);
      *(_BYTE *)(v10 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 16));
      v11 = *(_DWORD *)(v9 + 32);
      v12 = PopPlCalculateDevicePowerDraw(a1, 0LL, &v27, &v26);
      *(_DWORD *)(v9 + 32) = v12;
      v13 = v12 - v11;
      if ( (unsigned int)dword_140C03A00 > 5 )
      {
        v25 = 1;
        v34 = &v25;
        v14 = "Beginning";
        v36 = v32;
        v35 = 2LL;
        if ( a5 )
          v14 = "Completed";
        v37 = 16LL;
        tlgCreate1Sz_char((__int64)v38, v14);
        v28 = a4;
        v39 = (int *)&v28;
        v40 = 4LL;
        v41 = (int *)&v29;
        v30 = *(_DWORD *)(v9 + 32);
        v43 = &v30;
        v45 = (int *)&v31;
        v15 = *(_QWORD *)(v9 + 16);
        v29 = v13;
        v42 = 4LL;
        v44 = 4LL;
        v31 = v13;
        v46 = 4LL;
        v16 = *(_DWORD *)(v15 + 28);
        v47 = &v32;
        v17 = *(_QWORD *)(a1 + 224);
        LODWORD(v32) = v13 + v16;
        v18 = *(unsigned __int16 *)(a1 + 216);
        v51 = v17;
        v49 = v52;
        v52[0] = v18;
        v48 = 4LL;
        v50 = 2LL;
        v52[1] = v19;
        tlgWriteEx_EtwWriteEx(
          (__int64)&dword_140C03A00,
          (unsigned __int8 *)&byte_140032209,
          v19,
          v20,
          v19,
          v19,
          0xCu,
          &v33);
      }
      PopPlPublishSystemPowerChange(v10, v13);
      v21 = *(unsigned __int8 *)(v10 + 24);
      KxReleaseSpinLock((PKSPIN_LOCK)(v10 + 16));
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v21 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v24 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v24 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v21);
    }
  }
  return result;
}
