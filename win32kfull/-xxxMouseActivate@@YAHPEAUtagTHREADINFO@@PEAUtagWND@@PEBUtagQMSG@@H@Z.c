__int64 __fastcall xxxMouseActivate(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        const struct tagQMSG *a3,
        unsigned int a4)
{
  __int64 v5; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r15d
  unsigned int active; // edi
  int v12; // ecx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  struct tagWND *v16; // rsi
  _BYTE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct tagWND *v24; // rax
  bool v25; // zf
  __int64 v26; // rcx
  unsigned int v27; // ebx
  unsigned int v28; // eax
  __int64 v29; // [rsp+60h] [rbp-58h] BYREF
  struct tagWND *v30; // [rsp+68h] [rbp-50h]
  __int64 v31; // [rsp+70h] [rbp-48h]
  unsigned int v32; // [rsp+C0h] [rbp+8h]
  __int64 v33; // [rsp+D0h] [rbp+18h]

  v5 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((unsigned int *)a3 + 6);
  v33 = *((_QWORD *)a3 + 4);
  v8 = *((_QWORD *)a1 + 54);
  v9 = -__CFSHR__(*((_DWORD *)a3 + 25), 20);
  v10 = -__CFSHR__(*((_DWORD *)a3 + 25), 23);
  v31 = 0LL;
  if ( *(_QWORD *)(v8 + 112) )
    return 0LL;
  active = 0;
  if ( !v9 && (unsigned int)IsCompositionInputWindow(a2) && (unsigned int)IsMessageOnlyWindow(a2) )
  {
    if ( (unsigned int)(v7 - 513) <= 0xA )
    {
      v12 = 1097;
      if ( _bittest(&v12, v7 - 513) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(struct tagQ **)(*(_QWORD *)(TopLevelWindow + 16) + 432LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v16 = a2;
  v29 = *((_QWORD *)a1 + 52);
  *((_QWORD *)a1 + 52) = &v29;
  v30 = a2;
  if ( a2 )
    HMLockObject(a2);
  v17 = (_BYTE *)*((_QWORD *)a2 + 5);
  v18 = 1LL;
  if ( (v17[21] & 2) != 0 )
    v18 = (v17[24] & 4) == 0;
  v32 = v18;
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( (v17[31] & 0xC0) == 0x40 )
    {
      do
      {
        v16 = (struct tagWND *)*((_QWORD *)v16 + 13);
        if ( (_DWORD)v18 )
        {
          ThreadUnlock1(v17, v18, a3);
          v29 = *((_QWORD *)a1 + 52);
          *((_QWORD *)a1 + 52) = &v29;
          v30 = v16;
          if ( v16 )
            HMLockObject(v16);
          v19 = *((_QWORD *)v16 + 5);
          v20 = *(_DWORD *)(v19 + 104);
          v21 = *(_DWORD *)(v19 + 108);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            v16,
            0x210u,
            v33 | v7,
            (__int128 *)((unsigned __int16)(v5 - v20) | ((unsigned __int64)(unsigned __int16)(WORD2(v5) - v21) << 16)),
            0,
            0,
            0LL,
            1,
            0);
          v18 = v32;
        }
        LOBYTE(v17) = *(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 0xC0;
      }
      while ( (_BYTE)v17 == 64 );
      active = 0;
    }
    if ( !(_DWORD)v18 )
    {
      ThreadUnlock1(v17, v18, a3);
      v29 = *((_QWORD *)a1 + 52);
      *((_QWORD *)a1 + 52) = &v29;
      v30 = v16;
      HMLockObject(v16);
    }
  }
  v22 = *((_QWORD *)a1 + 54);
  v23 = 0LL;
  v24 = *(struct tagWND **)(v22 + 128);
  if ( v10 )
    v25 = v24 == v16;
  else
    v25 = v24 == a2;
  LOBYTE(v23) = !v25;
  if ( !v9 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && (_DWORD)v7 == 512 )
  {
    active = xxxActiveWindowTracking(a2, 512LL, a4);
    goto LABEL_63;
  }
  if ( !(_DWORD)v23 && (*(_DWORD *)(v22 + 396) & 0x8000) == 0 || v16 == (struct tagWND *)GetDesktopWindow((__int64)v16) )
  {
    v27 = a4;
    goto LABEL_58;
  }
  if ( (_DWORD)v7 != 513 && (_DWORD)v7 != 516 && (_DWORD)v7 != 519 && (_DWORD)v7 != 523 )
    goto LABEL_63;
  v27 = a4;
  if ( v9 )
  {
    active = (v10 != 0) + 3;
  }
  else
  {
    if ( v10 )
    {
      active = 2;
LABEL_45:
      if ( (v16 != *(struct tagWND **)(v22 + 128) || (*(_DWORD *)(v22 + 396) & 0x8000) != 0)
        && !xxxActivateWindowWithOptions(v16, 3LL, 49LL, *(_DWORD *)(v22 + 156) != 0)
        || (*(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 8) != 0
        || active == 2 )
      {
LABEL_50:
        active = 1;
        goto LABEL_63;
      }
LABEL_58:
      active = 0;
      v26 = (unsigned int)gpdwCPUserPreferencesMask;
      if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
      {
        if ( CheckOnTop(a1, v16, v7) )
        {
          if ( v27 == 1 )
          {
            v26 = *(unsigned int *)(*((_QWORD *)v16 + 2) + 488LL);
            if ( (v26 & 8) != 0 )
              active = (*(_BYTE *)(*((_QWORD *)v16 + 5) + 24LL) & 8) == 0;
          }
        }
      }
      goto LABEL_63;
    }
    v28 = xxxSendMessage(a2, 0x21u);
    v22 = *((_QWORD *)a1 + 54);
    active = v28;
  }
  if ( active <= 2 )
    goto LABEL_45;
  if ( active == 3 )
  {
    active = 0;
    goto LABEL_63;
  }
  if ( active == 4 )
    goto LABEL_50;
LABEL_63:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 54) + 112LL) )
    xxxSendMessage(a2, 0x20u);
  ThreadUnlock1(v26, v22, v23);
  return active;
}
