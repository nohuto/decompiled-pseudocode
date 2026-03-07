bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbp
  unsigned __int8 v8; // r8
  struct DXGPROCESS *v9; // rax
  unsigned int HostHandle; // r14d
  unsigned int v12; // ebx
  struct DXGGLOBAL *v13; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry1(1LL, 2482LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockExclusiveOwner()",
      2482LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v5);
  if ( (_DWORD)v2 )
  {
    if ( (*((_DWORD *)this + 71) & 2) != 0 )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2, v8);
      if ( HostHandle )
      {
        v12 = *((_DWORD *)Current + 126);
        v13 = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v13 + 214), v12, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPROCESS::FreeHandleSafe(Current, v2);
  }
  if ( !*((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 2508LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 2508LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = DXGPROCESS::GetCurrent(v6);
  WdLogSingleEntry3(4LL, this, v2, v9);
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
