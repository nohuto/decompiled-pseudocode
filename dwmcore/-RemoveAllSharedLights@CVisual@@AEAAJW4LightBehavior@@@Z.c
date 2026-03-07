__int64 __fastcall CVisual::RemoveAllSharedLights(unsigned __int64 *a1, int a2)
{
  unsigned int v2; // r14d
  char v3; // r15
  char *v5; // rbx
  char *v6; // rbp
  __int64 v7; // rdi
  char v8; // di
  char *v9; // rbx
  char *v10; // rdi
  __int64 v11; // rbp
  _QWORD *i; // rax
  unsigned __int64 Count; // rax
  CPtrArrayBase *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    v9 = (char *)a1[38];
    v10 = v9 + 16;
    while ( v9 != (char *)a1[39] )
    {
      if ( *(v10 - 8) )
      {
        v11 = *(_QWORD *)v9;
        (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)v9 + 264LL))(*(_QWORD *)v9, a1);
        for ( i = (_QWORD *)a1[35]; ; i += 2 )
        {
          if ( i == (_QWORD *)a1[36] )
            goto LABEL_18;
          if ( *i == v11 )
            break;
        }
        Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v11 + 24));
        v15 = CPtrArrayBase::InsertAt(v14, (unsigned __int64)a1, Count);
        v2 = v15;
        if ( v15 >= 0 )
        {
          v3 = 1;
LABEL_18:
          memmove_0(v9, v10, a1[39] - (_QWORD)v10);
          a1[39] -= 16LL;
          continue;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x536u, 0LL);
        break;
      }
      v9 += 16;
      v10 += 16;
    }
  }
  else
  {
    v5 = (char *)a1[35];
    v6 = v5 + 16;
    while ( v5 != (char *)a1[36] )
    {
      if ( *(v6 - 8) )
      {
        v7 = *(_QWORD *)v5;
        (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)v5 + 264LL))(*(_QWORD *)v5, a1);
        v8 = CPtrArrayBase::Remove((CPtrArrayBase *)(v7 + 24), a1);
        memmove_0(v5, v6, a1[36] - (_QWORD)v6);
        a1[36] -= 16LL;
        if ( !v3 )
          v3 = v8;
      }
      else
      {
        v5 += 16;
        v6 += 16;
      }
    }
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(unsigned __int64 *, __int64))(*a1 + 72))(a1, 5LL);
    (*(void (__fastcall **)(unsigned __int64 *, __int64))(*a1 + 72))(a1, 1LL);
  }
  return v2;
}
