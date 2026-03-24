/*
 * XREFs of AssociateInputContextEx @ 0x1C01188E0
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C0118820 (NtUserAssociateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     AssociateInputContext @ 0x1C01189E4 (AssociateInputContext.c)
 */

__int64 __fastcall AssociateInputContextEx(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // r8
  int v6; // r12d
  __int64 *v7; // rdi
  _QWORD *v8; // rbp
  unsigned int v9; // esi
  _QWORD *v10; // r13
  __int64 v11; // rcx
  unsigned int v12; // r10d
  struct tagWND *v14; // rcx
  struct tagBWL *v15; // rax
  struct tagBWL *v16; // r15
  unsigned __int64 *v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // r9

  v4 = 0LL;
  v5 = (_QWORD *)a1[2];
  v6 = a3 & 0x20;
  v7 = (__int64 *)a2;
  v8 = a1;
  v9 = 0;
  v10 = *(_QWORD **)(v5[54] + 112LL);
  if ( (a3 & 0x10) != 0 )
  {
    v7 = (__int64 *)v5[99];
  }
  else if ( a2 && *(_QWORD **)(a2 + 16) != v5 )
  {
    goto LABEL_35;
  }
  if ( v5[53] != *(_QWORD *)(gptiCurrent + 424LL) || v7 && v7[3] != a1[3] )
  {
LABEL_35:
    UserSetLastError(5LL, a2, (__int64)v5);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v14 = (struct tagWND *)a1[14];
    if ( v14 )
    {
      v15 = BuildHwndList(v14, 3, (__int64)v5);
      v16 = v15;
      if ( v15 )
      {
        v17 = (unsigned __int64 *)((char *)v15 + 32);
        v18 = *((_QWORD *)v15 + 4);
        if ( v18 != 1 )
        {
          do
          {
            v19 = HMValidateHandleNoSecure(v18, 1);
            if ( v19 )
            {
              v20 = 0LL;
              if ( v7 )
                v20 = *v7;
              v21 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 208LL);
              if ( v21 != v20 && (v21 || !v6) )
              {
                AssociateInputContext(v19, v7);
                if ( v22 == v10 )
                  v9 = 1;
              }
            }
            v18 = *++v17;
          }
          while ( *v17 != 1 );
          v8 = a1;
        }
        FreeHwndList(v16);
      }
    }
  }
  v11 = *(_QWORD *)(v8[5] + 208LL);
  if ( v11 || !v6 )
  {
    if ( v7 )
      v4 = *v7;
    if ( v11 != v4 )
    {
      AssociateInputContext(v8, v7);
      if ( v8 == v10 )
        return v12;
    }
  }
  return v9;
}
