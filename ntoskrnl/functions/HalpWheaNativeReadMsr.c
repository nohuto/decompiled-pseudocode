unsigned __int64 __fastcall HalpWheaNativeReadMsr(__int64 a1, unsigned int a2)
{
  return __readmsr(a2);
}
