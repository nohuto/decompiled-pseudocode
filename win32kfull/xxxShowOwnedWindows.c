/*
 * XREFs of xxxShowOwnedWindows @ 0x1C010189C
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserShowOwnedPopups @ 0x1C01DFBB0 (NtUserShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C02278C0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

void __fastcall xxxShowOwnedWindows(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 DesktopWindow; // rax
  struct tagBWL *v8; // rax
  __int64 v9; // r12
  _QWORD *v10; // r13
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 **v15; // r15
  bool v16; // zf
  __int64 v17; // rcx
  __int64 i; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 RectRgnIndirect; // rbx
  __int128 v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  struct tagBWL *v27; // [rsp+80h] [rbp+8h]

  v26 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = a3;
  v25 = 0LL;
  if ( (*(_BYTE *)(v4 + 31) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v8 = BuildHwndList(*(ShellWindowManagement **)(DesktopWindow + 112), 2, 0LL, 1);
    v27 = v8;
    if ( v8 )
    {
      v9 = 4LL;
      v10 = (_QWORD *)((char *)v8 + 32);
      v11 = *((_QWORD *)v8 + 4);
      if ( a2 != 2 )
        v9 = 0LL;
      if ( a2 == 4 )
        v9 = 3LL;
      if ( v11 != 1 )
      {
        while ( 1 )
        {
          v12 = 0LL;
          PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(gpsi + 8LL) )
          {
            v13 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v11;
            v15 = (__int64 **)HMPkheFromPhe(v13);
            LOWORD(v11) = WORD1(v11) & 0x7FFF;
            if ( ((WORD1(v11) & 0x7FFF) == *(_WORD *)(v13 + 26)
               || (_WORD)v11 == 0x7FFF
               || !(_WORD)v11 && PsGetCurrentProcessWow64Process(v14))
              && (*(_BYTE *)(v13 + 25) & 1) == 0 )
            {
              v16 = *(_BYTE *)(v13 + 24) == 1;
              v5 = a3;
              if ( v16 )
                v12 = *v15;
            }
            else
            {
              v5 = a3;
            }
          }
          if ( !v12 || (*(_BYTE *)(*(_QWORD *)(v12[17] + 8) + 8LL) & 4) != 0 || v12 == (__int64 *)a1 )
            goto LABEL_19;
          v17 = v12[15];
          if ( v17 )
          {
            for ( i = *(_QWORD *)(v17 + 40); (*(_BYTE *)(i + 31) & 0xC0) != 0; i = *(_QWORD *)(v19 + 40) )
            {
              if ( v17 == a1 )
                break;
              if ( (*(_BYTE *)(i + 31) & 0xC0) == 0xC0 )
                break;
              v19 = *(_QWORD *)(v17 + 120);
              if ( !v19 )
                break;
              v17 = *(_QWORD *)(v17 + 120);
            }
          }
          if ( v9 )
          {
            if ( !v17 || v17 == a1 )
              goto LABEL_19;
            if ( a2 == 4 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 31LL) & 0x28) == 0x20 )
                goto LABEL_19;
              goto LABEL_32;
            }
          }
          else if ( v17 != a1 )
          {
            goto LABEL_19;
          }
          if ( a2 < 3 )
          {
            v20 = v12[5];
            if ( (*(_BYTE *)(v20 + 31) & 0x10) != 0 )
              goto LABEL_33;
            goto LABEL_19;
          }
LABEL_32:
          v20 = v12[5];
          if ( (*(_BYTE *)(v20 + 17) & 0x40) != 0 )
          {
LABEL_33:
            if ( v5 )
            {
              RectRgnIndirect = GreCreateRectRgnIndirect(v20 + 88);
              GreCombineRgn(v5, v5, RectRgnIndirect, 2LL);
              GreDeleteObject(RectRgnIndirect);
              SetOrClrWF(1, v12, 0x140u, 1);
              SetVisible((struct tagWND *)v12, 0);
            }
            else
            {
              ThreadLockAlways(v12, &v25);
              xxxSendMessage((struct tagWND *)v12, 0x18u);
              ThreadUnlock1(v22, v21, v23);
            }
          }
LABEL_19:
          v11 = *++v10;
          if ( *v10 == 1LL )
          {
            v8 = v27;
            break;
          }
        }
      }
      FreeHwndList(v8);
    }
  }
}
