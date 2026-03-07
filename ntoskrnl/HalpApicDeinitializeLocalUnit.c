__int64 HalpApicDeinitializeLocalUnit()
{
  unsigned __int64 v0; // rax

  if ( HalpApicRestoreNonX2ModeOnReset )
  {
    v0 = __readmsr(0x1Bu);
    __writemsr(0x1Bu, v0 & 0xFFFFFFFFFFFFF3FFuLL);
    __writemsr(0x1Bu, v0 & 0xFFFFFFFFFFFFF3FFuLL | 0x800);
  }
  return 0LL;
}
