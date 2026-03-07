__int64 __fastcall GetGestureConfigSettings(struct tagWND *a1, __int64 a2, char a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v5; // rsi
  int v6; // r15d
  __int64 v7; // r13
  unsigned int v8; // edx
  _DWORD *v10; // rcx
  struct tagVWPLGESTUREDATA *GCData; // r14
  void **WindowGCList; // rax
  unsigned __int8 *v13; // r12
  _DWORD *v14; // rdi
  __int64 v15; // rbp
  struct tagGESTURECONFIGLIST **v16; // r15
  __int64 v17; // r9
  __int64 v18; // r10
  struct tagGESTURECONFIGLIST *v19; // rcx
  int v20; // eax
  int v22; // eax
  _DWORD *v23; // rax
  __int64 v24; // rcx
  struct tagVWPLGESTUREDATA *v25; // r14
  struct tagGESTURECONFIGLIST **v26; // r15
  unsigned __int8 *v27; // r12
  unsigned int v28; // ebp
  int *v29; // rdi
  __int64 v30; // r9
  struct tagGESTURECONFIGLIST *v31; // r9
  int v32; // r8d
  int v33; // r10d
  int v34; // edx
  int v35; // eax
  int v36; // [rsp+80h] [rbp+18h]
  struct tagGESTURECONFIGLIST *v37; // [rsp+88h] [rbp+20h] BYREF

  v37 = 0LL;
  v5 = *a4;
  v6 = a3 & 1;
  v7 = (__int64)a5;
  v8 = 0;
  v36 = v6;
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
          if ( (unsigned int)FindGID(v16, v17, &v37) )
          {
            v19 = v37;
            *(v14 - 1) = *((_DWORD *)v37 + 3);
            v20 = *((_DWORD *)v19 + 4);
LABEL_16:
            *v14 = v20;
          }
LABEL_18:
          v14 += 3;
          if ( !--v15 )
          {
            v6 = v36;
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
          v22 = *((_DWORD *)GCData + 3);
          *(v14 - 1) = 0;
          if ( !v22 )
          {
            *v14 = 0;
            goto LABEL_18;
          }
          v20 = *(_DWORD *)(v18 + 4 * v17);
        }
        goto LABEL_16;
      }
    }
    else if ( (_DWORD)v5 )
    {
      v23 = (_DWORD *)(v7 + 8);
      v24 = v5;
      do
      {
        *(v23 - 1) = 0;
        *v23 = 0;
        v23 += 3;
        --v24;
      }
      while ( v24 );
    }
LABEL_23:
    if ( !v6 || IsTopLevelWindow((__int64)a1) || !a1 )
      return 1LL;
    while ( 1 )
    {
      a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
      if ( !a1 )
        return 1LL;
      v25 = GetGCData(a1);
      v26 = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
      if ( v25 )
      {
        v27 = *(unsigned __int8 **)v25;
        v28 = 0;
        if ( (_DWORD)v5 )
          break;
      }
LABEL_41:
      if ( IsTopLevelWindow((__int64)a1) )
        return 1LL;
    }
    v29 = (int *)(v7 + 8);
    while ( 1 )
    {
      if ( (unsigned int)IsBitSet(v27, *(v29 - 2)) )
      {
        if ( (unsigned int)FindGID(v26, v30, &v37) )
        {
          v31 = v37;
          v32 = *(v29 - 1);
          v33 = *v29;
          v34 = (v32 | *v29) ^ (*((_DWORD *)v37 + 4) | *((_DWORD *)v37 + 3));
          *(v29 - 1) = v32 | v34 & *((_DWORD *)v37 + 3);
          v35 = v33 | v34 & *((_DWORD *)v31 + 4);
LABEL_37:
          *v29 = v35;
        }
      }
      else
      {
        if ( !*((_DWORD *)v25 + 2) )
        {
          if ( !*((_DWORD *)v25 + 3) )
          {
            if ( !v26 )
              goto LABEL_40;
            goto LABEL_39;
          }
          v35 = ~*(v29 - 1) & dword_1C0319510[v30];
          goto LABEL_37;
        }
        *(v29 - 1) = ~*v29 & dword_1C0319510[v30];
      }
LABEL_39:
      ++v28;
      v29 += 3;
      if ( v28 >= (unsigned int)v5 )
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
    ++v8;
    v10 += 3;
    if ( v8 >= (unsigned int)v5 )
      goto LABEL_5;
  }
  UserSetLastError(87);
  return 0LL;
}
