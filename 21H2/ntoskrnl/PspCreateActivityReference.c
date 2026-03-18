/*
 * XREFs of PspCreateActivityReference @ 0x1406E1214
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x1406E1100 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     PsChargeProcessWakeCounter @ 0x1406E1310 (PsChargeProcessWakeCounter.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 */

__int64 __fastcall PspCreateActivityReference(__int64 a1, __int64 a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+50h] [rbp-30h] BYREF
  int v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+6Ch] [rbp-14h]
  __int128 v9; // [rsp+70h] [rbp-10h]

  v8 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6[1] = 0LL;
  v6[2] = 0LL;
  v6[0] = 48LL;
  v7 = 32;
  v9 = 0LL;
  result = ObCreateObjectEx(0, PspActivityReferenceObjectType, (unsigned int)v6, PreviousMode);
  if ( (int)result >= 0 )
  {
    MEMORY[0] = PsChargeProcessWakeCounter(a1);
    return ObInsertObjectEx(0LL, 0LL, 0, 0LL, a2);
  }
  return result;
}
