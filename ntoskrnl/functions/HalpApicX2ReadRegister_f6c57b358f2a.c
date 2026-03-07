unsigned __int64 __fastcall HalpApicX2ReadRegister(int a1)
{
  return __readmsr((a1 >> 4) + 2048);
}
