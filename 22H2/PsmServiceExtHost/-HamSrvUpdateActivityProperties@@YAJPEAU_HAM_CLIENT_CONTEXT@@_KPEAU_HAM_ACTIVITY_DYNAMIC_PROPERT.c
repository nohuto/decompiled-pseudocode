/*
 * XREFs of ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023284
 * Callers:
 *     HamRpcSrvUpdateActivityProperties @ 0x1800234A0 (HamRpcSrvUpdateActivityProperties.c)
 * Callees:
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001FD90 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800228C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180077780 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall HamSrvUpdateActivityProperties(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a3)
{
  struct _HAM_ACTIVITY *v6; // rdi
  int v7; // r8d
  int v8; // r9d
  DWORD v9; // ebx
  unsigned int v10; // eax
  int v11; // ecx
  BOOL v12; // edx
  int v13; // eax
  struct _HAM_ACTIVITY *v14; // rax
  int updated; // ebx
  DWORD v16; // edi
  int v18; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-104h] BYREF
  int v20; // [rsp+48h] [rbp-100h] BYREF
  __int64 v21; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+F0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0400, 0, 0, 2u, &v23);
  v6 = 0LL;
  memset_0(TlsValue, 0, 0x88uLL);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, TlsValue);
  }
  v10 = *(_DWORD *)a3;
  v11 = 65520;
  if ( (*(_DWORD *)a3 & 0xFFF0) != 0 || (v11 = HIWORD(v10), HIWORD(v10) >= 8u) )
  {
    updated = -1073741583;
  }
  else
  {
    v8 = 1;
    if ( (v10 & 0x10000) == 0 && (v10 & 1) != 0 )
      goto LABEL_34;
    LOBYTE(v7) = 6;
    if ( (v10 & 0x20000) == 0 && (v10 & 6) != 0 )
      goto LABEL_34;
    if ( (v10 & 0x40000) == 0 && (v10 & 8) != 0 )
      goto LABEL_34;
    v12 = HIWORD(v10) != 0;
    if ( (v10 & 6) >= 6 )
      goto LABEL_34;
    v13 = *((_DWORD *)a3 + 1);
    if ( (v13 & 1) == 0 )
    {
      if ( v13 )
        goto LABEL_34;
    }
    v11 = 61440;
    if ( (v13 & 0xF000) != 0 )
      goto LABEL_34;
    v11 = (v13 & 0x30) == 0;
    if ( ((v13 & 0xE) == 0) != v11 || *((_BYTE *)a3 + 7) )
      goto LABEL_34;
    if ( (*((_BYTE *)a3 + 4) & 1) != 0 )
      v12 = 1;
    if ( !v12 )
    {
LABEL_34:
      updated = -1073741583;
      goto LABEL_26;
    }
    v14 = HampActFindForClient(a1, a2);
    v6 = v14;
    if ( !v14 )
    {
      updated = -1073741275;
      goto LABEL_26;
    }
    updated = HampActUpdateProperties(v14, a3);
    if ( updated >= 0 )
      updated = 0;
  }
  if ( v6 )
    CemRcObjectDereference(v6);
LABEL_26:
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v18 = *((_DWORD *)a3 + 1);
    v19 = *(_DWORD *)a3;
    v21 = a2;
    v20 = updated;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_18009FE74,
      v7,
      v8,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v19,
      (__int64)&v18);
  }
  return (unsigned int)updated;
}
