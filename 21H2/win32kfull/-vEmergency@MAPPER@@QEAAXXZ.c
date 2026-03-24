/*
 * XREFs of ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C029451C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C005F930 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00600F0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C02942E4 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C029431C (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C0294658 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ulCharsetToCodePage @ 0x1C02DD638 (ulCharsetToCodePage.c)
 */

void __fastcall MAPPER::vEmergency(MAPPER *this)
{
  struct _FONTHASH **v1; // rax
  _DWORD *v3; // rdx
  int v4; // edi
  unsigned __int8 v5; // bp
  _DWORD *v6; // rdx
  struct PFE *i; // rax
  int v8; // eax
  struct PFE *v9; // rsi
  struct PFE *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // r8
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-28h]
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF
  struct PFE *v17; // [rsp+68h] [rbp+10h] BYREF

  v1 = gpPFTPublic;
  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v16 = 1;
  v14[0] = gpPFTPublic;
  v5 = 1;
  *v3 = 0;
  v6 = (_DWORD *)*((_QWORD *)this + 27);
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 25) = 0LL;
  *v6 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  *((_DWORD *)this + 63) &= ~0x80u;
  *((_DWORD *)this + 45) = -2;
  v14[1] = *v1;
  v15 = 0LL;
  for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v14); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v14) )
  {
    v9 = i;
    if ( !i )
      break;
    v17 = i;
    if ( (unsigned int)MAPPER::bNearMatch(this, &v17, &v16, 1) )
    {
      MAPPER::vSetBest(this, v9, 0, v16);
      v8 = *((_DWORD *)this + 46);
      v5 = v16;
      if ( !v8 )
      {
        v11 = v16;
        goto LABEL_12;
      }
      *((_DWORD *)this + 45) = v8;
    }
  }
  if ( !*((_QWORD *)this + 25) )
  {
    v10 = gppfeMapperDefault;
    *((_QWORD *)this + 25) = gppfeMapperDefault;
    if ( v10 )
      v4 = *((_DWORD *)v10 + 20);
    *((_DWORD *)this + 52) = v4;
  }
  v11 = v5;
LABEL_12:
  v12 = ulCharsetToCodePage(v11);
  *v13 |= v12 << 8;
}
