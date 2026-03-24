/*
 * XREFs of SetGestureConfigSettings @ 0x1C012B4F4
 * Callers:
 *     NtUserSetGestureConfig @ 0x1C012B1C0 (NtUserSetGestureConfig.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     FreeWindowGCData @ 0x1C007C120 (FreeWindowGCData.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C011054C (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C012B390 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C012B630 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C012B670 (-SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C0133F38 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 */

__int64 __fastcall SetGestureConfigSettings(struct tagWND *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rdx
  struct tagVWPLGESTUREDATA *GCData; // rdi
  __int64 v14; // r9
  int v15; // ecx
  _BYTE *v16; // rcx
  void *v17; // rbx
  __int64 v19; // rcx

  if ( !(unsigned int)SortGestureConfigArray((struct tagGESTURECONFIG *)a4, a3) )
    goto LABEL_16;
  if ( !GetGCData(a1) )
  {
    v9 = Win32AllocPoolWithQuota(24LL, 1684501333LL);
    v10 = (_QWORD *)v9;
    if ( !v9
      || (*(_DWORD *)(v9 + 12) = 0,
          *(_DWORD *)(v9 + 8) = 0,
          v11 = (_BYTE *)Win32AllocPoolWithQuota(1LL, 1835168597LL),
          (*v10 = v11) == 0LL) )
    {
      v19 = 14LL;
      goto LABEL_18;
    }
    *v11 = 0;
    v10[2] = 0LL;
    VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 872LL), (__int64)v10, a1, 5u);
  }
  GCData = GetGCData(a1);
  if ( *(_DWORD *)a4 )
    return _StoreGestureConfig(a1, a3, (struct tagGESTURECONFIG *)a4);
  v15 = *(_DWORD *)(a4 + 4);
  if ( !v15 && !*(_DWORD *)(a4 + 8) )
  {
    FreeWindowGCData(a1, v12, v8, v14);
    v15 = *(_DWORD *)(a4 + 4);
  }
  v7 = *(unsigned int *)(a4 + 8);
  if ( (v15 | *(_DWORD *)(a4 + 8)) != 1 || v15 == (_DWORD)v7 )
  {
LABEL_16:
    v19 = 87LL;
LABEL_18:
    UserSetLastError(v19, v7, v8);
    return 0LL;
  }
  *((_DWORD *)GCData + 2) = v15;
  v16 = *(_BYTE **)GCData;
  *((_DWORD *)GCData + 3) = *(_DWORD *)(a4 + 8);
  *v16 = 0;
  v17 = (void *)*((_QWORD *)GCData + 2);
  if ( v17 )
  {
    FreeWindowGCList(*((struct tagGESTURECONFIGLIST ***)GCData + 2));
    Win32FreePool(v17);
    *((_QWORD *)GCData + 2) = 0LL;
  }
  return 1LL;
}
