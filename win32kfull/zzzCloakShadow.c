/*
 * XREFs of zzzCloakShadow @ 0x1C02247B0
 * Callers:
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0029674 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1, int a2)
{
  struct tagSHADOW *result; // rax
  unsigned int v4; // ebx
  struct tagSHADOW *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  result = FindShadow(a1);
  v4 = 0;
  v5 = result;
  if ( result )
  {
    ThreadLock(*((_QWORD *)result + 1), &v9);
    LOBYTE(v4) = a2 != 0;
    zzzSetWindowCompositionCloak(*((struct tagWND **)v5 + 1), 0LL, v4);
    return (struct tagSHADOW *)ThreadUnlock1(v7, v6, v8);
  }
  return result;
}
