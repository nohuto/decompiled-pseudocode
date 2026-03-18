/*
 * XREFs of GetGestureConfigSettings @ 0x1C0221144
 * Callers:
 *     NtUserGetGestureConfig @ 0x1C01F4080 (NtUserGetGestureConfig.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0116B70 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C0116C58 (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0116C88 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C0220F6C (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 */

__int64 __fastcall GetGestureConfigSettings(struct tagWND *a1, __int64 a2, char a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v5; // rsi
  int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // rdx
  _DWORD *v10; // rcx
  struct tagVWPLGESTUREDATA *GCData; // r14
  void **WindowGCList; // rax
  unsigned __int8 *v13; // r12
  _DWORD *v14; // rbx
  __int64 v15; // rbp
  struct tagGESTURECONFIGLIST **v16; // r13
  __int64 v17; // r9
  __int64 v18; // r10
  struct tagGESTURECONFIGLIST *v19; // rcx
  int v20; // eax
  _DWORD *v22; // rax
  __int64 v23; // rcx
  struct tagVWPLGESTUREDATA *v24; // r14
  struct tagGESTURECONFIGLIST **v25; // r15
  unsigned __int8 *v26; // r12
  unsigned int v27; // ebp
  int *v28; // rbx
  __int64 v29; // r9
  struct tagGESTURECONFIGLIST *v30; // r9
  int v31; // r8d
  int v32; // r10d
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  struct tagGESTURECONFIGLIST *v36; // [rsp+78h] [rbp+20h] BYREF

  v36 = 0LL;
  v5 = *a4;
  v6 = a3 & 1;
  v7 = (__int64)a5;
  v8 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_5:
    GCData = GetGCData(a1);
    WindowGCList = GetWindowGCList(a1);
    if ( GCData )
    {
      v13 = *(unsigned __int8 **)GCData;
      if ( (_DWORD)v5 )
      {
        v14 = (_DWORD *)(v7 + 8);
        v15 = v5;
        v16 = (struct tagGESTURECONFIGLIST **)WindowGCList;
        while ( (unsigned int)IsBitSet(v13, *(v14 - 2)) )
        {
          if ( (unsigned int)FindGID(v16, v17, &v36) )
          {
            v19 = v36;
            *(v14 - 1) = *((_DWORD *)v36 + 3);
            v20 = *((_DWORD *)v19 + 4);
LABEL_16:
            *v14 = v20;
          }
LABEL_18:
          v14 += 3;
          if ( !--v15 )
          {
            v7 = (__int64)a5;
            goto LABEL_23;
          }
        }
        if ( *((_DWORD *)GCData + 2) )
        {
          *(v14 - 1) = *(_DWORD *)(v18 + 4 * v17);
          v20 = *((_DWORD *)GCData + 3);
        }
        else
        {
          if ( !*((_DWORD *)GCData + 3) )
          {
            *(v14 - 1) = 0;
            *v14 = 0;
            goto LABEL_18;
          }
          *(v14 - 1) = 0;
          v20 = *(_DWORD *)(v18 + 4 * v17);
        }
        goto LABEL_16;
      }
    }
    else if ( (_DWORD)v5 )
    {
      v22 = (_DWORD *)(v7 + 8);
      v23 = v5;
      do
      {
        *(v22 - 1) = 0;
        *v22 = 0;
        v22 += 3;
        --v23;
      }
      while ( v23 );
    }
LABEL_23:
    if ( !v6 || IsTopLevelWindow((__int64)a1) || !a1 )
      return 1LL;
    while ( 1 )
    {
      a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
      if ( !a1 )
        return 1LL;
      v24 = GetGCData(a1);
      v25 = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
      if ( v24 )
      {
        v26 = *(unsigned __int8 **)v24;
        v27 = 0;
        if ( (_DWORD)v5 )
          break;
      }
LABEL_41:
      if ( IsTopLevelWindow((__int64)a1) )
        return 1LL;
    }
    v28 = (int *)(v7 + 8);
    while ( 1 )
    {
      if ( (unsigned int)IsBitSet(v26, *(v28 - 2)) )
      {
        if ( (unsigned int)FindGID(v25, v29, &v36) )
        {
          v30 = v36;
          v31 = *(v28 - 1);
          v32 = *v28;
          v33 = *((_DWORD *)v36 + 3);
          v34 = (v31 | *v28) ^ (v33 | *((_DWORD *)v36 + 4));
          *(v28 - 1) = v31 | v34 & v33;
          v35 = v32 | v34 & *((_DWORD *)v30 + 4);
LABEL_37:
          *v28 = v35;
        }
      }
      else
      {
        if ( !*((_DWORD *)v24 + 2) )
        {
          if ( !*((_DWORD *)v24 + 3) )
          {
            if ( !v25 )
              goto LABEL_40;
            goto LABEL_39;
          }
          v35 = ~*(v28 - 1) & dword_1C02E8E00[v29];
          goto LABEL_37;
        }
        *(v28 - 1) = ~*v28 & dword_1C02E8E00[v29];
      }
LABEL_39:
      ++v27;
      v28 += 3;
      if ( v27 >= (unsigned int)v5 )
      {
LABEL_40:
        v7 = (__int64)a5;
        goto LABEL_41;
      }
    }
  }
  v10 = a5;
  while ( (unsigned int)(*v10 - 1) <= 6 )
  {
    v8 = (unsigned int)(v8 + 1);
    v10 += 3;
    if ( (unsigned int)v8 >= (unsigned int)v5 )
      goto LABEL_5;
  }
  UserSetLastError(87LL, v8);
  return 0LL;
}
