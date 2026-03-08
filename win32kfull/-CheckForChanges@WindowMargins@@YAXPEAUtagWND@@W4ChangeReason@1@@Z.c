/*
 * XREFs of ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734
 * Callers:
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0038E64 (xxxSimpleDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C0054B50 (InternalInvalidate3.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
 *     DwmChildRectChange @ 0x1C00AD03C (DwmChildRectChange.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxDoPaint @ 0x1C00C3298 (xxxDoPaint.c)
 *     NtUserEndPaint @ 0x1C00CC490 (NtUserEndPaint.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00FDB80 (xxxInternalDoSyncPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00FE35C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01BD8AC (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0024800 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddqdddds @ 0x1C003CC08 (WPP_RECORDER_AND_TRACE_SF_ddddqdddds.c)
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C0042CB8 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C009EB2C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     DwmAsyncNotifyWindowFrameMarginsChange @ 0x1C00DAD28 (DwmAsyncNotifyWindowFrameMarginsChange.c)
 *     ?ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z @ 0x1C00E3D38 (-ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C010141C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021F368 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

__int64 __fastcall WindowMargins::CheckForChanges(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // r14d
  char v6; // r12
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // edx
  unsigned __int16 v15; // ax
  INT v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PDEVICE_OBJECT v20; // rcx
  const char *v21; // rax
  char v22; // r8
  void *v23; // rax
  __int64 v24; // rax
  const char *v25; // rax
  __int64 v26; // r10
  char v27; // dl
  char v28; // r8
  __int64 v29; // r9
  int v30; // [rsp+20h] [rbp-B8h]
  int v31; // [rsp+28h] [rbp-B0h]
  int v32; // [rsp+30h] [rbp-A8h]
  int v33; // [rsp+38h] [rbp-A0h]
  PDEVICE_OBJECT v34; // [rsp+90h] [rbp-48h]
  __int64 v35; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v36; // [rsp+F8h] [rbp+20h] BYREF

  result = (unsigned int)(a2 - 3);
  v4 = a2;
  v6 = 1;
  if ( (unsigned int)result <= 1
    || (v7 = *((_QWORD *)a1 + 13)) != 0
    && (result = *((_QWORD *)a1 + 3)) != 0
    && (result = *(_QWORD *)(result + 8)) != 0
    && v7 == *(_QWORD *)(result + 24) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(a3) = 0;
    }
    if ( (_BYTE)a2 || (_BYTE)a3 )
    {
      v25 = (const char *)WindowMargins::ChangeReasonToString(
                            v4,
                            a2,
                            a3,
                            &WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids);
      WPP_RECORDER_AND_TRACE_SF_qs(
        *(_QWORD *)(v26 + 24),
        v27,
        v28,
        (__int64)gFullLog,
        5u,
        0x1Au,
        0x16u,
        v29,
        *(_QWORD *)a1,
        v25);
    }
    result = (__int64)WindowMargins::CWindowMarginProp::GetOrCreate(a1);
    v10 = result;
    if ( result )
    {
      v35 = 0LL;
      LOWORD(v11) = 0;
      if ( v4 )
      {
        v11 = *(_QWORD *)(result + 44);
        v35 = v11;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x19u)
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v9) = 0;
        }
        if ( (_BYTE)v8 || (_BYTE)v9 )
          WPP_RECORDER_AND_TRACE_SF_dddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            SWORD2(v11),
            5,
            26,
            23,
            (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
            v11,
            SBYTE4(v11),
            SBYTE2(v11),
            SBYTE6(v11));
      }
      v12 = 0LL;
      v36 = 0LL;
      if ( v4 == 4 )
      {
        CWindowProp::RemoveAndDeleteProp((CWindowProp *)v10);
      }
      else
      {
        v13 = *((_QWORD *)a1 + 5);
        v14 = *(_DWORD *)(v13 + 288) & 0xF;
        if ( v14 == 3 )
        {
          v16 = (*(_DWORD *)(v13 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v13 + 232) & 0x400) != 0 )
        {
          v15 = *(_WORD *)(v13 + 286);
          if ( !v15 )
            v15 = *(_WORD *)(v13 + 284);
          v16 = v15;
        }
        else if ( !v14
               && (v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 64LL) & 1) != 0 )
        {
          v16 = 96;
        }
        else
        {
          v16 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        v12 = *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(v10, (__int16 *)&v36, a1, v16, 1);
        v36 = v12;
        *(_QWORD *)(v10 + 44) = v12;
      }
      if ( (_WORD)v11 != (_WORD)v12
        || *(_DWORD *)((char *)&v35 + 2) != *(_DWORD *)((char *)&v12 + 2)
        || (result = HIWORD(v12), HIWORD(v35) != HIWORD(v12)) )
      {
        v20 = WPP_GLOBAL_Control;
        v34 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = (const char *)WindowMargins::ChangeReasonToString(v4, v17, v18, v19);
          WPP_RECORDER_AND_TRACE_SF_ddddqdddds(
            (__int64)v34->AttachedDevice,
            v6,
            v22,
            (__int64)gFullLog,
            v30,
            v31,
            v32,
            v33,
            v12,
            SBYTE4(v12),
            SBYTE2(v12),
            SBYTE6(v12),
            *(_QWORD *)a1,
            v11,
            SBYTE4(v35),
            SBYTE2(v35),
            SBYTE6(v35),
            v21);
        }
        v23 = (void *)UserReferenceDwmApiPort(v20, v17, v18);
        return DwmAsyncNotifyWindowFrameMarginsChange(v23);
      }
    }
  }
  return result;
}
