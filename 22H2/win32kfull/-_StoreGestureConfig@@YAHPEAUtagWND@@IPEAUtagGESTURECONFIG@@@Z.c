/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C012AFE0
 * Callers:
 *     SetGestureConfigSettings @ 0x1C012B144 (SetGestureConfigSettings.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C012ADC0 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C012B280 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C012B374 (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C012B3A4 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C0226EB4 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C0226EEC (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v10; // rax
  int v11; // ebp
  int *i; // rbx
  int v13; // esi
  int v14; // ecx
  __int64 v15; // r9
  unsigned int v16; // r9d
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // edx
  unsigned int v22; // r9d
  struct tagGESTURECONFIGLIST *v23; // rcx
  __int64 v24; // rcx
  struct tagGESTURECONFIGLIST *v25; // [rsp+68h] [rbp+20h] BYREF

  v25 = 0LL;
  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(a1);
  if ( !WindowGCList )
  {
    v10 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuota(64LL, 1667724117LL);
    WindowGCList = v10;
    if ( !v10 )
    {
LABEL_24:
      v24 = 14LL;
      goto LABEL_26;
    }
    memset(v10, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  v11 = 0;
  if ( !a2 )
    return 1LL;
  for ( i = (int *)((char *)a3 + 4); ; i += 3 )
  {
    v13 = i[1];
    v14 = *i;
    if ( (v13 & *i) != 0 )
      break;
    v15 = (unsigned int)*(i - 1);
    if ( (unsigned int)(v15 - 1) > 6 )
      break;
    v7 = (unsigned int)~dword_1C02EB250[v15];
    if ( ((unsigned int)v7 & v14) != 0 || ((unsigned int)v7 & v13) != 0 )
      break;
    if ( v14 || v13 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v15) )
      {
        if ( (unsigned int)FindGID(WindowGCList, v16, &v25) )
        {
          v23 = v25;
          *((_DWORD *)v25 + 4) = v13;
          *((_DWORD *)v23 + 3) = *i;
        }
        goto LABEL_16;
      }
      v17 = Win32AllocPoolWithQuota(24LL, 1667724117LL);
      if ( !v17 )
        goto LABEL_24;
      v18 = 1;
      *(_DWORD *)(v17 + 8) = *(i - 1);
      v19 = *(_BYTE *)(v17 + 8) & 7;
      *(_DWORD *)(v17 + 16) = i[1];
      *(_DWORD *)(v17 + 12) = *i;
      *(_QWORD *)v17 = WindowGCList[v19];
      WindowGCList[v19] = (struct tagGESTURECONFIGLIST *)v17;
      v20 = *(_DWORD *)(v17 + 8);
    }
    else
    {
      if ( !(unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v15) )
        goto LABEL_16;
      GCRemoveHashElement(WindowGCList, v22);
      v20 = *(i - 1);
      v18 = 0;
    }
    SetBitMask(a1, v20, v18);
LABEL_16:
    if ( ++v11 >= a2 )
      return 1LL;
  }
  v24 = 87LL;
LABEL_26:
  UserSetLastError(v24, v7, v8);
  return 0LL;
}
