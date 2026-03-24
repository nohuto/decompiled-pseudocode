/*
 * XREFs of UmfdLoadFontFileView @ 0x1C00A6BF0
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C00A6AF8 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 * Callees:
 *     ?bIsPathInSystemFontsDir@@YAHPEBG@Z @ 0x1C00A5148 (-bIsPathInSystemFontsDir@@YAHPEBG@Z.c)
 *     _lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator() @ 0x1C00A6E4C (_lambda_3837b0e11e5c1550d1f290a74bcd7a94_--operator().c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00A6EE4 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00A71D4 (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTO.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00A7460 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C0288B1C (-FNTCacheValidateFntFileInfo@@YA-AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z.c)
 *     ?PutFntCacheDrvAndFileInfo@@YAXKPEAVPDEV@@KPEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C0288C4C (-PutFntCacheDrvAndFileInfo@@YAXKPEAVPDEV@@KPEAPEAU_FONTFILEVIEW@@K@Z.c)
 */

__int64 __fastcall UmfdLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        char a5,
        char a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        __int64 *a9,
        _QWORD *a10,
        unsigned int *a11,
        int a12,
        int *a13)
{
  _QWORD *v15; // r15
  __int64 result; // rax
  unsigned int *v17; // r14
  int v18; // edi
  int v19; // r13d
  unsigned int v20; // r8d
  unsigned int v21; // edx
  char v22; // bl
  __int64 v23; // rcx
  __int64 v24; // rdx
  char v25; // r15
  unsigned int v26; // esi
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned int j; // edi
  int IsPathInSystemFontsDir; // eax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  unsigned int v39; // edi
  unsigned int v40; // [rsp+78h] [rbp-49h] BYREF
  int v41; // [rsp+7Ch] [rbp-45h] BYREF
  int v42; // [rsp+80h] [rbp-41h] BYREF
  struct PDEV *v43; // [rsp+88h] [rbp-39h] BYREF
  struct PDEV *i; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v45[12]; // [rsp+98h] [rbp-29h] BYREF
  struct _FONTFILEVIEW **v46; // [rsp+118h] [rbp+57h] BYREF
  unsigned int v47; // [rsp+120h] [rbp+5Fh] BYREF

  v47 = a4;
  v46 = a3;
  LOBYTE(result) = UmfdHostLifeTimeManager::EnsureUmfdHost();
  v15 = a10;
  result = (unsigned __int8)result;
  *a9 = 0LL;
  *v15 = 0LL;
  if ( (_BYTE)result )
  {
    v17 = a11;
    v43 = 0LL;
    v40 = 0;
    v42 = 0;
    v41 = 0;
    result = LookUpFNTCacheTable(a2, a1, a11, a11 + 1, &v43, &v40, a12, &v41, &v42, v46, v47, a7, a8);
    v18 = result;
    v19 = v41;
    if ( a13 )
      *a13 = v41;
    if ( !v42 )
    {
      v20 = 0;
      v21 = v47;
      v22 = 1;
      for ( i = qword_1C0341AF0; v20 < v47; v21 = v47 )
      {
        v23 = v20++;
        *((_DWORD *)v46[v23] + 16) = 0;
      }
      UmfdInsertFontFileViewForLookup(v46, v21);
      v45[0] = &i;
      v45[1] = &a7;
      v45[2] = &v47;
      v45[3] = &v46;
      v45[4] = &a5;
      v45[5] = &a6;
      if ( v18 )
      {
        if ( v40 == 1 || (v25 = 1, !a1) )
          v25 = 0;
        v26 = *v17;
        v27 = 0;
        if ( v19 && v25 )
        {
          v34 = FNTCacheValidateFntFileInfo(v46, v47);
          v24 = 0LL;
          v27 = v34;
          if ( v34 == 1 )
            v26 = 0;
          if ( v34 == 2 )
            goto LABEL_21;
        }
        LOBYTE(v24) = v25;
        v28 = lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator()(v45, v24, v26);
        v29 = 0LL;
        v30 = v28;
        if ( v28 )
        {
          for ( j = 0; j < v47; ++j )
          {
            *((_DWORD *)v46[j] + 10) |= 8u;
            if ( !v25 )
            {
              IsPathInSystemFontsDir = bIsPathInSystemFontsDir(*((wchar_t **)v46[j] + 10));
              *((_DWORD *)v46[j] + 10) ^= (*((_DWORD *)v46[j] + 10) ^ (16 * IsPathInSystemFontsDir)) & 0x10;
            }
          }
          v15 = a10;
        }
        else
        {
          if ( v40 != 1 || !a1 )
            v22 = 0;
          if ( v19 && v22 )
          {
            v27 = FNTCacheValidateFntFileInfo(v46, v47);
            v29 = 0LL;
          }
          if ( v27 == 2 )
            goto LABEL_21;
          LOBYTE(v29) = v22;
          v35 = lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator()(v45, v29, 0LL);
          v15 = a10;
          v30 = v35;
        }
      }
      else
      {
        LOBYTE(v24) = a1 != 0LL;
        v33 = lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator()(v45, v24, *v17);
        v30 = v33;
        if ( !v33 )
          goto LABEL_21;
        v36 = *(_DWORD *)(v33 + 8);
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              if ( v38 == 1 )
                v39 = 4;
              else
                v39 = 0;
            }
            else
            {
              v39 = 3;
            }
          }
          else
          {
            v39 = 2;
          }
        }
        else
        {
          v39 = 1;
        }
        PutFntCacheDrvAndFileInfo(*v17, qword_1C0341AF0, v39, v46, v47);
      }
      if ( v30 )
      {
        *v15 = qword_1C0341AF0;
        result = (__int64)a9;
        *a9 = v30;
        return result;
      }
LABEL_21:
      result = (__int64)a10;
      *a10 = 0LL;
    }
  }
  return result;
}
