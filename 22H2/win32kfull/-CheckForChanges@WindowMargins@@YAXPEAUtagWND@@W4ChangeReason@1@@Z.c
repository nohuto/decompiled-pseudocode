/*
 * XREFs of ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714
 * Callers:
 *     InternalInvalidate3 @ 0x1C0034D50 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C005A330 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxDoPaint @ 0x1C008BD2C (xxxDoPaint.c)
 *     NtUserEndPaint @ 0x1C00964C0 (NtUserEndPaint.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     xxxBeginPaint @ 0x1C00CDA00 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00CE0C0 (xxxInternalDoSyncPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00CE8F8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     DwmChildRectChange @ 0x1C00EDE40 (DwmChildRectChange.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C010ACC0 (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0118654 (xxxSimpleDoSyncPaint.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01BC708 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C006696C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddqdddds @ 0x1C00A1C38 (WPP_RECORDER_AND_TRACE_SF_ddddqdddds.c)
 *     DwmAsyncNotifyWindowFrameMarginsChange @ 0x1C00A3F28 (DwmAsyncNotifyWindowFrameMarginsChange.c)
 *     ?ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z @ 0x1C00ABAD8 (-ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00C9470 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C00EEA78 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C00EEC84 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021C7A8 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

__int64 __fastcall WindowMargins::CheckForChanges(struct tagWND *a1, int a2)
{
  __int64 result; // rax
  char v5; // r12
  __int64 v6; // rcx
  char v7; // dl
  char v8; // r8
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  PDEVICE_OBJECT v14; // rcx
  const char *v15; // rax
  char v16; // r8
  __int64 v17; // rbx
  void *v18; // rax
  const char *v19; // rax
  __int64 v20; // r10
  char v21; // dl
  char v22; // r8
  __int64 v23; // r9
  int v24; // [rsp+20h] [rbp-B8h]
  int v25; // [rsp+28h] [rbp-B0h]
  int v26; // [rsp+30h] [rbp-A8h]
  int v27; // [rsp+38h] [rbp-A0h]
  PDEVICE_OBJECT v28; // [rsp+90h] [rbp-48h]
  __int64 v29; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v30; // [rsp+F8h] [rbp+20h] BYREF

  result = (unsigned int)(a2 - 3);
  v5 = 1;
  if ( (unsigned int)result <= 1
    || (v6 = *((_QWORD *)a1 + 13)) != 0
    && (result = *((_QWORD *)a1 + 3)) != 0
    && (result = *(_QWORD *)(result + 8)) != 0
    && v6 == *(_QWORD *)(result + 24) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v7 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v8 = 0;
    }
    if ( v7 || v8 )
    {
      v19 = WindowMargins::ChangeReasonToString(a2);
      WPP_RECORDER_AND_TRACE_SF_qs(
        *(_QWORD *)(v20 + 24),
        v21,
        v22,
        (__int64)gFullLog,
        5u,
        0x15u,
        0x16u,
        v23,
        *(_QWORD *)a1,
        v19);
    }
    result = (__int64)WindowMargins::CWindowMarginProp::GetOrCreate(a1);
    v11 = result;
    if ( result )
    {
      v29 = 0LL;
      LOWORD(v12) = 0;
      if ( a2 )
      {
        v12 = *(_QWORD *)(result + 44);
        v29 = v12;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
          || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v9) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v9 || (_BYTE)v10 )
          WPP_RECORDER_AND_TRACE_SF_dddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            SWORD2(v12),
            5,
            21,
            23,
            (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
            v12,
            SBYTE4(v12),
            SBYTE2(v12),
            SBYTE6(v12));
      }
      v13 = 0LL;
      v30 = 0LL;
      if ( a2 == 4 )
      {
        CWindowProp::RemoveAndDeleteProp((CWindowProp *)v11);
      }
      else
      {
        v24 = 1;
        v13 = *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(v11, &v30, a1);
        v30 = v13;
        *(_QWORD *)(v11 + 44) = v13;
      }
      if ( (_WORD)v12 != (_WORD)v13
        || *(_DWORD *)((char *)&v29 + 2) != *(_DWORD *)((char *)&v13 + 2)
        || (result = HIWORD(v13), HIWORD(v29) != HIWORD(v13)) )
      {
        v14 = WPP_GLOBAL_Control;
        v28 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v5 = 0;
        }
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = WindowMargins::ChangeReasonToString(a2);
          WPP_RECORDER_AND_TRACE_SF_ddddqdddds(
            (__int64)v28->AttachedDevice,
            v5,
            v16,
            (__int64)gFullLog,
            v24,
            v25,
            v26,
            v27,
            v13,
            SBYTE4(v13),
            SBYTE2(v13),
            SBYTE6(v13),
            *(_QWORD *)a1,
            v12,
            SBYTE4(v29),
            SBYTE2(v29),
            SBYTE6(v29),
            v15);
        }
        v17 = *(_QWORD *)a1;
        v18 = (void *)UserReferenceDwmApiPort(v14);
        return DwmAsyncNotifyWindowFrameMarginsChange(v18, v17, (__int16 *)&v30);
      }
    }
  }
  return result;
}
