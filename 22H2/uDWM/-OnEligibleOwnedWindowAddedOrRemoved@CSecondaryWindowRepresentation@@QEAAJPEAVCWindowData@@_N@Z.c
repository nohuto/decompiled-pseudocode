/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180042108
 * Callers:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180012EF0 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013558 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180027274 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18000987C (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012BB0 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180026E08 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
        CSecondaryWindowRepresentation *this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r8d
  __int64 v7; // rdx
  int inserted; // eax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int v12; // eax
  int v13; // r9d
  void *v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  CBaseObject *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0LL;
  if ( !*((_QWORD *)this + 4) )
    return v3;
  if ( !a3 )
  {
    v6 = *((_DWORD *)this + 38);
    v7 = 0LL;
    if ( !v6 )
      return v3;
    while ( *(struct CWindowData **)(*(_QWORD *)(*((_QWORD *)this + 16) + 8 * v7) + 32LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v3;
    }
    CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, v7);
    goto LABEL_11;
  }
  LODWORD(v14) = 100;
  inserted = CSecondaryWindowRepresentation::Create(1LL, (__int64)this + 16, (__int64)a2, 0, v14, &v16);
  v3 = inserted;
  if ( inserted >= 0 )
  {
    v10 = *((_DWORD *)this + 38);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 37) )
      {
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v10) = v16;
        *((_DWORD *)this + 38) = v11;
        goto LABEL_9;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 128, 8u, 1, &v16);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u);
      if ( (v3 & 0x80000000) == 0 )
      {
LABEL_9:
        _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
        inserted = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v15 = 607;
        }
        else
        {
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
                       *((struct CVisual **)v16 + 6),
                       0LL,
                       0,
                       1);
          v3 = inserted;
          if ( inserted >= 0 )
            goto LABEL_11;
          v15 = 610;
        }
        goto LABEL_17;
      }
    }
    v15 = 604;
    v13 = v3;
    goto LABEL_20;
  }
  v15 = 602;
LABEL_17:
  v13 = inserted;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v15);
LABEL_11:
  if ( v16 )
    CBaseObject::Release(v16);
  return v3;
}
