/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C01B2F14
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01B2F60 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C024B170 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  __int64 v1; // rcx

  if ( *((_BYTE *)this + 200) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else
  {
    v1 = *(_QWORD *)this;
    if ( v1 )
      DereferenceW32Thread(v1);
  }
}
