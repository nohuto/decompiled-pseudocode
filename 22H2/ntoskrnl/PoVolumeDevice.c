/*
 * XREFs of PoVolumeDevice @ 0x14078018C
 * Callers:
 *     IoCreateDevice @ 0x140719130 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140893F30 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x140399604 (PopGetDope.c)
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
      v3 = (_QWORD *)qword_140C23208;
      if ( *(__int64 **)qword_140C23208 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140C23208 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
