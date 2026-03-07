__int64 __fastcall HalpTscQueryCounterOrdered(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  __asm { rdtscp }
  return (a2 << 32) | v2;
}
