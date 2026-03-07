unsigned __int64 __fastcall KiSetVirtualMitigationControl(__int64 a1)
{
  _BOOL8 v1; // r8
  unsigned __int64 result; // rax

  v1 = 0LL;
  if ( (KeFeatureBits2 & 0x20000000) != 0 )
  {
    result = __readmsr(0x50000001u);
    if ( (result & 1) != 0 )
    {
      if ( (KiSpeculationFeatures & 0x80000000000000LL) != 0 )
        v1 = (*(_BYTE *)(a1 + 1762) & 0x30) == 16;
      result = v1 | __readmsr(0x50000002u) & 0xFFFFFFFFFFFFFFFEuLL;
      __writemsr(0x50000002u, result);
    }
  }
  return result;
}
