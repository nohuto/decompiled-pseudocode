/*
 * XREFs of HalpTscSynchronization @ 0x14039A820
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222070 (KeQueryActiveProcessorCountEx.c)
 *     HviIsXboxNanovisorPresent @ 0x140350EC8 (HviIsXboxNanovisorPresent.c)
 *     HalpFindTimer @ 0x14037B658 (HalpFindTimer.c)
 *     KeIpiGenericCall @ 0x14039A940 (KeIpiGenericCall.c)
 *     HalpTscInitializeSynchronizationContext @ 0x14039AA74 (HalpTscInitializeSynchronizationContext.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

int __fastcall HalpTscSynchronization(char a1, __int64 a2)
{
  ULONG_PTR *Timer; // rax
  __int64 v5; // rdx
  ULONG_PTR Context[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+50h] [rbp-28h]

  *(_OWORD *)Context = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( qword_140C62588 || HviIsXboxNanovisorPresent() )
  {
    Timer = HalpFindTimer(5, 0, 0, 0, 1);
    if ( Timer && (Timer[28] & 0x6000) == 0 )
      *((_DWORD *)Timer + 46) |= 0x20u;
  }
  else
  {
    LODWORD(Timer) = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( (unsigned int)Timer >= 2 )
    {
      LOBYTE(v5) = a1;
      HalpTscInitializeSynchronizationContext(Context, v5, a2, 0LL);
      LODWORD(Timer) = KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpTscSynchronizationWorker, (ULONG_PTR)Context);
    }
  }
  return (int)Timer;
}
