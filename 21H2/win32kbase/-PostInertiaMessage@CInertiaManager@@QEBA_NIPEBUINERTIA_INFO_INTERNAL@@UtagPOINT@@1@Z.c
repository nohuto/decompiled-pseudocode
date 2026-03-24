/*
 * XREFs of ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A8D64
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C019F008 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A5A70 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01A5AE4 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01A5F1C (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004BC10 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z @ 0x1C00CD62C (-PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_s @ 0x1C01526CC (WPP_RECORDER_SF_s.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01829F0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C0182DA4 (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01A910C (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C01A9264 (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ApiSetEditionPostInertiaMessage @ 0x1C01CD1D8 (ApiSetEditionPostInertiaMessage.c)
 */

char __fastcall CInertiaManager::PostInertiaMessage(
        CInertiaManager *this,
        unsigned int a2,
        const struct INERTIA_INFO_INTERNAL *a3,
        struct tagPOINT a4,
        struct tagPOINT a5)
{
  const char *v9; // rax
  CInertiaManager *v10; // rcx
  int v11; // eax
  CInertiaManager *v12; // rcx
  int v13; // edx
  char v14; // di
  int v15; // r9d
  int v16; // r10d
  int v17; // r9d
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int128 v20; // xmm4
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v22; // edx
  __m128i v23; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h]
  __int128 v25; // [rsp+50h] [rbp-B0h]
  __int128 v26; // [rsp+60h] [rbp-A0h]
  __int128 v27; // [rsp+70h] [rbp-90h]
  __int128 v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  _OWORD v30[7]; // [rsp+B0h] [rbp-50h] BYREF

  if ( a2 - 571 > 1 )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = "STOP";
    if ( a2 != 571 )
      v9 = "END";
    WPP_RECORDER_SF_s(
      (_DWORD)gBaseLog,
      a2,
      21,
      10,
      (__int64)&WPP_1ac79545ba283bd6e227493eccf05ce5_Traceguids,
      (__int64)v9);
  }
  InputTraceLogging::Inertia::PostInertiaMessage(a2, a3, a4);
  v11 = *((_DWORD *)a3 + 46);
  if ( (v11 & 0x10) == 0 )
  {
    CInputDest::CInputDest(&v23, *((_QWORD *)a3 + 15), 2 - ((v11 & 0x20) != 0), 1);
    v14 = 0;
    if ( CInertiaManager::ValidateInertiaDest(v12, (const struct CInputDest *)&v23) )
    {
      v16 = *((_DWORD *)a3 + 46);
      v17 = -__CFSHR__(v16, 2);
      if ( !__CFSHR__(v16, 2) || CInputDest::HasDelegationThread((CInputDest *)&v23) )
      {
        if ( (v16 & 0x20) != 0 )
        {
          v18 = *((_OWORD *)a3 + 8);
          v23.m128i_i32[0] |= 2u;
          v19 = *((_OWORD *)a3 + 9);
          *((_QWORD *)&v24 + 1) = 0LL;
          v20 = *((_OWORD *)a3 + 10);
          v25 = v18;
          v26 = v19;
          v27 = v20;
        }
        else
        {
          v20 = v27;
          v19 = v26;
          v18 = v25;
        }
        v30[0] = v23;
        v30[1] = v24;
        v30[5] = v28;
        v30[6] = v29;
        v30[2] = v18;
        v30[3] = v19;
        v30[4] = v20;
        if ( !v17 )
        {
          if ( !(unsigned int)ApiSetEditionPostInertiaMessage((unsigned int)v30, a2, *((_QWORD *)a3 + 1), a4.x, 0LL)
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = 2;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v22, 21, 14, (__int64)&WPP_1ac79545ba283bd6e227493eccf05ce5_Traceguids);
          }
          CInputDest::SetEmpty((CInputDest *)&v23);
          return 1;
        }
        DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)&v23);
        if ( (unsigned int)ApiSetEditionPostInertiaMessage(
                             (unsigned int)v30,
                             a2,
                             *((_QWORD *)a3 + 1),
                             a4.x,
                             (__int64)DelegateThreadInfo) )
        {
          v14 = 1;
          goto LABEL_25;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 13;
          goto LABEL_16;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 12;
        goto LABEL_16;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 11;
LABEL_16:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v13, 21, v15, (__int64)&WPP_1ac79545ba283bd6e227493eccf05ce5_Traceguids);
    }
LABEL_25:
    CInputDest::SetEmpty((CInputDest *)&v23);
    return v14;
  }
  CInertiaManager::RouteSyntheticTouchpadToMT(v10, a2, a4, a5, *((_QWORD *)a3 + 1));
  return 1;
}
