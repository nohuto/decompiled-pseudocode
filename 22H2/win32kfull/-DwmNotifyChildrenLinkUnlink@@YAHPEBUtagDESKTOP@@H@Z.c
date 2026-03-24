/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00E9948
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00E9904 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C0035C74 (DwmAsyncOwnerChange.c)
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     DwmAsyncChildLink @ 0x1C00E9C00 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C00E9CC4 (DwmAsyncChildUnlink.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // ebp
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // r13
  unsigned __int64 *i; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rsi
  int v14; // ebx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  void *v19; // rax
  __int64 v20; // r9
  int v21; // ebx
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rdi
  _QWORD *v26; // rbx
  void *v27; // rax
  __int64 v28; // r9
  struct tagWND *v29; // rcx
  struct tagBWL *v30; // rax
  struct tagBWL *v31; // r15
  unsigned __int64 *j; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rsi
  int v36; // ebx
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  void *v41; // rax
  __int64 v42; // r9
  void *v44; // rax
  void *v45; // rax

  v3 = a2;
  v4 = 1;
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL), 3, 0LL);
  v6 = v5;
  if ( !v5 )
    return 0;
  for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
  {
    v13 = (__int64 *)HMValidateHandleNoSecure(*i, 1);
    if ( v13 )
    {
      if ( v3 )
      {
        v14 = *(_DWORD *)(v13[5] + 236);
        v15 = (void *)ReferenceDwmApiPort(v12, v11);
        DwmAsyncChildLink(v15, v14);
        v18 = (_QWORD *)v13[15];
        if ( v18 )
          v18 = (_QWORD *)*v18;
        v19 = (void *)ReferenceDwmApiPort(v17, v16);
        DwmAsyncOwnerChange(v19, *v13, (__int64)v18, v20);
        v3 = a2;
      }
      else
      {
        v45 = (void *)ReferenceDwmApiPort(v12, v11);
        DwmAsyncChildUnlink(v45);
      }
    }
  }
  FreeHwndList(v6);
  if ( v3 )
  {
    v21 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v22 = (void *)ReferenceDwmApiPort(v9, v8);
    DwmAsyncChildLink(v22, v21);
    v25 = (__int64 *)*((_QWORD *)a1 + 13);
    v26 = (_QWORD *)v25[15];
    if ( v26 )
      v26 = (_QWORD *)*v26;
    v27 = (void *)ReferenceDwmApiPort(v24, v23);
    DwmAsyncOwnerChange(v27, *v25, (__int64)v26, v28);
  }
  else
  {
    v10 = (void *)ReferenceDwmApiPort(v9, v8);
    DwmAsyncChildUnlink(v10);
  }
  v29 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v29 )
  {
    v30 = BuildHwndList(v29, 3, 0LL);
    v31 = v30;
    if ( v30 )
    {
      for ( j = (unsigned __int64 *)((char *)v30 + 32); *j != 1; ++j )
      {
        v35 = (__int64 *)HMValidateHandleNoSecure(*j, 1);
        if ( v35 )
        {
          if ( v3 )
          {
            v36 = *(_DWORD *)(v35[5] + 236);
            v37 = (void *)ReferenceDwmApiPort(v34, v33);
            DwmAsyncChildLink(v37, v36);
            v40 = (_QWORD *)v35[15];
            if ( v40 )
              v40 = (_QWORD *)*v40;
            v41 = (void *)ReferenceDwmApiPort(v39, v38);
            DwmAsyncOwnerChange(v41, *v35, (__int64)v40, v42);
            v3 = a2;
          }
          else
          {
            v44 = (void *)ReferenceDwmApiPort(v34, v33);
            DwmAsyncChildUnlink(v44);
          }
        }
      }
      FreeHwndList(v31);
      return v4;
    }
    return 0;
  }
  return v4;
}
