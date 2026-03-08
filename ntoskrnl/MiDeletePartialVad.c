/*
 * XREFs of MiDeletePartialVad @ 0x1402D5768
 * Callers:
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 * Callees:
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnmapVad @ 0x1406A2850 (MiUnmapVad.c)
 *     MiAllocateSplitVads @ 0x14076003C (MiAllocateSplitVads.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *P, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v8[0] = 0LL;
  v10 = 0;
  v13 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( (P[12] & 0x200000) == 0 && *(_QWORD *)(**((_QWORD **)P + 9) + 64LL) && *((__int64 *)P + 15) < 0 )
    return 3221225505LL;
  v9 = a4;
  v11 = a2;
  v12 = a3;
  v8[1] = P;
  result = MiAllocateSplitVads(v8);
  if ( (int)result >= 0 )
  {
    MiPerformVadSplitting(v8);
    UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
    if ( (P[12] & 0x200000) != 0 )
      MiDeleteVad(P);
    else
      MiUnmapVad(P);
    return 0LL;
  }
  return result;
}
