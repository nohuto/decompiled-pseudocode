/*
 * XREFs of PiSwInstanceInfoInit @ 0x140806E00
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpConcatPWSTR @ 0x14069EE54 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     PiSwInstanceInfoFree @ 0x14096452C (PiSwInstanceInfoFree.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2uLL);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0xC8uLL, 0x57706E50u, a1 + 1), PWSTR < 0) )
    PiSwInstanceInfoFree(a1);
  return (unsigned int)PWSTR;
}
