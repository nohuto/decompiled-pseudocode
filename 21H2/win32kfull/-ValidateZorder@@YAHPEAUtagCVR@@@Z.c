/*
 * XREFs of ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0082294
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HWInsertAfter @ 0x1C0072C90 (HWInsertAfter.c)
 *     PWInsertAfter @ 0x1C0082404 (PWInsertAfter.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C0082518 (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 */

__int64 __fastcall ValidateZorder(struct tagCVR *a1)
{
  unsigned int v2; // ebx
  struct tagWND *v3; // rsi
  __int64 v4; // rax
  struct tagWND *v5; // r9
  struct tagWND *v6; // rdi
  char *v7; // r10
  __int64 v8; // rcx
  char v9; // dl
  char v10; // r8
  char v11; // cl
  struct tagWND *v12; // rax
  bool v14; // zf
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
      v14 = *((_QWORD *)v3 + 11) == 0LL;
    else
      v14 = v3 == GetLastNonBottomMostWindow(v3, 0);
LABEL_19:
    LOBYTE(v2) = v14;
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
    v14 = v6 == v3;
    goto LABEL_19;
  }
  v7 = *(char **)(v4 + 40);
  if ( v7[19] < 0 )
    return 1LL;
  if ( (v7[20] & 0x20) != 0 )
  {
    LastNonBottomMostWindow = GetLastNonBottomMostWindow(v3, 1);
    *((_QWORD *)a1 + 1) = HWInsertAfter((unsigned __int64)LastNonBottomMostWindow);
  }
  else
  {
    v8 = *((_QWORD *)v3 + 5);
    v9 = *(_BYTE *)(v8 + 19);
    v10 = *(_BYTE *)(v8 + 24) & 8;
    v11 = v10 ^ 8;
    if ( (v9 & 4) == 0 )
      v11 = v10;
    if ( v11 != (v7[24] & 8) )
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
          v12 = (struct tagWND *)*((_QWORD *)v6 + 11);
          if ( v12 == v3 )
            break;
          v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
          if ( !v12 )
            return 1LL;
        }
        v14 = v5 == v6;
        goto LABEL_19;
      }
      return 1LL;
    }
  }
  return 0LL;
}
