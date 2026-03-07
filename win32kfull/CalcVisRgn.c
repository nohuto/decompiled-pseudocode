__int64 __fastcall CalcVisRgn(HRGN *a1, _QWORD *a2, const struct tagWND *a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rsi
  HRGN *v6; // r12
  __int64 v7; // r8
  __int64 v8; // rcx
  char v9; // al
  int v10; // r13d
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *Prop; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  int v27; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  tagObjLock **v31; // r12
  tagObjLock **v32; // r15
  __int128 v35; // [rsp+60h] [rbp-11h] BYREF
  char v36; // [rsp+70h] [rbp-1h]
  char v37; // [rsp+78h] [rbp+7h]

  v4 = a4;
  v5 = (__int64)a2;
  v6 = a1;
  v7 = a2[3];
  do
  {
    v8 = a2[5];
    v9 = *(_BYTE *)(v8 + 31);
    if ( (v9 & 0x10) == 0 || (v9 & 0x20) != 0 && a2 != (_QWORD *)v5 )
      goto LABEL_47;
    if ( (*(_WORD *)(v8 + 42) & 0x2FFF) == 0x29D )
      break;
    a2 = (_QWORD *)a2[13];
  }
  while ( a2 );
  if ( v7 == grpdeskRitInput
    || (a4 & 0x4000) != 0
    || GetStyleWindow(v5, 2568) && ((v4 & 0x8000000) == 0 || (unsigned int)IsWindowDesktopComposed(v5)) )
  {
    v10 = 0;
    if ( (v4 & 0x4000) != 0 )
    {
      v11 = (_QWORD *)v5;
      while ( 1 )
      {
        v12 = v11[5];
        if ( (*(_BYTE *)(v12 + 27) & 0x20) != 0 )
          break;
        v11 = (_QWORD *)v11[13];
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = *(_WORD *)(v12 + 42) & 0x2FFF;
      if ( (_DWORD)v13 != 669 || v11 == (_QWORD *)v5 )
      {
        if ( v11 )
        {
          v14 = v11[18];
          v15 = (unsigned __int16)atomLayer;
          v35 = 0LL;
          v36 = 0;
          v37 = 0;
          v16 = SGDGetUserSessionState(v13);
          if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v16 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v17) )
          {
            v37 = 1;
            if ( v14 == gObjDummyLock )
              v14 = 0LL;
            *(_QWORD *)&v35 = v14;
            v31 = (tagObjLock **)&v35;
            do
            {
              if ( *v31 )
                tagObjLock::LockExclusive(*v31);
              ++v10;
              ++v31;
            }
            while ( !v10 );
            v36 = 1;
            v10 = 0;
          }
          Prop = (_QWORD *)RealGetProp(v11[18], v15, 1LL);
          if ( v37 && v36 )
          {
            if ( (_QWORD)v35 )
              tagObjLock::UnLockExclusive((tagObjLock *)v35);
            v36 = 0;
          }
          if ( !Prop || !*Prop )
            goto LABEL_47;
          v6 = a1;
        }
      }
    }
LABEL_17:
    if ( !gspwndLockUpdate || (v4 & 0x400) != 0 || !(unsigned int)IsDescendant(gspwndLockUpdate, v5) )
    {
      if ( (unsigned int)UpdatesLockedForDwm() )
      {
        if ( (v4 & 0x4000) == 0 )
          goto LABEL_47;
      }
      else if ( (v4 & 0x4000) == 0 )
      {
        return CalcVisRgnWorker(a3, v6, v4);
      }
      v19 = v5;
      while ( 1 )
      {
        v20 = *(unsigned int *)(*(_QWORD *)(v19 + 40) + 24LL);
        if ( (v20 & 0x80000) != 0 || (v20 & 0x20000000) != 0 )
          break;
        v19 = *(_QWORD *)(v19 + 104);
        if ( !v19 )
          goto LABEL_23;
      }
      if ( v19 != v5 )
      {
        v20 = *(_QWORD *)(v19 + 24);
        v29 = 0LL;
        if ( v20 )
        {
          v30 = *(_QWORD *)(v20 + 8);
          if ( v30 )
            v29 = *(_QWORD *)(v30 + 24);
        }
        if ( v19 == v29 )
          v19 = 0LL;
      }
LABEL_23:
      v21 = *(_QWORD *)(v19 + 144);
      v22 = *(_QWORD *)(v19 + 40);
      v23 = (unsigned __int16)atomLayer;
      v35 = 0LL;
      v36 = 0;
      v37 = 0;
      v24 = SGDGetUserSessionState(v20);
      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v24 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v25) )
      {
        v37 = 1;
        if ( v21 == gObjDummyLock )
          v21 = 0LL;
        *(_QWORD *)&v35 = v21;
        if ( !v36 )
        {
          v32 = (tagObjLock **)&v35;
          do
          {
            if ( *v32 )
              tagObjLock::LockExclusive(*v32);
            ++v10;
            ++v32;
          }
          while ( !v10 );
          v36 = 1;
        }
      }
      v26 = (_QWORD *)RealGetProp(*(_QWORD *)(v19 + 144), v23, 1LL);
      if ( v37 && v36 )
      {
        if ( (_QWORD)v35 )
          tagObjLock::UnLockExclusive((tagObjLock *)v35);
        v36 = 0;
      }
      if ( v26 )
      {
        if ( *v26 )
        {
          if ( (*(_DWORD *)(v22 + 24) & 0x20000000) != 0 )
          {
            v27 = *(_DWORD *)(v22 + 232);
            if ( (v27 & 2) != 0 && (v27 & 1) == 0 && (*(_DWORD *)(v19 + 320) & 0x20000000) == 0 )
              v4 &= ~0x4000u;
          }
        }
      }
      return CalcVisRgnWorker(a3, v6, v4);
    }
  }
LABEL_47:
  SetOrCreateRectRgnIndirectPublic(a1, gZero);
  return 0LL;
}
