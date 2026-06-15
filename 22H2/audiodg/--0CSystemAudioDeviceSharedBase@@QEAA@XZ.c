/*
 * XREFs of ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140012994
 * Callers:
 *     ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x1400128EC (--0-$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x14004488C (--0CSystemAudioDeviceShared@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x140044ED8 (--0CSystemAudioDeviceOffloadGraph@@QEAA@XZ.c)
 * Callees:
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140012A30 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 */

CSystemAudioDeviceSharedBase *__fastcall CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(
        CSystemAudioDeviceSharedBase *this)
{
  CSystemAudioDeviceBase::CSystemAudioDeviceBase(this);
  *(_QWORD *)this = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 37) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 38) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmixInternal'};
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 89) = -1;
  *((_DWORD *)this + 90) = -1;
  return this;
}
