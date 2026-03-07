__int64 __fastcall CVisual::RemoveLight(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  bool v4; // r14
  _QWORD *j; // rcx
  _QWORD *i; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    for ( i = (_QWORD *)a1[38]; i != (_QWORD *)a1[39]; i += 2 )
    {
      if ( *i == a2 )
      {
        v10 = (_QWORD *)a1[35];
        v11 = (_QWORD *)a1[36];
        while ( v10 != v11 )
        {
          if ( *v10 == a2 )
          {
            Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 24));
            v14 = CPtrArrayBase::InsertAt(v13, (unsigned __int64)a1, Count);
            v3 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4A9u, 0LL);
              return v3;
            }
            v4 = 1;
            break;
          }
          v10 += 2;
        }
        memmove_0(i, i + 2, a1[39] - (_QWORD)(i + 2));
        a1[39] -= 16LL;
LABEL_6:
        if ( v4 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 5LL);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 1LL);
        }
        return v3;
      }
    }
  }
  else
  {
    for ( j = (_QWORD *)a1[35]; j != (_QWORD *)a1[36]; j += 2 )
    {
      if ( *j == a2 )
      {
        memmove_0(j, j + 2, a1[36] - (_QWORD)(j + 2));
        a1[36] -= 16LL;
        v4 = CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
        goto LABEL_6;
      }
    }
  }
  return v3;
}
