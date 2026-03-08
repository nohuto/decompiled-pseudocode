/*
 * XREFs of HalpShutdownReset @ 0x140504E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 */

void __fastcall __noreturn HalpShutdownReset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 *a5)
{
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rsi

  v5 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( _InterlockedDecrement(a5) )
  {
    do
    {
      if ( (++v5 & dword_140C6211C) != 0 || !qword_140C62120 )
        _mm_pause();
      else
        qword_140C62120(v5);
    }
    while ( *a5 );
  }
  HalpRebootControlled = 1;
  if ( !CurrentPrcb->Number )
    HalReturnToFirmware(3);
  while ( 1 )
    _mm_pause();
}
