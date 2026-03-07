unsigned __int64 __fastcall HalpTscAdvSynchSkewCounter(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = __readcr2();
  __writecr2(v1);
  result = a1 + __rdtsc();
  __writemsr(0x10u, result);
  return result;
}
