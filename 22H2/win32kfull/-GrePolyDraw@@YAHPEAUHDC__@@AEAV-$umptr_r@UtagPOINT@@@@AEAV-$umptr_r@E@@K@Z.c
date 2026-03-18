/*
 * XREFs of ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AB378
 * Callers:
 *     NtGdiPolyDraw @ 0x1C02C3FB0 (NtGdiPolyDraw.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C015A7AA (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0284824 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1C02AA628 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x1C02AA708 (--$read@U_POINTL@@@-$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z.c)
 *     ??$read_advance@E@?$umptr_r@E@@QEAA_NPEAE@Z @ 0x1C02AA7E0 (--$read_advance@E@-$umptr_r@E@@QEAA_NPEAE@Z.c)
 *     umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380___ @ 0x1C02AA840 (umptr_r_unsigned_char_--read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380__.c)
 *     umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_dbbf8546bc340ff511f2cff186eaaf73___ @ 0x1C02AA8BC (umptr_r_unsigned_char_--read_advance_if_unsigned_char__lambda_dbbf8546bc340ff511f2cff186eaaf73__.c)
 *     ?ssizet_add_to_sizet@?$umptr@E@@SA_N_K_JPEA_K@Z @ 0x1C02AB8FC (-ssizet_add_to_sizet@-$umptr@E@@SA_N_K_JPEA_K@Z.c)
 */

__int64 __fastcall GrePolyDraw(HDC a1, __int64 a2, __int64 a3, int a4)
{
  POINTL *v7; // rcx
  POINTL v8; // rdx
  int v9; // ebx
  unsigned int v10; // ebx
  ULONGLONG v11; // r8
  __int64 v12; // r12
  unsigned __int64 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  struct _POINTFIX Current; // rax
  POINTL *v20; // r8
  ULONG v21; // ecx
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v24[7]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  struct _XFORMOBJ v26; // [rsp+40h] [rbp-C0h] BYREF
  POINTL *v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]

  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v7 = v27[0];
  if ( v27[0] && (v27[0][4].y & 0x10000) == 0 )
  {
    v8 = v27[0][122];
    v9 = *(_DWORD *)(*(_QWORD *)&v8 + 152LL);
    if ( (v9 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v27[0], *(_QWORD *)(*(_QWORD *)&v8 + 160LL));
      v7 = v27[0];
    }
    if ( (v9 & 0x2000) != 0 )
      GreDCSelectPen(v7, *(_QWORD *)(*(_QWORD *)&v7[122] + 168LL));
    if ( !a4 )
    {
      v10 = 1;
LABEL_65:
      DCOBJ::~DCOBJ((DCOBJ *)v27);
      return v10;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v26, (struct XDCOBJ *)v27, 516);
    v10 = 1;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v27, 1);
    if ( v31 )
    {
      v12 = *(_QWORD *)(a3 + 16);
      if ( *(_QWORD *)(a3 + 8) != v12 )
      {
        v13 = (unsigned __int64 *)(a2 + 16);
        while ( 1 )
        {
          v24[0] = 0;
          v23 = 0;
          if ( !umptr_r<unsigned char>::read_advance<unsigned char>(a3, v24) )
            goto LABEL_64;
          if ( v24[0] == 2 )
            break;
          if ( v24[0] == 3 )
            goto LABEL_45;
          if ( v24[0] == 4 )
          {
            while ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16)
                 && umptr_r<unsigned char>::read<unsigned char>(a3, &v23, 1uLL, 0LL)
                 && v23 == 4 )
            {
              v15 = *(_QWORD *)(a3 + 16);
              v25 = 0LL;
              if ( (unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v15, 1LL, &v25)
                && v25 <= *(_QWORD *)(a3 + 8) )
              {
                *(_QWORD *)(a3 + 16) = v25;
              }
              else
              {
                *(_BYTE *)(a3 + 24) = 1;
              }
            }
            umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_dbbf8546bc340ff511f2cff186eaaf73___(a3, &v23);
            if ( *(_BYTE *)(a3 + 25) || *(_BYTE *)(a3 + 24) )
              goto LABEL_64;
            v16 = *(_QWORD *)(a3 + 16) - v12;
            if ( v16 != 3 * (v16 / 3) )
            {
LABEL_61:
              v21 = 87;
              goto LABEL_63;
            }
            if ( !(unsigned int)EPATHOBJ::bPolyBezierTo(&ppo, &v26, a2) )
              goto LABEL_64;
            v13 = (unsigned __int64 *)(a2 + 16);
            goto LABEL_46;
          }
          if ( v24[0] != 6 )
            goto LABEL_61;
          if ( !(unsigned int)EPATHOBJ::bMoveTo(&ppo, &v26, a2) )
            goto LABEL_64;
          v14 = *(_QWORD *)(a2 + 16);
          v25 = 0LL;
          if ( (unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v14, 1LL, &v25) && v25 <= *(_QWORD *)(a2 + 8) )
            *(_QWORD *)(a2 + 16) = v25;
          else
            *(_BYTE *)(a2 + 24) = 1;
          v13 = (unsigned __int64 *)(a2 + 16);
LABEL_53:
          v12 = *(_QWORD *)(a3 + 16);
          if ( *(_QWORD *)(a3 + 8) == v12 )
            goto LABEL_54;
        }
        while ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16)
             && umptr_r<unsigned char>::read<unsigned char>(a3, &v23, 1uLL, 0LL)
             && v23 == 2 )
        {
          v17 = *(_QWORD *)(a3 + 16);
          v25 = 0LL;
          if ( (unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v17, 1LL, &v25) && v25 <= *(_QWORD *)(a3 + 8) )
            *(_QWORD *)(a3 + 16) = v25;
          else
            *(_BYTE *)(a3 + 24) = 1;
        }
        umptr_r_unsigned_char_::read_advance_if_unsigned_char__lambda_cf751173cd1fdd6f06b2c64bdd4d7380___(a3, &v23);
        if ( *(_BYTE *)(a3 + 25) || *(_BYTE *)(a3 + 24) )
          goto LABEL_64;
        v13 = (unsigned __int64 *)(a2 + 16);
