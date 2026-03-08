/*
 * XREFs of HalpMcLoadMicrocodeWorker @ 0x140519630
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x140379900 (HalpInterruptGetIdentifiers.c)
 *     HalpMcUpdateMicrocode @ 0x14037CB18 (HalpMcUpdateMicrocode.c)
 */

ULONG_PTR __fastcall HalpMcLoadMicrocodeWorker(ULONG_PTR Argument)
{
  unsigned int Number; // ecx
  unsigned int v2; // ebx
  int Identifiers; // eax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v8 = 0;
  v2 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
  Identifiers = HalpInterruptGetIdentifiers(Number, &v8, 0LL);
  v5 = v8;
  v6 = 0xFFFFFFFFLL;
  if ( Identifiers < 0 )
    v5 = 0xFFFFFFFFLL;
  v8 = v5;
  if ( (v2 & (unsigned int)v5) == (_DWORD)v5 )
    HalpMcUpdateMicrocode(v5, 0xFFFFFFFFLL, v4);
  _InterlockedDecrement(&HalpMcLoadSyncBarrier);
  while ( HalpMcLoadSyncBarrier > 0 )
    _mm_pause();
  if ( (v2 & v8) != v8 )
    HalpMcUpdateMicrocode(v5, v6, v4);
  _InterlockedDecrement(&HalpMcSyncBarrier);
  while ( HalpMcSyncBarrier > 0 )
    _mm_pause();
  return 0LL;
}
