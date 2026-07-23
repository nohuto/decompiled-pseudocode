/*
 * XREFs of PopPlNotifyDeviceFState @ 0x1403A4BC8
 * Callers:
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1403A4A00 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepNotifyIdleState @ 0x1403A4B30 (PopPepNotifyIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x1405743D4 (PopPepCompleteComponentIdleState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPlCalculateDevicePowerDraw @ 0x14057E5A4 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x14057E9B8 (PopPlPublishSystemPowerChange.c)
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
  int v25; // [rsp+20h] [rbp-E0h]
  int v26; // [rsp+28h] [rbp-D8h]
  __int16 v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  char v40[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  int *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  int *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  _DWORD *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  __int64 v53; // [rsp+120h] [rbp+20h]
  _DWORD v54[2]; // [rsp+128h] [rbp+28h] BYREF

  v28 = a2;
  v29 = a4;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * a2);
  v34 = result;
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
      v12 = PopPlCalculateDevicePowerDraw(a1, 0LL, &v29, &v28);
      *(_DWORD *)(v9 + 32) = v12;
      v13 = v12 - v11;
      if ( (unsigned int)dword_140C02228 > 5 )
      {
        v27 = 1;
        v36 = &v27;
        v14 = "Beginning";
        v38 = v34;
        v37 = 2LL;
        if ( a5 )
          v14 = "Completed";
        v39 = 16LL;
        tlgCreate1Sz_char((__int64)v40, v14);
        v30 = a4;
        v41 = (int *)&v30;
        v42 = 4LL;
        v43 = (int *)&v31;
        v32 = *(_DWORD *)(v9 + 32);
        v45 = &v32;
        v47 = (int *)&v33;
        v15 = *(_QWORD *)(v9 + 16);
        v31 = v13;
        v44 = 4LL;
        v46 = 4LL;
        v33 = v13;
        v48 = 4LL;
        v16 = *(_DWORD *)(v15 + 28);
        v49 = &v34;
        v17 = *(_QWORD *)(a1 + 224);
        LODWORD(v34) = v13 + v16;
        v18 = *(unsigned __int16 *)(a1 + 216);
        v53 = v17;
        v51 = v54;
        v54[0] = v18;
        v50 = 4LL;
        v52 = 2LL;
        v54[1] = v19;
        tlgWriteEx_EtwWriteEx(
          (__int64)&dword_140C02228,
          (unsigned __int8 *)&byte_14002A488,
          v19,
          v20,
          v25,
          v26,
          0xCu,
          &v35);
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
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v21);
    }
  }
  return result;
}
