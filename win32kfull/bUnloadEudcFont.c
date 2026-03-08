/*
 * XREFs of bUnloadEudcFont @ 0x1C01162DC
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00B76C0 (-CleanUpEUDC@@YAXXZ.c)
 *     bDeleteAllFlEntry @ 0x1C0116094 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02A13F0 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C01163D0 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0116400 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0116450 (prfntDeactivateEudcRFONTs.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C01183E8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r11
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 i; // rdx
  __int64 v9; // r8
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v12, 0x20Au);
  if ( !v12 )
    goto LABEL_22;
  SGDGetSessionState(v2);
  v13 = *a1;
  if ( (int)StringCchCopyW(v12, 0x105uLL, *(const unsigned __int16 **)(*(_QWORD *)v13 + 24LL)) < 0 )
    goto LABEL_22;
  v4 = 0;
  if ( (*(_DWORD *)(v3 + 13312) & 0x10) != 0 || !*(_DWORD *)(v3 + 19360) )
    goto LABEL_5;
  v5 = v3 + 14212;
  v9 = 7LL;
  do
  {
    if ( *(_DWORD *)(v5 - 124) && *(_WORD *)v5 && *(_QWORD *)(v5 + 524) == *a1 )
      v4 = 1;
    v5 += 664LL;
    --v9;
  }
  while ( v9 );
  if ( !v4 )
  {
LABEL_5:
    PFEOBJ::vFreePql((PFEOBJ *)&v13);
    v13 = a1[1];
    if ( v13 )
      PFEOBJ::vFreePql((PFEOBJ *)&v13);
    v6 = prfntDeactivateEudcRFONTs(a1);
    for ( i = v6; v6; i = v6 )
    {
      v6 = *(_QWORD *)(v6 + 672);
      v10 = *(_QWORD *)(i + 128);
      v13 = i;
      memset(v11, 0, sizeof(v11));
      PushThreadGuardedObject(v11, i, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v13, 0LL, (struct PFFOBJ *)&v10, 1);
      PopThreadGuardedObject(v11);
      v13 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
    }
  }
  if ( (unsigned int)PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v5, v12) )
  {
    if ( v12 )
      Win32FreePool(v12);
    return 1LL;
  }
  else
  {
LABEL_22:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v12);
    return 0LL;
  }
}
