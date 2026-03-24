/*
 * XREFs of xxxMNCancel @ 0x1C0236ED4
 * Callers:
 *     xxxEndMenuLoop @ 0x1C0233740 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C02339B8 (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0235AE8 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNButtonUp @ 0x1C0236DBC (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C02372E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0249E34 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C025046C (xxxMNKeyFilter.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C003F8B8 (_PostTransformableMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C011E880 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C0237760 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023A53C (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C023A5BC (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C0250E4C (xxxSendMenuSelect.c)
 */

__int64 *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, struct _LARGE_STRING *a4)
{
  unsigned __int64 v5; // r12
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v28; // rax
  __int64 *result; // rax
  unsigned int v30; // [rsp+50h] [rbp-39h]
  _QWORD v31[2]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v32; // [rsp+68h] [rbp-21h] BYREF
  __int64 v33; // [rsp+78h] [rbp-11h]
  __int128 v34; // [rsp+80h] [rbp-9h] BYREF
  __int64 v35; // [rsp+90h] [rbp+7h]
  _QWORD v36[9]; // [rsp+98h] [rbp+Fh] BYREF

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, *(_QWORD *)a1);
  v30 = **(_DWORD **)v31[0];
  v7 = (v30 >> 3) & 1;
  v8 = (v30 >> 2) & 1;
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v35 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  **(_DWORD **)v31[0] |= 0x8000u;
  v9 = *(_QWORD *)(a1 + 32);
  if ( gptiCurrent == v9 )
  {
    v9 = *(_QWORD *)v31[0];
    if ( (**(_DWORD **)v31[0] & 0x80000) == 0 )
    {
      **(_DWORD **)v31[0] |= 0x80000u;
      v10 = *(_QWORD *)(*(_QWORD *)v31[0] + 16LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v32 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v32;
      *((_QWORD *)&v32 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      xxxMNCloseHierarchy(*(_QWORD *)v31[0], a1);
      xxxMNSelectItem(v31, a1);
      v12 = v31[0];
      *(_DWORD *)(a1 + 8) &= ~1u;
      v13 = *(_QWORD *)(*(_QWORD *)v12 + 8LL);
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v34 = *(_QWORD *)(v14 + 416);
      *(_QWORD *)(v14 + 416) = &v34;
      *((_QWORD *)&v34 + 1) = v13;
      if ( v13 )
        HMLockObject(v13);
      xxxMNReleaseCapture(a1);
      if ( v7 )
      {
        xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v31[0] + 16LL), -4, 0, 0);
        v15 = *(_QWORD *)v31[0];
        if ( *(_QWORD *)(*(_QWORD *)v31[0] + 16LL) )
          xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)v31[0] + 16LL));
      }
      if ( v13 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v36, 0LL);
        v36[2] = -1LL;
        xxxSendMenuSelect(v13, 0, (unsigned int)v36, -1, a1);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v36);
        if ( v8 )
          v16 = -1;
        else
          v16 = (v30 & 1) != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, (struct tagWND *)v13, v16, 0, 0);
        if ( (v30 & 0x800) == 0 )
        {
          v17 = v7 && !v8;
          xxxSendMessage(v13, 0x212u, v17, 0LL);
        }
        if ( a2 )
        {
          xxxPlayEventSound(6LL);
          *(_DWORD *)(a1 + 24) = v5;
          if ( (v30 & 0x100) == 0 )
          {
            if ( v8 || !v7 || (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 21LL) & 1) != 0 )
            {
              PostTransformableMessage((struct tagWND *)v13, a2, v5, (__int64)a4, 1);
            }
            else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout(v13, a2, v5, a4, 0, 0, 0LL, 1, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v15);
      ThreadUnlock1(v18);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
    || (CurrentProcess = PsGetCurrentProcess(v22, v21, v23),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v28 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v28 )
      v20 = *v28;
  }
  if ( v31[0] != gSmartObjNullRef && !--*(_DWORD *)(v31[0] + 8LL) )
  {
    if ( *(_BYTE *)(v31[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v31[0]);
  }
  result = *(__int64 **)(v20 + 1472);
  if ( result )
  {
    result = (__int64 *)*result;
    *(_QWORD *)(v20 + 1472) = result;
  }
  return result;
}
