/*
 * XREFs of KiRestoreFeatureBits @ 0x140574114
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140569B44 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14037F1D0 (HviIsAnyHypervisorPresent.c)
 *     KeInitializeCatRegisters @ 0x14037FD5C (KeInitializeCatRegisters.c)
 *     KiSetVirtualMitigationControl @ 0x14040AE0C (KiSetVirtualMitigationControl.c)
 *     KiCheckMicrocode @ 0x140A89B04 (KiCheckMicrocode.c)
 */

__int64 KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v1; // rdx
  char CpuType; // al
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x22u) )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  if ( CurrentPrcb->BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, CurrentPrcb->BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl((__int64)CurrentPrcb);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  KeInitializeCatRegisters();
  v1 = 0LL;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    CpuType = CurrentPrcb->CpuType;
    if ( CpuType > 15 && CpuType != 17 && !HviIsAnyHypervisorPresent() )
    {
      v3 = __readmsr(0xC0011029) | 2;
      v1 = HIDWORD(v3);
      __writemsr(0xC0011029, v3);
    }
  }
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v4 = __readcr3();
    __writecr3(v4 | 2);
  }
  KiCheckMicrocode(CurrentPrcb, v1);
  if ( KiUserCetAllowed )
  {
    v5 = __readcr4();
    __writecr4(v5 | 0x800000);
  }
  result = (unsigned int)KiHresetMask;
  if ( (_DWORD)KiHresetMask )
    __writemsr(0x17DAu, (unsigned int)KiHresetMask);
  return result;
}
