/*
 * XREFs of bUnloadEudcFont @ 0x1C00119A4
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00EF758 (-CleanUpEUDC@@YAXXZ.c)
 *     bDeleteAllFlEntry @ 0x1C015E790 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0295894 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0295B94 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C02961A8 (bDeleteFlEntry.c)
 * Callees:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C000AD70 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C0011A78 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0011AA8 (prfntDeactivateEudcRFONTs.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0011B90 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0014ED0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 a1)
{
  unsigned int v2; // edi
  int v4; // edx
  char *v5; // rcx
  __int64 v6; // rsi
  __int64 i; // rdx
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v11; // [rsp+78h] [rbp+28h] BYREF
  struct _FONTOBJ *v12; // [rsp+80h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v11, 0x20Au);
  if ( !v11 )
    goto LABEL_2;
  v12 = *(struct _FONTOBJ **)a1;
  if ( (int)StringCchCopyW(v11, 0x105uLL, *(const unsigned __int16 **)(*(_QWORD *)&v12->iUniq + 24LL)) < 0 )
    goto LABEL_2;
  v4 = 0;
  v2 = 1;
  if ( (dword_1C0336380 & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
    goto LABEL_7;
  v5 = (char *)&unk_1C032FE0C;
  v8 = 7LL;
  do
  {
    if ( *((_DWORD *)v5 - 31) && *(_WORD *)v5 && *(_QWORD *)(v5 + 524) == *(_QWORD *)a1 )
      v4 = 1;
    v5 += 664;
    --v8;
  }
  while ( v8 );
  if ( !v4 )
  {
LABEL_7:
    PFEOBJ::vFreePql((PFEOBJ *)&v12);
    v12 = *(struct _FONTOBJ **)(a1 + 8);
    if ( v12 )
      PFEOBJ::vFreePql((PFEOBJ *)&v12);
    v6 = prfntDeactivateEudcRFONTs(a1);
    for ( i = v6; v6; i = v6 )
    {
      v6 = *(_QWORD *)(v6 + 672);
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
  if ( !(unsigned int)PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v5, v11) )
LABEL_2:
    v2 = 0;
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v11);
  return v2;
}
