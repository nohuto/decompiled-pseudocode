void __fastcall CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(
        CKeyboardProcessor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int32 v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  v4 = a2;
  if ( (unsigned int)a2 > *((_DWORD *)this + 5) )
  {
    UpdateKeyLights(0LL, a2, a3, a4);
    v10 = SGDGetUserSessionState(v7, v6, v8, v9);
    *(_DWORD *)(v10 + 12616) |= 1u;
  }
  _InterlockedExchange((volatile __int32 *)this + 5, v4);
}
