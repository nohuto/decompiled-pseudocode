/*
 * XREFs of bUnloadEudcFont @ 0x1C0114E84
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C008A954 (-CleanUpEUDC@@YAXXZ.c)
 *     bDeleteAllFlEntry @ 0x1C0114C3C (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C029E958 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C029EC80 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C029F7D0 (bDeleteFlEntry.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0087828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0089BF0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C0114F78 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0114FA8 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0114FEC (prfntDeactivateEudcRFONTs.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01150FC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0115160 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 a1)
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
  struct _FONTOBJ *v13; // [rsp+80h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v12, 0x20Au);
  if ( !v12 )
    goto LABEL_22;
  SGDGetSessionState(v2);
  v13 = *(struct _FONTOBJ **)a1;
  if ( (int)StringCchCopyW(v12, 0x105uLL, *(const unsigned __int16 **)(*(_QWORD *)&v13->iUniq + 24LL)) < 0 )
    goto LABEL_22;
  v4 = 0;
  if ( (*(_DWORD *)(v3 + 13312) & 0x10) != 0 || !*(_DWORD *)(v3 + 19360) )
    goto LABEL_5;
  v5 = v3 + 14212;
  v9 = 7LL;
  do
  {
    if ( *(_DWORD *)(v5 - 124) && *(_WORD *)v5 && *(_QWORD *)(v5 + 524) == *(_QWORD *)a1 )
      v4 = 1;
    v5 += 664LL;
    --v9;
  }
  while ( v9 );
  if ( !v4 )
  {
LABEL_5:
    PFEOBJ::vFreePql((PFEOBJ *)&v13);
    v13 = *(struct _FONTOBJ **)(a1 + 8);
    if ( v13 )
      PFEOBJ::vFreePql((PFEOBJ *)&v13);
    v6 = prfntDeactivateEudcRFONTs(a1);
    for ( i = v6; v6; i = v6 )
    {
      v6 = *(_QWORD *)(v6 + 672);
      v10 = *(_QWORD *)(i + 128);
      v13 = (struct _FONTOBJ *)i;
      memset(v11, 0, sizeof(v11));
      PushThreadGuardedObject(v11, i, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT(&v13, 0LL, (struct PFFOBJ *)&v10, 1);
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
