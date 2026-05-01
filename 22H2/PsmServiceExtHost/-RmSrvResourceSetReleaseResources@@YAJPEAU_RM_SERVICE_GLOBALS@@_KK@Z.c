/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180021420
 * Callers:
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180006D28 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020E20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     RmCoreRpcSrvReleaseResourceSet @ 0x180038120 (RmCoreRpcSrvReleaseResourceSet.c)
 *     RmtSrv_RS_ReleaseResources @ 0x180063C00 (RmtSrv_RS_ReleaseResources.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_SERVICE_GLOBALS *a2,
        unsigned int a3)
{
  int v3; // ebp
  int v6; // r8d
  int v7; // r9d
  int v8; // r13d
  __int64 v9; // rbx
  DWORD v10; // esi
  _QWORD *Value; // rdi
  _QWORD *v12; // r14
  struct _RM_SERVICE_GLOBALS *v13; // r11
  __int64 v14; // rdi
  int v15; // esi
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r10
  unsigned int v19; // r9d
  _QWORD *v20; // rax
  DWORD v23; // ebx
  __int64 v24; // [rsp+30h] [rbp-118h] BYREF
  struct _RM_SERVICE_GLOBALS *v25; // [rsp+38h] [rbp-110h] BYREF
  char *v26; // [rsp+40h] [rbp-108h]
  _BYTE v27[144]; // [rsp+50h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+E0h] [rbp-68h] BYREF

  v3 = 1;
  v25 = a1;
  v24 = (__int64)a2;
  if ( HampLockTrackerId == -1 || !TlsGetValue(HampLockTrackerId) )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
    v8 = 0;
  }
  else
  {
    v8 = 1;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009BBC0, 0, 0, 2u, &v28);
  v9 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v10) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800B4118 = GetCurrentThreadId();
    v12 = 0LL;
    v26 = (char *)v25 + 552;
    RtlAcquireSRWLockShared((char *)v25 + 552);
    v13 = v25;
    v14 = 0LL;
    v15 = -1073741275;
    v16 = *((_DWORD *)v25 + 135);
    v17 = -1LL << (*((_BYTE *)v25 + 540) & 0x1F);
    v18 = v17 & (HIBYTE(v24)
               + 37
               * (BYTE6(v24)
                + 37
                * (BYTE5(v24)
                 + 37
                 * (BYTE4(v24)
                  + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
    v25 = (struct _RM_SERVICE_GLOBALS *)v17;
    v24 = v18;
LABEL_12:
    if ( v14 )
      goto LABEL_15;
    v19 = v16 >> 5;
    if ( v16 >> 5 )
    {
      v17 = (__int64)v25;
      v16 = *((_DWORD *)v13 + 135);
      v14 = *((_QWORD *)v13 + 68)
          + 8LL
          * ((37
            * (BYTE6(v24)
             + 37
             * (BYTE5(v24)
              + 37
              * (BYTE4(v24)
               + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v18 + 11623883)))))))
            + HIBYTE(v24)) & (v19 - 1));
LABEL_15:
      while ( 1 )
      {
        v14 = *(_QWORD *)v14;
        if ( (v14 & 1) != 0 )
          break;
        if ( v18 == (v17 & *(_QWORD *)(v14 + 8)) )
        {
          if ( a2 != *(struct _RM_SERVICE_GLOBALS **)(v14 + 32) )
            goto LABEL_12;
          v15 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 16)) <= 1 )
            __fastfail(0xEu);
          goto LABEL_19;
        }
      }
    }
    v14 = (__int64)v26;
LABEL_19:
    RtlReleaseSRWLockShared(v26);
    if ( v15 >= 0 )
    {
      v12 = (_QWORD *)v14;
      v15 = 0;
    }
    if ( v15 >= 0 )
    {
      v9 = v12[6];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v15 = 0;
    }
    if ( v12 )
      RmpObjectRelease(v12);
    if ( v15 != -1073741275 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, a3);
      if ( v3 >= 0 )
        v3 = 0;
    }
    dword_1800B4118 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v20 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v20 & 1) == 0 )
        __int2c();
      if ( v20[1]-- == 1LL )
        *v20 &= ~1uLL;
    }
  }
  else
  {
    v3 = -805306127;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v25 = a2;
    LODWORD(v24) = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009BC16,
      v6,
      v7,
      (__int64)&v24,
      (__int64)&v25);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( !v8 )
  {
    v23 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v23, 0LL);
    }
  }
  return (unsigned int)v3;
}
