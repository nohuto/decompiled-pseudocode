/*
 * XREFs of SetGestureConfigSettings @ 0x1C0116A34
 * Callers:
 *     NtUserSetGestureConfig @ 0x1C0116700 (NtUserSetGestureConfig.c)
 * Callees:
 *     FreeWindowGCData @ 0x1C005FC00 (FreeWindowGCData.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C007A438 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C01168D0 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0116B70 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C0116BB0 (-SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C011F4A8 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 */

__int64 __fastcall SetGestureConfigSettings(struct tagWND *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _BYTE *v10; // rax
  unsigned __int64 v11; // rdx
  struct tagVWPLGESTUREDATA *GCData; // rdi
  __int64 v13; // r8
  int v14; // r9d
  int v15; // ecx
  _BYTE *v16; // rcx
  __int64 v17; // rbx
  __int64 v19; // rcx

  if ( !(unsigned int)SortGestureConfigArray((struct tagGESTURECONFIG *)a4, a3) )
    goto LABEL_16;
  if ( !GetGCData(a1) )
  {
    v8 = Win32AllocPoolWithQuotaZInit(24LL, 1684501333LL);
    v9 = (_QWORD *)v8;
    if ( !v8
      || (*(_DWORD *)(v8 + 12) = 0,
          *(_DWORD *)(v8 + 8) = 0,
          v10 = (_BYTE *)Win32AllocPoolWithQuotaZInit(1LL, 1835168597LL),
          (*v9 = v10) == 0LL) )
    {
      v19 = 14LL;
      goto LABEL_18;
    }
    *v10 = 0;
    v9[2] = 0LL;
    VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 872LL), (__int64)v9, a1, 5u);
  }
  GCData = GetGCData(a1);
  if ( *(_DWORD *)a4 )
    return _StoreGestureConfig(a1, a3, (struct tagGESTURECONFIG *)a4);
  v15 = *(_DWORD *)(a4 + 4);
  if ( !v15 && !*(_DWORD *)(a4 + 8) )
  {
    FreeWindowGCData(a1, v11, v13, v14);
    v15 = *(_DWORD *)(a4 + 4);
  }
  v7 = *(unsigned int *)(a4 + 8);
  if ( (v15 | *(_DWORD *)(a4 + 8)) != 1 || v15 == (_DWORD)v7 )
  {
LABEL_16:
    v19 = 87LL;
LABEL_18:
    UserSetLastError(v19, v7);
    return 0LL;
  }
  *((_DWORD *)GCData + 2) = v15;
  v16 = *(_BYTE **)GCData;
  *((_DWORD *)GCData + 3) = *(_DWORD *)(a4 + 8);
  *v16 = 0;
  v17 = *((_QWORD *)GCData + 2);
  if ( v17 )
  {
    FreeWindowGCList(*((struct tagGESTURECONFIGLIST ***)GCData + 2));
    Win32FreePool(v17);
    *((_QWORD *)GCData + 2) = 0LL;
  }
  return 1LL;
}
