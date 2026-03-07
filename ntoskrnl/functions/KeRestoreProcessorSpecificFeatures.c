__int64 __fastcall KeRestoreProcessorSpecificFeatures(__int64 a1)
{
  unsigned __int64 v7; // rax

  KiSetPageAttributesTable();
  if ( KiTLBCOverride )
    KiDisableCacheErrataSource();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    v7 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v7);
    __writemsr(0xC0000080, v7);
  }
  KiRestoreXSaveSupport(a1, _RDX);
  return KiRestoreFeatureBits();
}
