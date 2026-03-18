/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0035090 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01FB240 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00021F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x1C0002270 (-GetFromPointerType@@YA-AW4CompositionInputType@@K@Z.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0093F40 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0095E04 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C01E521C (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(void *a1, unsigned int a2, struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v4; // r13
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int v12; // r14d
  char v13; // di
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // esi
  int v19; // edx
  int v20; // r8d
  _DWORD *v21; // r13
  _DWORD *v22; // r14
  PDEVICE_OBJECT v23; // rcx
  __int16 v24; // r9
  _QWORD *v25; // r13
  __int64 v26; // rbx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  bool v36; // bl
  bool v37; // r14
  int v38; // eax
  PDEVICE_OBJECT v39; // rcx
  int v40; // edx
  int v41; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+38h] [rbp-C8h]
  char v45; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  struct tagINPUTDEST *v48; // [rsp+70h] [rbp-90h]
  _OWORD v49[7]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v51; // [rsp+100h] [rbp+0h]
  __int128 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+20h]

  v48 = a3;
  v4 = a3;
  memset(v49, 0, sizeof(v49));
  v6 = v49[1];
  *(_OWORD *)v4 = v49[0];
  v7 = v49[2];
  *((_OWORD *)v4 + 1) = v6;
  v8 = v49[3];
  *((_OWORD *)v4 + 2) = v7;
  v9 = v49[4];
  *((_OWORD *)v4 + 3) = v8;
  v10 = v49[5];
  *((_OWORD *)v4 + 4) = v9;
  v11 = v49[6];
  *((_OWORD *)v4 + 5) = v10;
  *((_OWORD *)v4 + 6) = v11;
  v12 = GetFromPointerType(a2);
  if ( v12 )
  {
    Object = 0LL;
    v13 = 1;
    if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = 36;
        LOBYTE(v40) = v13;
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v40,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          5,
          36,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
          (char)a1);
      }
      return *(_DWORD *)v4 != 0;
    }
    LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        5,
        25,
        (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
        (char)Object,
        (char)a1);
    }
    memset(v49, 0, sizeof(v49));
    v47 = 0LL;
    v50 = 0LL;
    v53 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    CompositionInputObject::QueryInputQueueForInputType(Object, v12, &v50);
    if ( (_DWORD)v50 == 2 )
    {
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          27,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v12, &v47) >= 0 )
      {
        v18 = LODWORD(v49[0]) | 4;
LABEL_18:
        LODWORD(v49[0]) = v18;
        goto LABEL_19;
      }
    }
    else if ( (_DWORD)v50 == 3 )
    {
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          26,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v12, &v47) >= 0 )
      {
        *(_OWORD *)((char *)&v49[2] + 8) = v51;
        v18 = LODWORD(v49[0]) | 6;
        *((_QWORD *)&v49[1] + 1) = *((_QWORD *)&v50 + 1);
        *((_QWORD *)&v49[4] + 1) = v53;
        *(_OWORD *)((char *)&v49[3] + 8) = v52;
        goto LABEL_18;
      }
    }
    else
    {
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          28,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
          v50);
      }
    }
    v18 = v49[0];
LABEL_19:
    if ( !v18 )
    {
      v39 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v13 = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          35,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids);
      }
      if ( *(_DWORD *)v4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v16, v17);
      goto LABEL_50;
    }
    LOBYTE(v16) = -1;
    v21 = (_DWORD *)HMValidateHandleNoSecure(v47, v16);
    if ( v21 )
    {
      if ( !gbInDestroyHandleTableObjects
        && !(unsigned int)UserIsUserCritSecInExclusive()
        && (!(unsigned int)IS_USERCRIT_OWNED_SHARED()
         || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
         && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
      {
        __int2c();
      }
      if ( *((_BYTE *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*v21 + 24) == 1 )
      {
        HIDWORD(v49[5]) = 2;
        v22 = v21;
        *(_QWORD *)&v49[5] = v21;
        v23 = WPP_GLOBAL_Control;
        LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v24 = 29;
        goto LABEL_30;
      }
      if ( *((_BYTE *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*v21 + 24) == 23 )
      {
        HIDWORD(v49[5]) = 1;
        v22 = v21;
        *(_QWORD *)&v49[5] = v21;
        v23 = WPP_GLOBAL_Control;
        LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v24 = 30;
LABEL_30:
        WPP_RECORDER_AND_TRACE_SF_q(
          v23->AttachedDevice,
          v19,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          v24,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
          (char)v21);
LABEL_31:
        v25 = Object;
        goto LABEL_32;
      }
      v36 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v36 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(_DWORD **)&v49[5];
        goto LABEL_31;
      }
      if ( !gbInDestroyHandleTableObjects
        && !(unsigned int)UserIsUserCritSecInExclusive()
        && (!(unsigned int)IS_USERCRIT_OWNED_SHARED()
         || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
         && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
      {
        __int2c();
      }
      v38 = *v21;
      LOBYTE(v20) = v37;
      v25 = Object;
      LOBYTE(v19) = v36;
      WPP_RECORDER_AND_TRACE_SF_dq(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v41,
        v42,
        v43,
        v44,
        *((_BYTE *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)v38 + 24),
        (char)Object);
    }
    else
    {
      LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = Object;
      }
      else
      {
        v25 = Object;
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          5,
          32,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
          (char)Object);
      }
    }
    v22 = *(_DWORD **)&v49[5];
LABEL_32:
    if ( v22 )
    {
      v26 = v25[2];
      if ( v26 )
      {
        LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v19,
            v20,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            5,
            33,
            (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids);
        }
        *((_QWORD *)&v49[0] + 1) = v26;
        LODWORD(v49[0]) = v18 | 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 424LL) + 820LL) & 0x800000) != 0 )
        v27 = v49[1] & 0xFFFFFFFE;
      else
        v27 = (LODWORD(v49[1]) ^ *((_DWORD *)v25 + 46)) & 1 ^ LODWORD(v49[1]);
      v28 = *((_DWORD *)v25 + 44);
      *(_QWORD *)&v49[6] = v28;
      LODWORD(v49[1]) = v27;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = v28;
        LOBYTE(v28) = v13;
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqd(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          34,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
          (char)v22,
          v45,
          -(v27 & 1));
      }
      v4 = v48;
      v29 = v49[1];
      *(_OWORD *)v48 = v49[0];
      v30 = v49[2];
      *((_OWORD *)v4 + 1) = v29;
      v31 = v49[3];
      *((_OWORD *)v4 + 2) = v30;
      v32 = v49[4];
      *((_OWORD *)v4 + 3) = v31;
      v33 = v49[5];
      *((_OWORD *)v4 + 4) = v32;
      v34 = v49[6];
      *((_OWORD *)v4 + 5) = v33;
      *((_OWORD *)v4 + 6) = v34;
    }
    else
    {
      v4 = v48;
    }
LABEL_50:
    ObfDereferenceObject(Object);
    return *(_DWORD *)v4 != 0;
  }
  return 0;
}
