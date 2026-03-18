/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C00233C0
 * Callers:
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024D60 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C008EC08 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C008EE00 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00A8FE0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C016EED0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  int v5; // r9d
  __int64 v6; // rbx
  __int64 v7; // rcx
  bool v8; // zf
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  _QWORD *v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  _QWORD *ThreadWin32Thread; // rax
  __int64 v20; // rdi
  __int64 v21; // r13
  _QWORD *v22; // rbx
  __int64 v23; // r15
  __int64 *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rdi

  v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  *(_DWORD *)(*(_QWORD *)a2 + 32LL) = v4;
  v5 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v5;
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)a2;
  v8 = v6 == -48;
  v9 = (_QWORD *)(v6 + 48);
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v11 = *(_QWORD *)a2 + 48LL;
  v12 = (_QWORD *)*v9;
  if ( !v8 )
  {
    KeEnterCriticalRegion();
    v13 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_31;
    v14 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v14 != v9 )
      goto LABEL_31;
    *v14 = v13;
    v13[1] = v14;
    v9[1] = v9;
    *v9 = v9;
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)a2;
  }
  v15 = (_QWORD *)(v7 + 48);
  if ( v7 != -48 )
  {
    KeEnterCriticalRegion();
    v16 = *v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 )
      goto LABEL_31;
    v17 = (_QWORD *)v15[1];
    if ( (_QWORD *)*v17 != v15 )
      goto LABEL_31;
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v15[1] = v15;
    *v15 = v15;
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)a2;
  }
  v18 = *(_QWORD *)this;
  *(_QWORD *)this = v7;
  *(_QWORD *)a2 = v18;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    v20 = 0LL;
    if ( v12 != v9 )
    {
      v21 = *(_QWORD *)this;
      v22 = (_QWORD *)(*(_QWORD *)this + 48LL);
      if ( *(_QWORD *)this != -48LL )
      {
        KeEnterCriticalRegion();
        v23 = 0LL;
        v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v24 )
          v23 = *v24;
        v22[2] = v21;
        v22[3] = CleanUpRegion;
        if ( v23 )
        {
          v25 = *(_QWORD *)(v23 + 88);
          v26 = (_QWORD *)(v23 + 88);
          if ( *(_QWORD *)(v25 + 8) != v23 + 88 )
            goto LABEL_31;
          *v22 = v25;
          v22[1] = v26;
          *(_QWORD *)(v25 + 8) = v22;
          *v26 = v22;
        }
        else
        {
          v22[1] = v22;
          *v22 = v22;
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( v10 == v11 )
      return;
    v27 = *(_QWORD **)a2;
    v28 = v27 + 6;
    if ( v27 == (_QWORD *)-48LL )
      return;
    KeEnterCriticalRegion();
    v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v29 )
      v20 = *v29;
    v27[8] = v27;
    v27[9] = CleanUpRegion;
    if ( !v20 )
    {
      v27[7] = v27 + 6;
      *v28 = v28;
      goto LABEL_27;
    }
    v30 = *(_QWORD *)(v20 + 88);
    v31 = (_QWORD *)(v20 + 88);
    if ( *(_QWORD **)(v30 + 8) == v31 )
    {
      *v28 = v30;
      v27[7] = v31;
      *(_QWORD *)(v30 + 8) = v28;
      *v31 = v28;
LABEL_27:
      KeLeaveCriticalRegion();
      return;
    }
LABEL_31:
    __fastfail(3u);
  }
}
