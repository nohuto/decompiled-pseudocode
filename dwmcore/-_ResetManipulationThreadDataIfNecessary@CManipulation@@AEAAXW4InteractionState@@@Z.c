/*
 * XREFs of ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x18020BDD4
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z @ 0x18020B620 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipula.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x18020BA30 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x18020AE68 (-Reset@ManipulationData@@QEAAXXZ.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x18020C3E4 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

void __fastcall CManipulation::_ResetManipulationThreadDataIfNecessary(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // r8d

  v2 = *(_DWORD *)(a1 + 236);
  v3 = a2;
  if ( a2 != v2 )
  {
    if ( (*(_BYTE *)(a1 + 448) & 4) != 0 )
      goto LABEL_7;
    if ( (unsigned int)(v2 - 2) <= 2 && (unsigned int)(a2 - 2) > 2 )
      CManipulation::_UpdateCaptureState((CManipulation *)a1, 0);
    if ( (*(_BYTE *)(a1 + 448) & 4) != 0 )
    {
LABEL_7:
      if ( (unsigned int)(*(_DWORD *)(a1 + 236) - 2) > 2 && (unsigned int)(v3 - 2) <= 2 )
        ManipulationData::Reset((ManipulationData *)(a1 + 80));
    }
  }
}
