/*
 * XREFs of ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C028D95C
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C028E05C (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C028E180 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C012FE14 (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C028CDF4 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x1C02E29D4 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z.c)
 */

__int64 __fastcall bCreateFontFileView(
        const struct _FONTFILEVIEW *a1,
        const struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct _FONTFILEVIEW ***a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int128 v16; // xmm6
  __int128 v17; // xmm7
  __int64 v18; // xmm0_8
  unsigned int v19; // edi
  struct _FONTFILEVIEW **v20; // rcx
  struct _FONTFILEVIEW **v21; // r11
  char *v22; // r8
  unsigned int v23; // r9d
  __int64 i; // rdx
  unsigned int v25; // r10d
  __int128 v26; // [rsp+50h] [rbp-178h]
  __int128 v27; // [rsp+80h] [rbp-148h]
  __int128 v28; // [rsp+90h] [rbp-138h]
  _BYTE v29[60]; // [rsp+140h] [rbp-88h] BYREF
  int v30; // [rsp+17Ch] [rbp-4Ch]

  v9 = 1;
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v29);
  if ( !UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
          (UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v29,
          *((_QWORD *)a1 + 9)) )
    goto LABEL_2;
  v11 = *(_OWORD *)a1;
  v26 = *(_OWORD *)a1;
  v12 = *((_OWORD *)a1 + 1);
  v13 = *((_OWORD *)a1 + 2);
  v14 = *((_OWORD *)a1 + 3);
  v27 = v14;
  v15 = *((_OWORD *)a1 + 4);
  v28 = v15;
  v16 = *((_OWORD *)a1 + 5);
  v17 = *((_OWORD *)a1 + 6);
  v18 = *((_QWORD *)a1 + 14);
  if ( a3 <= ((4 * a5 + 15) & 0xFFFFFFF8) )
  {
    v30 = 87;
LABEL_2:
    UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v29);
    return 0LL;
  }
  v19 = (8 * a5 + 7) & 0xFFFFFFF8;
  if ( v19 + 120 * a5 )
  {
    v20 = (struct _FONTFILEVIEW **)Win32AllocPoolZInit(v19 + 120 * a5, 1986422343LL);
    v11 = v26;
    v14 = v27;
    v15 = v28;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v30 = 8;
    goto LABEL_2;
  }
  v21 = v20;
  v22 = (char *)v20 + v19;
  *(_OWORD *)v22 = v11;
  *((_OWORD *)v22 + 1) = v12;
  *((_OWORD *)v22 + 2) = v13;
  *((_OWORD *)v22 + 3) = v14;
  *((_OWORD *)v22 + 4) = v15;
  *((_OWORD *)v22 + 5) = v16;
  *((_OWORD *)v22 + 6) = v17;
  *((_QWORD *)v22 + 14) = v18;
  v23 = 0;
  for ( i = 0LL; (unsigned int)i < a5; i = (unsigned int)(i + 1) )
  {
    v25 = *((_DWORD *)a2 + i + 2);
    if ( v25 < v23 || v25 > DWORD2(v12) || v23 != ((v23 + 3) & 0xFFFFFFFC) )
    {
      v9 = 0;
      break;
    }
    *((_QWORD *)v22 + 2) = v12 + v23;
    *((_DWORD *)v22 + 6) = v25 - v23;
    *v21++ = (struct _FONTFILEVIEW *)v22;
    v22 += 120;
    v23 = v25;
  }
  if ( v9 )
    *a4 = v20;
  else
    Win32FreePool(v20);
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v29);
  return v9;
}
