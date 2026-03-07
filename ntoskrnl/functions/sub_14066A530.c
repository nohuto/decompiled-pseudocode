void __fastcall __noreturn sub_14066A530(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rdx
  unsigned int v15; // r11d
  unsigned __int64 v16; // r10
  __int64 v17; // r14
  unsigned int v18; // r13d
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  __int64 *v21; // r15
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-38h]
  _QWORD v32[2]; // [rsp+38h] [rbp-30h] BYREF
  __int16 Object; // [rsp+48h] [rbp-20h] BYREF
  char v34; // [rsp+4Ah] [rbp-1Eh]
  int v35; // [rsp+4Ch] [rbp-1Ch]
  _QWORD v36[3]; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER Interval; // [rsp+C0h] [rbp+58h] BYREF
  __int64 ThreadTerminationPort; // [rsp+C8h] [rbp+60h]

  KeExitRetpoline(a1, a2);
  ThreadTerminationPort = PsQueryThreadTerminationPort();
  v3 = (_QWORD *)ThreadTerminationPort;
  Interval.QuadPart = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)ExGenRandom(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v36[1] = v36;
    p_Object = (struct _KEVENT *)&Object;
    v34 = 6;
    v36[0] = v36;
    v35 = 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = *(_QWORD *)(v6 + 32);
  v8 = ExGenRandom(1);
  v9 = v8 ^ 0x6A15A217BC2A27DBLL;
  *v3 = 0LL;
  v10 = v6 ^ v9;
  v31 = ((unsigned __int8)v8 ^ 0xDB) & 1;
  v11 = v7 ^ v9;
  while ( 1 )
  {
    if ( (v11 ^ v9) >> 47 == -1 || (v11 ^ v9) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v10 ^ v9) + 0x18))(
        v10 ^ v9,
        v11 ^ v9,
        *(_QWORD *)((v10 ^ v9) + 0x28),
        *(_QWORD *)((v10 ^ v9) + 0x30));
      v11 = *(_QWORD *)((v10 ^ v9) + 0x20) ^ v9;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v14) = 4;
      else
        v14 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v14;
    }
    v15 = 25;
    v16 = v11 ^ *(_QWORD *)((v10 ^ v9) + 0x40) ^ v9 | 0xFFFF800000000000uLL;
    v17 = __ROR8__(v16, (v11 ^ *(_BYTE *)((v10 ^ v9) + 0x40) ^ v9) & 0x3F);
    v18 = 0;
    v19 = v16 - 8;
    do
    {
      v20 = *(_QWORD *)(v19 + 8);
      v19 += 8LL;
      *(_QWORD *)v19 = v16 + (KiWaitAlways ^ _byteswap_uint64(v17 ^ __ROL8__(KiWaitNever ^ v20, KiWaitNever))) + v18;
      v17 = (v16 + __ROL8__(
                     __ROR8__(v18 ^ (unsigned __int64)(200 - v18), ~(_BYTE)v20 & 0x3F) ^ v17,
                     (v20 ^ 0xE9) & 0x3F)) ^ 0xB0C06A48;
      if ( ++v18 == 25 && *(_QWORD *)v16 != 0x85131481131482ELL )
      {
        *(_QWORD *)v19 ^= *(_QWORD *)v16 ^ 0x85131481131482ELL;
        v15 += *(_DWORD *)(v19 + 4);
        *(_QWORD *)v19 ^= *(_QWORD *)v16 ^ 0x85131481131482ELL;
      }
    }
    while ( v18 < v15 );
    v21 = (__int64 *)ThreadTerminationPort;
    v22 = *(_QWORD *)v16 ^ 0x85131481131482ELL;
    *(_BYTE *)(v16 + 3) = 17;
    *(_BYTE *)(v16 + 2) = 49;
    *(_BYTE *)(v16 + 1) = 72;
    *(_BYTE *)v16 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v16)(v16, v22, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v27 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    v28 = *v21;
    if ( *v21 > 0 )
    {
      *v21 = 0LL;
      v29 = -v28;
      v32[0] = v29;
      (*(void (__fastcall **)(_QWORD))(v29 + 16))(*(_QWORD *)(v29 + 24));
      memset((void *)v29, 0, 0x20uLL);
      memset(v32, 0, 8uLL);
    }
    while ( 1 )
    {
      v30 = *v21;
      if ( *v21 )
        break;
      if ( v31 )
        KeDelayExecutionThread(0, 0, &Interval);
      else
        KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
    }
    v11 = *(_QWORD *)(v30 + 32) ^ v9;
    v10 = v9 ^ v30;
    *v21 = 0LL;
    if ( v31 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
