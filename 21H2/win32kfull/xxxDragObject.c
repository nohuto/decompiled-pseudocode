/*
 * XREFs of xxxDragObject @ 0x1C0248694
 * Callers:
 *     NtUserDragObject @ 0x1C01F7DE0 (NtUserDragObject.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004B658 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F430 (WPP_RECORDER_SF_q.c)
 *     xxxSleepThread2 @ 0x1C0058750 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00DAE50 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00DAF80 (xxxSetCapture.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F5550 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0125A74 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02484C8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, struct tagWND *a2, int a3, __int64 a4, struct tagCURSOR *a5)
{
  unsigned int v5; // ebx
  struct tagCURSOR *v9; // rdi
  __int64 result; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  struct tagCURSOR *v13; // r12
  __int64 ThreadWin32Thread; // rax
  struct tagWND *i; // r14
  __int64 v16; // rcx
  struct tagWND *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  struct tagCURSOR *DropObject; // rax
  struct tagCURSOR *v27; // rcx
  unsigned __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  int v33; // edx
  int v34; // ecx
  unsigned __int64 v35; // r8
  unsigned int v36; // edi
  __int64 v37; // rcx
  struct tagWND *v38; // rdx
  int v39; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+60h] [rbp-A8h]
  struct tagCURSOR *v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-88h]
  __int64 v44; // [rsp+88h] [rbp-80h]
  __int128 v45; // [rsp+90h] [rbp-78h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-68h]
  __int128 v47; // [rsp+B0h] [rbp-58h]
  __int128 v48; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-38h]
  __int128 v50; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-20h]
  _QWORD v52[3]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v53; // [rsp+108h] [rbp+0h] BYREF
  __int64 v54; // [rsp+118h] [rbp+10h]
  _OWORD v55[3]; // [rsp+120h] [rbp+18h] BYREF

  v5 = 0;
  v39 = 1;
  v40 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  v54 = 0LL;
  v44 = 0LL;
  v52[2] = 0LL;
  v45 = 0LL;
  v9 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  memset(v55, 0, sizeof(v55));
  v50 = 0LL;
  v48 = 0LL;
  v53 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v11 = result;
  if ( result )
  {
    PushW32ThreadLock(result, &v53, (__int64)Win32FreePool);
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
    v41 = v13;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v52[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v52;
    v52[1] = v13;
    if ( v13 )
      HMLockObject(v13);
    if ( a2 )
    {
      for ( i = a2; (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0xC0) == 0x40; i = (struct tagWND *)*((_QWORD *)i + 13) )
        ;
      *(_QWORD *)&v48 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v48;
      *((_QWORD *)&v48 + 1) = i;
      HMLockObject(i);
      xxxInternalUpdateWindow(i, 1u);
      ThreadUnlock1(v16);
    }
    if ( gpqForeground )
    {
      v17 = *(struct tagWND **)(gpqForeground + 112LL);
      if ( v17 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
        {
          v18 = 33;
          if ( *((_QWORD *)v17 + 2) == gptiCurrent )
            v17 = a2;
          else
            v18 = 49;
          xxxWindowEvent(0x80000004, v17, 0, 3u, v18);
        }
      }
    }
    xxxWindowEvent(0xEu, a2, 0, 0, 0);
    xxxSetCapture((__int64)a2);
    LOBYTE(v19) = 1;
    zzzShowCursor(v19);
    v21 = 1;
    v42 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v42;
    v43 = 0LL;
    while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage(&v45, 0LL, 0x200u, 0x20Eu, 1, 0)
           && !(unsigned int)xxxInternalGetMessage(&v45, 0LL, 0x23u, 0x23u, 1, 0)
           && !(unsigned int)xxxInternalGetMessage(&v45, 0LL, 0x100u, 0x109u, 1, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v22);
          ThreadUnlock1(v23);
          goto LABEL_69;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage(v55, 0LL, 0x100u, 0x109u, 1, 0) )
        ;
      if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a2
        || DWORD2(v45) == 256 && (_QWORD)v46 == 27LL )
      {
        v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        if ( v9 )
          zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 5528LL));
        break;
      }
      v24 = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(v11 + 48) = *(_OWORD *)v11;
      v25 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(v11 + 64) = v24;
      *(_OWORD *)(v11 + 80) = v25;
      *(_QWORD *)(v11 + 32) = *(_QWORD *)((char *)&v47 + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v11);
      v9 = DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9);
      if ( a2 )
      {
        v27 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (unsigned __int64)a2,
          0x22Du,
          v9 != v27,
          (struct _LARGE_STRING *)v11,
          0,
          0,
          0LL,
          1,
          1);
      }
      if ( v40 == HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), 1) )
      {
        if ( v40 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v40, 0x22Fu, 0LL, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1, 1);
        }
      }
      else
      {
        if ( v40 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v40, 0x22Eu, 0LL, (struct _LARGE_STRING *)(v11 + 48), 0, 0, 0LL, 1, 1);
        }
        v28 = HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), 1);
        v40 = v28;
        ThreadUnlock1(v29);
        v42 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v42;
        v43 = v28;
        if ( v28 )
        {
          HMLockObject(v28);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(v28, 0x22Eu, 1uLL, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1, 1);
        }
      }
      if ( DWORD2(v45) == 162 || DWORD2(v45) == 514 )
      {
        v21 = 0;
        v39 = 0;
      }
      else
      {
        v21 = v39;
      }
      if ( !v21 )
        break;
    }
    ThreadUnlock1(v20);
    if ( v21 )
      v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
    xxxReleaseCapture();
    zzzShowCursor(0LL);
    zzzSetCursor(v41);
    ThreadUnlock1(v30);
    if ( v9 == *(struct tagCURSOR **)(gasyscur[0] + 5528LL)
      || (v31 = ValidateHwnd(*(_QWORD *)(v11 + 8)), (v32 = v31) == 0) )
    {
      v36 = 0;
    }
    else
    {
      *(_QWORD *)&v50 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v50;
      *((_QWORD *)&v50 + 1) = v31;
      HMLockObject(v31);
      *(_DWORD *)(*(_QWORD *)(v32 + 16) + 488LL) |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_q(
          v34,
          v33,
          2,
          10,
          (__int64)&WPP_d797790c7a3731f04d2687a9272fe752_Traceguids,
          *(_QWORD *)(v32 + 16));
      }
      v35 = 0LL;
      if ( a2 )
        v35 = *(_QWORD *)a2;
      _InterlockedIncrement(&glSendMessage);
      v36 = xxxSendTransformableMessageTimeout(v32, 0x22Au, v35, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v37);
    }
    if ( gpqForeground )
    {
      v38 = *(struct tagWND **)(gpqForeground + 112LL);
      if ( v38 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          xxxWindowEvent(0x80000005, v38, 0, 4u, 0x21u);
      }
    }
    xxxWindowEvent(0xFu, a2, 0, 0, 0);
    v5 = v36;
LABEL_69:
    PopAndFreeAlwaysW32ThreadLock((__int64)&v53);
    return v5;
  }
  return result;
}
