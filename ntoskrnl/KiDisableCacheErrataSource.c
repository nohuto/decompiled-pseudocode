__int64 KiDisableCacheErrataSource()
{
  unsigned __int64 AMDMsr; // rax
  int v1; // eax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h]

  __writemsr(0xC0010015, __readmsr(0xC0010015) | 8);
  AMDMsr = ReadAMDMsr(0xC0011023);
  HIDWORD(v3) = HIDWORD(AMDMsr);
  if ( KiTLBCOverride == 1 )
    v1 = AMDMsr & 0xFFDFFFFF;
  else
    v1 = AMDMsr | 0x800000;
  LODWORD(v3) = v1 | 2;
  return WriteAMDMsr(0xC0011023, v3);
}
