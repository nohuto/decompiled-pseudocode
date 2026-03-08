/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C01B2DB4
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01B2F60 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C024B170 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rax

  memset_0(this, 0, 0xC8uLL);
  *((_BYTE *)this + 200) = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(128LL);
  v3 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v4 = *CurrentThreadWin32Thread;
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 8) )
      {
        *(_QWORD *)this = v4;
        if ( (int)ReferenceW32Thread(*v3) <= 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 85);
      }
    }
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 56);
    ExInitializeFastOwnerEntry((char *)this + 128);
    *((_DWORD *)this + 11) |= 4u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    *((_BYTE *)this + 200) = 1;
  }
  return this;
}
