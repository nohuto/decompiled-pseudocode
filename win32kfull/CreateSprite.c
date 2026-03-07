__int64 __fastcall CreateSprite(HDEV a1, __int64 a2, struct tagRECT *a3, __int64 *a4)
{
  __int64 v8; // rdx
  int v9; // ebp
  int v10; // r8d
  BOOL v11; // r15d
  __int64 v12; // rcx
  BOOL v13; // edi
  int v14; // ebx
  int v15; // eax
  __int64 Sprite; // rdx
  __int64 result; // rax
  _BYTE v18[144]; // [rsp+60h] [rbp-E8h] BYREF

  memset_0(v18, 0, 0x88uLL);
  InitializeMiniWinInfo((const struct tagWND *const)a2, (struct tagMINIWINDOWINFO *)v18);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = *(_BYTE *)(v8 + 31) & 0x10;
  v10 = *(_WORD *)(v8 + 42) & 0x2FFF;
  v11 = v10 == 669;
  v12 = *(_QWORD *)(v8 + 88) - *(_QWORD *)(v8 + 104);
  if ( !v12 )
    v12 = *(_QWORD *)(v8 + 96) - *(_QWORD *)(v8 + 112);
  v13 = !v12 || v10 == 669;
  v14 = IsWindowContentProtected(a2);
  v15 = IsWindowDesktopComposed(a2);
  Sprite = GreCreateSprite(
             a1,
             *(HWND *)a2,
             a3,
             (struct tagMINIWINDOWINFO *)v18,
             *(_DWORD *)(a2 + 256),
             v15,
             v9,
             v11,
             v13,
             v14,
             0LL);
  result = Sprite == 0 ? 0x803F0002 : 0;
  if ( a4 )
    *a4 = Sprite;
  return result;
}
