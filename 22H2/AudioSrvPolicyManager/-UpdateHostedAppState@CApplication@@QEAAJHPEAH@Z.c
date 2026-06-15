/*
 * XREFs of ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x180010980
 * Callers:
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001F850 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1800018C0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 */

__int64 __fastcall CApplication::UpdateHostedAppState(CApplication *this, int a2, int *a3)
{
  int v3; // r10d
  int v4; // r9d
  unsigned int v6; // eax
  BOOL v7; // edi
  int v8; // r9d
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  if ( a2 )
    v6 = v3 | 4;
  else
    v6 = v3 & 0xFFFFFFFB;
  *((_DWORD *)this + 52) = v6;
  v7 = (v6 & 6) != 0;
  LOBYTE(v4) = (v3 & 6) != 0;
  v8 = v7 ^ v4;
  *a3 = v8;
  if ( v8 )
  {
    v9 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v9 > 4u )
    {
      LODWORD(v18) = v7;
      LODWORD(v16) = -1;
      LODWORD(v15) = -1;
      LODWORD(v17) = -1;
      v13 = *((_QWORD *)this + 80);
      v14 = *((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_180046295,
        v10,
        v11,
        (void **)&v14,
        (__int64)&v13,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v16);
    }
  }
  return 0LL;
}
