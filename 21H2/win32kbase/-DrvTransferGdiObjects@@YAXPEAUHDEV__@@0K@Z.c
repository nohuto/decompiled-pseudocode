/*
 * XREFs of ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0171840
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C008DCA0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C0175540 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 */

void __fastcall DrvTransferGdiObjects(struct SURFACE **a1, HDEV a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 Objt; // rax
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // r8d
  struct SURFACE **v22; // [rsp+30h] [rbp+8h] BYREF
  struct PDEV *v23; // [rsp+38h] [rbp+10h] BYREF

  WdLogSingleEntry3(4LL, a1, a2, 15LL);
  v22 = a1;
  v23 = (struct PDEV *)a2;
  GreAcquireHmgrSemaphore(v5, v4, v6);
  LODWORD(v7) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v7, 1);
    if ( !Objt )
      break;
    v7 = *(_QWORD *)Objt;
    if ( *(HDEV *)(Objt + 48) == a2 )
    {
      *(_DWORD *)(Objt + 36) &= ~0x2000u;
      *(_QWORD *)(Objt + 48) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v22, v9, v10);
      PDEVOBJ::vUnreferencePdev(&v23, 0, v11);
    }
  }
  LODWORD(v12) = 0;
  while ( 1 )
  {
    v13 = (__int64 *)HmgSafeNextObjt(v12, 5);
    if ( !v13 )
      break;
    v12 = *v13;
    if ( (HDEV)v13[6] == a2 )
      v13[6] = (__int64)a1;
  }
  LODWORD(v14) = 0;
  while ( 1 )
  {
    v15 = (__int64 *)HmgSafeNextObjt(v14, 28);
    if ( !v15 )
      break;
    v14 = *v15;
    if ( (HDEV)v15[5] == a2 )
    {
      v15[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v22, v16, v17);
      PDEVOBJ::vUnreferencePdev(&v23, 0, v18);
    }
  }
  vTransferWndObjs(a1[316], a2, (HDEV)a1);
  GreReleaseHmgrSemaphore(v20, v19, v21);
}
