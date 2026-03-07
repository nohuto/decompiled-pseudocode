void __fastcall CTTMDEVICE::UnRegisterTtmDevice(CTTMDEVICE *this, char a2)
{
  __int64 v4; // rax
  struct _KEVENT *p_Event; // rax
  __int64 v6; // rdx
  CTTMDEVICE **v7; // r8
  CTTMDEVICE **v8; // rdx
  char v9; // al
  struct _KEVENT Event; // [rsp+58h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-11h] BYREF
  char v12; // [rsp+A0h] [rbp+1Fh]

  memset(&Event, 0, sizeof(Event));
  if ( *(struct _KTHREAD **)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 118) + 344LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6036LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->GetSessionMgr()->IsTtmDeviceListLockOwner()",
      6036LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 913) )
  {
    if ( a2 )
    {
      WdLogSingleEntry1(1LL, 6043LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_DeleteOnStop || !Wait", 6043LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_BYTE *)this + 913) && *(CTTMDEVICE **)this != this )
    {
      WdLogSingleEntry1(1LL, 6049LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!m_DeleteOnStop || IsListEmpty(&m_ListSessionMan)",
        6049LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    WdLogSingleEntry1(1LL, 6058LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pOwnerAdapter != NULL", 6058LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
  *((_DWORD *)this + 2 * v4 + 157) = 1073741825;
  *((_DWORD *)this + 2 * (unsigned int)v4 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    WdLogSingleEntry1(1LL, 6078LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pWaitEvent == NULL", 6078LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    p_Event = &Event;
  }
  else
  {
    p_Event = 0LL;
  }
  *((_QWORD *)this + 7) = p_Event;
  v6 = *((_QWORD *)this + 4);
  v12 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v6 + 18648));
  *((_QWORD *)this + 4) = 0LL;
  v7 = (CTTMDEVICE **)*((_QWORD *)this + 2);
  if ( v7[1] != (CTTMDEVICE *)((char *)this + 16)
    || (v8 = (CTTMDEVICE **)*((_QWORD *)this + 3), *v8 != (CTTMDEVICE *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v8 = (CTTMDEVICE *)v7;
  v7[1] = (CTTMDEVICE *)v8;
  TtmNotifyDeviceDeparture(1LL, this);
  v9 = v12;
  if ( v12 )
  {
    KeUnstackDetachProcess(&ApcState);
    v9 = 0;
    v12 = 0;
  }
  if ( a2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v9 = v12;
  }
  if ( v9 )
    KeUnstackDetachProcess(&ApcState);
}
