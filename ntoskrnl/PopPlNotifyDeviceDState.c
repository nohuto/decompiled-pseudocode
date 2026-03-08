/*
 * XREFs of PopPlNotifyDeviceDState @ 0x1402B9D3C
 * Callers:
 *     PopPepDeviceDState @ 0x1402B9C4C (PopPepDeviceDState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPlCalculateDevicePowerDraw @ 0x14059ED14 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x14059F158 (PopPlPublishSystemPowerChange.c)
 */

void __fastcall PopPlNotifyDeviceDState(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // r15
  bool v8; // cc
  __int64 v9; // r13
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // r12d
  int v13; // ecx
  __int64 v14; // rax
  const char *v15; // rdx
  int v16; // r9d
  int v17; // r11d
  const char *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r10
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  unsigned __int64 v24; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  int v30; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+28h] [rbp-D8h]
  __int16 v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v38[9]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v39[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v40[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v41[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 1184);
  v33 = a3;
  if ( v4 )
  {
    v8 = a3 < a2;
    if ( a3 > a2 )
    {
      if ( !a4 )
        return;
      v8 = a3 < a2;
    }
    if ( !v8 || !a4 )
    {
      v9 = *(_QWORD *)(v4 + 16);
      *(_BYTE *)(v9 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 16));
      v10 = *(_DWORD *)(v4 + 32);
      v11 = PopPlCalculateDevicePowerDraw(a1, &v33, 0LL, 0LL);
      *(_DWORD *)(v4 + 32) = v11;
      v12 = v11 - v10;
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        v13 = *(unsigned __int16 *)(a1 + 216);
        v38[4] = (__int64)&v32;
        v14 = *(_QWORD *)(a1 + 224);
        v38[6] = (__int64)v39;
        v38[8] = v14;
        v15 = "Beginning";
        v39[0] = v13;
        if ( a4 )
          v15 = "Completed";
        v32 = 1;
        v38[5] = 2LL;
        v38[7] = 2LL;
        v39[1] = 0;
        tlgCreate1Sz_char(v40, v15);
        if ( a3 )
        {
          if ( a3 == v16 )
          {
            v18 = "PowerDeviceD0";
          }
          else if ( a3 == v17 )
          {
            v18 = "PowerDeviceD1";
          }
          else if ( a3 == 3 )
          {
            v18 = "PowerDeviceD2";
          }
          else if ( a3 == v16 + 3 )
          {
            v18 = "PowerDeviceD3";
          }
          else
          {
            v18 = "PowerDeviceMaximum";
            if ( a3 != 5 )
              v18 = "<unknown>";
          }
        }
        else
        {
          v18 = "PowerDeviceUnspecified";
        }
        tlgCreate1Sz_char(v41, v18);
        v34 = v12;
        v42 = (int *)&v34;
        v35 = *(_DWORD *)(v4 + 32);
        v44 = &v35;
        v46 = (int *)&v36;
        v19 = *(_QWORD *)(v4 + 16);
        v43 = v20;
        v45 = v20;
        v36 = v12;
        v47 = v20;
        v21 = *(_DWORD *)(v19 + 28);
        v48 = &v37;
        v37 = v12 + v21;
        v49 = v20;
        tlgWriteEx_EtwWriteEx((int)&dword_140C03928, (int)&byte_140031E99, v22, v23, v30, v31, 0xBu, (__int64)v38);
      }
      PopPlPublishSystemPowerChange(v9, v12);
      v24 = *(unsigned __int8 *)(v9 + 24);
      KxReleaseSpinLock((volatile signed __int64 *)(v9 + 16));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v29 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v24);
    }
  }
}
