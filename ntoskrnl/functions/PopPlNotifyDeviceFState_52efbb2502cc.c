__int64 __fastcall PopPlNotifyDeviceFState(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 result; // rax
  bool v8; // cf
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // r15d
  const char *v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
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
  __int64 v33[8]; // [rsp+70h] [rbp-90h] BYREF
  char v34[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  __int64 *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  _DWORD *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  __int64 v47; // [rsp+120h] [rbp+20h]
  _DWORD v48[2]; // [rsp+128h] [rbp+28h] BYREF

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
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        v25 = 1;
        v33[4] = (__int64)&v25;
        v14 = "Beginning";
        v33[6] = v32;
        v33[5] = 2LL;
        if ( a5 )
          v14 = "Completed";
        v33[7] = 16LL;
        tlgCreate1Sz_char(v34, v14);
        v28 = a4;
        v35 = (int *)&v28;
        v36 = 4LL;
        v37 = (int *)&v29;
        v30 = *(_DWORD *)(v9 + 32);
        v39 = &v30;
        v41 = (int *)&v31;
        v15 = *(_QWORD *)(v9 + 16);
        v29 = v13;
        v38 = 4LL;
        v40 = 4LL;
        v31 = v13;
        v42 = 4LL;
        v16 = *(_DWORD *)(v15 + 28);
        v43 = &v32;
        v17 = *(_QWORD *)(a1 + 224);
        LODWORD(v32) = v13 + v16;
        v18 = *(unsigned __int16 *)(a1 + 216);
        v47 = v17;
        v45 = v48;
        v48[0] = v18;
        v44 = 4LL;
        v46 = 2LL;
        v48[1] = v19;
        tlgWriteEx_EtwWriteEx((int)&dword_140C03928, (int)&byte_1400321F1, v19, v20, v19, v19, 0xCu, (__int64)v33);
      }
      PopPlPublishSystemPowerChange(v10, v13);
      v21 = *(unsigned __int8 *)(v10 + 24);
      result = KxReleaseSpinLock((volatile signed __int64 *)(v10 + 16));
      if ( KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && (unsigned __int8)v21 <= 0xFu
          && (unsigned __int8)result >= 2u )
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
      __writecr8(v21);
    }
  }
  return result;
}
