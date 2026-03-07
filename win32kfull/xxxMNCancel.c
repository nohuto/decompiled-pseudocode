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
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+50h] [rbp-39h] BYREF
  int v22; // [rsp+60h] [rbp-29h]
  int v23; // [rsp+64h] [rbp-25h]
  _QWORD v24[3]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v25; // [rsp+80h] [rbp-9h] BYREF
  __int64 v26; // [rsp+90h] [rbp+7h]
  __int128 v27; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+F0h] [rbp+67h]

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, *(_QWORD *)a1);
  v23 = **(_DWORD **)v21[0];
  v7 = (**(_DWORD **)v21[0] >> 3) & 1;
  v8 = (**(_DWORD **)v21[0] >> 2) & 1;
  v29 = **(_DWORD **)v21[0] & 1;
  v9 = **(_DWORD **)v21[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v22 = v9 & 0x800;
  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  **(_DWORD **)v21[0] |= 0x8000u;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) && (**(_DWORD **)v21[0] & 0x80000) == 0 )
  {
    **(_DWORD **)v21[0] |= 0x80000u;
    ThreadLock(*(_QWORD *)(*(_QWORD *)v21[0] + 16LL), &v25);
    xxxMNCloseHierarchy(*(_QWORD *)v21[0], a1);
    xxxMNSelectItem(v21, a1);
    v10 = v21[0];
    *(_DWORD *)(a1 + 8) &= ~1u;
    v11 = *(struct tagWND **)(*(_QWORD *)v10 + 8LL);
    ThreadLock(v11, &v27);
    xxxMNReleaseCapture(a1);
    if ( v7 )
    {
      xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v21[0] + 16LL), -4, 0, 0);
      v13 = *(_QWORD *)v21[0];
      if ( *(_QWORD *)(*(_QWORD *)v21[0] + 16LL) )
        xxxDestroyWindow(*(__int64 **)(*(_QWORD *)v21[0] + 16LL));
    }
    if ( v11 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
      v15 = -1;
      v24[2] = -1LL;
      xxxSendMenuSelect((_DWORD)v11, 0, (unsigned int)v24, -1, a1);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
      if ( !v8 )
        v15 = v29 != 0 ? 0xFFFFFFFD : 0;
      xxxWindowEvent(5u, v11, v15, 0, 0);
      if ( !v22 )
        xxxSendMessage(v11, 0x212u);
      if ( a2 )
      {
        xxxPlayEventSound(6LL);
        v16 = (v23 & 0x100) == 0;
        *(_DWORD *)(a1 + 24) = v5;
        if ( v16 )
        {
          if ( v8 || !v7 || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 21LL) & 1) != 0 )
          {
            PostTransformableMessage((unsigned __int64)v11, a2, v5, a4, 1);
          }
          else if ( a2 == 273 || a2 == 274 || a2 == 294 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v11, a2, v5, a4, 0, 0, 0LL, 1, 1);
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 24) = 0;
      }
    }
    ThreadUnlock1(v13, v12, v14);
    ThreadUnlock1(v18, v17, v19);
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21);
}
