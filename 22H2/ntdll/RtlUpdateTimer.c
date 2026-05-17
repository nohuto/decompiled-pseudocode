/*
 * XREFs of RtlUpdateTimer @ 0x1800823D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlUpdateTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r14
  unsigned __int64 v7; // rdx
  int v8; // edi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  HANDLE v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v5 = (unsigned int)a3;
  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
    return 3221225480LL;
  v8 = RtlpTpRevertCapture(&v12, 0, a3);
  if ( v8 >= 0 )
  {
    RtlAcquireSRWLockExclusive(a2 + 80, v7, v9, v10);
    if ( *(_BYTE *)(a2 + 88) || !*(_DWORD *)(a2 + 92) )
    {
      *(_BYTE *)(a2 + 88) = a4 != 0;
      v13 = -10000 * v5;
      TpSetTimerEx(*(_QWORD *)(a2 + 64), (__int64)&v13, a4, 0);
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
    v8 = 0;
  }
  RtlpTpResumeImpersonation(v12);
  return (unsigned int)v8;
}
