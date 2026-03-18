/*
 * XREFs of ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1C0106DEC
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C0106D30 (NtUserAssociateInputContext.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z @ 0x1C0106EF0 (-AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z.c)
 */

__int64 __fastcall AssociateInputContextEx(struct tagWND *a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // r8
  int v6; // r12d
  __int64 v7; // rdi
  struct tagWND *v8; // rbp
  unsigned int v9; // esi
  struct tagWND *v10; // r13
  __int64 v11; // rcx
  unsigned int v12; // r10d
  ShellWindowManagement *v14; // rcx
  struct tagBWL *v15; // rax
  struct tagBWL *v16; // r15
  _QWORD *v17; // r14
  __int64 v18; // rax
  struct tagWND *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct tagWND *v22; // r9

  v4 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  v6 = a3 & 0x20;
  v7 = a2;
  v8 = a1;
  v9 = 0;
  v10 = *(struct tagWND **)(v5[54] + 112LL);
  if ( (a3 & 0x10) != 0 )
  {
    v7 = v5[99];
  }
  else if ( a2 && *(_QWORD **)(a2 + 16) != v5 )
  {
    goto LABEL_35;
  }
  if ( v5[53] != *(_QWORD *)(gptiCurrent + 424LL) || v7 && *(_QWORD *)(v7 + 24) != *((_QWORD *)a1 + 3) )
  {
LABEL_35:
    UserSetLastError(5LL, a2);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v14 = (ShellWindowManagement *)*((_QWORD *)a1 + 14);
    if ( v14 )
    {
      v15 = BuildHwndList(v14, (const struct tagWND *)3, (__int64)v5, 1);
      v16 = v15;
      if ( v15 )
      {
        v17 = (_QWORD *)((char *)v15 + 32);
        v18 = *((_QWORD *)v15 + 4);
        if ( v18 != 1 )
        {
          do
          {
            v19 = (struct tagWND *)HMValidateHandleNoSecure(v18, 1);
            if ( v19 )
            {
              v20 = 0LL;
              if ( v7 )
                v20 = *(_QWORD *)v7;
              v21 = *(_QWORD *)(*((_QWORD *)v19 + 5) + 208LL);
              if ( v21 != v20 && (v21 || !v6) )
              {
                AssociateInputContext(v19, (struct tagIMC *)v7);
                if ( v22 == v10 )
                  v9 = 1;
              }
            }
            v18 = *++v17;
          }
          while ( *v17 != 1LL );
          v8 = a1;
        }
        FreeHwndList(v16);
      }
    }
  }
  v11 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 208LL);
  if ( v11 || !v6 )
  {
    if ( v7 )
      v4 = *(_QWORD *)v7;
    if ( v11 != v4 )
    {
      AssociateInputContext(v8, (struct tagIMC *)v7);
      if ( v8 == v10 )
        return v12;
    }
  }
  return v9;
}
