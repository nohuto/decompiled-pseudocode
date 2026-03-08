/*
 * XREFs of HalpTimerStopAllTimers @ 0x1404FCB78
 * Callers:
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void HalpTimerStopAllTimers()
{
  ULONG_PTR i; // rbx
  void (__fastcall *v1)(_QWORD); // rax

  for ( i = HalpRegisteredTimers; (ULONG_PTR *)i != &HalpRegisteredTimers; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 184) & 2) != 0 )
    {
      v1 = *(void (__fastcall **)(_QWORD))(i + 136);
      if ( v1 )
        v1(*(_QWORD *)(i + 72));
    }
  }
}
