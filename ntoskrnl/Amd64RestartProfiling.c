/*
 * XREFs of Amd64RestartProfiling @ 0x140A95C40
 * Callers:
 *     <none>
 * Callees:
 *     Amd64ConfigureCounter @ 0x140526AA0 (Amd64ConfigureCounter.c)
 */

__int64 (__fastcall **Amd64RestartProfiling())()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v3; // r8
  int v4; // eax

  result = &DefaultProfileInterface;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v1 = HalpCounterStatus;
  }
  else
  {
    result = (__int64 (__fastcall **)())HalpCounterStatus;
    v1 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
  }
  for ( i = 0LL; (unsigned int)i < Amd64NumberCounters; i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(v1 + 8 * i);
    v4 = *(_DWORD *)(v3 + 24);
    if ( v4 >= 2 )
    {
      result = 0LL;
      __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + i), 0LL);
    }
    else
    {
      result = (__int64 (__fastcall **)())Amd64ConfigureCounter(i, 1, *(_QWORD *)v3, **(_QWORD **)(v3 + 16), v4 != 1);
    }
  }
  return result;
}
