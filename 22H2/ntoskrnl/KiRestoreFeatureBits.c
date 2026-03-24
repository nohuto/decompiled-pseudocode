/*
 * XREFs of KiRestoreFeatureBits @ 0x140383E20
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140383DBC (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5310 (HviIsAnyHypervisorPresent.c)
 *     KeInitializeCatRegisters @ 0x1403A7418 (KeInitializeCatRegisters.c)
 *     KiSetVirtualMitigationControl @ 0x1403F2C40 (KiSetVirtualMitigationControl.c)
 *     KiCheckMicrocode @ 0x14099B0F0 (KiCheckMicrocode.c)
 */

unsigned __int64 KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 MsrIa32TsxCtrl; // rax
  unsigned __int64 v4; // rdx
  char CpuType; // al
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  if ( CurrentPrcb->BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, CurrentPrcb->BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl(CurrentPrcb);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    MsrIa32TsxCtrl = CurrentPrcb->MsrIa32TsxCtrl;
    v1 = HIDWORD(MsrIa32TsxCtrl);
    v2 = 290LL;
    __writemsr(0x122u, MsrIa32TsxCtrl);
  }
  KeInitializeCatRegisters(v2, v1);
  v4 = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    CpuType = CurrentPrcb->CpuType;
    if ( CpuType > 15 && CpuType != 17 && !(unsigned __int8)HviIsAnyHypervisorPresent(373LL, 0LL) )
    {
      v6 = __readmsr(0xC0011029) | 2;
      v4 = HIDWORD(v6);
      __writemsr(0xC0011029, v6);
    }
  }
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v7 = __readcr3();
    __writecr3(v7 | 2);
  }
  result = KiCheckMicrocode(CurrentPrcb, v4);
  if ( KiUserCetAllowed )
  {
    v9 = __readcr4();
    result = v9 | 0x800000;
    __writecr4(result);
  }
  return result;
}
