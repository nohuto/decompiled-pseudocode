/*
 * XREFs of MiUpdatePatchInProgress @ 0x140640B6C
 * Callers:
 *     MiLinkHotPatchToBase @ 0x1406402B8 (MiLinkHotPatchToBase.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdatePatchInProgress(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rax
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  if ( (a3 & 2) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v5) = 4;
      if ( CurrentIrql != 2 )
        v5 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v5;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    qword_140C694F0 = 0LL;
    qword_140C694E8 = 0LL;
  }
  else
  {
    qword_140C694F0 = a1;
    qword_140C694E8 = a2;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
}
