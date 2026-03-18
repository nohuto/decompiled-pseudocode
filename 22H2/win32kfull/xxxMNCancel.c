/*
 * XREFs of xxxMNCancel @ 0x1C0216E04
 * Callers:
 *     xxxEndMenuLoop @ 0x1C0213C50 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0215E6C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNButtonUp @ 0x1C0216CEC (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C02170F8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0218038 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0231DD0 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C023F1B8 (xxxMNKeyFilter.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C004F59C (_PostTransformableMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C00A7E50 (xxxPlayEventSound.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     xxxMNCloseHierarchy @ 0x1C0217510 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C0219A20 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C0219AA0 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C023FDCC (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, __int128 *a4)
{
  unsigned __int64 v5; // r13
  int v7; // r12d
  int v8; // r15d
  int v9; // eax
  __int64 v10; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // esi
  __int64 v16; // r9
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD v22[2]; // [rsp+50h] [rbp-39h] BYREF
  int v23; // [rsp+60h] [rbp-29h]
  int v24; // [rsp+64h] [rbp-25h]
  _QWORD v25[3]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v26; // [rsp+80h] [rbp-9h] BYREF
  __int64 v27; // [rsp+90h] [rbp+7h]
  __int128 v28; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+A8h] [rbp+1Fh]
  int v30; // [rsp+F0h] [rbp+67h]

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, *(_QWORD *)a1);
  v24 = **(_DWORD **)v22[0];
  v7 = (**(_DWORD **)v22[0] >> 3) & 1;
  v8 = (**(_DWORD **)v22[0] >> 2) & 1;
  v30 = **(_DWORD **)v22[0] & 1;
  v9 = **(_DWORD **)v22[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v23 = v9 & 0x800;
  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  **(_DWORD **)v22[0] |= 0x8000u;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) && (**(_DWORD **)v22[0] & 0x80000) == 0 )
  {
    **(_DWORD **)v22[0] |= 0x80000u;
    ThreadLock(*(_QWORD *)(*(_QWORD *)v22[0] + 16LL), &v26);
    xxxMNCloseHierarchy(*(_QWORD *)v22[0], a1);
    xxxMNSelectItem(v22, a1);
    v10 = v22[0];
    *(_DWORD *)(a1 + 8) &= ~1u;
    v11 = *(struct tagWND **)(*(_QWORD *)v10 + 8LL);
    ThreadLock(v11, &v28);
    xxxMNReleaseCapture(a1);
    if ( v7 )
    {
      xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v22[0] + 16LL), -4, 0, 0);
      v13 = *(_QWORD *)v22[0];
      if ( *(_QWORD *)(*(_QWORD *)v22[0] + 16LL) )
        xxxDestroyWindow(*(__int64 **)(*(_QWORD *)v22[0] + 16LL));
    }
    if ( v11 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
      v15 = -1;
      v25[2] = -1LL;
      xxxSendMenuSelect((_DWORD)v11, 0, (unsigned int)v25, -1, a1);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v25);
      if ( !v8 )
        v15 = v30 != 0 ? 0xFFFFFFFD : 0;
      xxxWindowEvent(5u, v11, v15, 0, 0);
      if ( !v23 )
        xxxSendMessage((ULONG_PTR)v11);
      if ( a2 )
      {
        xxxPlayEventSound(6LL, v12, v14, v16);
        v17 = (v24 & 0x100) == 0;
        *(_DWORD *)(a1 + 24) = v5;
        if ( v17 )
        {
          if ( v8 || !v7 || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 21LL) & 1) != 0 )
          {
            PostTransformableMessage(v11, a2, v5, (__int64)a4, 1);
          }
          else if ( a2 == 273 || a2 == 274 || a2 == 294 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout((unsigned __int64 *)v11, a2, v5, a4, 0, 0, 0LL, 1, 1);
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 24) = 0;
      }
    }
    ThreadUnlock1(v13, v12, v14);
    ThreadUnlock1(v19, v18, v20);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22);
}
