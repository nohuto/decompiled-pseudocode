char __fastcall CmpAppendSection(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rbx
  const char *v7; // rcx
  __int64 Pool2; // rax
  _QWORD *v9; // rax
  char result; // al

  if ( a1 && a2 )
  {
    v6 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      do
      {
        v7 = (const char *)v6[1];
        if ( v7 && !stricmp(v7, (const char *)a2) )
          break;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
      if ( v6 )
      {
        v9 = (_QWORD *)v6[2];
        if ( v9 )
        {
          while ( *v9 )
            v9 = (_QWORD *)*v9;
        }
        goto LABEL_11;
      }
    }
    Pool2 = ExAllocatePool2(256LL, 0x20uLL, 0x69704D43u);
    v6 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 8) = a2;
      *(_BYTE *)(Pool2 + 24) = a3;
      *(_QWORD *)Pool2 = *(_QWORD *)a1;
      *(_QWORD *)a1 = Pool2;
      if ( !strnicmp((const char *)a2, "Strings", 7uLL) && (*(_BYTE *)(a2 + 7) == 0) > *(int *)(a1 + 32) )
        *(_QWORD *)(a1 + 40) = v6;
      v9 = 0LL;
LABEL_11:
      *(_QWORD *)(a1 + 16) = v9;
      result = 1;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 8) = v6;
      return result;
    }
  }
  return 0;
}
