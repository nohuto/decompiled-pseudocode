__int64 __fastcall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  unsigned __int16 v5; // bx
  int Device; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  struct InteractiveControlInput *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v17; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v18[3]; // [rsp+44h] [rbp-2Ch] BYREF
  struct InteractiveControlInput *v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 DPITransformationMonitor; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&v18[1] = 0LL;
  v19 = 0LL;
  v5 = a3;
  DPITransformationMonitor = 0LL;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v18[0] = a2;
    v21[0] = (__int64)"InteractiveControlManager::GetReportInfo entry";
    v17 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F42D,
      a3,
      (__int64)a4,
      (void **)v21,
      (__int64)v18,
      (__int64)&v17);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, (struct InteractiveControlDevice **)&v18[1], 0LL);
  v11 = Device;
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(*(InteractiveControlDevice **)&v18[1], v5, &v19) )
    {
      v12 = v19;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v19 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 19);
      v14 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), 1);
      if ( v14 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        v9 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v9 == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v14);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, &DPITransformationMonitor);
        }
        else
        {
          v11 = -1073741727;
        }
      }
    }
    else
    {
      v11 = -1073741811;
    }
  }
  else if ( (unsigned int)dword_1C0357150 > 2 )
  {
    v18[0] = Device;
    v21[0] = (__int64)"Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F148,
      v9,
      v10,
      (void **)v21,
      (__int64)v18);
  }
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v18[0] = v11;
    v21[0] = (__int64)"InteractiveControlManager::GetReportInfo exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357150,
      byte_1C031F0D5,
      v9,
      v10,
      (void **)v21,
      (__int64)v18);
  }
  return v11;
}
