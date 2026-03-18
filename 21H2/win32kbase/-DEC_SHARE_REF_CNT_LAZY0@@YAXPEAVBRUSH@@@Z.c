/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290
 * Callers:
 *     GreDCSelectBrush @ 0x1C001DC40 (GreDCSelectBrush.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreDCSelectPen @ 0x1C0098770 (GreDCSelectPen.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1C00DAFA4 (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022BD0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0022C00 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rdi
  int v2; // esi
  int v3; // ebx
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  GdiHandleEntryDirectory *v6; // rcx
  struct OBJECT *EntryObject; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // [rsp+28h] [rbp-30h] BYREF
  int v10; // [rsp+30h] [rbp-28h]
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  GdiHandleEntryTable *v12; // [rsp+68h] [rbp+10h] BYREF
  struct HOBJ__ *v13; // [rsp+70h] [rbp+18h]

  if ( a1 )
  {
    v1 = *a1;
    v13 = *a1;
    if ( (unsigned __int16)HmgDecrementShareReferenceCountEx(a1, 0LL) == 1 )
    {
      v2 = 0;
      v9 = 0LL;
      v10 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v9, v1, 0x10u);
      v3 = v10;
      if ( v10 )
      {
        v4 = gpHandleManager;
        v5 = GdiHandleManager::DecodeIndex(gpHandleManager, *v9 & 0xFFFFFF);
        v6 = (GdiHandleEntryDirectory *)*((_QWORD *)v4 + 2);
        v12 = 0LL;
        v11 = 0;
        if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v6, v5, &v12, &v11) )
          EntryObject = GdiHandleEntryTable::GetEntryObject(v12, v11);
        else
          EntryObject = 0LL;
        v8 = (_DWORD *)*((_QWORD *)EntryObject + 6);
        if ( v8 )
          v2 = *v8 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
        v3 = v10;
      }
      if ( v2 )
        bDeleteBrush((HBRUSH)v1);
      if ( v3 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
    }
  }
}
