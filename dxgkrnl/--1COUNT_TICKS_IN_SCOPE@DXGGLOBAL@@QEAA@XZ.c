void __fastcall DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE(DXGGLOBAL::COUNT_TICKS_IN_SCOPE *this)
{
  ULONG v2; // eax
  ULONG v3; // edx
  ULONG v4; // r8d
  ULONG UserTime; // [rsp+30h] [rbp+8h] BYREF

  UserTime = 0;
  v2 = KeQueryRuntimeThread(KeGetCurrentThread(), &UserTime);
  v3 = *((_DWORD *)this + 2);
  v4 = v2 - v3;
  if ( v3 > v2 )
    --v4;
  _InterlockedExchangeAdd64(*(volatile signed __int64 **)this, v4);
}
