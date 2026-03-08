/*
 * XREFs of NtGdiGetPublicFontTableChangeCookie @ 0x1C00DCEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetPublicFontTableChangeCookie(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = Gre::Base::Globals(a1);
  v3 = SGDGetSessionState(v2);
  v4 = *((_QWORD *)v1 + 6);
  if ( !v4 )
    return 0LL;
  v5 = *(_QWORD *)(v3 + 32);
  if ( !*(_QWORD *)(v5 + 20272) )
    return 0LL;
  v8 = v4;
  GreAcquireSemaphore(v4);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 20272) + 32LL);
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  return v6;
}
