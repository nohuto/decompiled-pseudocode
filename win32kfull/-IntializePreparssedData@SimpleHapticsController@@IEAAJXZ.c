/*
 * XREFs of ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C024BD6C
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C024B550 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C024C180 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 */

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
