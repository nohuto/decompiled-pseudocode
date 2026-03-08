/*
 * XREFs of GreSfmDwmStartup @ 0x1C00C30D4
 * Callers:
 *     GreDwmStartup @ 0x1C00C2644 (GreDwmStartup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSfmDwmStartup(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  _QWORD **v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v5; // rax

  v1 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v1 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v1 + 9), 7LL);
  v2 = (_QWORD **)(*((_QWORD *)v1 + 809) + 40LL);
  v3 = *v2;
  if ( *v2 != v2 )
  {
    do
    {
      v5 = v3;
      v3 = (_QWORD *)*v3;
      if ( !*((_DWORD *)v5 + 54) )
        *((_DWORD *)v5 + 53) |= 0x10u;
    }
    while ( v3 != (_QWORD *)(*((_QWORD *)v1 + 809) + 40LL) );
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  return GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 9));
}
