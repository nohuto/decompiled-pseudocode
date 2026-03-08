/*
 * XREFs of ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C02118B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0169070 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     SynthesizeMouseInput @ 0x1C0218A60 (SynthesizeMouseInput.c)
 */

__int64 __fastcall CHidInput::OnPTPMarshalNotification(CHidInput *this)
{
  __int64 *v3; // [rsp+40h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnPTPMarshalNotification", 0LL);
  InputTraceLogging::Mouse::InjectInput();
  SynthesizeMouseInput(
    *((_QWORD *)this + 179),
    (_DWORD)this + 1440,
    *((_QWORD *)this + 183),
    *((_QWORD *)this + 184),
    *((_DWORD *)this + 370));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
