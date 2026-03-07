__int64 __fastcall MiWaitForExtentDeletions(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rdi
  __int64 *v3; // rax
  ULONG_PTR v4; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  __int64 result; // rax
  ULONG_PTR v11; // [rsp+20h] [rbp-20h] BYREF
  __int16 v12; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+2Ah] [rbp-16h]
  char v14; // [rsp+2Bh] [rbp-15h]
  int v15; // [rsp+2Ch] [rbp-14h]
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF

  v2 = a2;
  v14 = 0;
  v3 = (__int64 *)KeAbPreAcquire((__int64)&qword_140C65388, 0LL);
  v4 = (ULONG_PTR)v3;
  if ( v3 )
    KeAbPreWait(v3);
  v15 = 0;
  v16[1] = v16;
  v12 = 263;
  v16[0] = v16;
  v11 = qword_140C65388;
  qword_140C65388 = (ULONG_PTR)&v11;
  v13 = 6;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6CB20);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  result = KeWaitForGate((__int64)&v12, 18LL, 0);
  if ( v4 )
  {
    KeAbPreAcquire((__int64)&qword_140C65388, v4);
    return KeAbPostReleaseEx((ULONG_PTR)&qword_140C65388, v4);
  }
  return result;
}
