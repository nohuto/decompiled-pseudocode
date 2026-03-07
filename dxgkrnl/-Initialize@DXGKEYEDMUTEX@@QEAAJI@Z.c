__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this, int a2)
{
  int v3; // eax
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v7[8]; // [rsp+50h] [rbp-18h] BYREF
  char v8; // [rsp+58h] [rbp-10h]

  if ( a2 )
  {
    *((_DWORD *)this + 8) = a2;
    *((_BYTE *)this + 176) = 1;
    return 0LL;
  }
  if ( (*((_DWORD *)this + 43) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v7);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v3 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v3;
  if ( v3 )
  {
    Current = DXGPROCESS::GetCurrent(v4);
    WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 8), Current);
    if ( v8 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    return 0LL;
  }
  WdLogSingleEntry2(6LL, this, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"KeyedMutex 0x%I64x: Unable to create keyed mutex handle, returning 0x%I64x",
    (__int64)this,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
  if ( v8 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return 3221225495LL;
}
