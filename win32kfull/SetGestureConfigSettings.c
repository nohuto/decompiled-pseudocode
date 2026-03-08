/*
 * XREFs of SetGestureConfigSettings @ 0x1C00CB3F8
 * Callers:
 *     NtUserSetGestureConfig @ 0x1C00CB0C0 (NtUserSetGestureConfig.c)
 * Callees:
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C003C318 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C00CB290 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00CB534 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C00CBEE4 (-SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C00F40AC (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 *     FreeWindowGCData @ 0x1C012EFE8 (FreeWindowGCData.c)
 */

__int64 __fastcall SetGestureConfigSettings(struct tagWND *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _BYTE *v9; // rax
  struct tagVWPLGESTUREDATA *GCData; // rsi
  int v11; // ecx
  _BYTE *v12; // rcx
  void *v13; // rbx
  int v15; // ecx

  if ( !(unsigned int)SortGestureConfigArray((struct tagGESTURECONFIG *)a4, a3) )
    goto LABEL_16;
  if ( !GetGCData(a1) )
  {
    v7 = Win32AllocPoolWithQuotaZInit(24LL, 1684501333LL);
    v8 = (_QWORD *)v7;
    if ( !v7
      || (*(_DWORD *)(v7 + 12) = 0,
          *(_DWORD *)(v7 + 8) = 0,
          v9 = (_BYTE *)Win32AllocPoolWithQuotaZInit(1LL, 1835168597LL),
          (*v8 = v9) == 0LL) )
    {
      v15 = 14;
      goto LABEL_18;
    }
    *v9 = 0;
    v8[2] = 0LL;
    VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 856LL), (__int64)v8, a1, 5u);
  }
  GCData = GetGCData(a1);
  if ( *(_DWORD *)a4 )
    return _StoreGestureConfig(a1, a3, (struct tagGESTURECONFIG *)a4);
  if ( !*(_DWORD *)(a4 + 4) && !*(_DWORD *)(a4 + 8) )
    FreeWindowGCData(a1);
  v11 = *(_DWORD *)(a4 + 4);
  if ( (v11 | *(_DWORD *)(a4 + 8)) != 1 || v11 == *(_DWORD *)(a4 + 8) )
  {
LABEL_16:
    v15 = 87;
LABEL_18:
    UserSetLastError(v15);
    return 0LL;
  }
  *((_DWORD *)GCData + 2) = v11;
  v12 = *(_BYTE **)GCData;
  *((_DWORD *)GCData + 3) = *(_DWORD *)(a4 + 8);
  *v12 = 0;
  v13 = (void *)*((_QWORD *)GCData + 2);
  if ( v13 )
  {
    FreeWindowGCList(*((struct tagGESTURECONFIGLIST ***)GCData + 2));
    Win32FreePool(v13);
    *((_QWORD *)GCData + 2) = 0LL;
  }
  return 1LL;
}
