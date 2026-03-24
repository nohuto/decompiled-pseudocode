/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0115C64
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C005F890 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00BAC64 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C010D7B8 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C015577C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C02724C0 (-bInitPrivatePFT@@YAHXZ.c)
 *     ulCharsetToCodePage @ 0x1C02DC9F8 (ulCharsetToCodePage.c)
 */

struct PFE *__fastcall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  int v4; // eax
  unsigned int v5; // r10d
  __int64 v6; // rsi
  struct _POINTL *v7; // r13
  char *v10; // rdi
  __int64 *v11; // r14
  int v12; // r12d
  __int64 v14; // r14
  struct PFF *v15; // rdx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // edi
  unsigned int v20; // r9d
  int v21; // esi
  __int64 v22; // r11
  int v23; // eax
  __int16 v24; // cx
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // r8d
  int v29; // eax
  int v30; // r8d
  int *v31; // r9
  size_t v32; // [rsp+30h] [rbp-41h]
  struct PFF *v33; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v34[9]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v35; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int *v36; // [rsp+E8h] [rbp+77h]
  struct _POINTL *v37; // [rsp+F0h] [rbp+7Fh]

  v37 = a4;
  v36 = a3;
  v4 = *((_DWORD *)this + 22);
  v5 = 0;
  v6 = 0LL;
  v35 = 0;
  v7 = a4;
  if ( (v4 & 1) != 0 )
    v10 = (char *)this + 92;
  else
    v10 = (char *)(*((_QWORD *)this + 1) + 348LL);
  v11 = (__int64 *)*((_QWORD *)this + 36);
  v12 = 4 * *((_DWORD *)v10 + 1) + 8;
  if ( !v11 )
    return (struct PFE *)v6;
  v14 = *v11;
  v15 = 0LL;
  v33 = 0LL;
  if ( !v14 )
    return (struct PFE *)v6;
  if ( gpPFTPrivate )
  {
LABEL_11:
    v16 = *(_DWORD *)(v14 + 52);
    v34[0] = gpPFTPrivate;
    if ( (v16 & 0x10) != 0 )
    {
LABEL_14:
      if ( v5 && v15 )
      {
        if ( v5 == 1 )
        {
          v6 = *((_QWORD *)v15 + 27);
        }
        else
        {
          v18 = 0;
          v19 = 0x7FFFFFFF;
          v20 = 0;
          v21 = *((_DWORD *)this + 43);
          do
          {
            v22 = *(_QWORD *)(*((_QWORD *)v15 + v20 + 27) + 32LL);
            v23 = *(unsigned __int16 *)(v22 + 46) - v21;
            if ( v23 < 0 )
              v23 = v21 - *(unsigned __int16 *)(v22 + 46);
            if ( v23 <= v19 )
            {
              v19 = v23;
              v24 = *(_WORD *)(*(int *)(v22 + 8) + v22);
              if ( (*((_DWORD *)this + 63) & 0x2000000) != 0 )
              {
                v25 = v20;
                if ( v24 != 64 )
                  v25 = v18;
                v18 = v25;
              }
              else if ( v24 != 64 )
              {
                v18 = v20;
              }
            }
            ++v20;
          }
          while ( v20 < v5 );
          v7 = v37;
          v6 = *((_QWORD *)v15 + v18 + 27);
        }
        *a2 = 0;
        v26 = *((_QWORD *)this + 1);
        v27 = *(_QWORD *)(v6 + 32);
        v34[0] = v27;
        if ( *(_BYTE *)(v26 + 20) && (*(_BYTE *)(v27 + 52) & 1) == 0 && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v34) )
          *a2 = 0x4000;
        if ( (*((_DWORD *)this + 63) & 0x200000) == 0
          && *(unsigned __int16 *)(v27 + 46) - *((_DWORD *)this + 43) < 0
          && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v27 + 46) > 150 )
        {
          if ( IFIOBJ::pvSimBold((IFIOBJ *)v34) )
            *a2 = v28 | 0x2000;
        }
        *v36 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 23LL) << 24;
        v29 = ulCharsetToCodePage();
        *v31 = v30 | (v29 << 8);
        v7->y = 1;
        v7->x = 1;
      }
      return (struct PFE *)v6;
    }
    LODWORD(v32) = v12;
    v17 = PUBLIC_PFTOBJ::bLoadFonts(
            (PUBLIC_PFTOBJ *)v34,
            *(unsigned __int16 **)(v14 + 24),
            *(_DWORD *)(v14 + 32),
            *(_DWORD *)(v14 + 36),
            (struct tagDESIGNVECTOR *)v10,
            v32,
            &v35,
            0x40u,
            &v33,
            0x30u,
            1,
            0LL,
            0,
            0);
    v35 &= -(v17 != 0);
    if ( v35 )
    {
      GreQuerySystemTime(&PFTOBJ::FontChangeTime);
      v5 = v35;
      v15 = v33;
      goto LABEL_14;
    }
    return (struct PFE *)v6;
  }
  if ( (unsigned int)bInitPrivatePFT() )
  {
    v5 = v35;
    v15 = v33;
    goto LABEL_11;
  }
  return 0LL;
}
