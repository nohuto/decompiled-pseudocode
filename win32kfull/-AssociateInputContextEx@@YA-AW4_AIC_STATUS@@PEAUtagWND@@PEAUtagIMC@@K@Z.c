/*
 * XREFs of ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1C01B874C
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C01CDCA0 (NtUserAssociateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z @ 0x1C01B8724 (-AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z.c)
 */

__int64 __fastcall AssociateInputContextEx(struct tagWND *a1, struct tagIMC *a2, char a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // r8
  int v6; // r12d
  struct tagIMC *v7; // rdi
  struct tagWND *v8; // rbp
  unsigned int v9; // esi
  struct tagWND *v10; // r13
  ShellWindowManagement *v11; // rcx
  struct tagBWL *v12; // rax
  struct tagBWL *v13; // r15
  _QWORD *v14; // r14
  __int64 v15; // rax
  struct tagWND *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct tagWND *v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // r10d

  v4 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  v6 = a3 & 0x20;
  v7 = a2;
  v8 = a1;
  v9 = 0;
  v10 = *(struct tagWND **)(v5[54] + 120LL);
  if ( (a3 & 0x10) != 0 )
  {
    v7 = (struct tagIMC *)v5[99];
  }
  else if ( a2 && *((_QWORD **)a2 + 2) != v5 )
  {
    goto LABEL_31;
  }
  if ( v5[53] != *(_QWORD *)(gptiCurrent + 424LL) || v7 && *((_QWORD *)v7 + 3) != *((_QWORD *)a1 + 3) )
  {
LABEL_31:
    UserSetLastError(5);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v11 = (ShellWindowManagement *)*((_QWORD *)a1 + 14);
    if ( v11 )
    {
      v12 = BuildHwndList(v11, 3, (__int64)v5, 1);
      v13 = v12;
      if ( v12 )
      {
        v14 = (_QWORD *)((char *)v12 + 32);
        v15 = *((_QWORD *)v12 + 4);
        if ( v15 != 1 )
        {
          do
          {
            v16 = (struct tagWND *)HMValidateHandleNoSecure(v15, 1);
            if ( v16 )
            {
              v17 = 0LL;
              if ( v7 )
                v17 = *(_QWORD *)v7;
              v18 = *(_QWORD *)(*((_QWORD *)v16 + 5) + 208LL);
              if ( v18 != v17 && (v18 || !v6) )
              {
                AssociateInputContext(v16, v7);
                if ( v19 == v10 )
                  v9 = 1;
              }
            }
            v15 = *++v14;
          }
          while ( *v14 != 1LL );
          v8 = a1;
        }
        FreeHwndList(v13);
      }
    }
  }
  v20 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 208LL);
  if ( v20 || !v6 )
  {
    if ( v7 )
      v4 = *(_QWORD *)v7;
    if ( v20 != v4 )
    {
      AssociateInputContext(v8, v7);
      if ( v8 == v10 )
        return v21;
    }
  }
  return v9;
}
