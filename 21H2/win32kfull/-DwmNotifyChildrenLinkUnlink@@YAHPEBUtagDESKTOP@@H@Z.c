/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0098738
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00986F4 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     DwmAsyncChildLink @ 0x1C0072BCC (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C0072E58 (DwmAsyncChildUnlink.c)
 *     DwmAsyncOwnerChange @ 0x1C00825E4 (DwmAsyncOwnerChange.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v3; // ebp
  int v4; // r12d
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // r13
  _QWORD *i; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbx
  void *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rbx
  void *v20; // rax
  __int64 *v21; // rdx
  __int64 v22; // rdi
  int v23; // esi
  __int64 v24; // rbx
  void *v25; // rax
  __int64 *v26; // rbx
  _QWORD *v27; // rdi
  __int64 v28; // rbx
  void *v29; // rax
  ShellWindowManagement *v30; // rcx
  struct tagBWL *v31; // rax
  struct tagBWL *v32; // r15
  _QWORD *j; // r14
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // r13d
  __int64 *v37; // rax
  __int64 v38; // r12
  __int64 v39; // rdi
  __int64 v40; // rbx
  void *v41; // rax
  _QWORD *v42; // rdi
  __int64 v43; // rbx
  void *v44; // rax
  __int64 v46; // rdi
  __int64 v47; // rbx
  void *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rbx
  void *v51; // rax
  int v52; // [rsp+70h] [rbp+8h]

  v3 = 1;
  v4 = a2;
  v5 = BuildHwndList(
         *(ShellWindowManagement **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL),
         (const struct tagWND *)3,
         0LL,
         1);
  v6 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)((char *)v5 + 32); *i != 1LL; ++i )
  {
    v11 = HMValidateHandleNoSecure(*i, 1);
    v12 = v11;
    if ( v11 )
    {
      if ( v4 )
      {
        v52 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 236LL);
        v13 = *(__int64 **)(v11 + 96);
        if ( v13 )
          v14 = *v13;
        else
          v14 = 0LL;
        v15 = *(_QWORD *)v12;
        v16 = **(_QWORD **)(v12 + 104);
        v17 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildLink(v17, v15, v16, v14, v52);
        v18 = *(_QWORD **)(v12 + 120);
        if ( v18 )
          v18 = (_QWORD *)*v18;
        v19 = *(_QWORD *)v12;
        v20 = (void *)ReferenceDwmApiPort();
        DwmAsyncOwnerChange(v20, v19, (__int64)v18);
        v4 = a2;
      }
      else
      {
        v49 = *(_QWORD *)v11;
        v50 = **(_QWORD **)(v11 + 104);
        v51 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildUnlink(v51, v49, v50);
      }
    }
  }
  FreeHwndList(v6);
  if ( v4 )
  {
    v21 = (__int64 *)*((_QWORD *)a1 + 13);
    v22 = *v21;
    v23 = *(_DWORD *)(v21[5] + 236);
    v24 = **(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL);
    v25 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildLink(v25, v22, v24, 1LL, v23);
    v26 = (__int64 *)*((_QWORD *)a1 + 13);
    v27 = (_QWORD *)v26[15];
    if ( v27 )
      v27 = (_QWORD *)*v27;
    v28 = *v26;
    v29 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v29, v28, (__int64)v27);
  }
  else
  {
    v8 = **(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL);
    v9 = **((_QWORD **)a1 + 13);
    v10 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildUnlink(v10, v9, v8);
  }
  v30 = *(ShellWindowManagement **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v30 )
  {
    v31 = BuildHwndList(v30, (const struct tagWND *)3, 0LL, 1);
    v32 = v31;
    if ( v31 )
    {
      for ( j = (_QWORD *)((char *)v31 + 32); *j != 1LL; ++j )
      {
        v34 = HMValidateHandleNoSecure(*j, 1);
        v35 = v34;
        if ( v34 )
        {
          if ( v4 )
          {
            v36 = *(_DWORD *)(*(_QWORD *)(v34 + 40) + 236LL);
            v37 = *(__int64 **)(v34 + 96);
            if ( v37 )
              v38 = *v37;
            else
              v38 = 0LL;
            v39 = *(_QWORD *)v35;
            v40 = **(_QWORD **)(v35 + 104);
            v41 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildLink(v41, v39, v40, v38, v36);
            v42 = *(_QWORD **)(v35 + 120);
            if ( v42 )
              v42 = (_QWORD *)*v42;
            v43 = *(_QWORD *)v35;
            v44 = (void *)ReferenceDwmApiPort();
            DwmAsyncOwnerChange(v44, v43, (__int64)v42);
            v4 = a2;
          }
          else
          {
            v46 = *(_QWORD *)v34;
            v47 = **(_QWORD **)(v34 + 104);
            v48 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildUnlink(v48, v46, v47);
          }
        }
      }
      FreeHwndList(v32);
      return v3;
    }
    return 0;
  }
  return v3;
}
