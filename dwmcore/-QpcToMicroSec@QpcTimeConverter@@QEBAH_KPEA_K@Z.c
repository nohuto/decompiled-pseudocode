/*
 * XREFs of ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18019CBB0
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C094 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019E3BC (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18019E5C8 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x180281040 (-GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x180281700 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QpcTimeConverter::QpcToMicroSec(QpcTimeConverter *this, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( *(_QWORD *)this )
  {
    *a3 = *((_QWORD *)this + 1) * (a2 / *(_QWORD *)this)
        + *((_QWORD *)this + 1) * (a2 - *(_QWORD *)this * (a2 / *(_QWORD *)this)) / *(_QWORD *)this;
    return 1LL;
  }
  else
  {
    *a3 = 0LL;
    return 0LL;
  }
}
