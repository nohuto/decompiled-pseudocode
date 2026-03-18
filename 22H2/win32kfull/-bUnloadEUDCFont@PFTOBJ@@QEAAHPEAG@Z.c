/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0115160
 * Callers:
 *     bAddAllFlEntry @ 0x1C00897FC (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C008A44C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C008A954 (-CleanUpEUDC@@YAXXZ.c)
 *     bAddFlEntry @ 0x1C0111EC0 (bAddFlEntry.c)
 *     bUnloadEudcFont @ 0x1C0114E84 (bUnloadEudcFont.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C029E3CC (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01149B0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x1C0115910 (-iHash@@YAIPEBGI@Z.c)
 *     cCapString @ 0x1C0116A58 (cCapString.c)
 *     memcmp @ 0x1C01384A0 (memcmp.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

_BOOL8 __fastcall PFTOBJ::bUnloadEUDCFont(PFTOBJ *this, unsigned __int16 *a2)
{
  BOOL v2; // esi
  __int64 v4; // rdi
  unsigned int v5; // edi
  __int64 v6; // rax
  const unsigned __int16 *v7; // rbp
  __int64 v8; // rcx
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  __int64 v11; // r15
  struct PFF *i; // rcx
  struct PFF *v13; // rax
  struct PFF *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = v4 + 1;
  if ( v5 > 0x1388000 )
    return 0LL;
  v6 = AllocFreeTmpBuffer(2 * v5);
  v7 = (const unsigned __int16 *)v6;
  if ( !v6 )
    return 0LL;
  cCapString(v6, a2, v5);
  v9 = *(Gre::Base **)(SGDGetSessionState(v8) + 32);
  v18[0] = *((_QWORD *)v9 + 2534);
  v10 = Gre::Base::Globals(v9);
  GreAcquireSemaphore(*((_QWORD *)v10 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v10 + 6), 14LL);
  v11 = v18[0] + 8LL * iHash(v7, *(_DWORD *)(v18[0] + 24LL));
  for ( i = *(struct PFF **)(v11 + 40); ; i = (struct PFF *)*((_QWORD *)v14 + 1) )
  {
    v13 = SkipInvalidPff(i);
    v14 = v13;
    if ( !v13
      || (*((_DWORD *)v13 + 13) & 8) != 0
      && v5 == *((_DWORD *)v13 + 8)
      && *((_DWORD *)v13 + 9) == 1
      && !memcmp(*((const void **)v13 + 3), v7, 2LL * v5)
      && !*((_DWORD *)v14 + 12) )
    {
      break;
    }
  }
  if ( v14 )
  {
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v18, v14, (struct PFF **)(v11 + 40), 0);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 6));
  }
  FreeTmpBuffer(v7, v15, v16);
  return v2;
}
