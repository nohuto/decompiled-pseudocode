/*
 * XREFs of ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C01A9D00
 * Callers:
 *     <none>
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0128740 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01AF1F0 (SynthesizeMouseInputForPTP.c)
 */

__int64 __fastcall CHidInput::OnPTPMarshalNotification(CHidInput *this)
{
  InputTraceLogging::Mouse::InjectInput();
  SynthesizeMouseInputForPTP(
    *((_QWORD *)this + 162),
    (_DWORD)this + 1304,
    *((_QWORD *)this + 166),
    *((_QWORD *)this + 167),
    *((_QWORD *)this + 167),
    *((_DWORD *)this + 336),
    0LL);
  return 0LL;
}
