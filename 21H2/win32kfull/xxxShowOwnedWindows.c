/*
 * XREFs of xxxShowOwnedWindows @ 0x1C00CB710
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserShowOwnedPopups @ 0x1C0151F00 (NtUserShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C023DBB8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 */

struct tagBWL *__fastcall xxxShowOwnedWindows(__int64 a1, unsigned int a2, __int64 a3)
{
  struct tagBWL *result; // rax
  __int64 DesktopWindow; // rax
  struct tagBWL *v8; // r13
  __int64 v9; // r14
  _QWORD *v10; // r15
  __int64 v11; // rax
  struct tagWND *v12; // rdi
  __int64 v13; // rcx
  __int64 i; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 RectRgnIndirect; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int128 v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]

  v22 = 0LL;
  v23 = 0LL;
  result = *(struct tagBWL **)(a1 + 40);
  if ( (*((_BYTE *)result + 31) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    result = BuildHwndList(*(ShellWindowManagement **)(DesktopWindow + 112), (const struct tagWND *)2, 0LL, 1);
    v8 = result;
    if ( result )
    {
      v9 = 4LL;
      if ( a2 != 2 )
        v9 = 0LL;
      v10 = (_QWORD *)((char *)result + 32);
      if ( a2 == 4 )
        v9 = 3LL;
      while ( 1 )
      {
        if ( *v10 == 1LL )
          return (struct tagBWL *)FreeHwndList(v8);
        v11 = HMValidateHandleNoSecure(*v10, 1);
        v12 = (struct tagWND *)v11;
        if ( v11 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 136) + 8LL) + 8LL) & 4) == 0 && v11 != a1 )
        {
          v13 = *(_QWORD *)(v11 + 120);
          if ( v13 )
          {
            for ( i = *(_QWORD *)(v13 + 40); (*(_BYTE *)(i + 31) & 0xC0) != 0; i = *(_QWORD *)(v15 + 40) )
            {
              if ( v13 == a1 )
                break;
              if ( (*(_BYTE *)(i + 31) & 0xC0) == 0xC0 )
                break;
              v15 = *(_QWORD *)(v13 + 120);
              if ( !v15 )
                break;
              v13 = *(_QWORD *)(v13 + 120);
            }
          }
          if ( v9 )
          {
            if ( !v13 || v13 == a1 || a2 == 4 && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 0x28) == 0x20 )
              goto LABEL_14;
          }
          else if ( v13 != a1 )
          {
            goto LABEL_14;
          }
          v16 = *((_QWORD *)v12 + 5);
          if ( a2 >= 3 )
          {
            if ( (*(_BYTE *)(v16 + 17) & 0x40) == 0 )
              goto LABEL_14;
          }
          else if ( (*(_BYTE *)(v16 + 31) & 0x10) == 0 )
          {
            goto LABEL_14;
          }
          if ( a3 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect(v16 + 88);
            GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
            GreDeleteObject(RectRgnIndirect);
            SetOrClrWF(1, v12, 0x140u, 1);
            SetVisible(v12, 0);
          }
          else
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v22 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v22;
            *((_QWORD *)&v22 + 1) = v12;
            HMLockObject(v12);
            xxxSendMessage((ULONG_PTR)v12);
            ThreadUnlock1(v20, v19, v21);
          }
        }
LABEL_14:
        ++v10;
      }
    }
  }
  return result;
}
