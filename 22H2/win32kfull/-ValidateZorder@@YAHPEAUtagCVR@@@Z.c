/*
 * XREFs of ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00372FC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0070758 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     PWInsertAfter @ 0x1C0037474 (PWInsertAfter.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C0038568 (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 *     GetLastTopMostWindow @ 0x1C0038C48 (GetLastTopMostWindow.c)
 *     HWInsertAfter @ 0x1C010FB28 (HWInsertAfter.c)
 */

__int64 __fastcall ValidateZorder(struct tagCVR *a1)
{
  unsigned int v2; // ebx
  struct tagWND *v3; // rsi
  __int64 v4; // rax
  struct tagWND *v5; // r9
  struct tagWND *v6; // rdi
  bool v8; // zf
  char *v9; // r10
  __int64 v10; // rcx
  char v11; // dl
  char v12; // r8
  char v13; // cl
  struct tagWND *v14; // rax
  struct tagWND *LastTopMostWindow; // rax
  __int64 v16; // rax
  struct tagWND *LastNonBottomMostWindow; // rax

  v2 = 0;
  v3 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)a1);
  if ( *(char *)(*((_QWORD *)v3 + 5) + 19LL) < 0 )
    return 1LL;
  v4 = PWInsertAfter(*((_QWORD *)a1 + 1));
  v5 = (struct tagWND *)v4;
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !v4 )
      return 1LL;
  }
  if ( v4 == 1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 20LL) & 0x20) != 0 )
      v8 = *((_QWORD *)v3 + 11) == 0LL;
    else
      v8 = v3 == GetLastNonBottomMostWindow(v3, 0);
LABEL_13:
    LOBYTE(v2) = v8;
    return v2;
  }
  v6 = *(struct tagWND **)(*((_QWORD *)v3 + 13) + 112LL);
  if ( !v4 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v3 + 5) + 236LL) == 1 )
    {
      while ( v6 && *(_DWORD *)(*((_QWORD *)v6 + 5) + 236LL) != 1 )
        v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
    }
    v8 = v6 == v3;
    goto LABEL_13;
  }
  v9 = *(char **)(v4 + 40);
  if ( v9[19] < 0 )
    return 1LL;
  if ( (v9[20] & 0x20) != 0 )
  {
    LastNonBottomMostWindow = GetLastNonBottomMostWindow(v3, 1);
    *((_QWORD *)a1 + 1) = HWInsertAfter(LastNonBottomMostWindow);
  }
  else
  {
    v10 = *((_QWORD *)v3 + 5);
    v11 = *(_BYTE *)(v10 + 19);
    v12 = *(_BYTE *)(v10 + 24) & 8;
    v13 = v12 ^ 8;
    if ( (v11 & 4) == 0 )
      v13 = v12;
    if ( v13 != (v9[24] & 8) )
    {
      LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(v3);
      v5 = LastTopMostWindow;
      if ( LastTopMostWindow == v3 )
        return 1LL;
      if ( LastTopMostWindow )
        v16 = *(_QWORD *)LastTopMostWindow;
      else
        v16 = 0LL;
      *((_QWORD *)a1 + 1) = v16;
    }
    if ( v6 != v3 )
    {
      if ( v6 )
      {
        while ( 1 )
        {
          v14 = (struct tagWND *)*((_QWORD *)v6 + 11);
          if ( v14 == v3 )
            break;
          v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
          if ( !v14 )
            return 1LL;
        }
        v8 = v5 == v6;
        goto LABEL_13;
      }
      return 1LL;
    }
  }
  return 0LL;
}
