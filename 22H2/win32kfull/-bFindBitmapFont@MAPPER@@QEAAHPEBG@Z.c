/*
 * XREFs of ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C00FFECC
 * Callers:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C00FFD2C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00BA418 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C00BAAD4 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00BB998 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

__int64 __fastcall MAPPER::bFindBitmapFont(MAPPER *this, const unsigned __int16 *a2)
{
  struct _HASHBUCKET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *i; // rcx
  __int64 v11; // r8
  int v12; // edx
  int v13; // eax
  int v14; // edx
  struct _FONTSUB *v15; // rax
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (*((_DWORD *)this + 63) & 0x10000000) != 0 )
    return 0LL;
  v16[0] = gpPFTPublic;
  v16[1] = *gpPFTPublic;
  if ( FHOBJ::bValid((FHOBJ *)v16) )
  {
    v5 = FHOBJ::pbktSearch((FHOBJ *)v16, a2, 0LL, 0LL, 0);
    v9 = 1;
    if ( v5
      || (v15 = pfsubAlternateFacename(a2, v6, v7, v8)) != 0LL
      && (*((_BYTE *)v15 + 195) & 1) != 0
      && (v5 = FHOBJ::pbktSearch((FHOBJ *)v16, (const unsigned __int16 *)v15 + 65, 0LL, 0LL, 0)) != 0LL )
    {
      for ( i = (_QWORD *)*((_QWORD *)v5 + 1); i; i = (_QWORD *)*i )
      {
        v11 = *(_QWORD *)(i[1] + 32LL);
        if ( (*(_DWORD *)(v11 + 48) & 2) != 0 )
        {
          v12 = (*((_DWORD *)this + 63) & 2) != 0
              ? *(__int16 *)(v11 + 56)
              : *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
          v13 = *((_DWORD *)this + 41);
          if ( v13 == v12 || v13 == 2 && v12 == 3 )
          {
            v14 = *((_DWORD *)this + 42);
            if ( !v14 || v14 == *(__int16 *)(v11 + 76) )
              return v9;
          }
        }
      }
    }
  }
  return 0;
}
