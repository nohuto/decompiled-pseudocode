/*
 * XREFs of _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$53 @ 0x1803246EB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VViewEventArgsForWindowingSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x1803219B0 (--1-$ComPtr@VViewEventArgsForWindowingSettings@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor_53(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 0x20;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~0x20u;
    return Microsoft::WRL::ComPtr<ViewEventArgsForWindowingSettings>::~ComPtr<ViewEventArgsForWindowingSettings>((__int64 *)(a2 + 56));
  }
  return result;
}
