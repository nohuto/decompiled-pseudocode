/*
 * XREFs of GreSfmGenerateMoveData @ 0x1C02B0804
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C001E5D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSfmGenerateMoveData(Gre::Base *a1)
{
  int v1; // ebx
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 v3; // rcx

  v1 = (int)a1;
  v2 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v2 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v2 + 9), 7LL);
  *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 8684LL) = v1;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 9));
  return 0LL;
}
