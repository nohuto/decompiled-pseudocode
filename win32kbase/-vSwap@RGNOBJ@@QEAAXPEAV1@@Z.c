void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  int v5; // r9d
  _QWORD *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rsi
  _QWORD *v19; // rbx
  _QWORD *v20; // r15
  _QWORD *v21; // rbx
  __int64 v22; // rbp
  __int64 *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rdi

  v4 = *(_DWORD *)(*(_QWORD *)this + 76LL);
  *(_DWORD *)(*(_QWORD *)this + 76LL) = *(_DWORD *)(*(_QWORD *)a2 + 76LL);
  *(_DWORD *)(*(_QWORD *)a2 + 76LL) = v4;
  v5 = *(_DWORD *)(*(_QWORD *)this + 80LL);
  *(_DWORD *)(*(_QWORD *)this + 80LL) = *(_DWORD *)(*(_QWORD *)a2 + 80LL);
  *(_DWORD *)(*(_QWORD *)a2 + 80LL) = v5;
  v6 = (_QWORD *)(*(_QWORD *)this + 88LL);
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 88LL);
  v8 = *(_QWORD *)a2 + 88LL;
  v9 = (_QWORD *)*v6;
  if ( *(_QWORD *)this != -88LL )
  {
    KeEnterCriticalRegion();
    v10 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_30;
    v11 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v11 != v6 )
      goto LABEL_30;
    *v11 = v10;
    v10[1] = v11;
    v6[1] = v6;
    *v6 = v6;
    KeLeaveCriticalRegion();
  }
  v12 = (_QWORD *)(*(_QWORD *)a2 + 88LL);
  if ( *(_QWORD *)a2 != -88LL )
  {
    KeEnterCriticalRegion();
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_30;
    v14 = (_QWORD *)v12[1];
    if ( (_QWORD *)*v14 != v12 )
      goto LABEL_30;
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v12[1] = v12;
    *v12 = v12;
    KeLeaveCriticalRegion();
  }
  v15 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v15;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    v17 = 0LL;
    if ( v9 != v6 )
    {
      v20 = *(_QWORD **)this;
      v21 = v20 + 11;
      if ( v20 != (_QWORD *)-88LL )
      {
        KeEnterCriticalRegion();
        v22 = 0LL;
        v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v23 )
          v22 = *v23;
        v20[13] = v20;
        v20[14] = CleanUpRegion;
        if ( v22 )
        {
          v24 = *(_QWORD *)(v22 + 88);
          v25 = (_QWORD *)(v22 + 88);
          if ( *(_QWORD *)(v24 + 8) != v22 + 88 )
            goto LABEL_30;
          *v21 = v24;
          v20[12] = v25;
          *(_QWORD *)(v24 + 8) = v21;
          *v25 = v21;
        }
        else
        {
          v20[12] = v20 + 11;
          *v21 = v21;
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( v7 == v8 )
      return;
    v18 = *(_QWORD **)a2;
    v19 = v18 + 11;
    if ( v18 == (_QWORD *)-88LL )
      return;
    KeEnterCriticalRegion();
    v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v26 )
      v17 = *v26;
    v18[13] = v18;
    v18[14] = CleanUpRegion;
    if ( !v17 )
    {
      v18[12] = v18 + 11;
      *v19 = v19;
      goto LABEL_27;
    }
    v27 = *(_QWORD *)(v17 + 88);
    v28 = (_QWORD *)(v17 + 88);
    if ( *(_QWORD **)(v27 + 8) == v28 )
    {
      *v19 = v27;
      v18[12] = v28;
      *(_QWORD *)(v27 + 8) = v19;
      *v28 = v19;
LABEL_27:
      KeLeaveCriticalRegion();
      return;
    }
LABEL_30:
    __fastfail(3u);
  }
}
