/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C007E294
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C007E250 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C00280A4 (DwmAsyncOwnerChange.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     DwmAsyncChildLink @ 0x1C007E580 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C007EB9C (DwmAsyncChildUnlink.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v3; // ebp
  int v4; // r12d
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  struct tagBWL *v7; // r13
  _QWORD *i; // r14
  int v9; // esi
  void *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  void *v15; // rax
  ShellWindowManagement *v16; // rcx
  struct tagBWL *v17; // rax
  __int64 v18; // rdx
  struct tagBWL *v19; // r15
  _QWORD *j; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rsi
  int v24; // r13d
  void *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  __int64 v28; // rbx
  void *v29; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rsi
  void *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rdi
  __int64 v37; // rbx
  void *v38; // rax
  void *v39; // rax
  void *v40; // rax
  void *v41; // rax
  int v42; // [rsp+70h] [rbp+8h]

  v3 = 1;
  v4 = a2;
  v5 = BuildHwndList(*(ShellWindowManagement **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL), 3, 0LL, 1);
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)((char *)v5 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v6) = 1;
    v31 = HMValidateHandleNoSecure(*i, v6);
    v33 = (__int64 *)v31;
    if ( v31 )
    {
      if ( v4 )
      {
        v42 = *(_DWORD *)(*(_QWORD *)(v31 + 40) + 236LL);
        v34 = (void *)ReferenceDwmApiPort(v32);
        DwmAsyncChildLink(v34, v42);
        v36 = (_QWORD *)v33[15];
        if ( v36 )
          v36 = (_QWORD *)*v36;
        v37 = *v33;
        v38 = (void *)ReferenceDwmApiPort(v35);
        DwmAsyncOwnerChange(v38, v37, (__int64)v36);
        v4 = a2;
      }
      else
      {
        v41 = (void *)ReferenceDwmApiPort(v32);
        DwmAsyncChildUnlink(v41);
      }
    }
  }
  FreeHwndList(v7);
  if ( v4 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v10 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL));
    DwmAsyncChildLink(v10, v9);
    v12 = (__int64 *)*((_QWORD *)a1 + 13);
    v13 = (_QWORD *)v12[15];
    if ( v13 )
      v13 = (_QWORD *)*v13;
    v14 = *v12;
    v15 = (void *)ReferenceDwmApiPort(v11);
    DwmAsyncOwnerChange(v15, v14, (__int64)v13);
  }
  else
  {
    v40 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL));
    DwmAsyncChildUnlink(v40);
  }
  v16 = *(ShellWindowManagement **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v16 )
  {
    v17 = BuildHwndList(v16, 3, 0LL, 1);
    v19 = v17;
    if ( v17 )
    {
      for ( j = (_QWORD *)((char *)v17 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v18) = 1;
        v21 = HMValidateHandleNoSecure(*j, v18);
        v23 = (__int64 *)v21;
        if ( v21 )
        {
          if ( v4 )
          {
            v24 = *(_DWORD *)(*(_QWORD *)(v21 + 40) + 236LL);
            v25 = (void *)ReferenceDwmApiPort(v22);
            DwmAsyncChildLink(v25, v24);
            v27 = (_QWORD *)v23[15];
            if ( v27 )
              v27 = (_QWORD *)*v27;
            v28 = *v23;
            v29 = (void *)ReferenceDwmApiPort(v26);
            DwmAsyncOwnerChange(v29, v28, (__int64)v27);
            v4 = a2;
          }
          else
          {
            v39 = (void *)ReferenceDwmApiPort(v22);
            DwmAsyncChildUnlink(v39);
          }
        }
      }
      FreeHwndList(v19);
      return v3;
    }
    return 0;
  }
  return v3;
}
