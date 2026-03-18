/*
 * XREFs of UnlinkWindow @ 0x1C010B5E0
 * Callers:
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0025238 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     SetWindowGroupBand @ 0x1C002567C (SetWindowGroupBand.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00EA3D4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00A609C (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00F3470 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
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
  __int64 v21; // rdx
  CVisRgnTrackerProp *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  struct tagWND *i; // rdi
  __int64 *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 *v32; // rdi
  __int64 v33; // rax
  LONG_PTR result; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  void *v38; // rbx
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  CVisRgnTrackerProp *Prop; // rax
  struct tagWND *j; // rdi
  int v49; // eax
  tagObjLock **v50; // rdi
  int v51; // [rsp+20h] [rbp-69h]
  _QWORD *v52; // [rsp+30h] [rbp-59h] BYREF
  __int64 v53; // [rsp+38h] [rbp-51h]
  unsigned __int128 v54; // [rsp+40h] [rbp-49h] BYREF
  __int64 v55; // [rsp+50h] [rbp-39h]
  _BYTE v56[38]; // [rsp+60h] [rbp-29h] BYREF
  __int16 v57; // [rsp+86h] [rbp-3h]
  int v58; // [rsp+88h] [rbp-1h]
  __int64 v59; // [rsp+8Ch] [rbp+3h]
  __int64 v60; // [rsp+94h] [rbp+Bh]

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
          Prop = (CVisRgnTrackerProp *)GetProp((__int64)v11, LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1LL, v46);
          if ( Prop )
            CVisRgnTrackerProp::MarkDirty(Prop);
        }
        v18 = *(_QWORD *)(a1 + 144);
        AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
        *(_QWORD *)v56 = gDomainDummyLock;
        v56[8] = 0;
        memset(&v56[16], 0, 17);
        v20 = *(_QWORD *)(v18 + 16);
        v54 = *(_OWORD *)v18;
        LOBYTE(v58) = 0;
        v55 = v20;
        if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
        {
          v49 = 0;
          LOBYTE(v58) = 1;
          if ( v18 == gObjDummyLock )
            v18 = 0LL;
          *(_QWORD *)&v56[16] = v18;
          v51 = 0;
          v50 = (tagObjLock **)&v56[16];
          do
          {
            if ( *v50 )
            {
              tagObjLock::LockExclusive(*v50);
              v49 = v51;
            }
            ++v49;
            ++v50;
            v51 = v49;
          }
          while ( !v49 );
          v56[32] = 1;
        }
        v22 = (CVisRgnTrackerProp *)RealGetProp(*(_QWORD *)(a1 + 144), AlignmentRequirement_low, 1LL);
        if ( (_BYTE)v58 && v56[32] )
        {
          if ( *(_QWORD *)&v56[16] )
            tagObjLock::UnLockExclusive(*(tagObjLock **)&v56[16]);
          v56[32] = 0;
        }
        if ( v22 )
          CVisRgnTrackerProp::MarkDirty(v22);
        for ( i = *(struct tagWND **)(a1 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
          MarkDirtyWorker(i, v21, v23, v24);
        if ( !v2 )
        {
          for ( j = *(struct tagWND **)(a1 + 88); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
          {
            if ( (*(_BYTE *)(*((_QWORD *)j + 5) + 31LL) & 0x14) == 0x14 )
              MarkDirtyWorker(j, v21, v23, v24);
          }
        }
      }
    }
  }
  v26 = (__int64 *)(a1 + 88);
  if ( a2[14] == a1 )
  {
    v44 = *v26;
    if ( *v26 )
      v45 = *(_QWORD *)(v44 + 48);
    else
      v45 = 0LL;
    *(_QWORD *)(a2[5] + 56) = v45;
    v52 = a2 + 14;
    v53 = v44;
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 96);
    if ( !v27 )
      goto LABEL_38;
    v28 = *v26;
    v29 = (_QWORD *)(v27 + 88);
    v30 = *(_QWORD *)(v27 + 40);
    if ( *v26 )
      v31 = *(_QWORD *)(v28 + 48);
    else
      v31 = 0LL;
    *(_QWORD *)(v30 + 72) = v31;
    v52 = v29;
    v53 = v28;
  }
  HMAssignmentLock(&v52, 0LL);
LABEL_38:
  v32 = (unsigned __int64 *)(a1 + 96);
  v33 = *v26;
  if ( *v26 )
  {
    v40 = *v32;
    v41 = v33 + 96;
    v42 = *(_QWORD *)(v33 + 40);
    if ( *v32 )
      v43 = *(_QWORD *)(v40 + 48);
    else
      v43 = 0LL;
    *(_QWORD *)(v42 + 80) = v43;
    v54 = __PAIR128__(v40, v41);
    HMAssignmentLock(&v54, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL) = 0LL;
    HMAssignmentUnlock(a1 + 88);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL) = 0LL;
  result = HMAssignmentUnlock(a1 + 96);
  *(_DWORD *)(a1 + 320) &= 0xFCFFFFFF;
  if ( v9 )
  {
    v36 = *a2;
    v37 = *(_QWORD *)a1;
    v38 = (void *)ReferenceDwmApiPort(v35);
    result = SGDGetSessionState(v39);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 32) + 13248LL));
    if ( v38 )
    {
      v57 = 0;
      *(_DWORD *)v56 = 3932180;
      v58 = 1073741843;
      *(_WORD *)&v56[4] = 0x8000;
      v59 = v37;
      memset(&v56[6], 0, 32);
      v60 = v36;
      LpcRequestPort(v38, v56);
      return ObfDereferenceObject(v38);
    }
  }
  return result;
}
