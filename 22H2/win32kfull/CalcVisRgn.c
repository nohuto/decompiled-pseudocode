/*
 * XREFs of CalcVisRgn @ 0x1C0033320
 * Callers:
 *     _VisrgnFromWindow @ 0x1C005AC9C (_VisrgnFromWindow.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C005EE64 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     zzzResetSharedDesktops @ 0x1C008DF60 (zzzResetSharedDesktops.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F40C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01BDC84 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x1C01BDDA8 (UserGetClientRgn.c)
 *     NtUserGetWindowRgnEx @ 0x1C01D47C0 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0033750 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     _IsDescendant @ 0x1C00D3E60 (_IsDescendant.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, _QWORD *a2, const struct tagWND *a3, __int64 a4)
{
  unsigned int v4; // r13d
  _QWORD *v5; // r15
  HRGN *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx
  char v9; // al
  int v10; // r14d
  int v11; // r12d
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r13
  PERESOURCE *v17; // rax
  int v18; // esi
  tagObjLock **v19; // rdi
  _QWORD *Prop; // rbx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r15
  PERESOURCE *v31; // rax
  tagObjLock **v32; // rdi
  _QWORD *v33; // rdi
  int v34; // eax
  unsigned int v35; // [rsp+28h] [rbp-59h]
  __int128 v38; // [rsp+68h] [rbp-19h] BYREF
  char v39; // [rsp+78h] [rbp-9h]
  char v40; // [rsp+80h] [rbp-1h]

  v4 = a4;
  v5 = a2;
  v6 = a1;
  v7 = a2[3];
  v35 = a4;
  do
  {
    v8 = a2[5];
    v9 = *(_BYTE *)(v8 + 31);
    if ( (v9 & 0x10) == 0 || (v9 & 0x20) != 0 && a2 != v5 )
      goto LABEL_42;
    if ( (*(_WORD *)(v8 + 42) & 0x2FFF) == 0x29D )
      break;
    a2 = (_QWORD *)a2[13];
  }
  while ( a2 );
  if ( v7 != grpdeskRitInput
    && (a4 & 0x4000) == 0
    && (!GetStyleWindow(v5, 2568LL) || (v4 & 0x8000000) != 0 && !(unsigned int)IsWindowDesktopComposed(v5)) )
  {
    goto LABEL_42;
  }
  v10 = 0;
  v11 = v4 & 0x4000;
  if ( (v4 & 0x4000) != 0 )
  {
    v12 = v5;
    while ( 1 )
    {
      v13 = v12[5];
      if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 )
        break;
      v12 = (_QWORD *)v12[13];
      if ( !v12 )
        goto LABEL_37;
    }
    v14 = *(_WORD *)(v13 + 42) & 0x2FFF;
    if ( (_DWORD)v14 != 669 || v12 == v5 )
    {
      if ( v12 )
      {
        v15 = v12[18];
        v16 = (unsigned __int16)atomLayer;
        v38 = 0LL;
        v39 = 0;
        v40 = 0;
        v17 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v14, a2, v7, a4);
        if ( ExIsResourceAcquiredExclusiveLite(*v17) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
        {
          v40 = 1;
          if ( v15 == gObjDummyLock )
            v15 = 0LL;
          *(_QWORD *)&v38 = v15;
          v18 = 0;
          v19 = (tagObjLock **)&v38;
          do
          {
            if ( *v19 )
              tagObjLock::LockExclusive(*v19);
            ++v18;
            ++v19;
          }
          while ( !v18 );
          v6 = a1;
          v39 = 1;
        }
        Prop = (_QWORD *)RealGetProp(v12[18], v16, 1LL);
        if ( v40 && v39 )
        {
          if ( (_QWORD)v38 )
            tagObjLock::UnLockExclusive((tagObjLock *)v38);
          v39 = 0;
        }
        if ( !Prop || !*Prop )
          goto LABEL_42;
        v4 = v35;
      }
    }
  }
LABEL_37:
  if ( gspwndLockUpdate && (v4 & 0x400) == 0 && (unsigned int)IsDescendant(gspwndLockUpdate, v5) )
  {
LABEL_42:
    SetOrCreateRectRgnIndirectPublic(v6, gZero);
    return 0LL;
  }
  if ( (unsigned int)UpdatesLockedForDwm() )
  {
    if ( !v11 )
      goto LABEL_42;
    goto LABEL_44;
  }
  if ( v11 )
  {
LABEL_44:
    v25 = v5;
    while ( 1 )
    {
      v26 = *(unsigned int *)(v25[5] + 24LL);
      if ( (v26 & 0x80000) != 0 || (v26 & 0x20000000) != 0 )
        break;
      v25 = (_QWORD *)v25[13];
      if ( !v25 )
        goto LABEL_55;
    }
    if ( v25 != v5 )
    {
      v27 = v25[3];
      v21 = 0LL;
      if ( v27 )
      {
        v26 = *(_QWORD *)(v27 + 8);
        if ( v26 )
          v21 = *(_QWORD **)(v26 + 24);
      }
      if ( v25 == v21 )
        v25 = 0LL;
    }
LABEL_55:
    v28 = v25[18];
    v29 = v25[5];
    v30 = (unsigned __int16)atomLayer;
    v38 = 0LL;
    v39 = 0;
    v40 = 0;
    v31 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v26, v21, v22, v23);
    if ( ExIsResourceAcquiredExclusiveLite(*v31) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
    {
      v40 = 1;
      if ( v28 == gObjDummyLock )
        v28 = 0LL;
      *(_QWORD *)&v38 = v28;
      if ( !v39 )
      {
        v32 = (tagObjLock **)&v38;
        do
        {
          if ( *v32 )
            tagObjLock::LockExclusive(*v32);
          ++v10;
          ++v32;
        }
        while ( !v10 );
        v39 = 1;
      }
    }
    v33 = (_QWORD *)RealGetProp(v25[18], v30, 1LL);
    if ( v40 && v39 )
    {
      if ( (_QWORD)v38 )
        tagObjLock::UnLockExclusive((tagObjLock *)v38);
      v39 = 0;
    }
    if ( v33 )
    {
      if ( *v33 )
      {
        if ( (*(_DWORD *)(v29 + 24) & 0x20000000) != 0 )
        {
          v34 = *(_DWORD *)(v29 + 232);
          if ( (v34 & 2) != 0 && (v34 & 1) == 0 && (v25[40] & 0x20000000) == 0 )
            v4 &= ~0x4000u;
        }
      }
    }
  }
  return CalcVisRgnWorker(a3, a1, v4);
}
