/*
 * XREFs of ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180271C7C
 * Callers:
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180231528 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1802316DC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180231B08 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180271598 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x180271824 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x18027195C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     _lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator() @ 0x180272DA0 (_lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_--operator().c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180272FD0 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::ReconfigureAllManipulations(InteractionSourceManager *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  int v4; // edi
  CChainingHelper *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v4 = 0;
    v5 = (CChainingHelper *)i[3];
    v10 = i[2];
    v6 = *((_QWORD *)this + 1);
    v8[1] = v5;
    v7 = *(_QWORD *)(v6 + 16);
    v8[0] = &v9;
    v8[2] = &v10;
    v9 = v7;
    do
      lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator()(v8, (unsigned int)v4++);
    while ( v4 < 3 );
    CChainingHelper::UpdateConfigurationIfDirty(v5);
  }
}
