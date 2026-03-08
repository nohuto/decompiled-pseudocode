/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0114DE0
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0003EB0 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C01175B4 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0117D44 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C011B3A0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C011CF24 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C0279F94 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02B72DC (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C01181D0 (-iHash@@YAIPEBGI@Z.c)
 */

struct _HASHBUCKET *__fastcall FHOBJ::pbktSearch(
        FHOBJ *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        struct _UNIVERSAL_FONT_ID *a4,
        int a5)
{
  struct _UNIVERSAL_FONT_ID *v5; // r10
  unsigned int *v6; // r11
  __int64 *v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 *i; // rdx
  int v13; // eax
  bool v14; // zf
  unsigned __int16 v16; // ax
  const unsigned __int16 *v17; // rcx

  v5 = a4;
  v6 = a3;
  v9 = 0LL;
  if ( a2 )
  {
    v11 = iHash(a2, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
  }
  else
  {
    if ( !a4 )
      return 0LL;
    v10 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      v10 = *((_DWORD *)a4 + 1);
    v11 = v10 % *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
  }
  if ( v6 )
    *v6 = v11;
  for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 8LL * v11 + 40); i; i = (__int64 *)*i )
  {
    if ( v5 )
    {
      v13 = *((_DWORD *)i + 15);
      if ( v13 == 1 && *(_DWORD *)v5 == 1 )
        v14 = *((_DWORD *)i + 16) == *((_DWORD *)v5 + 1);
      else
        v14 = v13 == *(_DWORD *)v5;
      if ( v14 )
        return (struct _HASHBUCKET *)i;
    }
    else if ( a2 && (!a5 || (i[4] & 2) != 0) )
    {
      v16 = *a2;
      v17 = a2;
      if ( *a2 == *((_WORD *)i + 30) )
      {
        while ( v16 )
        {
          v16 = *++v17;
          if ( *v17 != *(const unsigned __int16 *)((char *)v17 + (char *)i - (char *)a2 + 60) )
            goto LABEL_20;
        }
        if ( a5 || (i[4] & 2) == 0 )
          return (struct _HASHBUCKET *)i;
        v9 = i;
      }
    }
LABEL_20:
    ;
  }
  return (struct _HASHBUCKET *)v9;
}
