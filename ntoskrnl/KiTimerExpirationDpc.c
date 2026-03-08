/*
 * XREFs of KiTimerExpirationDpc @ 0x14057A560
 * Callers:
 *     <none>
 * Callees:
 *     KiTimer2Expiration @ 0x140250C10 (KiTimer2Expiration.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTimerExpiration @ 0x14057A354 (KiTimerExpiration.c)
 */

void __fastcall KiTimerExpirationDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KPRCB *v10; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // [rsp+30h] [rbp-138h] BYREF
  int v15; // [rsp+38h] [rbp-130h]
  int v16; // [rsp+3Ch] [rbp-12Ch]
  _QWORD v17[34]; // [rsp+40h] [rbp-128h] BYREF

  v4 = (int)SystemArgument1;
  memset(v17, 0, sizeof(v17));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    EtwTraceKernelEvent((__int64)&v14, 1u, 0x40020000u, 0xF56u, 0x400A02u);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17[1] = MEMORY[0xFFFFF78000000014];
  _disable();
  v6 = MEMORY[0xFFFFF78000000008];
  if ( KiSerializeTimerExpiration )
  {
    if ( CurrentPrcb->ClockOwner )
    {
      v7 = 32272LL;
      v8 = MEMORY[0xFFFFF78000000008] >> 18;
      v9 = 2LL;
      do
      {
        *(_DWORD *)(v7 + KiProcessorBlock[0]) = v8;
        v7 += 4LL;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    CurrentPrcb->TimerTable.TableState.LastTimerHand[0] = MEMORY[0xFFFFF78000000008] >> 18;
    CurrentPrcb->TimerTable.TableState.LastTimerHand[1] = v6 >> 18;
  }
  v10 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v12 = *SchedulerAssist;
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  _enable();
  KiTimerExpiration((__int64)CurrentPrcb, v4, v6, 1, (int *)v17);
  CurrentPrcb->DpcData[0].ActiveDpc = 0LL;
  if ( CurrentPrcb->ClockOwner )
    KiTimer2Expiration((__int64)CurrentPrcb, v6, 1, 1, v17);
}
