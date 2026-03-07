__int64 __fastcall SimpleHapticsController::IntializePreparssedData(SimpleHapticsController *this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  void *v6; // rax
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v13[2]; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+58h] [rbp-18h]

  *(_QWORD *)v13 = 0LL;
  v14 = 0;
  v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB01A8u, 0LL, 0, v13, 0xCu, 0LL);
  v5 = v2;
  if ( v2 >= 0 )
  {
    v6 = (void *)Win32AllocPoolNonPagedZInit(v13[0], 1147695957LL);
    *((_QWORD *)this + 2) = v6;
    if ( v6 )
    {
      v7 = SimpleHapticsController::SendDeviceIOControl(this, 0xB0193u, 0LL, 0, v6, v13[0], 0LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        if ( (unsigned int)dword_1C0357118 > 2 )
        {
          LODWORD(v11) = v7;
          v12 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            v8,
            v9,
            (void **)&v12,
            (__int64)&v11);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::IntializePreparssedData",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          525,
          v5,
          "Function failed.");
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0357118 > 2 )
    {
      LODWORD(v11) = v2;
      v12 = (__int64)"Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357118,
        byte_1C031FABE,
        v3,
        v4,
        (void **)&v12,
        (__int64)&v11);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::IntializePreparssedData",
      "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      511,
      v5,
      "Function failed.");
  }
  return v5;
}
