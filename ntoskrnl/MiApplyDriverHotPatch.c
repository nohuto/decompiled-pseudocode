/*
 * XREFs of MiApplyDriverHotPatch @ 0x140A31BB8
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     MiSessionLookupImage @ 0x14036C7B8 (MiSessionLookupImage.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VslApplyHotPatch @ 0x140548770 (VslApplyHotPatch.c)
 *     MiLinkHotPatchToBase @ 0x1406402B8 (MiLinkHotPatchToBase.c)
 *     MiUpdatePatchInProgress @ 0x140640B6C (MiUpdatePatchInProgress.c)
 *     RtlFindExportedRoutineByName @ 0x1407EBE40 (RtlFindExportedRoutineByName.c)
 *     MiFreeLoadedImportList @ 0x1407F6CA0 (MiFreeLoadedImportList.c)
 *     MiUnlockDriverPages @ 0x14087313C (MiUnlockDriverPages.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14093F1B4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x14093FB88 (VslObtainHotPatchUndoTable.c)
 *     MiAddEntryToImportList @ 0x140A282AC (MiAddEntryToImportList.c)
 *     MiPrepareDriverPatchState @ 0x140A28934 (MiPrepareDriverPatchState.c)
 *     MiActOnPatchInAllSessions @ 0x140A31950 (MiActOnPatchInAllSessions.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A32268 (MiApplyHotPatchToDriverDataPages.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A336F0 (MiCheckPatchesInSupportedSections.c)
 *     MiIdentifyImageDiscardablePages @ 0x140A349B4 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A34ABC (MiIdentifyPatchImageDataPages.c)
 *     MiInvokePatchCallback @ 0x140A351D0 (MiInvokePatchCallback.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     MiPrepareDriverForHotPatch @ 0x140A37BA4 (MiPrepareDriverForHotPatch.c)
 *     MiGetSectionStrongImageReference @ 0x140A40B24 (MiGetSectionStrongImageReference.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A411E8 (MiAllocateKernelCfgBitmapPageTables.c)
 *     RtlFindHotPatchBase @ 0x140A7380C (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x140A7383C (RtlFindHotPatchInformation.c)
 *     RtlPatchContainsCallTarget @ 0x140A73A04 (RtlPatchContainsCallTarget.c)
 *     RtlValidateHotPatchBase @ 0x140A73A54 (RtlValidateHotPatchBase.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyDriverHotPatch(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v6; // r15
  __int64 result; // rax
  __int64 v8; // r14
  int v9; // ecx
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int SectionStrongImageReference; // ebx
  unsigned __int64 SessionVm; // rax
  __int64 v15; // r12
  int v16; // eax
  void *v17; // rcx
  __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // r12
  int v21; // eax
  int v22; // eax
  int v23; // eax
  BOOL v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh]
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __int64 HotPatchBase; // [rsp+58h] [rbp-B0h]
  _QWORD v28[8]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v29; // [rsp+A8h] [rbp-60h]
  void *v30; // [rsp+B0h] [rbp-58h]
  __int64 v31[14]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v32[20]; // [rsp+128h] [rbp+20h] BYREF
  int v33; // [rsp+1E0h] [rbp+D8h]

  v24 = 0;
  LODWORD(v26) = 0;
  v25 = 0;
  v33 = 0;
  v6 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( (*(_DWORD *)(a2 + 196) & 0x20) != 0 )
    return 3221225496LL;
  v28[3] = RtlFindHotPatchInformation(*(_QWORD *)(a1 + 48));
  v8 = v28[3];
  HotPatchBase = RtlFindHotPatchBase(v28[3]);
  if ( !HotPatchBase )
    return 3221225595LL;
  v10 = *(_DWORD *)(a1 + 64);
  v11 = *(_DWORD *)(a2 + 64);
  if ( !(unsigned __int8)RtlValidateHotPatchBase(v9, HotPatchBase, v11, v10) )
    return 3221225595LL;
  memset(v31, 0, 0x68uLL);
  v31[0] = a2;
  v31[1] = HotPatchBase;
  LODWORD(v31[3]) = (v11 >> 12) + ((v11 & 0xFFF) != 0);
  memset(v32, 0, 0x68uLL);
  v32[0] = a1;
  LODWORD(v32[3]) = (v10 >> 12) + ((v10 & 0xFFF) != 0);
  if ( !*(_QWORD *)(a2 + 280) )
    goto LABEL_11;
  result = VslDetermineHotPatchUndoTableSize(*(_QWORD *)(a2 + 48), &v24);
  if ( (int)result < 0 )
    return result;
  v12 = v24;
  if ( !v24 )
    goto LABEL_11;
  v28[5] = MiAllocatePool(256, v24, 0x54555048u);
  if ( !v28[5] )
    return 3221225626LL;
  SectionStrongImageReference = VslObtainHotPatchUndoTable(*(PVOID *)(a2 + 48), v28[5], v12);
  if ( SectionStrongImageReference >= 0 )
  {
LABEL_11:
    if ( (a4 & 1) != 0 )
      SessionVm = MiGetSessionVm();
    else
      SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
    v29 = 0LL;
    v15 = SessionVm;
    v16 = *(_DWORD *)(a1 + 196);
    v17 = *(void **)(a2 + 136);
    v30 = v17;
    if ( (v16 & 0x20) == 0 && v17 != (void *)1 )
    {
      if ( (a4 & 1) != 0 )
      {
        v29 = MiSessionLookupImage(*(_QWORD *)(a2 + 48));
        v17 = (void *)v29[11];
        v30 = v17;
      }
      v6 = MiAddEntryToImportList((__int64 *)v17, a1);
      if ( !v6 )
      {
        SectionStrongImageReference = -1073741670;
        goto LABEL_64;
      }
    }
    SectionStrongImageReference = MiPrepareDriverPatchState((__int64)v31, v15);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_64;
    SectionStrongImageReference = MiPrepareDriverPatchState((__int64)v32, v15);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_64;
    v18 = *(unsigned int *)(HotPatchBase + 24);
    v28[0] = v31;
    v19 = v8 + v18;
    v28[4] = v19;
    v28[1] = v32;
    v28[2] = a3;
    v24 = !(a4 & 1);
    SectionStrongImageReference = MiIdentifyPatchImageDataPages(v28, !(a4 & 1));
    if ( SectionStrongImageReference < 0 )
      goto LABEL_64;
    SectionStrongImageReference = MiIdentifyImageDiscardablePages(v31);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_64;
    if ( (*(_BYTE *)(a1 + 196) & 0x20) == 0 && (a4 & 1) != 0 )
    {
      SectionStrongImageReference = MiCheckPatchesInSupportedSections(v28);
      if ( SectionStrongImageReference < 0 )
        goto LABEL_64;
    }
    SectionStrongImageReference = MiPrepareDriverForHotPatch(v28);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_64;
    HotPatchBase = *(_QWORD *)(a3 + 96);
    SectionStrongImageReference = MiGetSectionStrongImageReference(HotPatchBase);
    if ( SectionStrongImageReference < 0 )
      goto LABEL_64;
    if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
    {
      v20 = HotPatchBase;
      goto LABEL_45;
    }
    if ( (MiFlags & 0x40000) == 0
      || !(unsigned int)RtlPatchContainsCallTarget(v8, v19)
      || (SectionStrongImageReference = MiAllocateKernelCfgBitmapPageTables(
                                          *(_QWORD *)(a1 + 48),
                                          *(unsigned int *)(a1 + 64),
                                          0LL),
          SectionStrongImageReference >= 0) )
    {
      v20 = HotPatchBase;
      v21 = VslApplyHotPatch(
              *(_QWORD *)(HotPatchBase + 56),
              *(_QWORD *)(a1 + 112),
              *(_QWORD *)(a2 + 48),
              a2,
              *(_QWORD *)(a1 + 48),
              a1,
              v24 | 2u,
              0LL);
      SectionStrongImageReference = v21;
      if ( v21 < 0 )
      {
        if ( v21 == -1073740628 )
          KeBugCheckEx(0x1Au, 0x485019uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
        goto LABEL_64;
      }
      SectionStrongImageReference = MiApplyHotPatchToDriverDataPages(v28);
      if ( SectionStrongImageReference >= 0 )
      {
        if ( (*(_DWORD *)(a2 + 196) & 0x100) != 0 )
          v28[6] = RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "__PatchMainCallout__");
        if ( v28[6] )
        {
          LODWORD(v28[7]) = 0;
          SectionStrongImageReference = MiInvokePatchCallback(a1, &v28[6]);
          if ( SectionStrongImageReference < 0 )
            goto LABEL_64;
          v8 = v28[3];
          v25 = 1;
        }
        if ( (a4 & 1) != 0 )
        {
          MiLogHotPatchOperationStatus(
            *(_DWORD *)(a2 + 120),
            *(_DWORD *)(a2 + 156),
            a1 + 72,
            SectionStrongImageReference,
            3);
          v22 = MiActOnPatchInAllSessions(a2, a1, 0, (__int64)v28);
          LODWORD(v26) = 1;
          SectionStrongImageReference = v22;
          if ( v22 < 0 )
            goto LABEL_64;
          v8 = v28[3];
        }
LABEL_45:
        if ( (*(_DWORD *)(a1 + 196) & 0x20) == 0 )
        {
          MiUpdatePatchInProgress(a2, a1, 0);
          v33 = 1;
        }
        v23 = VslApplyHotPatch(
                *(_QWORD *)(v20 + 56),
                *(_QWORD *)(a1 + 112),
                *(_QWORD *)(a2 + 48),
                a2,
                *(_QWORD *)(a1 + 48),
                a1,
                v24,
                0LL);
        SectionStrongImageReference = v23;
        if ( v23 >= 0 )
        {
          if ( v28[6] )
          {
            LODWORD(v28[7]) = 1;
            MiInvokePatchCallback(a1, &v28[6]);
            v25 = 0;
            if ( (a4 & 1) != 0 )
              MiActOnPatchInAllSessions(a2, a1, 3, (__int64)&v28[6]);
            v8 = v28[3];
          }
          if ( v6 )
          {
            if ( (a4 & 1) != 0 )
              v29[11] = v6;
            else
              *(_QWORD *)(a2 + 136) = v6;
            MiFreeLoadedImportList(v30);
            v6 = 0LL;
          }
          *(_QWORD *)(a2 + 280) = a1;
          if ( (*(_DWORD *)(a1 + 196) & 0x20) == 0 )
          {
            MiLinkHotPatchToBase(a2, a1, *(_DWORD *)(v8 + 8));
            v33 = 0;
          }
          LODWORD(v26) = 0;
        }
        else if ( v23 == -1073740628 )
        {
          KeBugCheckEx(0x1Au, 0x48501AuLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
        }
        if ( v33 )
          MiUpdatePatchInProgress(a2, a1, 1);
      }
    }
  }
LABEL_64:
  MiUnlockDriverPages(v31);
  MiUnlockDriverPages(v32);
  if ( v28[5] )
    ExFreePoolWithTag((PVOID)v28[5], 0);
  if ( v6 )
    MiFreeLoadedImportList(v6);
  if ( v25 )
  {
    LODWORD(v28[7]) = 2;
    MiInvokePatchCallback(a1, &v28[6]);
  }
  if ( (_DWORD)v26 )
    MiActOnPatchInAllSessions(a2, a1, 2, (__int64)v28);
  return (unsigned int)SectionStrongImageReference;
}
