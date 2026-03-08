/*
 * XREFs of ?AddPresent@CInterval@CPresentRate@@QEAA_NK@Z @ 0x1C007C6FC
 * Callers:
 *     ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x1C007C728 (-NotifyFrame@CPresentRate@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CPresentRate::CInterval::AddPresent(CPresentRate::CInterval *this, int a2)
{
  if ( !*(_DWORD *)this )
  {
    *(_DWORD *)this = a2;
    *((_DWORD *)this + 1) = 1;
    return 1;
  }
  if ( (unsigned int)(a2 - *(_DWORD *)this) <= 0x1F4 )
  {
    ++*((_DWORD *)this + 1);
    return 1;
  }
  return 0;
}
