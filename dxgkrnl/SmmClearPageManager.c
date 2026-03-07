void __fastcall SmmClearPageManager(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // r8
  KIRQL v4; // bp
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8));
  v3 = *(_QWORD **)a1;
  v4 = v2;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v3 )
        {
          v5 = v3;
          v3 = (_QWORD *)*v3;
          *v5 = 0LL;
        }
        v6 = (_QWORD *)v3[1];
        if ( !v6 )
          break;
        v3[1] = 0LL;
        v3 = v6;
      }
      v7 = v3[2];
      SmmIoMmuDeleteTreeNode(v3);
      v8 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 )
        break;
      v3 = (_QWORD *)v8;
    }
  }
  *(_QWORD *)a1 = 0LL;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8), v4);
}
