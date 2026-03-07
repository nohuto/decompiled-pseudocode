struct tagSMWP *__fastcall ZOrderByOwner2(struct tagSMWP *a1, int a2)
{
  __int64 v2; // r15
  struct tagSMWP *v3; // rbp
  __int64 v5; // rsi
  struct tagWND *v7; // r14
  __int64 v8; // rbx
  struct tagWND *v9; // r8
  struct tagWND *v10; // rcx
  struct tagWND *v11; // rax
  bool i; // zf
  struct tagWND *RealOwner; // rax
  struct tagWND *v14; // r10
  struct tagWND *v15; // r11
  struct tagWND *v16; // rdi
  __int64 v17; // r8
  struct tagWND *v18; // r9
  struct tagSMWP *v19; // rax
  struct tagWND *j; // r8
  struct tagWND **v21; // r8
  struct tagWND *v22; // r8
  int v23; // eax
  struct tagWND *v24; // r9
  __int64 v25; // r8
  struct tagWND *v26; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v5 = 168LL * a2;
  if ( (*(_DWORD *)(v5 + v2 + 32) & 0x204) == 0 )
  {
    v7 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v5 + v2));
    PWInsertAfter(*(_QWORD *)(v5 + v2 + 8));
    v8 = 0LL;
    v9 = *(struct tagWND **)(*((_QWORD *)v7 + 13) + 112LL);
    if ( v9 )
    {
      do
      {
        v10 = (struct tagWND *)*((_QWORD *)v9 + 15);
        v11 = v9;
        for ( i = v9 == v10; !i; i = v10 == *((struct tagWND **)v9 + 13) )
        {
          v11 = v10;
          if ( !v10 )
            break;
          v10 = (struct tagWND *)*((_QWORD *)v10 + 13);
        }
        if ( v7 == v11 )
          break;
        v9 = (struct tagWND *)*((_QWORD *)v9 + 11);
      }
      while ( v9 );
    }
    else
    {
      v9 = 0LL;
    }
    if ( *((_QWORD *)v7 + 15) || v9 )
    {
      RealOwner = v7;
      do
        RealOwner = GetRealOwner(RealOwner);
      while ( RealOwner );
      v16 = v15;
      if ( !v15 )
        goto LABEL_17;
      if ( v15 == (struct tagWND *)1 )
      {
        v22 = *(struct tagWND **)(*((_QWORD *)v7 + 13) + 112LL);
        if ( !v22 )
          goto LABEL_35;
        do
        {
          if ( (*(_BYTE *)(*((_QWORD *)v22 + 5) + 20LL) & 0x20) != 0 )
            break;
          v23 = IsOwnee(v22, v14);
          v22 = *(struct tagWND **)(v25 + 88);
          if ( v23 )
            v24 = v16;
          v16 = v24;
        }
        while ( v22 );
        if ( v16 == (struct tagWND *)1 )
LABEL_35:
          *(_DWORD *)(v5 + v2 + 32) |= 4u;
        goto LABEL_17;
      }
      if ( !(unsigned int)IsOwnee(v15, v14) )
      {
LABEL_17:
        if ( (*(_DWORD *)(v5 + v2 + 32) & 4) == 0 )
        {
          --*((_DWORD *)v3 + 7);
          v19 = AddSelfAndOwnees(
                  v3,
                  v14,
                  v7,
                  v15,
                  a2,
                  *(_DWORD *)(v5 + v2 + 32) & 0x40000 | (*(_DWORD *)(v5 + v2 + 32) >> 7) & 0x400u);
          v3 = v19;
          if ( v19 )
          {
            if ( v16 )
              v8 = *(_QWORD *)v16;
            *(_QWORD *)(*((_QWORD *)v19 + 5) + v5 + 8) = v8;
          }
        }
        return v3;
      }
      if ( v17 )
      {
LABEL_23:
        v16 = 0LL;
        for ( j = *(struct tagWND **)(*((_QWORD *)v7 + 13) + 112LL); j && !(unsigned int)IsOwnee(j, v14); j = v21[11] )
          v16 = (struct tagWND *)v21;
        goto LABEL_17;
      }
      v26 = v15;
      while ( v26 != v18 )
      {
        v26 = (struct tagWND *)*((_QWORD *)v26 + 11);
        if ( !v26 )
          goto LABEL_23;
      }
    }
  }
  return v3;
}
