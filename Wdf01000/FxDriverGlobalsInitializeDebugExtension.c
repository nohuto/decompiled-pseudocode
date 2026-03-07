void __fastcall FxDriverGlobalsInitializeDebugExtension(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *Key)
{
  __int64 Pool2; // rax
  __int64 v5; // rbx
  FxStateSeparationDetectionOption *v6; // r15
  FxTrackPowerOption *v7; // r14

  Pool2 = ExAllocatePool2(64LL, 456LL, FxDriverGlobals->Tag);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 440) = 0LL;
    v6 = (FxStateSeparationDetectionOption *)(Pool2 + 452);
    *(_BYTE *)(Pool2 + 432) = 1;
    *(_DWORD *)(Pool2 + 452) = 0;
    v7 = (FxTrackPowerOption *)(Pool2 + 448);
    *(_QWORD *)(Pool2 + 424) = Pool2 + 416;
    *(_QWORD *)(Pool2 + 416) = Pool2 + 416;
    *(_BYTE *)(Pool2 + 448) = 0;
    FxDriverGlobals->DebugExtension = (FxDriverGlobalsDebugExtension *)Pool2;
    if ( Key )
    {
      *(_QWORD *)Pool2 = FxVerifierGetObjectDebugInfo(Key, FxDriverGlobals);
      FxVerifierQueryTrackPower(Key, v7);
      FxVerifierQueryStateSeparationDetection(Key, v6);
    }
    *(_QWORD *)(v5 + 408) = 0LL;
  }
}
