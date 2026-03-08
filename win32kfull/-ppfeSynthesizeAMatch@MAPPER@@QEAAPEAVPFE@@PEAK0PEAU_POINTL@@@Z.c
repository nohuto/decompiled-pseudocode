/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C011CCCC
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C011B194 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014DCE6 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ulCharsetToCodePage @ 0x1C01525CA (ulCharsetToCodePage.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C026D728 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C029D740 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 */

struct PFE *__fastcall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  int v4; // eax
  __int64 v5; // rsi
  unsigned int *v6; // r13
  char *v9; // rdi
  __int64 *v10; // r14
  __int64 v12; // r14
  struct Gre::Base::SESSION_GLOBALS *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // esi
  unsigned int v18; // r8d
  int v19; // r14d
  __int64 v20; // rdi
  int v21; // r11d
  __int16 v22; // cx
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  struct _POINTL *v29; // rax
  unsigned int v30[2]; // [rsp+30h] [rbp-41h]
  unsigned int v31; // [rsp+78h] [rbp+7h]
  struct PFF *v32; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v33[8]; // [rsp+88h] [rbp+17h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int *v35; // [rsp+E8h] [rbp+77h]
  struct _POINTL *v36; // [rsp+F0h] [rbp+7Fh]

  v36 = a4;
  v35 = a3;
  v4 = *((_DWORD *)this + 22);
  v5 = 0LL;
  v34 = 0;
  v6 = a3;
  if ( (v4 & 1) != 0 )
    v9 = (char *)this + 92;
  else
    v9 = (char *)(*((_QWORD *)this + 1) + 348LL);
  v10 = (__int64 *)*((_QWORD *)this + 36);
  v31 = 4 * *((_DWORD *)v9 + 1) + 8;
  if ( !v10 )
    return (struct PFE *)v5;
  v12 = *v10;
  v32 = 0LL;
  if ( !v12 )
    return (struct PFE *)v5;
  v13 = Gre::Base::Globals(this);
  if ( *((_QWORD *)v13 + 796) || (unsigned int)bInitPrivatePFT() )
  {
    v33[0] = *((_QWORD *)v13 + 796);
    if ( (*(_DWORD *)(v12 + 52) & 0x10) != 0 )
    {
LABEL_13:
      if ( v34 && v32 )
      {
        if ( v34 == 1 )
        {
          v5 = *((_QWORD *)v32 + 27);
        }
        else
        {
          v16 = 0;
          v17 = 0x7FFFFFFF;
          v18 = 0;
          if ( v34 )
          {
            v19 = *((_DWORD *)this + 43);
            do
            {
              v20 = *(_QWORD *)(*((_QWORD *)v32 + v18 + 27) + 32LL);
              v21 = v19 - *(unsigned __int16 *)(v20 + 46);
              if ( *(unsigned __int16 *)(v20 + 46) - v19 >= 0 )
                v21 = *(unsigned __int16 *)(v20 + 46) - v19;
              if ( v21 <= v17 )
              {
                v17 = v21;
                v22 = *(_WORD *)(*(int *)(v20 + 8) + v20);
                if ( (*((_DWORD *)this + 63) & 0x2000000) != 0 )
                {
                  v23 = v18;
                  if ( v22 != 64 )
                    v23 = v16;
                  v16 = v23;
                }
                else if ( v22 != 64 )
                {
                  v16 = v18;
                }
              }
              ++v18;
            }
            while ( v18 < v34 );
            v6 = v35;
          }
          v5 = *((_QWORD *)v32 + v16 + 27);
        }
        *a2 = 0;
        v24 = 0LL;
        v25 = *((_QWORD *)this + 1);
        v26 = *(_QWORD *)(v5 + 32);
        v33[0] = v26;
        if ( *(_BYTE *)(v25 + 20) && (*(_BYTE *)(v26 + 52) & 1) == 0 && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v33) )
        {
          v24 = 0x4000LL;
          *a2 = 0x4000;
        }
        if ( (*((_DWORD *)this + 63) & 0x200000) == 0
          && *(unsigned __int16 *)(v26 + 46) - *((_DWORD *)this + 43) < 0
          && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v26 + 46) > 150 )
        {
          if ( IFIOBJ::pvSimBold((IFIOBJ *)v33) )
          {
            LODWORD(v24) = v24 | 0x2000;
            *a2 = v24;
          }
        }
        v27 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 23LL);
        v28 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 23LL) << 24;
        *v6 = v28;
        *v6 |= (unsigned int)ulCharsetToCodePage(v27, v28, v24) << 8;
        v29 = v36;
        v36->y = 1;
        v29->x = 1;
      }
      return (struct PFE *)v5;
    }
    v30[0] = v31;
    v14 = (unsigned int)-((unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                                          (PUBLIC_PFTOBJ *)v33,
                                          *(unsigned __int16 **)(v12 + 24),
                                          *(_DWORD *)(v12 + 32),
                                          *(_DWORD *)(v12 + 36),
                                          (struct tagDESIGNVECTOR *)v9,
                                          *(size_t *)v30,
                                          &v34,
                                          0x40u,
                                          &v32,
                                          0x30u,
                                          1,
                                          0LL,
                                          0,
                                          0) != 0);
    v34 &= v14;
    if ( v34 )
    {
      v15 = SGDGetSessionState(v14);
      GreQuerySystemTime(*(_QWORD *)(v15 + 32) + 20288LL);
      goto LABEL_13;
    }
    return (struct PFE *)v5;
  }
  return 0LL;
}
