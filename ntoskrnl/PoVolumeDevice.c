/*
 * XREFs of PoVolumeDevice @ 0x14087017C
 * Callers:
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140944740 (IoVerifyVolume.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x1403BF328 (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex(&PopVolumeLock);
    v2 = (_QWORD *)(Dope + 72);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v3 = (_QWORD *)qword_140C3D5E8;
      if ( *(__int64 **)qword_140C3D5E8 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140C3D5E8 = Dope + 72;
    }
    ExReleaseFastMutex(&PopVolumeLock);
  }
}
