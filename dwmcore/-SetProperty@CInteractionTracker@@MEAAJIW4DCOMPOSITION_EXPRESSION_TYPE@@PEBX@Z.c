/*
 * XREFs of ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180231950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18012F062 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x18012F110 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180231528 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x180231638 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1802316DC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1802317EC (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180231890 (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x180231D28 (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x18023434C (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 */

__int64 __fastcall CInteractionTracker::SetProperty(__int64 a1, int a2, int a3, const struct D2DVector3 *a4)
{
  char v4; // bp
  char v5; // si
  float v6; // xmm6_4
  char v7; // di
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  BOOL v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v22; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  v6 = *(float *)(a1 + 136);
  v7 = 0;
  v22 = *(_QWORD *)(a1 + 80);
  if ( a3 != 18 )
  {
    if ( a3 != 52 )
      goto LABEL_3;
    v9 = a2 - 1;
    if ( !v9 )
    {
      CInteractionTracker::SetPosition(a1, (__int64)a4, 0);
      goto LABEL_28;
    }
    v10 = v9 - 22;
    if ( v10 )
    {
      v11 = v10 - 3;
      if ( v11 )
      {
        if ( v11 == 35 )
        {
          CInteractionTracker::SetPositionInertiaDecayRate((CInteractionTracker *)a1, a4);
          goto LABEL_28;
        }
LABEL_3:
        v4 = 1;
LABEL_28:
        v15 = 0;
        goto LABEL_29;
      }
      CInteractionTracker::SetMaxPosition((CInteractionTracker *)a1, a4);
    }
    else
    {
      CInteractionTracker::SetMinPosition((CInteractionTracker *)a1, a4);
    }
    if ( *(float *)&v22 != *(float *)(a1 + 80) )
      v5 = 1;
    if ( *((float *)&v22 + 1) != *(float *)(a1 + 84) )
      v7 = 1;
    goto LABEL_28;
  }
  v12 = a2 - 2;
  if ( !v12 )
  {
    CInteractionTracker::SetScale(a1, *(float *)a4, 0);
    goto LABEL_28;
  }
  v13 = v12 - 27;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 34 )
      {
        CInteractionTracker::SetScaleInertiaDecayRate((CInteractionTracker *)a1, *(float *)a4);
        goto LABEL_28;
      }
      goto LABEL_3;
    }
    CInteractionTracker::SetMaxScale((CInteractionTracker *)a1, *(float *)a4);
  }
  else
  {
    CInteractionTracker::SetMinScale((CInteractionTracker *)a1, *(float *)a4);
  }
  v15 = v6 != *(float *)(a1 + 136);
  if ( *(float *)&v22 != *(float *)(a1 + 80) )
    v5 = 1;
  if ( *((float *)&v22 + 1) != *(float *)(a1 + 84) )
    v7 = 1;
LABEL_29:
  v16 = *(_QWORD *)(a1 + 640);
  if ( v16 )
  {
    v17 = 4 * v15;
    v18 = v17 | 1;
    if ( !v5 )
      v18 = v17;
    v19 = v18 | 2;
    if ( !v7 )
      v19 = v18;
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(v16, a1, a1, v19);
  }
  if ( v4 )
  {
    v20 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x58Eu, 0LL);
  }
  else
  {
    return 0;
  }
  return v20;
}
