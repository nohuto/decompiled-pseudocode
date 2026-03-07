unsigned __int64 __fastcall KiSaveXSaveSupport(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax

  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    result = __readmsr(0x1C4u);
    *a1 = result;
  }
  return result;
}
