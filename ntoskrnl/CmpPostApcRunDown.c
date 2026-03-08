/*
 * XREFs of CmpPostApcRunDown @ 0x140A0CAC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpFreeSubordinatePost @ 0x1406B4E5C (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1406B5600 (CmpFreePostBlock.c)
 */

__int64 __fastcall CmpPostApcRunDown(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  _KPROCESS *Process; // rcx
  __int16 v5; // ax
  char v6; // al
  _QWORD *v7; // rdx
  struct _KEVENT *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = (_QWORD *)v2[8];
  if ( (_QWORD *)v3[13] == v3 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v3);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30]
    && ((v5 = WORD2(Process[2].Affinity.StaticBitmap[20]), v5 == 332) || v5 == 452 ? (v6 = 1) : (v6 = 0), v6) )
  {
    **(_DWORD **)(v2[8] + 104LL) = 267;
    *(_DWORD *)(*(_QWORD *)(v2[8] + 104LL) + 4LL) = 0;
  }
  else
  {
    **(_DWORD **)(v2[8] + 104LL) = 267;
    *(_QWORD *)(*(_QWORD *)(v2[8] + 104LL) + 8LL) = 0LL;
  }
  v7 = (_QWORD *)v2[8];
  if ( (_QWORD *)v7[13] == v7 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v7);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v8 = *(struct _KEVENT **)(v2[8] + 8LL);
  if ( v8 )
  {
    KeSetEvent(v8, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v2[8] + 8LL));
  }
  v9 = v2[2];
  v10 = (_QWORD *)v2[3];
  if ( *(_QWORD **)(v9 + 8) != v2 + 2 || (_QWORD *)*v10 != v2 + 2 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  CmpFreeSubordinatePost((__int64)v2);
  CmpFreePostBlock(v2);
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
