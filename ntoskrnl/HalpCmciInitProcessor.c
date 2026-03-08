/*
 * XREFs of HalpCmciInitProcessor @ 0x14037CD68
 * Callers:
 *     HalpCmciInit @ 0x140A8795C (HalpCmciInit.c)
 *     HalpInitializeCmc @ 0x140A87F7C (HalpInitializeCmc.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A9218C (HalpMcaResumeProcessorConfig.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     HalpCmciSetProcessorConfig @ 0x14037CC58 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciPollProcessor @ 0x14037CE58 (HalpCmciPollProcessor.c)
 *     HalpGetMcaPcrContext @ 0x14037CEF4 (HalpGetMcaPcrContext.c)
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIsCmciImplementedAMD @ 0x140A9275C (HalpIsCmciImplementedAMD.c)
 */

unsigned __int8 __fastcall HalpCmciInitProcessor(__int64 a1, __int64 a2)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 McaPcrContext; // rax
  __int64 v7; // rdi
  unsigned __int8 result; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  v4 = 1;
  if ( (unsigned __int8)HalpGetCpuVendor() == 1 && !(unsigned __int8)HalpIsCmciImplementedAMD() )
  {
    HalpMcaPollForCmc = 1;
    v4 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v10) = 0x8000;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v10;
  }
  if ( HalpCmciRevertToPolledMode )
    goto LABEL_23;
  if ( *(_BYTE *)(a1 + 48) != 5 )
  {
    HalpMcaPollForCmc = 1;
LABEL_23:
    v4 = 0;
  }
  HalpCmciSetProcessorConfig(a1, v4, a2);
  McaPcrContext = HalpGetMcaPcrContext(a2);
  v7 = McaPcrContext;
  if ( McaPcrContext && v4 )
  {
    *(_DWORD *)(McaPcrContext + 120) = 0;
    *(_BYTE *)(McaPcrContext + 128) = 0;
  }
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    result = HalpMcaWheaReady;
    if ( HalpMcaWheaReady )
    {
      result = KeGetCurrentIrql();
      if ( result > 2u )
      {
        if ( v7 && *(_QWORD *)(v7 + 16) )
        {
          if ( *(_QWORD *)(v7 + 24) )
            return KiInsertQueueDpc(v7 + 48, 0LL, 0LL, 0LL, 0);
        }
      }
      else
      {
        return HalpCmciPollProcessor(a2);
      }
    }
  }
  return result;
}
