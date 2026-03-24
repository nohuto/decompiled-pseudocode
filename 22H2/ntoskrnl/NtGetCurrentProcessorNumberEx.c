/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x140907840
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 */

__int64 __fastcall NtGetCurrentProcessorNumberEx(_BYTE *a1)
{
  struct _KPRCB *CurrentPrcb; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(a1, 4uLL, 1u);
  CurrentPrcb = KeGetCurrentPrcb();
  *(_WORD *)a1 = CurrentPrcb->Group;
  a1[2] = CurrentPrcb->GroupIndex;
  a1[3] = 0;
  return 0LL;
}
