/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C01183E8
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00B76C0 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00B7C2C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C0119070 (bAddFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C02A0B3C (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x1C01181D0 (-iHash@@YAIPEBGI@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     memcmp @ 0x1C012BEF0 (memcmp.c)
 */

_BOOL8 __fastcall PFTOBJ::bUnloadEUDCFont(PFTOBJ *this, unsigned __int16 *a2)
{
  BOOL v2; // esi
  __int64 v4; // rdi
  unsigned int v5; // edi
  WCHAR *v6; // rax
  const unsigned __int16 *v7; // rbp
  __int64 v8; // rcx
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  __int64 v11; // r15
  __int64 i; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = v4 + 1;
  if ( v5 > 0x1388000 )
    return 0LL;
  v6 = (WCHAR *)AllocFreeTmpBuffer(2 * v5);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  cCapString(v6, a2, v5);
  v9 = *(Gre::Base **)(SGDGetSessionState(v8) + 32);
  v16[0] = *((_QWORD *)v9 + 2534);
  v10 = Gre::Base::Globals(v9);
  GreAcquireSemaphore(*((_QWORD *)v10 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v10 + 6), 14LL);
  v11 = v16[0] + 8LL * (unsigned int)iHash(v7, *(_DWORD *)(v16[0] + 24LL));
  for ( i = *(_QWORD *)(v11 + 40);
        i
     && ((*(_DWORD *)(i + 52) & 8) == 0
      || v5 != *(_DWORD *)(i + 32)
      || *(_DWORD *)(i + 36) != 1
      || memcmp(*(const void **)(i + 24), v7, 2LL * v5)
      || *(_DWORD *)(i + 48));
        i = *(_QWORD *)(i + 8) )
  {
    ;
  }
  if ( i )
  {
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v16, (struct PFF *)i, (struct PFF **)(v11 + 40), 0);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 6));
  }
  FreeTmpBuffer(v7, v13, v14);
  return v2;
}
