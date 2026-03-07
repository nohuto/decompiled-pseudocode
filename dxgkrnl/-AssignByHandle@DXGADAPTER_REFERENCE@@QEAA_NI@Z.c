char __fastcall DXGADAPTER_REFERENCE::AssignByHandle(struct DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rsi
  DXGADAPTER *v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  char v11; // di
  DXGADAPTER *v12; // [rsp+50h] [rbp-18h] BYREF

  v3 = a2;
  v4 = *this;
  if ( v4 )
  {
    DXGADAPTER::ReleaseReference(v4);
    *this = 0LL;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v4);
  if ( Current )
  {
    v11 = 1;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v12, v3, Current, this, 1);
    if ( *this )
    {
      _InterlockedAdd64((volatile signed __int64 *)*this + 3, 1uLL);
      this[1] = (struct DXGADAPTER *)-1LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, v3);
      v11 = 0;
    }
    if ( v12 )
      DXGADAPTER::ReleaseReference(v12);
    return v11;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry1(2LL, CurrentProcess);
    v9 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current process 0x%I64x does not have DXGPROCESS.",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
