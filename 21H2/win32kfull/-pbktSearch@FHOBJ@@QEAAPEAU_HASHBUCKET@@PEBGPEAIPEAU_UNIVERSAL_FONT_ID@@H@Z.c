/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0013374
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0012370 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C0012850 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0012B4C (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C001D360 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C001EF44 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C013AF74 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A5A6C (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C0013DA8 (-iHash@@YAIPEBGI@Z.c)
 */

struct _HASHBUCKET *__fastcall FHOBJ::pbktSearch(
        FHOBJ *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        struct _UNIVERSAL_FONT_ID *a4,
        int a5)
{
  struct _UNIVERSAL_FONT_ID *v5; // r10
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // r11
  unsigned int v12; // eax
  __int64 *v13; // rcx
  int v14; // eax
  bool v15; // zf
  unsigned __int16 v17; // ax
  const unsigned __int16 *v18; // rdx

  v5 = a4;
  v9 = 0LL;
  if ( a2 )
  {
    v12 = iHash(a2, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
    goto LABEL_6;
  }
  if ( a4 )
  {
    v10 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      v10 = *((_DWORD *)a4 + 1);
    v11 = *((_QWORD *)this + 1);
    v12 = v10 % *(_DWORD *)(v11 + 8);
LABEL_6:
    if ( a3 )
    {
      *a3 = v12;
      v11 = *((_QWORD *)this + 1);
    }
    v13 = *(__int64 **)(v11 + 8LL * v12 + 40);
    if ( !v13 )
      return (struct _HASHBUCKET *)v9;
    while ( 1 )
    {
      if ( v5 )
      {
        v14 = *((_DWORD *)v13 + 15);
        if ( v14 == 1 && *(_DWORD *)v5 == 1 )
          v15 = *((_DWORD *)v13 + 16) == *((_DWORD *)v5 + 1);
        else
          v15 = v14 == *(_DWORD *)v5;
        if ( v15 )
          return (struct _HASHBUCKET *)v13;
      }
      else if ( a2 && (!a5 || (v13[4] & 2) != 0) )
      {
        v17 = *a2;
        v18 = a2;
        if ( *a2 == *((_WORD *)v13 + 30) )
        {
          while ( v17 )
          {
            v17 = *++v18;
            if ( *v18 != *(const unsigned __int16 *)((char *)v18 + (char *)v13 - (char *)a2 + 60) )
              goto LABEL_13;
          }
          if ( a5 || (v13[4] & 2) == 0 )
            return (struct _HASHBUCKET *)v13;
          v9 = v13;
        }
      }
LABEL_13:
      v13 = (__int64 *)*v13;
      if ( !v13 )
        return (struct _HASHBUCKET *)v9;
    }
  }
  return 0LL;
}
