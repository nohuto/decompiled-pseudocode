/*
 * XREFs of ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x1801C7E48
 * Callers:
 *     ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x1801CA184 (-ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTI.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801C7FE0 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CC018 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionTracker::ApplyPositionShift(__int64 a1, int a2, float a3)
{
  int v3; // eax
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 168);
  if ( v3 )
  {
    LODWORD(v4) = v3 - 1;
    if ( (unsigned int)v4 <= 1 )
    {
      LOBYTE(v4) = CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1);
      if ( (_BYTE)v4 )
      {
        if ( v5 )
        {
          if ( v5 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v4 = *(_QWORD *)(v6 + 336);
        }
        else
        {
          v4 = *(_QWORD *)(v6 + 328);
        }
        *(float *)(v4 + 616) = a3 + *(float *)(v4 + 616);
      }
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 80);
    v9 = *(_QWORD *)(a1 + 72);
    v10 = v7;
    if ( a2 )
      *((float *)&v9 + 1) = *((float *)&v9 + 1) + a3;
    else
      *(float *)&v9 = *(float *)&v9 + a3;
    LOBYTE(v4) = CInteractionTracker::SetPosition(a1, &v9, 0LL);
  }
  return v4;
}
