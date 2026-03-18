/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C01B1BF0
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01B1DA0 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0248490 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _OWORD v11[4]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+E0h] [rbp-18h]

  memset_0(this, 0, 0xC8uLL);
  *((_BYTE *)this + 200) = 0;
  v2 = *((_OWORD *)this + 9);
  v11[0] = *((_OWORD *)this + 8);
  v3 = *((_OWORD *)this + 10);
  v11[1] = v2;
  v4 = *((_OWORD *)this + 11);
  v5 = *((_QWORD *)this + 24);
  v11[2] = v3;
  v11[3] = v4;
  v12 = v5;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(128LL, v11, v6);
  v8 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v9 = *CurrentThreadWin32Thread;
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 8) )
      {
        *(_QWORD *)this = v9;
        if ( (int)ReferenceW32Thread(*v8) <= 1 )
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
