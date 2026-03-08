/*
 * XREFs of UnlinkWindow @ 0x1C00AB340
 * Callers:
 *     SetWindowGroupBand @ 0x1C0025CE4 (SetWindowGroupBand.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0026C68 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00331B0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C007B4F0 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00AED30 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

LONG_PTR __fastcall UnlinkWindow(__int64 a1, __int64 *a2)
{
  char v2; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 AlignmentRequirement_low; // r14
  __int64 v20; // xmm1_8
  __int64 v21; // rcx
  CVisRgnTrackerProp *v22; // rdi
  struct tagWND *i; // rdi
  __int64 *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int64 *v30; // rdi
  __int64 v31; // rax
  LONG_PTR result; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  void *v36; // rbx
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  CVisRgnTrackerProp *Prop; // rax
  struct tagWND *j; // rdi
  int v46; // eax
  tagObjLock **v47; // rdi
  int v48; // [rsp+20h] [rbp-69h]
  _QWORD *v49; // [rsp+30h] [rbp-59h] BYREF
  __int64 v50; // [rsp+38h] [rbp-51h]
  unsigned __int128 v51; // [rsp+40h] [rbp-49h] BYREF
  __int64 v52; // [rsp+50h] [rbp-39h]
  _BYTE v53[38]; // [rsp+60h] [rbp-29h] BYREF
  __int16 v54; // [rsp+86h] [rbp-3h]
  int v55; // [rsp+88h] [rbp-1h]
  __int64 v56; // [rsp+8Ch] [rbp+3h]
  __int64 v57; // [rsp+94h] [rbp+Bh]

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 320) & 0x2000000) == 0 || !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_31;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 24);
  }
  if ( a1 == v6 )
    goto LABEL_31;
  v8 = 0LL;
  if ( v5 )
    v8 = *(_QWORD *)(v5 + 104);
  if ( a1 == v8 || a2 == (__int64 *)gTermIO[1] )
  {
LABEL_31:
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v10 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v10 && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 && (*(_DWORD *)(a1 + 320) & 0x2000000) != 0 )
    {
      v11 = *(_QWORD **)(a1 + 104);
      v12 = v11;
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = v12[5];
          v14 = *(_BYTE *)(v13 + 31);
          if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 && v12 != v11 )
            break;
          if ( (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D )
          {
            v12 = (_QWORD *)v12[13];
            if ( v12 )
              continue;
          }
          goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, *v11);
        v15 = *(_QWORD *)(a1 + 104);
        if ( v15
          && (v16 = *(_QWORD *)(a1 + 24)) != 0
          && (v17 = *(_QWORD *)(v16 + 8)) != 0
          && v15 == *(_QWORD *)(v17 + 24) )
        {
          v2 = 1;
        }
        else if ( a1 != GetDesktopWindow(a1) && (*(_BYTE *)(v11[5] + 31LL) & 2) != 0 )
        {
          Prop = (CVisRgnTrackerProp *)GetProp((__int64)v11, LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1u);
          if ( Prop )
            CVisRgnTrackerProp::MarkDirty(Prop);
        }
        v18 = *(_QWORD *)(a1 + 144);
        AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
        *(_QWORD *)v53 = gDomainDummyLock;
        v53[8] = 0;
        memset(&v53[16], 0, 17);
        v20 = *(_QWORD *)(v18 + 16);
        v51 = *(_OWORD *)v18;
        LOBYTE(v55) = 0;
        v52 = v20;
        if ( !IS_USERCRIT_OWNED_EXCLUSIVE(v15) && IS_USERCRIT_OWNED_AT_ALL(v21) )
        {
          v46 = 0;
          LOBYTE(v55) = 1;
          if ( v18 == gObjDummyLock )
            v18 = 0LL;
          *(_QWORD *)&v53[16] = v18;
          v48 = 0;
          v47 = (tagObjLock **)&v53[16];
          do
          {
            if ( *v47 )
            {
              tagObjLock::LockExclusive(*v47);
              v46 = v48;
            }
            ++v46;
            ++v47;
            v48 = v46;
          }
          while ( !v46 );
          v53[32] = 1;
        }
        v22 = (CVisRgnTrackerProp *)RealGetProp(*(_QWORD *)(a1 + 144), AlignmentRequirement_low, 1LL);
        if ( (_BYTE)v55 && v53[32] )
        {
          if ( *(_QWORD *)&v53[16] )
            tagObjLock::UnLockExclusive(*(tagObjLock **)&v53[16]);
          v53[32] = 0;
        }
        if ( v22 )
          CVisRgnTrackerProp::MarkDirty(v22);
        for ( i = *(struct tagWND **)(a1 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
          MarkDirtyWorker(i);
        if ( !v2 )
        {
          for ( j = *(struct tagWND **)(a1 + 88); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
          {
            if ( (*(_BYTE *)(*((_QWORD *)j + 5) + 31LL) & 0x14) == 0x14 )
              MarkDirtyWorker(j);
          }
        }
      }
    }
  }
  v24 = (__int64 *)(a1 + 88);
  if ( a2[14] == a1 )
  {
    v42 = *v24;
    if ( *v24 )
      v43 = *(_QWORD *)(v42 + 48);
    else
      v43 = 0LL;
    *(_QWORD *)(a2[5] + 56) = v43;
    v49 = a2 + 14;
    v50 = v42;
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 96);
    if ( !v25 )
      goto LABEL_38;
    v26 = *v24;
    v27 = (_QWORD *)(v25 + 88);
    v28 = *(_QWORD *)(v25 + 40);
    if ( *v24 )
      v29 = *(_QWORD *)(v26 + 48);
    else
      v29 = 0LL;
    *(_QWORD *)(v28 + 72) = v29;
    v49 = v27;
    v50 = v26;
  }
  HMAssignmentLock(&v49, 0LL);
LABEL_38:
  v30 = (unsigned __int64 *)(a1 + 96);
  v31 = *v24;
  if ( *v24 )
  {
    v38 = *v30;
    v39 = v31 + 96;
    v40 = *(_QWORD *)(v31 + 40);
    if ( *v30 )
      v41 = *(_QWORD *)(v38 + 48);
    else
      v41 = 0LL;
    *(_QWORD *)(v40 + 80) = v41;
    v51 = __PAIR128__(v38, v39);
    HMAssignmentLock(&v51, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL) = 0LL;
    HMAssignmentUnlock(a1 + 88);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL) = 0LL;
  result = HMAssignmentUnlock(a1 + 96);
  *(_DWORD *)(a1 + 320) &= 0xFCFFFFFF;
  if ( v9 )
  {
    v34 = *a2;
    v35 = *(_QWORD *)a1;
    v36 = (void *)ReferenceDwmApiPort(v33);
    result = SGDGetSessionState(v37);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 32) + 13248LL));
    if ( v36 )
    {
      v54 = 0;
      *(_DWORD *)v53 = 3932180;
      v55 = 1073741843;
      *(_WORD *)&v53[4] = 0x8000;
      v56 = v35;
      memset(&v53[6], 0, 32);
      v57 = v34;
      LpcRequestPort(v36, v53);
      return ObfDereferenceObject(v36);
    }
  }
  return result;
}
