/*
 * XREFs of xxxDragObject @ 0x1C02442A8
 * Callers:
 *     NtUserDragObject @ 0x1C01F2820 (NtUserDragObject.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00AA44C (xxxSetCapture.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00C9704 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0118590 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0244120 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, struct tagWND *a2, int a3, __int64 a4, struct tagCURSOR *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 *v9; // r13
  __int64 result; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  struct tagCURSOR *v13; // rax
  struct tagWND *i; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagWND *v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  struct tagCURSOR *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  struct tagCURSOR *DropObject; // rax
  struct tagCURSOR *v32; // rsi
  struct tagCURSOR *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // r8
  unsigned int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 *v43; // rsi
  int v44; // edx
  int v45; // r8d
  unsigned __int64 v46; // r8
  unsigned int v47; // esi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct tagWND *v51; // rdx
  struct tagCURSOR *v52; // [rsp+58h] [rbp-B0h]
  __int64 v53; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 *v54; // [rsp+70h] [rbp-98h]
  __int64 v55; // [rsp+78h] [rbp-90h]
  __int128 v56; // [rsp+80h] [rbp-88h] BYREF
  __int128 v57; // [rsp+90h] [rbp-78h]
  __int128 v58; // [rsp+A0h] [rbp-68h]
  __int128 v59; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-48h]
  __int128 v61; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-30h]
  __int128 v63; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-18h]
  __int128 v65; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v66; // [rsp+108h] [rbp+0h]
  _OWORD v67[3]; // [rsp+110h] [rbp+8h] BYREF

  v62 = 0LL;
  v5 = 0;
  v60 = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v9 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  memset(v67, 0, sizeof(v67));
  v61 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  v65 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v11 = result;
  if ( !result )
    return result;
  PushW32ThreadLock(result, &v63, (__int64)Win32FreePool);
  v12 = 0LL;
  if ( a2 )
    v12 = *(_QWORD *)a2;
  *(_QWORD *)v11 = v12;
  *(_DWORD *)(v11 + 16) = a3;
  *(_QWORD *)(v11 + 24) = a4;
  if ( a5 )
    v13 = zzzSetCursor(a5);
  else
    v13 = *(struct tagCURSOR **)(*(_QWORD *)(gptiCurrent + 432LL) + 376LL);
  v52 = v13;
  ThreadLock((__int64)v13, (__int64 *)&v65);
  if ( a2 )
  {
    for ( i = a2; (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0xC0) == 0x40; i = (struct tagWND *)*((_QWORD *)i + 13) )
      ;
    *(_QWORD *)&v59 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v59;
    *((_QWORD *)&v59 + 1) = i;
    HMLockObject(i);
    xxxInternalUpdateWindow(i, 1);
    ThreadUnlock1(v16, v15, v17);
  }
  if ( gpqForeground )
  {
    v18 = *(struct tagWND **)(gpqForeground + 112LL);
    if ( v18 )
    {
      if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
      {
        v19 = 33;
        if ( *((_QWORD *)v18 + 2) == gptiCurrent )
          v18 = a2;
        else
          v19 = 49;
        xxxWindowEvent(0x80000004, v18, 0, 3u, v19);
      }
    }
  }
  xxxWindowEvent(0xEu, a2, 0, 0, 0);
  xxxSetCapture((__int64)a2);
  zzzShowCursor(1);
  v53 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v53;
  v54 = 0LL;
  while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) == a2 )
  {
    while ( !(unsigned int)xxxInternalGetMessage(&v56, 0LL, 0x200u, 0x20Eu, 1, 0)
         && !(unsigned int)xxxInternalGetMessage(&v56, 0LL, 0x23u, 0x23u, 1, 0)
         && !(unsigned int)xxxInternalGetMessage(&v56, 0LL, 0x100u, 0x109u, 1, 0) )
    {
      if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
      {
        ThreadUnlock1(v24, v23, v25);
        ThreadUnlock1(v27, v26, v28);
        goto LABEL_69;
      }
    }
    while ( (unsigned int)xxxInternalGetMessage(v67, 0LL, 0x100u, 0x109u, 1, 0) )
      ;
    if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a2
      || DWORD2(v56) == 256 && (_QWORD)v57 == 27LL )
    {
      v21 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
      if ( v21 )
        zzzSetCursor(v21);
      break;
    }
    v29 = *(_OWORD *)(v11 + 16);
    *(_OWORD *)(v11 + 48) = *(_OWORD *)v11;
    v30 = *(_OWORD *)(v11 + 32);
    *(_OWORD *)(v11 + 64) = v29;
    *(_OWORD *)(v11 + 80) = v30;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)((char *)&v58 + 4);
    DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v11);
    v32 = DropObject;
    if ( !DropObject )
    {
      v32 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
      *(_QWORD *)(v11 + 8) = 0LL;
      goto LABEL_33;
    }
    if ( DropObject == (struct tagCURSOR *)1 )
    {
      v32 = a5;
LABEL_33:
      if ( !v32 )
        goto LABEL_35;
    }
    zzzSetCursor(v32);
LABEL_35:
    if ( a2 )
    {
      v33 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout((unsigned __int64 *)a2, 0x22Du, v32 != v33, v11, 0, 0, 0LL, 1, 1);
    }
    if ( v9 == (unsigned __int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), 1) )
    {
      if ( !v9 )
        goto LABEL_45;
      v37 = 0LL;
      v38 = 559;
    }
    else
    {
      if ( v9 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v9, 0x22Eu, 0LL, v11 + 48, 0, 0, 0LL, 1, 1);
      }
      v9 = (unsigned __int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), 1);
      ThreadUnlock1(v35, v34, v36);
      v53 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v53;
      v54 = v9;
      if ( !v9 )
        goto LABEL_45;
      HMLockObject(v9);
      v37 = 1LL;
      v38 = 558;
    }
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v9, v38, v37, v11, 0, 0, 0LL, 1, 1);
LABEL_45:
    if ( DWORD2(v56) == 162 || DWORD2(v56) == 514 )
    {
      ThreadUnlock1(v21, v20, v22);
      goto LABEL_51;
    }
  }
  ThreadUnlock1(v21, v20, v22);
  v32 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
LABEL_51:
  xxxReleaseCapture();
  zzzShowCursor(0);
  zzzSetCursor(v52);
  ThreadUnlock1(v40, v39, v41);
  if ( v32 == *(struct tagCURSOR **)(gasyscur[0] + 5528LL)
    || (v42 = ValidateHwnd(*(_QWORD *)(v11 + 8)), (v43 = (unsigned __int64 *)v42) == 0LL) )
  {
    v47 = 0;
  }
  else
  {
    *(_QWORD *)&v61 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v61;
    *((_QWORD *)&v61 + 1) = v42;
    HMLockObject(v42);
    *(_DWORD *)(v43[2] + 488) |= 0x20u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v44) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v44) = 0;
    }
    if ( (_BYTE)v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v45) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v44,
        v45,
        10,
        4,
        2,
        10,
        (__int64)&WPP_fc54a38ba6263c0086d73cf5d07c55ae_Traceguids,
        v43[2]);
    }
    v46 = 0LL;
    if ( a2 )
      v46 = *(_QWORD *)a2;
    _InterlockedAdd(&glSendMessage, 1u);
    v47 = xxxSendTransformableMessageTimeout(v43, 0x22Au, v46, v11, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v49, v48, v50);
  }
  if ( gpqForeground )
  {
    v51 = *(struct tagWND **)(gpqForeground + 112LL);
    if ( v51 )
    {
      if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
        xxxWindowEvent(0x80000005, v51, 0, 4u, 33);
    }
  }
  xxxWindowEvent(0xFu, a2, 0, 0, 0);
  v5 = v47;
LABEL_69:
  PopAndFreeAlwaysW32ThreadLock((__int64)&v63);
  return v5;
}
