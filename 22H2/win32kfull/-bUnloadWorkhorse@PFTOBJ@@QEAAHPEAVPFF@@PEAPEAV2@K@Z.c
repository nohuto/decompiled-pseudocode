/*
 * XREFs of ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00A20A8
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00A1E64 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C010E844 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     PFTOBJ_bUnloadWorkhorseWrap @ 0x1C0272D70 (PFTOBJ_bUnloadWorkhorseWrap.c)
 *     GreRemoveFontMemResourceEx @ 0x1C028AE28 (GreRemoveFontMemResourceEx.c)
 *     GreRemoveFontResourceW @ 0x1C028AF00 (GreRemoveFontResourceW.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02ACD48 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02BAD7C (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C00A2274 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     prfntKillList @ 0x1C00A5390 (prfntKillList.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00A57FC (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C00A5888 (bKillPFFOBJ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C00B9EB4 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00BB8C8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     vKillRFONTList @ 0x1C0272C2C (vKillRFONTList.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BB348 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, struct PFF **a3, unsigned int a4)
{
  struct PFF *v4; // rsi
  unsigned int v5; // edi
  int v10; // eax
  struct tagPvtData *v11; // r8
  int v13; // r12d
  int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]
  struct PFF **v21; // [rsp+A8h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = 0;
  if ( !a2 )
    goto LABEL_6;
  v10 = *((_DWORD *)a2 + 13);
  v11 = 0LL;
  v18[0] = a2;
  if ( (v10 & 1) != 0 )
  {
    v5 = 1;
    if ( *((_DWORD *)a2 + 14) || *((_DWORD *)a2 + 15) || *((_QWORD *)a2 + 18) || *((_DWORD *)a2 + 16) )
      goto LABEL_6;
    v4 = a2;
  }
  else
  {
    if ( *(struct PFT **const *)this == gpPFTPrivate )
    {
      v11 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v18);
      if ( !v11 )
        goto LABEL_6;
    }
    LODWORD(v21) = 0;
    v5 = 1;
    if ( (unsigned int)PFFOBJ::bDeleteLoadRef((PFFOBJ *)v18, a4, v11, (int *)&v21) )
    {
      PFFOBJ::vRemoveHash((PFFOBJ *)v18);
      v13 = *((_DWORD *)a2 + 13);
      if ( !*((_DWORD *)a2 + 16) )
        v4 = a2;
      v21 = a3;
      v14 = v13 & 0x200;
      if ( !a3 )
      {
        PUBLIC_PFTOBJ::pPFFGet(
          this,
          *((const unsigned __int16 **)a2 + 3),
          *((_DWORD *)a2 + 8),
          *((_DWORD *)a2 + 9),
          *((struct tagDESIGNVECTOR **)a2 + 5),
          *((_DWORD *)a2 + 12),
          &v21,
          0);
        a3 = v21;
      }
      if ( *a3 == a2 )
        *a3 = (struct PFF *)*((_QWORD *)a2 + 1);
      v15 = *((_QWORD *)a2 + 1);
      if ( v15 )
        *(_QWORD *)(v15 + 16) = *((_QWORD *)a2 + 2);
      v16 = *((_QWORD *)a2 + 2);
      if ( v16 )
        *(_QWORD *)(v16 + 8) = *((_QWORD *)a2 + 1);
      v17 = *(_QWORD *)this;
      if ( !v14 )
        ++*(_DWORD *)(v17 + 32);
      --*(_DWORD *)(v17 + 28);
    }
    else
    {
      if ( *(struct PFT **const *)this != gpPFTPrivate || !(_DWORD)v21 )
        goto LABEL_6;
      v5 = 0;
    }
  }
  if ( !v4 )
  {
LABEL_6:
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    return v5;
  }
  v18[0] = v4;
  if ( prfntKillList(v18) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    vKillRFONTList((PFFOBJ *)v18);
  }
  else
  {
    v20 = 0LL;
    v19 = 0LL;
    if ( (unsigned int)bKillPFFOBJ(v18, &v19) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
      vCleanupFontFile((struct PFFCLEANUP *)&v19);
    }
    else
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
  }
  return 1;
}
