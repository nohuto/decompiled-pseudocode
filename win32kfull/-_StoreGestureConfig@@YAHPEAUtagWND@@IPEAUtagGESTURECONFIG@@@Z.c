/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C00CB290
 * Callers:
 *     SetGestureConfigSettings @ 0x1C00CB3F8 (SetGestureConfigSettings.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C00CB06C (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00CB534 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00CBF8C (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C00CBFD8 (-IsBitSet@@YAHPEAEI@Z.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C0206FD0 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C0207008 (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v8; // rax
  int v9; // ebp
  int *i; // rbx
  int v11; // esi
  int v12; // ecx
  __int64 v13; // r9
  int v14; // edx
  unsigned int v15; // r9d
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v21; // r9d
  struct tagGESTURECONFIGLIST *v22; // rcx
  int v23; // ecx
  struct tagGESTURECONFIGLIST *v24; // [rsp+68h] [rbp+20h] BYREF

  v24 = 0LL;
  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(a1);
  if ( !WindowGCList )
  {
    v8 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuotaZInit(64LL, 1667724117LL);
    WindowGCList = v8;
    if ( !v8 )
    {
LABEL_24:
      v23 = 14;
      goto LABEL_26;
    }
    memset_0(v8, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  v9 = 0;
  if ( !a2 )
    return 1LL;
  for ( i = (int *)((char *)a3 + 4); ; i += 3 )
  {
    v11 = i[1];
    v12 = *i;
    if ( (v11 & *i) != 0 )
      break;
    v13 = (unsigned int)*(i - 1);
    if ( (unsigned int)(v13 - 1) > 6 )
      break;
    v14 = ~dword_1C0319510[v13];
    if ( (v14 & v12) != 0 || (v14 & v11) != 0 )
      break;
    if ( v12 || v11 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v13) )
      {
        if ( (unsigned int)FindGID(WindowGCList, v15, &v24) )
        {
          v22 = v24;
          *((_DWORD *)v24 + 4) = v11;
          *((_DWORD *)v22 + 3) = *i;
        }
        goto LABEL_16;
      }
      v16 = Win32AllocPoolWithQuotaZInit(24LL, 1667724117LL);
      if ( !v16 )
        goto LABEL_24;
      v17 = 1;
      *(_DWORD *)(v16 + 8) = *(i - 1);
      *(_DWORD *)(v16 + 16) = i[1];
      *(_DWORD *)(v16 + 12) = *i;
      v18 = *(_BYTE *)(v16 + 8) & 7;
      *(_QWORD *)v16 = WindowGCList[v18];
      WindowGCList[v18] = (struct tagGESTURECONFIGLIST *)v16;
      v19 = *(_DWORD *)(v16 + 8);
    }
    else
    {
      if ( !(unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v13) )
        goto LABEL_16;
      GCRemoveHashElement(WindowGCList, v21);
      v19 = *(i - 1);
      v17 = 0;
    }
    SetBitMask(a1, v19, v17);
LABEL_16:
    if ( ++v9 >= a2 )
      return 1LL;
  }
  v23 = 87;
LABEL_26:
  UserSetLastError(v23);
  return 0LL;
}
