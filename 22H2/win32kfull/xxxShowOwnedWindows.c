/*
 * XREFs of xxxShowOwnedWindows @ 0x1C00C4208
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserShowOwnedPopups @ 0x1C01DEB00 (NtUserShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C0224BB0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 */

__int64 __fastcall xxxShowOwnedWindows(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 DesktopWindow; // rax
  __int64 v8; // r12
  _QWORD *v9; // r13
  __int64 v10; // rbx
  struct tagWND *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct tagWND **v16; // r15
  bool v17; // zf
  struct tagWND *v18; // rcx
  __int64 i; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 RectRgnIndirect; // rbx
  __int128 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+80h] [rbp+8h]

  v3 = (int)a2;
  v27 = 0LL;
  result = *((_QWORD *)a1 + 5);
  v5 = a3;
  v26 = 0LL;
  if ( (*(_BYTE *)(result + 31) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1, a2);
    result = BuildHwndList(*(ShellWindowManagement **)(DesktopWindow + 112));
    v28 = result;
    if ( result )
    {
      v8 = 4LL;
      v9 = (_QWORD *)(result + 32);
      v10 = *(_QWORD *)(result + 32);
      if ( (_DWORD)v3 != 2 )
        v8 = 0LL;
      if ( (_DWORD)v3 == 4 )
        v8 = 3LL;
      if ( v10 != 1 )
      {
        while ( 1 )
        {
          v11 = 0LL;
          PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(gpsi + 8LL) )
          {
            v12 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v10;
            v16 = (struct tagWND **)HMPkheFromPhe(v12);
            LOWORD(v10) = WORD1(v10) & 0x7FFF;
            if ( ((WORD1(v10) & 0x7FFF) == *(_WORD *)(v12 + 26)
               || (_WORD)v10 == 0x7FFF
               || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v14, v13, v15))
              && (*(_BYTE *)(v12 + 25) & 1) == 0 )
            {
              v17 = *(_BYTE *)(v12 + 24) == 1;
              v5 = a3;
              if ( v17 )
                v11 = *v16;
            }
            else
            {
              v5 = a3;
            }
          }
          if ( !v11 || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 17) + 8LL) + 8LL) & 4) != 0 || v11 == a1 )
            goto LABEL_19;
          v18 = (struct tagWND *)*((_QWORD *)v11 + 15);
          if ( v18 )
          {
            for ( i = *((_QWORD *)v18 + 5); (*(_BYTE *)(i + 31) & 0xC0) != 0; i = *(_QWORD *)(v20 + 40) )
            {
              if ( v18 == a1 )
                break;
              if ( (*(_BYTE *)(i + 31) & 0xC0) == 0xC0 )
                break;
              v20 = *((_QWORD *)v18 + 15);
              if ( !v20 )
                break;
              v18 = (struct tagWND *)*((_QWORD *)v18 + 15);
            }
          }
          if ( v8 )
          {
            if ( !v18 || v18 == a1 )
              goto LABEL_19;
            if ( (_DWORD)v3 == 4 )
            {
              if ( (*(_BYTE *)(*((_QWORD *)v18 + 5) + 31LL) & 0x28) == 0x20 )
                goto LABEL_19;
              goto LABEL_32;
            }
          }
          else if ( v18 != a1 )
          {
            goto LABEL_19;
          }
          if ( (unsigned int)v3 < 3 )
          {
            v21 = *((_QWORD *)v11 + 5);
            if ( (*(_BYTE *)(v21 + 31) & 0x10) != 0 )
              goto LABEL_33;
            goto LABEL_19;
          }
LABEL_32:
          v21 = *((_QWORD *)v11 + 5);
          if ( (*(_BYTE *)(v21 + 17) & 0x40) != 0 )
          {
LABEL_33:
            if ( v5 )
            {
              RectRgnIndirect = GreCreateRectRgnIndirect(v21 + 88);
              GreCombineRgn(v5, v5, RectRgnIndirect, 2LL);
              GreDeleteObject(RectRgnIndirect);
              SetOrClrWF(1LL, v11, 320LL, 1LL);
              SetVisible(v11);
            }
            else
            {
              ThreadLockAlways(v11, &v26);
              xxxSendMessage(v11, 24LL, (unsigned int)v3 >= 3, v3);
              ThreadUnlock1(v23, v22, v24);
            }
          }
LABEL_19:
          v10 = *++v9;
          if ( *v9 == 1LL )
          {
            result = v28;
            return FreeHwndList(result);
          }
        }
      }
      return FreeHwndList(result);
    }
  }
  return result;
}
