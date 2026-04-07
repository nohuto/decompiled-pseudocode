/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180027700
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180027648 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800133F0 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180014230 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180034934 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180034960 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Initialize(
        CSecondaryWindowRepresentation *this,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // esi
  __int64 v9; // r10
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v15; // eax
  int SnapshotIndex; // eax
  CTransitionVisualController *v17; // rcx
  int v18; // r9d
  struct CTransitionWindowSnapshot *v19; // r8
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v22; // [rsp+50h] [rbp+8h] BYREF
  struct CTransitionWindowSnapshot *v23; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  *((_DWORD *)this + 41) = a5;
  *((_DWORD *)this + 30) = a6;
  v9 = a4;
  *((_DWORD *)this + 10) = a2;
  *((_QWORD *)this + 4) = a4;
  *((_QWORD *)this + 21) = a3;
  if ( (a2 & 1) != 0 )
  {
    v12 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
    v13 = v12;
    if ( v12 < 0 )
    {
      v21 = 140;
LABEL_18:
      v18 = v12;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v21);
      return (unsigned int)v13;
    }
    v9 = *((_QWORD *)this + 4);
  }
  v22 = this;
  v10 = *(_DWORD *)(v9 + 456);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_20;
  }
  if ( v11 <= *(_DWORD *)(v9 + 452) )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 432) + 8LL * v10) = this;
    *(_DWORD *)(v9 + 456) = v11;
    goto LABEL_5;
  }
  v15 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 432, 8u, 1, &v22);
  v13 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xC0u);
  if ( v13 < 0 )
  {
LABEL_20:
    v21 = 143;
    v18 = v13;
    goto LABEL_21;
  }
LABEL_5:
  v12 = CSecondaryWindowRepresentation::OnRepresentationUpdated(this);
  v13 = v12;
  if ( v12 < 0 )
  {
    v21 = 150;
    goto LABEL_18;
  }
  if ( (*((_DWORD *)this + 10) & 0x400) != 0 )
  {
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                      *(HWND *)(a4 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v17, SnapshotIndex, &v23) >= 0 )
    {
      v19 = v23;
      if ( *((_BYTE *)v23 + 356) )
      {
        v20 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL) >= 0 )
          v20 = *(_DWORD *)(*((_QWORD *)this + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 4) + 48LL);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 35) + 32LL) + 56LL)
           - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 35) + 32LL) + 48LL) >= 0 )
          v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 35) + 32LL) + 56LL)
             - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 35) + 32LL) + 48LL);
        if ( v6 == v20 )
        {
          *((_QWORD *)this + 51) = v23;
          _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
          *((_BYTE *)this + 160) = 1;
        }
      }
    }
  }
  return (unsigned int)v13;
}
