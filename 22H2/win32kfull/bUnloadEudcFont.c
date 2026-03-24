/*
 * XREFs of bUnloadEudcFont @ 0x1C00A1D5C
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C00A2390 (bDeleteAllFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00E6560 (-CleanUpEUDC@@YAXXZ.c)
 *     GreEudcLoadLinkW @ 0x1C0297780 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0297A90 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0298040 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0064C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C009EE74 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C009FD78 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C00A1E34 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00A1E64 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C00A22E4 (prfntDeactivateEudcRFONTs.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // edx
  char *v4; // rcx
  __int64 v5; // rsi
  __int64 i; // rdx
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v11; // [rsp+78h] [rbp+28h] BYREF
  struct _FONTOBJ *v12; // [rsp+80h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v11, 0x20Au);
  v2 = 0;
  if ( v11 )
  {
    v12 = *(struct _FONTOBJ **)a1;
    if ( (int)StringCchCopyW((char *)v11, 261LL, *(char **)(*(_QWORD *)&v12->iUniq + 24LL)) >= 0 )
    {
      v3 = 0;
      if ( (dword_1C033A0BC & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
        goto LABEL_5;
      v4 = (char *)&unk_1C0333ABC;
      v8 = 7LL;
      do
      {
        if ( *((_DWORD *)v4 - 31) && *(_WORD *)v4 && *(_QWORD *)(v4 + 524) == *(_QWORD *)a1 )
          v3 = 1;
        v4 += 664;
        --v8;
      }
      while ( v8 );
      if ( !v3 )
      {
LABEL_5:
        PFEOBJ::vFreePql((PFEOBJ *)&v12);
        v12 = *(struct _FONTOBJ **)(a1 + 8);
        if ( v12 )
          PFEOBJ::vFreePql((PFEOBJ *)&v12);
        v5 = prfntDeactivateEudcRFONTs(a1);
        for ( i = v5; v5; i = v5 )
        {
          v5 = *(_QWORD *)(v5 + 672);
          v9 = *(_QWORD *)(i + 128);
          v12 = (struct _FONTOBJ *)i;
          memset(v10, 0, sizeof(v10));
          PushThreadGuardedObject(v10, i, vRestartKillEudcRFONTs);
          RFONTOBJ::vDeleteRFONT(&v12, 0LL, (struct PFFOBJ *)&v9, 1);
          PopThreadGuardedObject(v10);
          v12 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
        }
      }
      if ( (unsigned int)PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v4, v11) )
        v2 = 1;
    }
    Win32FreePool(v11);
  }
  return v2;
}
