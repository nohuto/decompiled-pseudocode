/*
 * XREFs of VidSchWaitForQueuedPresentLimit @ 0x1C00B21F0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0014268 (VidSchiInterlockedRemoveEntryList.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00AE0A4 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchWaitForQueuedPresentLimit(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v6; // rsi
  __int64 v8; // rcx
  _QWORD v9[20]; // [rsp+50h] [rbp-A8h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( a2 >= *(_DWORD *)(v6 + 40) )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    return 3221225485LL;
  }
  if ( *(_BYTE *)(a1 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 200), 0, 0) )
  {
    v3 = -1071775232;
    WdLogSingleEntry2(3LL, a1, -1071775232LL);
    return v3;
  }
  if ( *(_DWORD *)(a1 + 4LL * a2 + 1444) < *(_DWORD *)(a1 + 244) )
    return v3;
  if ( a3 )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[2]) = 4;
    v9[3] = a1;
    LODWORD(v9[5]) = v4;
    LOBYTE(v9[19]) = 1;
    VidSchRegisterCompletionEvent(v6, (__int64)v9);
    if ( *(_DWORD *)(a1 + 4 * v4 + 1444) >= *(_DWORD *)(a1 + 244) )
      v3 = VidSchWaitForCompletionEvent(v6, (__int64)v9, 2LL);
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v6 + 1744), v9, 0LL);
    return v3;
  }
  return 3223191810LL;
}
