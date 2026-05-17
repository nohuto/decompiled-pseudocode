/*
 * XREFs of LdrpReleaseTlsEntry @ 0x18007F030
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpHandleTlsData @ 0x180054590 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindTlsEntry @ 0x180019B60 (LdrpFindTlsEntry.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 *TlsEntry; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, 0LL, a3, a4);
  TlsEntry = (__int64 *)LdrpFindTlsEntry(a1);
  v7 = (__int64)TlsEntry;
  if ( TlsEntry )
  {
    v8 = *TlsEntry;
    if ( *(_QWORD *)(v8 + 8) != v7 || (v9 = *(_QWORD **)(v7 + 8), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    _bittestandreset((signed __int32 *)Src, *(_DWORD *)(v7 + 64));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v7 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v7;
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  return 0LL;
}
