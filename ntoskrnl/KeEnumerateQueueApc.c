/*
 * XREFs of KeEnumerateQueueApc @ 0x140570A50
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x140539BD4 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeEnumerateQueueApc(
        __int64 a1,
        void (__fastcall *a2)(_QWORD *, __int64, __int64),
        __int64 a3,
        char *a4)
{
  char v6; // bl
  char v7; // r12
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  void (__fastcall *v11)(_QWORD *, __int64, __int64); // rbp
  _QWORD **v12; // r15
  _QWORD *i; // r14
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  __int64 result; // rax
  int v20; // [rsp+60h] [rbp+8h] BYREF
  void (__fastcall *v21)(_QWORD *, __int64, __int64); // [rsp+68h] [rbp+10h]

  v21 = a2;
  if ( a4 )
  {
    v6 = *a4;
    v7 = *a4;
  }
  else
  {
    v6 = 0;
    v7 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v10 = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v11 = v21;
  do
  {
    v12 = (_QWORD **)(16LL * v6 + a1 + 152);
    for ( i = *v12; i != v12; i = (_QWORD *)*i )
      v11(i - 2, 88LL, a3);
    ++v6;
  }
  while ( v6 <= v7 );
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
