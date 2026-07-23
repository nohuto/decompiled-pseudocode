/*
 * XREFs of sub_1405BF400 @ 0x1405BF400
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PsQueryThreadTerminationPort @ 0x1405CC384 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x14063FDC4 (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_1405BF400(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r12
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r8
  _BYTE *v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // r10
  _QWORD *v18; // r8
  char *v19; // rcx
  char v20; // al
  __int64 v21; // r14
  unsigned int v22; // ebx
  unsigned int v23; // r11d
  unsigned int v24; // r9d
  char v25; // di
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v31; // r8
  int v32; // eax
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // [rsp+30h] [rbp-48h]
  __int64 *ThreadTerminationPort; // [rsp+38h] [rbp-40h]
  __int64 v39; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v40[4]; // [rsp+48h] [rbp-30h] BYREF
  __int16 Object; // [rsp+58h] [rbp-20h] BYREF
  char v42; // [rsp+5Ah] [rbp-1Eh]
  int v43; // [rsp+5Ch] [rbp-1Ch]
  _QWORD v44[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v45; // [rsp+D0h] [rbp+58h]
  LARGE_INTEGER Interval; // [rsp+D8h] [rbp+60h] BYREF

  KeExitRetpoline(a1, a2, a3);
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  v4 = (unsigned int)ExGenRandom(1);
  v34 = *(_QWORD *)(a1 + 8) == 1LL;
  Interval.QuadPart = -1200000000LL - v4 % 0x5F5E100;
  if ( v34 )
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
    v44[1] = v44;
    p_Object = (struct _KEVENT *)&Object;
    v42 = 6;
    v44[0] = v44;
    v43 = 0;
  }
  v7 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = ExGenRandom(1);
  v10 = v9 ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v11 = v7 ^ v10;
  v12 = v8 ^ v10;
  v37 = ((unsigned __int8)v9 ^ 0xDB) & 1;
  while ( 1 )
  {
    if ( (v12 ^ v10) >> 47 == -1 || (v12 ^ v10) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v11 ^ v10) + 0x18))(
        v11 ^ v10,
        v12 ^ v10,
        *(_QWORD *)((v11 ^ v10) + 0x28),
        *(_QWORD *)((v11 ^ v10) + 0x30));
      v12 = v10 ^ *(_QWORD *)((v11 ^ v10) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v40[0] = 34539786;
    v40[1] = 218497804;
    v40[2] = 235143175;
    v15 = v40;
    v40[3] = 134284555;
    v16 = 16LL;
    v17 = v12 ^ v10 ^ *(_QWORD *)((v11 ^ v10) + 0x40) | 0xFFFF800000000000uLL;
    v18 = (_QWORD *)v17;
    v19 = (char *)v40;
    v45 = __ROR8__(v17, (v12 ^ v10 ^ *(_BYTE *)((v11 ^ v10) + 0x40)) & 0x3F);
    do
    {
      v20 = *v19++;
      *v15++ = v20 ^ 0xA;
      --v16;
    }
    while ( v16 );
    v21 = v45;
    v22 = 16;
    v23 = 25;
    v24 = 0;
    do
    {
      v25 = ~(unsigned __int8)*v18 & 0x3F;
      *v18 = v17 + (KiWaitAlways ^ _byteswap_uint64(v21 ^ __ROL8__(KiWaitNever ^ *v18, KiWaitNever))) + v24;
      v21 = (v17 + __ROL8__(__ROR8__(v24 ^ (unsigned __int64)(200 - v24), v25) ^ v21, v25)) ^ 0x3D406922;
      v26 = v22;
      do
      {
        v27 = __ROL8__(*v18, 4);
        *v18 = *((unsigned __int8 *)v40 + (v27 & 0xF)) | v27 & 0xFFFFFFFFFFFFFFF0uLL;
        --v26;
      }
      while ( v26 );
      ++v18;
      if ( ++v24 == 25 )
      {
        if ( *(_QWORD *)v17 != 0x85131481131482ELL )
        {
          *(v18 - 1) ^= *(_QWORD *)v17 ^ 0x85131481131482ELL;
          v23 += *((_DWORD *)v18 - 1);
          *(v18 - 1) ^= *(_QWORD *)v17 ^ 0x85131481131482ELL;
        }
        v22 = 1;
      }
    }
    while ( v24 < v23 );
    v28 = *(_QWORD *)v17 ^ 0x85131481131482ELL;
    *(_BYTE *)(v17 + 3) = 17;
    *(_BYTE *)(v17 + 2) = 49;
    *(_BYTE *)(v17 + 1) = 72;
    *(_BYTE *)v17 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v17)(v17, v28, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v34 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v33 = *ThreadTerminationPort;
    v34 = *ThreadTerminationPort == 0;
    if ( *ThreadTerminationPort > 0 )
    {
      v35 = -v33;
      *ThreadTerminationPort = 0LL;
      v39 = v35;
      (*(void (__fastcall **)(_QWORD))(v35 + 16))(*(_QWORD *)(v35 + 24));
      memset((void *)v35, 0, 0x20uLL);
      memset(&v39, 0, sizeof(v39));
      v33 = *ThreadTerminationPort;
      v34 = *ThreadTerminationPort == 0;
    }
    if ( v34 )
    {
      do
      {
        if ( v37 )
          KeDelayExecutionThread(0, 0, &Interval);
        else
          KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
        v33 = *ThreadTerminationPort;
      }
      while ( !*ThreadTerminationPort );
    }
    v36 = *(_QWORD *)(v33 + 32);
    v11 = v10 ^ v33;
    *ThreadTerminationPort = 0LL;
    v12 = v10 ^ v36;
    if ( v37 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
