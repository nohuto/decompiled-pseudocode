/*
 * XREFs of SepSetTokenSessionById @ 0x1406B7AE0
 * Callers:
 *     SepGetAnonymousToken @ 0x140370BA8 (SepGetAnonymousToken.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x1407F16F4 (SeSetSessionIdToken.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     SeExchangePrimaryToken @ 0x140842088 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1402C0B30 (MmGetSessionObjectById.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // edi
  void *v7; // rcx

  v5 = a2;
  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1160);
        *(_QWORD *)(a1 + 1160) = a4;
      }
      else
      {
        v7 = *(void **)(a1 + 1160);
        if ( v7 )
          ObfDereferenceObject(v7);
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById(v5, a2);
      }
    }
  }
}
