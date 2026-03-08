/*
 * XREFs of ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800F7748
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180041458 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800462A8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800F3CD0 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CSecondaryBitmap::IsRegionValid(_DWORD *a1, int *a2, __int64 a3)
{
  int v4; // r9d
  int v5; // eax
  int v6; // r10d
  int v7; // r11d
  int v8; // edx
  const struct FastRegion::Internal::CRgnData **v9; // rsi
  char v10; // di
  char v11; // di
  int v12; // eax
  _DWORD *v14; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v15[3]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v16[2]; // [rsp+34h] [rbp-4Ch] BYREF
  _DWORD v17[13]; // [rsp+3Ch] [rbp-44h] BYREF
  _QWORD savedregs[3]; // [rsp+80h] [rbp+0h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]

  v14 = v15;
  if ( a2 )
  {
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v7 = a2[3];
  }
  else
  {
    v4 = *a1;
    v5 = a1[1];
    v6 = a1[2];
    v7 = a1[3];
  }
  if ( v4 >= v6 || v5 >= v7 )
  {
    v8 = 0;
  }
  else
  {
    v16[0] = v5;
    v15[1] = v4;
    v15[2] = v6;
    v17[2] = v4;
    v16[1] = (unsigned int)savedregs - 60 - (unsigned int)v16;
    v8 = 2;
    v17[3] = v6;
    v17[0] = v7;
    v17[1] = (unsigned int)savedregs - 60 - (unsigned int)v17 + 8;
  }
  v15[0] = v8;
  v9 = (const struct FastRegion::Internal::CRgnData **)(a1 + 4);
  if ( v8 && *(_DWORD *)*v9 )
    v10 = FastRegion::Internal::CRgnData::Intersects((const struct FastRegion::Internal::CRgnData *)v15, *v9);
  else
    v10 = 0;
  v11 = v10 ^ 1;
  if ( a3 )
  {
    if ( v11 )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)a3 = 0;
    }
    else
    {
      v12 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v14, v9);
      if ( v12 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
      CRegion::GetBoundingRect((CRegion *)&v14, (struct MilRectU *)a3);
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v14);
  return v11;
}
