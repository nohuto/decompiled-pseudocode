void __fastcall MiMarkHugeRangeIoPfnDeleted(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 v4; // al
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int8 v6; // r14
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // rbp
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rax
  _QWORD **v11; // rax
  ULONG_PTR v12; // rcx
  _QWORD *v13; // rcx

  v4 = MiLockIoPfnTree(1);
  BugCheckParameter4 = *((_QWORD *)&xmmword_140C69200 + 1);
  v6 = v4;
  if ( *((_QWORD *)&xmmword_140C69200 + 1) )
  {
    v7 = a2 + BugCheckParameter2;
    v8 = a2 + BugCheckParameter2 - 1;
    do
    {
      v9 = *(_QWORD *)(BugCheckParameter4 + 24);
      if ( v8 >= v9 )
      {
        if ( BugCheckParameter2 < v9 + 512 )
          break;
        BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 8);
      }
      else
      {
        BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
      }
    }
    while ( BugCheckParameter4 );
LABEL_28:
    while ( BugCheckParameter4 && v8 >= *(_QWORD *)(BugCheckParameter4 + 24) )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter4 + 172));
      if ( *(_DWORD *)(BugCheckParameter4 + 32) )
        KeBugCheckEx(0x1Au, 0x6194CuLL, BugCheckParameter2, v8, BugCheckParameter4);
      *(_BYTE *)(BugCheckParameter4 + 40) = 0;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter4 + 172));
      BugCheckParameter2 = *(_QWORD *)(BugCheckParameter4 + 24) + 512LL;
      if ( v7 > BugCheckParameter2 && ((unsigned int)MiIoPfnTreeLockContended(0) || KeShouldYieldProcessor()) )
      {
        MiUnlockIoPfnTree(v6, 1);
        MiLockIoPfnTree(1);
        BugCheckParameter4 = *((_QWORD *)&xmmword_140C69200 + 1);
        while ( BugCheckParameter4 )
        {
          v10 = *(_QWORD *)(BugCheckParameter4 + 24);
          if ( v8 >= v10 )
          {
            if ( BugCheckParameter2 < v10 + 512 )
              goto LABEL_28;
            BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 8);
          }
          else
          {
            BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
          }
        }
      }
      else
      {
        v11 = *(_QWORD ***)(BugCheckParameter4 + 8);
        v12 = BugCheckParameter4;
        if ( v11 )
        {
          v13 = *v11;
          for ( BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 8); v13; v13 = (_QWORD *)*v13 )
            BugCheckParameter4 = (ULONG_PTR)v13;
        }
        else
        {
          while ( 1 )
          {
            BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !BugCheckParameter4 || *(_QWORD *)BugCheckParameter4 == v12 )
              break;
            v12 = BugCheckParameter4;
          }
        }
      }
    }
  }
  MiUnlockIoPfnTree(v6, 1);
}
