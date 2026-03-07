__int64 __fastcall PopPlPublishInitialPowerDraw(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned int i; // esi
  unsigned __int16 *v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  int v15; // [rsp+20h] [rbp-99h]
  int v16; // [rsp+28h] [rbp-91h]
  __int16 v17; // [rsp+40h] [rbp-79h] BYREF
  int v18; // [rsp+44h] [rbp-75h] BYREF
  int v19; // [rsp+48h] [rbp-71h] BYREF
  int v20; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v21; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+60h] [rbp-59h] BYREF
  __int16 *v23; // [rsp+80h] [rbp-39h]
  int v24; // [rsp+88h] [rbp-31h]
  int v25; // [rsp+8Ch] [rbp-2Dh]
  _DWORD *v26; // [rsp+90h] [rbp-29h]
  int v27; // [rsp+98h] [rbp-21h]
  int v28; // [rsp+9Ch] [rbp-1Dh]
  __int64 v29; // [rsp+A0h] [rbp-19h]
  _DWORD v30[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v31; // [rsp+B0h] [rbp-9h]
  int v32; // [rsp+B8h] [rbp-1h]
  int v33; // [rsp+BCh] [rbp+3h]
  int *v34; // [rsp+C0h] [rbp+7h]
  int v35; // [rsp+C8h] [rbp+Fh]
  int v36; // [rsp+CCh] [rbp+13h]
  int *v37; // [rsp+D0h] [rbp+17h]
  int v38; // [rsp+D8h] [rbp+1Fh]
  int v39; // [rsp+DCh] [rbp+23h]
  int *v40; // [rsp+E0h] [rbp+27h]
  int v41; // [rsp+E8h] [rbp+2Fh]
  int v42; // [rsp+ECh] [rbp+33h]

  v2 = *((_QWORD *)a2 + 1);
  v3 = 0LL;
  for ( i = *a2; v3 < *(_QWORD *)(v2 + 48); ++v3 )
  {
    v5 = *(unsigned __int16 **)(*(_QWORD *)(v2 + 56) + 8 * v3);
    if ( !*((_QWORD *)v5 + 3) )
    {
      v6 = *((unsigned int *)v5 + 10);
      i += v6;
      *((_DWORD *)v5 + 8) = v6;
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        v7 = *v5;
        v25 = 0;
        v28 = 0;
        v30[1] = 0;
        v18 = 0;
        v33 = 0;
        v36 = 0;
        v20 = 0;
        v39 = 0;
        v23 = &v17;
        v29 = *((_QWORD *)v5 + 1);
        v31 = &v18;
        v34 = &v19;
        v37 = &v20;
        v8 = *((_QWORD *)v5 + 2);
        v26 = v30;
        v30[0] = v7;
        v17 = 1;
        v24 = 2;
        v27 = 2;
        v32 = 4;
        v19 = v6;
        v35 = 4;
        v38 = 4;
        v9 = *(_DWORD *)(v8 + 28);
        v42 = 0;
        v40 = &v21;
        v21 = v9;
        v41 = 4;
        tlgWriteEx_EtwWriteEx((__int64)&dword_140C03928, (unsigned __int8 *)&byte_140032031, v6, 1u, v15, v16, 9u, &v22);
      }
    }
  }
  PopPlPublishSystemPowerChange(v2, i);
  v10 = *(unsigned __int8 *)(v2 + 24);
  result = KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  return result;
}
