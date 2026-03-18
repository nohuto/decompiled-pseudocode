/*
 * XREFs of ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C01E21C0
 * Callers:
 *     <none>
 * Callees:
 *     SynthesizeMouseInput @ 0x1C00B2BC0 (SynthesizeMouseInput.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C015315C (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPMarshalNotification(CHidInput *this)
{
  InputTraceLogging::Mouse::InjectInput();
  SynthesizeMouseInput(
    *((_QWORD *)this + 168),
    (__int64)this + 1352,
    *((_QWORD *)this + 172),
    *((_QWORD *)this + 173),
    *((_DWORD *)this + 348));
  return 0LL;
}
