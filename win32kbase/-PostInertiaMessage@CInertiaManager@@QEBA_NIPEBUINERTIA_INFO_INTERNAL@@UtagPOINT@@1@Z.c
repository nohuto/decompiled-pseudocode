char __fastcall CInertiaManager::PostInertiaMessage(
        CInertiaManager *this,
        unsigned int a2,
        const struct INERTIA_INFO_INTERNAL *a3,
        struct tagPOINT a4,
        struct tagPOINT a5)
{
  char v5; // si
  unsigned int v8; // r15d
  char v10; // di
  CInertiaManager *v11; // rcx
  int v12; // eax
  CInertiaManager *v13; // rcx
  int v14; // edx
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  int v18; // r10d
  int v19; // r9d
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v24; // edx
  int v25; // r8d
  __int128 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A0h]
  __int128 v28; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-80h]
  __int128 v30; // [rsp+90h] [rbp-70h]
  __int128 v31; // [rsp+A0h] [rbp-60h]
  __int128 v32; // [rsp+B0h] [rbp-50h]
  _OWORD v33[7]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = 1;
  v8 = a2;
  if ( a2 - 571 > 1 )
    return 0;
  v10 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink);
  if ( (unsigned int)Feature_Servicing_ListViewScrollingFix__private_IsEnabledDeviceUsage() )
    InputTraceLogging::Inertia::PostInertiaMessage(v8, a3, a4);
  v12 = *((_DWORD *)a3 + 46);
  if ( (v12 & 0x10) == 0 )
  {
    CInputDest::CInputDest((__int64 *)&v26, *((_QWORD *)a3 + 15), 2 - ((v12 & 0x20) != 0), 1);
    if ( CInertiaManager::ValidateInertiaDest(v13, (const struct CInputDest *)&v26) )
    {
      v18 = *((_DWORD *)a3 + 46);
      v19 = -__CFSHR__(v18, 2);
      if ( !__CFSHR__(v18, 2) || CInputDest::HasDelegationThread((CInputDest *)&v26) )
      {
        if ( (v18 & 0x20) != 0 )
        {
          v20 = *((_OWORD *)a3 + 8);
          LODWORD(v26) = v26 | 2;
          v21 = *((_OWORD *)a3 + 9);
          *((_QWORD *)&v27 + 1) = 0LL;
          v22 = *((_OWORD *)a3 + 10);
          v28 = v20;
          v29 = v21;
          v30 = v22;
        }
        else
        {
          v22 = v30;
          v21 = v29;
          v20 = v28;
        }
        v33[0] = v26;
        v33[1] = v27;
        v33[5] = v31;
        v33[6] = v32;
        v33[2] = v20;
        v33[3] = v21;
        v33[4] = v22;
        if ( !v19 )
        {
          if ( !(unsigned int)ApiSetEditionPostInertiaMessage((unsigned int)v33, v8, *((_QWORD *)a3 + 1), a4.x, 0LL) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
              || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v24) = 0;
            }
            if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v24,
                v25,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                2,
                21,
                14,
                (__int64)&WPP_b2e4897be1f236c1c4f4f9c91cb4c8f7_Traceguids);
            }
          }
          CInputDest::SetEmpty((CInputDest *)&v26);
          return 1;
        }
        DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)&v26);
        if ( (unsigned int)ApiSetEditionPostInertiaMessage(
                             (unsigned int)v33,
                             v8,
                             *((_QWORD *)a3 + 1),
                             a4.x,
                             (__int64)DelegateThreadInfo) )
        {
          v10 = 1;
          goto LABEL_45;
        }
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v5 = 0;
        }
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_45;
        v17 = 13;
      }
      else
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v5 = 0;
        }
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_45;
        v17 = 12;
      }
    }
    else
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v5 = 0;
      }
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_45;
      v17 = 11;
    }
    LOBYTE(v14) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v16->AttachedDevice,
      v14,
      v15,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v17,
      (__int64)&WPP_b2e4897be1f236c1c4f4f9c91cb4c8f7_Traceguids);
LABEL_45:
    CInputDest::SetEmpty((CInputDest *)&v26);
    return v10;
  }
  CInertiaManager::RouteSyntheticTouchpadToMT(v11, v8, a4, a5, *((_QWORD *)a3 + 1));
  return 1;
}
