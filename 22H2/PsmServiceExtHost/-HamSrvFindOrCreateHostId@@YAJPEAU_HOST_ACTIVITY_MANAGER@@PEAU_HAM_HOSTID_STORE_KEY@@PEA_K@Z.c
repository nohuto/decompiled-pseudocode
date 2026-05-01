/*
 * XREFs of ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18000B748
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x18000B510 (HamRpcSrvFindOrCreateHostId.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18000E76C (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3@Z @ 0x18007913C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSid@U_.c)
 */

__int64 __fastcall HamSrvFindOrCreateHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  DWORD v10; // r14d
  unsigned __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+58h] [rbp-A8h]
  char *v14; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v15; // [rsp+68h] [rbp-98h]
  char *v16; // [rsp+70h] [rbp-90h]
  struct _HAM_HOSTID_STORE_KEY *v17; // [rsp+78h] [rbp-88h]
  _BYTE v18[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+110h] [rbp+10h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0578, 0, 0, 2u, &v19);
  v6 = -1LL;
  v12 = -1LL;
  if ( (unsigned __int8)PsmIsValidKey(a2)
    && wcsnlen((const wchar_t *)a2 + 268, 0x100uLL) != 256
    && RtlValidSid((char *)a2 + 464) )
  {
    v8 = HampHostIdStoreFindOrCreateIdForKey((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 544), a2, &v12);
    v6 = v12;
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v12;
      v9 = 0;
    }
  }
  else
  {
    *((_WORD *)a2 + 231) = 0;
    v9 = -1073741585;
    *((_WORD *)a2 + 523) = 0;
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v13 = *((_DWORD *)a2 + 133);
    v14 = (char *)a2 + 464;
    v16 = (char *)a2 + 536;
    v15 = v6;
    v17 = a2;
    LODWORD(v12) = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>>(
      v7,
      &unk_18009F5CB);
  }
  return v9;
}
