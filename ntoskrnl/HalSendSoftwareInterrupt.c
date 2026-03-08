/*
 * XREFs of HalSendSoftwareInterrupt @ 0x140230250
 * Callers:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiSendSoftwareInterrupt @ 0x1402B7A00 (KiSendSoftwareInterrupt.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalSendSoftwareInterrupt(int a1, char a2)
{
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+2Ch] [rbp-1Ch]

  v6 = a1;
  v5 = 6LL;
  v7 = 0LL;
  v2 = a2 == 1;
  v3 = 31LL;
  if ( !v2 )
    v3 = 47LL;
  return HalpInterruptSendIpi(&v5, v3);
}
