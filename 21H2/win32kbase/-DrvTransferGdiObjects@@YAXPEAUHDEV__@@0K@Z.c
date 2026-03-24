/*
 * XREFs of ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0144770
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C000DB10 (HmgSafeNextObjt.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0010F60 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00218E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C0148D0C (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 */

void __fastcall DrvTransferGdiObjects(struct SURFACE **a1, HDEV a2)
{
  _QWORD *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rsi
  __int64 Objt; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r8d
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // r8d
  struct SURFACE **v23; // [rsp+30h] [rbp+8h] BYREF
  struct PDEV *v24; // [rsp+38h] [rbp+10h] BYREF

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1);
  v4[3] = a1;
  v4[4] = a2;
  v4[5] = 15LL;
  WdLogEvent5_WdEvent(v4);
  v23 = a1;
  v24 = (struct PDEV *)a2;
  GreAcquireHmgrSemaphore(v6, v5, v7);
  LODWORD(v8) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v8, 1);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( *(HDEV *)(Objt + 48) == a2 )
    {
      *(_DWORD *)(Objt + 36) &= ~0x2000u;
      *(_QWORD *)(Objt + 48) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v23, v10, v11);
      PDEVOBJ::vUnreferencePdev(&v24, 0, v12);
    }
  }
  LODWORD(v13) = 0;
  while ( 1 )
  {
    v14 = (__int64 *)HmgSafeNextObjt(v13, 5);
    if ( !v14 )
      break;
    v13 = *v14;
    if ( (HDEV)v14[6] == a2 )
      v14[6] = (__int64)a1;
  }
  LODWORD(v15) = 0;
  while ( 1 )
  {
    v16 = (__int64 *)HmgSafeNextObjt(v15, 28);
    if ( !v16 )
      break;
    v15 = *v16;
    if ( (HDEV)v16[5] == a2 )
    {
      v16[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v23, v17, v18);
      PDEVOBJ::vUnreferencePdev(&v24, 0, v19);
    }
  }
  vTransferWndObjs(a1[319], a2, (HDEV)a1);
  GreReleaseHmgrSemaphore(v21, v20, v22);
}
