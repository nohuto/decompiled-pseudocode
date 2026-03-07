char __fastcall UmfdUMBuffer::AlignSizeTo(unsigned int a1, __int64 a2, unsigned int *a3)
{
  if ( a1 + 4095 < a1 )
  {
    *a3 = -1;
    return 0;
  }
  else
  {
    *a3 = (a1 + 4095) & 0xFFFFF000;
    return 1;
  }
}