LABEL_45:
        v16 = *(_QWORD *)(a3 + 16) - v12;
        if ( !(unsigned int)EPATHOBJ::bPolyLineTo(&ppo, &v26, a2) )
          goto LABEL_64;
LABEL_46:
        v18 = *v13;
        v25 = 0LL;
        if ( (unsigned __int8)umptr<unsigned char>::ssizet_add_to_sizet(v18, v16, &v25) && v25 <= *(_QWORD *)(a2 + 8) )
          *v13 = v25;
        else
          *(_BYTE *)(a2 + 24) = 1;
        if ( !umptr_r<unsigned char>::read<unsigned char>(a3, &v23, 1uLL, -1LL) )
          goto LABEL_64;
        if ( (v23 & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        goto LABEL_53;
      }
LABEL_54:
      v25 = 0LL;
      if ( umptr_r<tagPOINT>::read<_POINTL>(a2, &v25, v11) )
      {
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v29);
        v20 = v27[0];
        *(_DWORD *)(*(_QWORD *)&v27[0][122] + 152LL) &= 0xFFFFFCFF;
        *(_QWORD *)(*(_QWORD *)&v20[122] + 216LL) = v25;
        *(_DWORD *)(*(_QWORD *)&v20[122] + 8LL) = *(_DWORD *)Current.x;
        *(_DWORD *)(*(_QWORD *)&v20[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
        if ( (v27[0][31].x & 1) == 0
          && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v27, (LINEATTRS *)&v27[0][26], &v26, 1u) )
        {
          v10 = 0;
        }
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
        if ( v27[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v27);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
        return v10;
      }
    }
    else
    {
      v21 = 8;
LABEL_63:
      EngSetLastError(v21);
    }
LABEL_64:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    v10 = 0;
    goto LABEL_65;
  }
  EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return 0LL;
}
