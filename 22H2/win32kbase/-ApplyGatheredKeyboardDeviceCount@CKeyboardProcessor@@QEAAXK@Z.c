/*
 * XREFs of ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C006C8C0
 * Callers:
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C006C690 (ApplyGatheredKeyboardDeviceCount.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C006EB00 (UpdateKeyLights.c)
 */

void __fastcall CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(CKeyboardProcessor *this, unsigned __int32 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  if ( a2 > *((_DWORD *)this + 5) )
  {
    UpdateKeyLights(0LL);
    v8 = SGDGetUserSessionState(v5, v4, v6, v7);
    *(_DWORD *)(v8 + 12616) |= 1u;
  }
  _InterlockedExchange((volatile __int32 *)this + 5, a2);
}
